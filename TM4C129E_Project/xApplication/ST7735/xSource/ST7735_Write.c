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

#include <xApplication/ST7735/xHeader/ST7735_Defines.h>

#include <xUtils/Colors/Colors.h>
#include <xUtils/Font/Font.h>

#include <xDriver_MCU/GPIO/GPIO.h>
#include <xDriver_MCU/SSI/SSI.h>
#include <xDriver_MCU/SSI/Peripheral/SSI_Peripheral.h>
#include <xDriver_MCU/Common/xHeader/MCU_Interrupt.h>
#include <xDriver_MCU/DMA/DMA.h>

void ST7735__vDMATxEndInterupt(void);
void ST7735__vDMATxLastBit(void);
void ST7735__vDMATxInterupt(void);
static void ST7735__vSetTransferSizeLeft(UBase_t uxSizeArg);
static void ST7735__vSetTransferStruct(DMA_CH_CTL_t* pstTransfer);
UBase_t ST7735__uxGetTransferAddress(void);
UBase_t ST7735__uxGetTransferSizeLeft(void);
DMA_CH_CTL_t* ST7735__pstGetTransferStruct(void);

volatile UBase_t ST7735_vDMATxInteruptStatus = 0UL;
volatile UBase_t ST7735_vDMATxLastBit = 0UL;
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

error_t ST7735__enInitWriteDMAConfig(void)
{
    error_t enErrorReg;
    DMA_CONFIG_t stDMAChConfig= {
        DMA_enSTATE_DIS,
        DMA_enCH_REQTYPE_BOTH,
        DMA_enCH_PERIPHERAL_ENA,
        DMA_enCH_CONTROL_PRIMARY ,
        DMA_enCH_PRIORITY_HIGH ,
        DMA_enCH_ENCODER_2
    };

    SSI__vRegisterIRQSourceHandler(&ST7735__vDMATxInterupt, ST7735_SSI, SSI_enINTERRUPT_TRANSMIT_DMA);
    SSI__vRegisterIRQSourceHandler(&ST7735__vDMATxLastBit, ST7735_SSI, SSI_enINTERRUPT_END_OF_TRANSMIT);
    enErrorReg = DMA_CH_Primary__enSetDestinationEndAddressByNumber(DMA_enMODULE_0, DMA_enCH_13, (UBase_t) (SSI2_BASE + SSI_DR_OFFSET));
    if(ERROR_OK == enErrorReg)
    {
        enErrorReg = (error_t) DMA_CH_Primary__enSetSourceEndAddressByNumber(DMA_enMODULE_0, DMA_enCH_13, (UBase_t) 0UL);
    }
    if(ERROR_OK == enErrorReg)
    {
        enErrorReg = (error_t) DMA_CH__enSetPriorityByNumber(DMA_enMODULE_0, DMA_enCH_13, DMA_enCH_PRIORITY_HIGH);
    }
    if(ERROR_OK == enErrorReg)
    {
        enErrorReg = (error_t) DMA_CH__enSetConfigParameters(DMA_enMODULE_0, DMA_enCH_13, &stDMAChConfig);
    }
    return (enErrorReg);
}

static void ST7735__vSetTransferSizeLeft(UBase_t uxSizeArg)
{
    ST7735_uxDMATransferSizeLeft = uxSizeArg;
}

UBase_t ST7735__uxGetTransferSizeLeft(void)
{
    UBase_t uxSizeArg;
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

error_t ST7735__enWriteCommand(uint16_t u16DataArg)
{
    error_t enErrorReg;
    UBase_t uxStatusReg;
    UBase_t uxDataReg;
    do
    {
        uxStatusReg = ST7735__uxGetDMATxInterupt();
    }while(0UL != uxStatusReg);

    ST7735__vSetDMATxInterupt(1UL);
    enErrorReg = ST7735__enEnableChipSelect();
    if(ERROR_OK == enErrorReg)
    {
        enErrorReg = ST7735__enSetCommand();
    }
    if(ERROR_OK == enErrorReg)
    {
        uxDataReg = (uint32_t) u16DataArg;
        (void) SSI__uxSetData(ST7735_SSI, uxDataReg);
        enErrorReg = ST7735__enDisableChipSelect();
    }
    ST7735__vSetDMATxInterupt(0UL);
    return (enErrorReg);
}

error_t ST7735__enWriteData(UBase_t uxDataArg)
{
    error_t enErrorReg;
    UBase_t uxStatusReg;
    do
    {
        uxStatusReg = ST7735__uxGetDMATxInterupt();
    }while(0UL != uxStatusReg);

    ST7735__vSetDMATxInterupt(1UL);
    enErrorReg = ST7735__enEnableChipSelect();
    if(ERROR_OK == enErrorReg)
    {
        enErrorReg = ST7735__enSetData();
    }
    if(ERROR_OK == enErrorReg)
    {
        (void) SSI__uxSetData(ST7735_SSI, uxDataArg);
        enErrorReg = ST7735__enDisableChipSelect();
    }
    ST7735__vSetDMATxInterupt(0UL);
    return (enErrorReg);
}



error_t ST7735__enWriteFifo(uint16_t u16DataArg, UBase_t uxBufferCant)
{
    error_t enErrorReg;
    UBase_t uxStatusReg;
    do
    {
        uxStatusReg = ST7735__uxGetDMATxInterupt();
    }while(0UL != uxStatusReg);

    ST7735__vSetDMATxInterupt(1UL);
    enErrorReg = ST7735__enEnableChipSelect();
    if(ERROR_OK == enErrorReg)
    {
        enErrorReg = ST7735__enSetData();
    }
    if(ERROR_OK == enErrorReg)
    {
        (void) SSI__uxSetFifoDataConst(ST7735_SSI,  (UBase_t)  u16DataArg, uxBufferCant);
        enErrorReg = ST7735__enDisableChipSelect();
    }
    ST7735__vSetDMATxInterupt(0UL);
    return (enErrorReg);
}


error_t ST7735__enWriteDMA(UBase_t uxDataArg, UBase_t uxBufferCant)
{
    error_t enErrorReg;
    UBase_t uxStatusReg;
    static UBase_t uxDataReg = 0UL;
    uxDataReg = uxDataArg;

    enErrorReg = ERROR_OK;
    if(0UL == uxBufferCant)
    {
        enErrorReg = ERROR_VALUE;
    }
    if(ERROR_OK == enErrorReg)
    {
        do
        {
            uxStatusReg = ST7735__uxGetDMATxInterupt();
        }while(0UL != uxStatusReg);
        ST7735__vSetDMATxInterupt(1UL);

        SSI__vSetEnable(ST7735_SSI, SSI_enENABLE_STOP);
        SSI__vSetDataLength(ST7735_SSI, SSI_enLENGTH_16BITS);
        SSI__vSetEnable(ST7735_SSI, SSI_enENABLE_START);
    }
    if(ERROR_OK == enErrorReg)
    {
        enErrorReg = ST7735__enEnableChipSelect();
        if(ERROR_OK == enErrorReg)
        {
            enErrorReg = ST7735__enSetData();
        }
        if(ERROR_OK == enErrorReg)
        {
            ST7735_vDMATxLastBit = 0UL;
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
            enErrorReg = (error_t) DMA_CH_Primary__enSetSourceEndAddressByNumber(DMA_enMODULE_0, DMA_enCH_13, (UBase_t) &uxDataReg);
        }
        if(ERROR_OK == enErrorReg)
        {
            enErrorReg = (error_t) DMA_CH_Primary__enSetControlRegisterByNumber(DMA_enMODULE_0, DMA_enCH_13, &stDMAChControlPrim);
        }
        if(ERROR_OK == enErrorReg)
        {
            ST7735__vSetTransferStruct(&stDMAChControlPrim);
            enErrorReg = (error_t) DMA_CH__enSetStateByNumber(DMA_enMODULE_0, DMA_enCH_13, DMA_enSTATE_ENA);
        }
        if(ERROR_OK == enErrorReg)
        {
            SSI__vClearInterruptSource(ST7735_SSI, (SSI_nINT_SOURCE) (SSI_enINT_SOURCE_TRANSMIT_DMA));
            SSI__vEnInterruptSource(ST7735_SSI, (SSI_nINT_SOURCE) (SSI_enINT_SOURCE_TRANSMIT_DMA));
            SSI__vSetDMATx(ST7735_SSI, SSI_enDMA_ENA);
        }
    }
    return (enErrorReg);
}

error_t ST7735__enWriteBuffer16bDMA(uint16_t* pu16DataArg, UBase_t uxBufferCant)
{
    error_t enErrorReg;
    UBase_t uxStatusReg;
    uint16_t* puxDataRegLast = pu16DataArg;

    enErrorReg = ERROR_OK;
    if(0UL == uxBufferCant)
    {
        enErrorReg = ERROR_VALUE;
    }
    if(0UL == (uintptr_t) pu16DataArg)
    {
        enErrorReg = ERROR_POINTER;
    }
    if(ERROR_OK == enErrorReg)
    {
        do
        {
            uxStatusReg = ST7735__uxGetDMATxInterupt();
        }while(0UL != uxStatusReg);
        ST7735__vSetDMATxInterupt(1UL);

        SSI__vSetEnable(ST7735_SSI, SSI_enENABLE_STOP);
        SSI__vSetDataLength(ST7735_SSI, SSI_enLENGTH_16BITS);
        SSI__vSetEnable(ST7735_SSI, SSI_enENABLE_START);
    }
    if(ERROR_OK == enErrorReg)
    {
        enErrorReg = ST7735__enEnableChipSelect();
        if(ERROR_OK == enErrorReg)
        {
            enErrorReg = ST7735__enSetData();
        }
        if(ERROR_OK == enErrorReg)
        {
            ST7735_vDMATxLastBit = 0UL;
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
            enErrorReg = (error_t) DMA_CH_Primary__enSetSourceEndAddressByNumber(DMA_enMODULE_0, DMA_enCH_13, (UBase_t) puxDataRegLast);
        }
        if(ERROR_OK == enErrorReg)
        {
            enErrorReg = (error_t) DMA_CH_Primary__enSetControlRegisterByNumber(DMA_enMODULE_0, DMA_enCH_13, &stDMAChControlBuffer);
        }
        if(ERROR_OK == enErrorReg)
        {
            ST7735__vSetTransferStruct(&stDMAChControlBuffer);
            enErrorReg = (error_t) DMA_CH__enSetStateByNumber(DMA_enMODULE_0, DMA_enCH_13, DMA_enSTATE_ENA);
        }
        if(ERROR_OK == enErrorReg)
        {
            SSI__vClearInterruptSource(ST7735_SSI, (SSI_nINT_SOURCE) (SSI_enINT_SOURCE_TRANSMIT_DMA));
            SSI__vEnInterruptSource(ST7735_SSI, (SSI_nINT_SOURCE) (SSI_enINT_SOURCE_TRANSMIT_DMA));
            SSI__vSetDMATx(ST7735_SSI, SSI_enDMA_ENA);
        }
    }
    return (enErrorReg);
}

void ST7735__vDMATxInterupt(void)
{
    UBase_t uxAddress;
    UBase_t uxMultiWord;
    UBase_t uxMulti;
    DMA_CH_CTL_t* pstDMAChannel;
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
            SSI3_ICR_R = (UBase_t) SSI_enINT_SOURCE_END_OF_TRANSMIT;
            SSI2_IM_R &= ~ (UBase_t) SSI_enINT_SOURCE_TRANSMIT_DMA;
            SSI2_IM_R |= (UBase_t) SSI_enINT_SOURCE_END_OF_TRANSMIT;

        }
        DMA_CH_PRIMARY->CH[13UL].SRCENDP = (UBase_t) uxAddress;
        DMA_CH_PRIMARY->CH[13UL].CTL = *((volatile UBase_t*) pstDMAChannel);
        DMA->CH_ENASET = (UBase_t)  DMA_enSTATE_ENA << 13UL;
        SSI2_DMACTL_R |= SSI_DMACTL_R_TXDMAE_MASK;
    }
    else
    {
    }
}

void ST7735__vDMATxLastBit(void)
{
    //if(1UL == ST7735_vDMATxLastBit)
    {
        ST7735__enDisableChipSelect();
        SSI2_DMACTL_R &= ~SSI_DMACTL_R_TXDMAE_MASK;
        SSI2_IM_R &= ~ (UBase_t) SSI_enINT_SOURCE_END_OF_TRANSMIT;
        SSI3_ICR_R = (UBase_t) SSI_enINT_SOURCE_TRANSMIT_DMA | (UBase_t) SSI_enINT_SOURCE_END_OF_TRANSMIT;

        SSI__vSetEnable(ST7735_SSI, SSI_enENABLE_STOP);
        SSI__vSetDataLength(ST7735_SSI, SSI_enLENGTH_8BITS);
        SSI__vSetEnable(ST7735_SSI, SSI_enENABLE_START);
        ST7735_vDMATxInteruptStatus = 0UL;
    }
}
