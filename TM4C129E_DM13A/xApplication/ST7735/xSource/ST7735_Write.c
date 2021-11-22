/**
 *
 * @file ST7735_Write.c
 * @copyright
 * @verbatim InDeviceMex 2020 @endverbatim
 *
 * @par Responsibility
 * @verbatim InDeviceMex Developers @endverbatim
 *
 * @version
 * @verbatim 1.0 @endverbatim
 *
 * @date
 * @verbatim 18 feb. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 18 feb. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xApplication/ST7735/xHeader/ST7735_Write.h>
#include <xApplication/ST7735/xHeader/ST7735_Init.h>

#include <xApplication/ST7735/xHeader/ST7735_ChipSelect.h>
#include <xApplication/ST7735/xHeader/ST7735_DataCommand.h>
#include <xApplication/ST7735/xHeader/ST7735_Reset.h>

#include <xApplication/ST7735/xHeader/ST7735_Enum.h>
#include <xApplication/ST7735/xHeader/ST7735_Defines.h>

#include <xUtils/Colors/Colors.h>
#include <xUtils/Font/Font.h>

#include <xDriver_MCU/GPIO/GPIO.h>
#include <xDriver_MCU/SSI/SSI.h>
#include <xDriver_MCU/SSI/Peripheral/SSI_Peripheral.h>
#include <xDriver_MCU/Common/xHeader/MCU_Interrupt.h>
#include <xDriver_MCU/DMA/DMA.h>

void ST7735__vDMATxEndInterupt(void);
void ST7735__vDMATxInterupt(void);
static void ST7735__vSetTransferSizeLeft(uint32_t u32SizeArg);
static void ST7735__vSetTransferStruct(DMACHCTL_t* pstTransfer);
static void ST7735__vSetTransferAddress(uint32_t u32Address);
uint32_t ST7735__u32GetTransferAddress(void);
uint32_t ST7735__u32GetTransferSizeLeft(void);
DMACHCTL_t* ST7735__pstGetTransferStruct(void);

volatile uint32_t ST7735_vDMATxInteruptStatus = 0UL;
volatile uint32_t ST7735_u32DMATransferSizeLeft = 0UL;
volatile uint32_t ST7735_u32DMATransferAddress = 0UL;
volatile DMACHCTL_t* ST7735_pstDMATransferStruct = (DMACHCTL_t*) 0UL;

DMACHCTL_t enDMAChControlPrim = {
    DMA_enCH_MODE_BASIC,
    DMA_enCH_BURST_ON,
    0UL,
    DMA_enCH_BURST_SIZE_8,
    0,
    0,
    0,
    0,
    DMA_enCH_SRC_SIZE_HALF_WORD,
    DMA_enCH_SRC_INC_NO,
    DMA_enCH_DST_SIZE_HALF_WORD,
    DMA_enCH_DST_INC_NO,
};

DMACHCTL_t enDMAChControlBuffer = {
    DMA_enCH_MODE_BASIC,
    DMA_enCH_BURST_ON,
    0UL,
    DMA_enCH_BURST_SIZE_8,
    0,
    0,
    0,
    0,
    DMA_enCH_SRC_SIZE_HALF_WORD,
    DMA_enCH_SRC_INC_HALF_WORD,
    DMA_enCH_DST_SIZE_HALF_WORD,
    DMA_enCH_DST_INC_NO,
};

void ST7735__vInitWriteDMAConfig(void)
{
    DMA_CONFIG_Typedef enDMAChConfig= {
        DMA_enCH_REQTYPE_BOTH,
        DMA_enCH_PERIPHERAL_ENA,
        DMA_enCH_CTL_PRIMARY ,
        DMA_enCH_PRIO_HIGH ,
        DMA_enCH_ENCODER_2
    };

    SSI__vRegisterIRQSourceHandler(&ST7735__vDMATxInterupt, ST7735_SSI, SSI_enINTERRUPT_TRANSMIT_DMA);
    DMA_CH__vSetPrimaryDestEndAddress(DMA_enCH_MODULE_13, (uint32_t) (SSI2_BASE + SSI_DR_OFFSET));
    DMA_CH__vSetPrimarySourceEndAddress(DMA_enCH_MODULE_13, (uint32_t) 0UL);

    DMA_CH__vSetPriority(DMA_enCH_MODULE_13, DMA_enCH_PRIO_HIGH);
    DMA_CH__vSetConfigStruct(DMA_enCH_MODULE_13, enDMAChConfig);

}

static void ST7735__vSetTransferSizeLeft(uint32_t u32SizeArg)
{
    ST7735_u32DMATransferSizeLeft = u32SizeArg;
}

uint32_t ST7735__u32GetTransferSizeLeft(void)
{
    uint32_t u32SizeArg = 0UL;
    u32SizeArg = ST7735_u32DMATransferSizeLeft;
    return (u32SizeArg);
}

static void ST7735__vSetTransferStruct(DMACHCTL_t* pstTransfer)
{
    ST7735_pstDMATransferStruct = pstTransfer;
}

DMACHCTL_t* ST7735__pstGetTransferStruct(void)
{
    return (ST7735_pstDMATransferStruct);
}

static void ST7735__vSetTransferAddress(uint32_t u32Address)
{
    ST7735_u32DMATransferAddress = u32Address;
}

uint32_t ST7735__u32GetTransferAddress(void)
{
    return (ST7735_u32DMATransferAddress);
}

uint32_t ST7735__u32GetDMATxInterupt(void)
{
    return (ST7735_vDMATxInteruptStatus);
}

void ST7735__vSetDMATxInterupt(uint32_t u32StateArg)
{
    ST7735_vDMATxInteruptStatus = u32StateArg;
}

uint32_t ST7735__u32WriteCommand(uint16_t u16DataArg)
{
    uint32_t u32ReceiveReg = 0xFFFFFFFFUL;
    ST7735__vEnableChipSelect();
    ST7735__vSetCommand();

    u32ReceiveReg = SSI__u32SetData(ST7735_SSI, (uint32_t) u16DataArg);

    ST7735__vDisableChipSelect();
    return (u32ReceiveReg);
}

uint32_t ST7735__u32WriteData(uint32_t u32DataArg)
{
    uint32_t u32ReceiveReg = 0xFFFFFFFFUL;
    ST7735__vEnableChipSelect();
    ST7735__vSetData();

    u32ReceiveReg = SSI__u32SetData(ST7735_SSI, u32DataArg);

    ST7735__vDisableChipSelect();
    return (u32ReceiveReg);
}



uint32_t ST7735__u32WriteFifo(uint16_t u16DataArg, uint32_t u32BufferCant)
{
    uint32_t u32ReceiveReg = 0xFFFFFFFFUL;
    ST7735__vEnableChipSelect();
    ST7735__vSetData();

    u32ReceiveReg = SSI__u32SetFifoDataConst(ST7735_SSI,  (uint32_t)  u16DataArg, u32BufferCant);

    ST7735__vDisableChipSelect();
    return (u32ReceiveReg);
}


uint32_t ST7735__u32WriteDMA(uint32_t u32DataArg, uint32_t u32BufferCant)
{
    uint32_t u32StatusReg = 0UL;
    uint32_t u32ReceiveReg = 0xFFFFFFFFUL;
    static uint32_t u32DataReg = 0UL;
    u32DataReg = u32DataArg;

    if(0UL != u32BufferCant)
    {
        ST7735__vEnableChipSelect();
        ST7735__vSetData();
        ST7735__vSetDMATxInterupt(1UL);
        enDMAChControlPrim.XFERMODE = DMA_enCH_MODE_BASIC;
        if(u32BufferCant > 1024UL)
        {
            enDMAChControlPrim.XFERSIZE = 1024UL - 1UL;
            u32BufferCant -= 1024UL;
        }
        else
        {
            enDMAChControlPrim.XFERSIZE = u32BufferCant - 1UL;
            u32BufferCant = 0UL;
        }
        ST7735__vSetTransferSizeLeft(u32BufferCant);

        DMA_CH__vSetPrimarySourceEndAddress(DMA_enCH_MODULE_13, (uint32_t) &u32DataReg);
        DMA_CH__vSetPrimaryControlWorld(DMA_enCH_MODULE_13, enDMAChControlPrim);
        ST7735__vSetTransferStruct(&enDMAChControlPrim);
        DMA_CH__vSetEnable(DMA_enCH_MODULE_13, DMA_enCH_ENA_ENA);
        SSI__vSetDMATx(ST7735_SSI, SSI_enDMA_ENA);

        do
        {
            u32StatusReg = ST7735__u32GetDMATxInterupt();
        }while(0UL != u32StatusReg);

        do
        {
            u32StatusReg = (uint32_t) SSI__enGetBusyState(ST7735_SSI);
        }while(0UL != u32StatusReg);

        ST7735__vDisableChipSelect();
    }
    return (u32ReceiveReg);
}

uint32_t ST7735__u32WriteBuffer16bDMA(uint16_t* pu16DataArg, uint32_t u32BufferCant)
{
    uint32_t u32StatusReg = 0UL;
    uint32_t u32ReceiveReg = 0xFFFFFFFFUL;
    uint16_t* pu32DataRegLast = pu16DataArg;

    if(0UL != u32BufferCant)
    {
        ST7735__vEnableChipSelect();
        ST7735__vSetData();
        ST7735__vSetDMATxInterupt(1UL);
        enDMAChControlBuffer.XFERMODE = DMA_enCH_MODE_BASIC;
        if(u32BufferCant > 1024UL)
        {
            enDMAChControlBuffer.XFERSIZE = 1024UL - 1UL;
            pu32DataRegLast += 1024UL - 1UL;
            u32BufferCant -= 1024UL;
        }
        else
        {
            enDMAChControlBuffer.XFERSIZE = u32BufferCant - 1UL;
            pu32DataRegLast += u32BufferCant;
            pu32DataRegLast -= 1UL;
            u32BufferCant = 0UL;
        }
        ST7735__vSetTransferSizeLeft(u32BufferCant);

        DMA_CH__vSetPrimarySourceEndAddress(DMA_enCH_MODULE_13, (uint32_t) pu32DataRegLast);
        DMA_CH__vSetPrimaryControlWorld(DMA_enCH_MODULE_13, enDMAChControlBuffer);
        ST7735__vSetTransferStruct(&enDMAChControlBuffer);
        DMA_CH__vSetEnable(DMA_enCH_MODULE_13, DMA_enCH_ENA_ENA);
        SSI__vSetDMATx(ST7735_SSI, SSI_enDMA_ENA);

        do
        {
            u32StatusReg = ST7735__u32GetDMATxInterupt();
        }while(0UL != u32StatusReg);

        do
        {
            u32StatusReg = (uint32_t) SSI__enGetBusyState(ST7735_SSI);
        }while(0UL != u32StatusReg);

        ST7735__vDisableChipSelect();
    }
    return (u32ReceiveReg);
}

void ST7735__vDMATxInterupt(void)
{
    uint32_t u32Address = 0UL;
    uint32_t u32MultiWord = 0UL;
    uint32_t u32Multi = 0UL;
    DMACHCTL_t* pstDMAChannel = (DMACHCTL_t*) 0UL;
    if(0UL != ST7735_u32DMATransferSizeLeft)
    {
        pstDMAChannel = ST7735__pstGetTransferStruct();
        u32Address = DMACH->DMACh[13UL].SRCENDP;
        u32Multi = pstDMAChannel->SRCINC;
        u32Multi += 1UL;
        u32Multi &= 0x3UL;
        if((uint32_t) 3 == u32Multi)
        {
            u32Multi = 4UL;
        }
        if(ST7735_u32DMATransferSizeLeft > 1024UL)
        {
            pstDMAChannel->XFERSIZE = 1024UL - 1UL;
            u32MultiWord = (1024UL);
            u32MultiWord *= u32Multi;
            u32Address += u32MultiWord;
            ST7735_u32DMATransferSizeLeft -= 1024UL;
        }
        else
        {
            pstDMAChannel->XFERSIZE = ST7735_u32DMATransferSizeLeft - 1UL;
            u32MultiWord = (ST7735_u32DMATransferSizeLeft);
            u32MultiWord *= u32Multi;
            u32Address += u32MultiWord;
            ST7735_u32DMATransferSizeLeft = 0UL;
        }
        DMACH->DMACh[13UL].SRCENDP = (uint32_t) u32Address;
        DMACH->DMACh[13UL].CHCTL = *((volatile uint32_t*) pstDMAChannel);
        DMA->ENASET = (uint32_t)  DMA_enCH_ENA_ENA << 13UL;
        SSI2_DMACTL_R |= SSI_DMACTL_R_TXDMAE_MASK;
    }
    else
    {
        ST7735_vDMATxInteruptStatus = 0UL;
    }
}
