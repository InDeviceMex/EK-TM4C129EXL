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
static void ST7735__vSetTransferSizeLeft(UBase_t uxSizeArg);
static void ST7735__vSetTransferStruct(DMA_CH_CTL_t* pstTransfer);
UBase_t ST7735__uxGetTransferAddress(void);
UBase_t ST7735__uxGetTransferSizeLeft(void);
DMA_CH_CTL_t* ST7735__pstGetTransferStruct(void);

volatile UBase_t ST7735_vDMATxInteruptStatus = 0UL;
volatile UBase_t ST7735_uxDMATransferSizeLeft = 0UL;
volatile UBase_t ST7735_uxDMATransferAddress = 0UL;
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
    DMA_CH_Primary__enSetDestinationEndAddressByNumber(DMA_enMODULE_0, DMA_enCH_13, (UBase_t) (SSI2_BASE + SSI_DR_OFFSET));
    DMA_CH_Primary__enSetSourceEndAddressByNumber(DMA_enMODULE_0, DMA_enCH_13, (UBase_t) 0UL);

    DMA_CH__enSetPriorityByNumber(DMA_enMODULE_0, DMA_enCH_13, DMA_enCH_PRIORITY_HIGH);
    DMA_CH__enSetConfigParameters(DMA_enMODULE_0, DMA_enCH_13, &stDMAChConfig);

}

static void ST7735__vSetTransferSizeLeft(UBase_t uxSizeArg)
{
    ST7735_uxDMATransferSizeLeft = uxSizeArg;
}

UBase_t ST7735__uxGetTransferSizeLeft(void)
{
    UBase_t uxSizeArg = 0UL;
    uxSizeArg = ST7735_uxDMATransferSizeLeft;
    return (uxSizeArg);
}

static void ST7735__vSetTransferStruct(DMA_CH_CTL_t* pstTransfer)
{
    ST7735_pstDMATransferStruct = pstTransfer;
}

DMA_CH_CTL_t* ST7735__pstGetTransferStruct(void)
{
    return (ST7735_pstDMATransferStruct);
}

UBase_t ST7735__uxGetTransferAddress(void)
{
    return (ST7735_uxDMATransferAddress);
}

UBase_t ST7735__uxGetDMATxInterupt(void)
{
    return (ST7735_vDMATxInteruptStatus);
}

void ST7735__vSetDMATxInterupt(UBase_t uxStateArg)
{
    ST7735_vDMATxInteruptStatus = uxStateArg;
}

UBase_t ST7735__uxWriteCommand(uint16_t u16DataArg)
{
    UBase_t uxReceiveReg = 0xFFFFFFFFUL;
    ST7735__vEnableChipSelect();
    ST7735__vSetCommand();

    uxReceiveReg = SSI__uxSetData(ST7735_SSI, (UBase_t) u16DataArg);

    ST7735__vDisableChipSelect();
    return (uxReceiveReg);
}

UBase_t ST7735__uxWriteData(UBase_t uxDataArg)
{
    UBase_t uxReceiveReg = 0xFFFFFFFFUL;
    ST7735__vEnableChipSelect();
    ST7735__vSetData();

    uxReceiveReg = SSI__uxSetData(ST7735_SSI, uxDataArg);

    ST7735__vDisableChipSelect();
    return (uxReceiveReg);
}



UBase_t ST7735__uxWriteFifo(uint16_t u16DataArg, UBase_t uxBufferCant)
{
    UBase_t uxReceiveReg = 0xFFFFFFFFUL;
    ST7735__vEnableChipSelect();
    ST7735__vSetData();

    uxReceiveReg = SSI__uxSetFifoDataConst(ST7735_SSI,  (UBase_t)  u16DataArg, uxBufferCant);

    ST7735__vDisableChipSelect();
    return (uxReceiveReg);
}


UBase_t ST7735__uxWriteDMA(UBase_t uxDataArg, UBase_t uxBufferCant)
{
    UBase_t uxStatusReg = 0UL;
    UBase_t uxReceiveReg = 0xFFFFFFFFUL;
    static UBase_t uxDataReg = 0UL;
    uxDataReg = uxDataArg;

    if(0UL != uxBufferCant)
    {
        ST7735__vEnableChipSelect();
        ST7735__vSetData();
        ST7735__vSetDMATxInterupt(1UL);
        stDMAChControlPrim.XFERMODE = (UBase_t) DMA_enCH_MODE_BASIC;
        if(uxBufferCant > 1024UL)
        {
            stDMAChControlPrim.XFERSIZE = 1024UL - 1UL;
            uxBufferCant -= 1024UL;
        }
        else
        {
            stDMAChControlPrim.XFERSIZE = uxBufferCant - 1UL;
            uxBufferCant = 0UL;
        }
        ST7735__vSetTransferSizeLeft(uxBufferCant);

        DMA_CH_Primary__enSetSourceEndAddressByNumber(DMA_enMODULE_0, DMA_enCH_13, (UBase_t) &uxDataReg);
        DMA_CH_Primary__enSetControlRegisterByNumber(DMA_enMODULE_0, DMA_enCH_13, &stDMAChControlPrim);
        ST7735__vSetTransferStruct(&stDMAChControlPrim);
        DMA_CH__enSetStateByNumber(DMA_enMODULE_0, DMA_enCH_13, DMA_enSTATE_ENA);
        SSI__vSetDMATx(ST7735_SSI, SSI_enDMA_ENA);

        do
        {
            uxStatusReg = ST7735__uxGetDMATxInterupt();
        }while(0UL != uxStatusReg);

        do
        {
            uxStatusReg = (UBase_t) SSI__enGetBusyState(ST7735_SSI);
        }while(0UL != uxStatusReg);

        ST7735__vDisableChipSelect();
    }
    return (uxReceiveReg);
}

UBase_t ST7735__uxWriteBuffer16bDMA(uint16_t* pu16DataArg, UBase_t uxBufferCant)
{
    UBase_t uxStatusReg = 0UL;
    UBase_t uxReceiveReg = 0xFFFFFFFFUL;
    uint16_t* puxDataRegLast = pu16DataArg;

    if(0UL != uxBufferCant)
    {
        ST7735__vEnableChipSelect();
        ST7735__vSetData();
        ST7735__vSetDMATxInterupt(1UL);
        stDMAChControlBuffer.XFERMODE = (UBase_t) DMA_enCH_MODE_BASIC;
        if(uxBufferCant > 1024UL)
        {
            stDMAChControlBuffer.XFERSIZE = 1024UL - 1UL;
            puxDataRegLast += 1024UL - 1UL;
            uxBufferCant -= 1024UL;
        }
        else
        {
            stDMAChControlBuffer.XFERSIZE = uxBufferCant - 1UL;
            puxDataRegLast += uxBufferCant;
            puxDataRegLast -= 1UL;
            uxBufferCant = 0UL;
        }
        ST7735__vSetTransferSizeLeft(uxBufferCant);

        DMA_CH_Primary__enSetSourceEndAddressByNumber(DMA_enMODULE_0, DMA_enCH_13, (UBase_t) puxDataRegLast);
        DMA_CH_Primary__enSetControlRegisterByNumber(DMA_enMODULE_0, DMA_enCH_13, &stDMAChControlBuffer);
        ST7735__vSetTransferStruct(&stDMAChControlBuffer);
        DMA_CH__enSetStateByNumber(DMA_enMODULE_0, DMA_enCH_13, DMA_enSTATE_ENA);
        SSI__vSetDMATx(ST7735_SSI, SSI_enDMA_ENA);

        do
        {
            uxStatusReg = ST7735__uxGetDMATxInterupt();
        }while(0UL != uxStatusReg);

        do
        {
            uxStatusReg = (UBase_t) SSI__enGetBusyState(ST7735_SSI);
        }while(0UL != uxStatusReg);

        ST7735__vDisableChipSelect();
    }
    return (uxReceiveReg);
}

void ST7735__vDMATxInterupt(void)
{
    UBase_t uxAddress = 0UL;
    UBase_t uxMultiWord = 0UL;
    UBase_t uxMulti = 0UL;
    DMA_CH_CTL_t* pstDMAChannel = (DMA_CH_CTL_t*) 0UL;
    if(0UL != ST7735_uxDMATransferSizeLeft)
    {
        pstDMAChannel = ST7735__pstGetTransferStruct();
        uxAddress = DMA_CH_PRIMARY->CH[13UL].SRCENDP;
        uxMulti = pstDMAChannel->SRCINC;
        uxMulti += 1UL;
        uxMulti &= 0x3UL;
        if((UBase_t) 3 == uxMulti)
        {
            uxMulti = 4UL;
        }
        if(ST7735_uxDMATransferSizeLeft > 1024UL)
        {
            pstDMAChannel->XFERSIZE = 1024UL - 1UL;
            uxMultiWord = (1024UL);
            uxMultiWord *= uxMulti;
            uxAddress += uxMultiWord;
            ST7735_uxDMATransferSizeLeft -= 1024UL;
        }
        else
        {
            pstDMAChannel->XFERSIZE = ST7735_uxDMATransferSizeLeft - 1UL;
            uxMultiWord = (ST7735_uxDMATransferSizeLeft);
            uxMultiWord *= uxMulti;
            uxAddress += uxMultiWord;
            ST7735_uxDMATransferSizeLeft = 0UL;
        }
        DMA_CH_PRIMARY->CH[13UL].SRCENDP = (UBase_t) uxAddress;
        DMA_CH_PRIMARY->CH[13UL].CTL = *((volatile UBase_t*) pstDMAChannel);
        DMA->CH_ENASET = (UBase_t)  DMA_enSTATE_ENA << 13UL;
        SSI2_DMACTL_R |= SSI_DMACTL_R_TXDMAE_MASK;
    }
    else
    {
        ST7735_vDMATxInteruptStatus = 0UL;
    }
}
