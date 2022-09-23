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
static void ST7735__vSetTransferStruct(DMA_CH_CTL_t* pstTransfer);
uint32_t ST7735__u32GetTransferAddress(void);
uint32_t ST7735__u32GetTransferSizeLeft(void);
DMA_CH_CTL_t* ST7735__pstGetTransferStruct(void);

volatile uint32_t ST7735_vDMATxInteruptStatus = 0UL;
volatile uint32_t ST7735_u32DMATransferSizeLeft = 0UL;
volatile uint32_t ST7735_u32DMATransferAddress = 0UL;
volatile DMA_CH_CTL_t* ST7735_pstDMATransferStruct = (DMA_CH_CTL_t*) 0UL;

DMA_CH_CTL_t stDMAChControlPrim = {
    DMA_enCH_MODE_BASIC,
    DMA_enSTATE_DIS,
    0UL,
    DMA_enCH_ARBITRATION_SIZE_8,
    DMA_enCH_ACCESS_NON_PRIVILEGED,
    0UL,
    DMA_enCH_ACCESS_NON_PRIVILEGED,
    0UL,
    DMA_enCH_DATA_SIZE_HALF_WORD,
    DMA_enCH_INCREMENT_NO,
    DMA_enCH_DATA_SIZE_HALF_WORD,
    DMA_enCH_INCREMENT_NO,
};

DMA_CH_CTL_t stDMAChControlBuffer = {
    DMA_enCH_MODE_BASIC,
    DMA_enSTATE_DIS,
    0UL,
    DMA_enCH_ARBITRATION_SIZE_8,
    DMA_enCH_ACCESS_NON_PRIVILEGED,
    0UL,
    DMA_enCH_ACCESS_NON_PRIVILEGED,
    0UL,
    DMA_enCH_DATA_SIZE_HALF_WORD,
    DMA_enCH_INCREMENT_HALF_WORD,
    DMA_enCH_DATA_SIZE_HALF_WORD,
    DMA_enCH_INCREMENT_NO,
};

void ST7735__vInitWriteDMAConfig(void)
{
    DMA_CONFIG_t stDMAChConfig= {
        DMA_enSTATE_DIS,
        DMA_enCH_REQTYPE_BOTH,
        DMA_enCH_PERIPHERAL_ENA,
        DMA_enCH_CONTROL_PRIMARY ,
        DMA_enCH_PRIORITY_HIGH ,
        DMA_enCH_ENCODER_2
    };

    SSI__vRegisterIRQSourceHandler(&ST7735__vDMATxInterupt, ST7735_SSI, SSI_enINTERRUPT_TRANSMIT_DMA);
    DMA_CH_Primary__enSetDestinationEndAddressByNumber(DMA_enMODULE_0, DMA_enCH_13, (uint32_t) (SSI2_BASE + SSI_DR_OFFSET));
    DMA_CH_Primary__enSetSourceEndAddressByNumber(DMA_enMODULE_0, DMA_enCH_13, (uint32_t) 0UL);

    DMA_CH__enSetPriorityByNumber(DMA_enMODULE_0, DMA_enCH_13, DMA_enCH_PRIORITY_HIGH);
    DMA_CH__enSetConfigParameters(DMA_enMODULE_0, DMA_enCH_13, &stDMAChConfig);

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

static void ST7735__vSetTransferStruct(DMA_CH_CTL_t* pstTransfer)
{
    ST7735_pstDMATransferStruct = pstTransfer;
}

DMA_CH_CTL_t* ST7735__pstGetTransferStruct(void)
{
    return (ST7735_pstDMATransferStruct);
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
        stDMAChControlPrim.XFERMODE = (uint32_t) DMA_enCH_MODE_BASIC;
        if(u32BufferCant > 1024UL)
        {
            stDMAChControlPrim.XFERSIZE = 1024UL - 1UL;
            u32BufferCant -= 1024UL;
        }
        else
        {
            stDMAChControlPrim.XFERSIZE = u32BufferCant - 1UL;
            u32BufferCant = 0UL;
        }
        ST7735__vSetTransferSizeLeft(u32BufferCant);

        DMA_CH_Primary__enSetSourceEndAddressByNumber(DMA_enMODULE_0, DMA_enCH_13, (uint32_t) &u32DataReg);
        DMA_CH_Primary__enSetControlRegisterByNumber(DMA_enMODULE_0, DMA_enCH_13, &stDMAChControlPrim);
        ST7735__vSetTransferStruct(&stDMAChControlPrim);
        DMA_CH__enSetStateByNumber(DMA_enMODULE_0, DMA_enCH_13, DMA_enSTATE_ENA);
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
        stDMAChControlBuffer.XFERMODE = (uint32_t) DMA_enCH_MODE_BASIC;
        if(u32BufferCant > 1024UL)
        {
            stDMAChControlBuffer.XFERSIZE = 1024UL - 1UL;
            pu32DataRegLast += 1024UL - 1UL;
            u32BufferCant -= 1024UL;
        }
        else
        {
            stDMAChControlBuffer.XFERSIZE = u32BufferCant - 1UL;
            pu32DataRegLast += u32BufferCant;
            pu32DataRegLast -= 1UL;
            u32BufferCant = 0UL;
        }
        ST7735__vSetTransferSizeLeft(u32BufferCant);

        DMA_CH_Primary__enSetSourceEndAddressByNumber(DMA_enMODULE_0, DMA_enCH_13, (uint32_t) pu32DataRegLast);
        DMA_CH_Primary__enSetControlRegisterByNumber(DMA_enMODULE_0, DMA_enCH_13, &stDMAChControlBuffer);
        ST7735__vSetTransferStruct(&stDMAChControlBuffer);
        DMA_CH__enSetStateByNumber(DMA_enMODULE_0, DMA_enCH_13, DMA_enSTATE_ENA);
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
    DMA_CH_CTL_t* pstDMAChannel = (DMA_CH_CTL_t*) 0UL;
    if(0UL != ST7735_u32DMATransferSizeLeft)
    {
        pstDMAChannel = ST7735__pstGetTransferStruct();
        u32Address = DMA_CH_PRIMARY->CH[13UL].SRCENDP;
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
        DMA_CH_PRIMARY->CH[13UL].SRCENDP = (uint32_t) u32Address;
        DMA_CH_PRIMARY->CH[13UL].CTL = *((volatile uint32_t*) pstDMAChannel);
        DMA->CH_ENASET = (uint32_t)  DMA_enSTATE_ENA << 13UL;
        SSI2_DMACTL_R |= SSI_DMACTL_R_TXDMAE_MASK;
    }
    else
    {
        ST7735_vDMATxInteruptStatus = 0UL;
    }
}
