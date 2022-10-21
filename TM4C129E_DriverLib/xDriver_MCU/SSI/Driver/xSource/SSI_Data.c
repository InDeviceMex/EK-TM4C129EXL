/**
 *
 * @file SSI_Data.c
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
 * @verbatim 17 feb. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 17 feb. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/SSI/Driver/xHeader/SSI_Data.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/SSI/Driver/Flags/xHeader/SSI_Busy.h>
#include <xDriver_MCU/SSI/Driver/Flags/xHeader/SSI_FifoRx.h>
#include <xDriver_MCU/SSI/Driver/Flags/xHeader/SSI_FifoTx.h>
#include <xDriver_MCU/SSI/Driver/Intrinsics/Primitives/SSI_Primitives.h>
#include <xDriver_MCU/SSI/Peripheral/SSI_Peripheral.h>

SSI_nERROR SSI__enSetData(SSI_nMODULE enModuleArg, UBase_t uxDataArg)
{
    SSI_Register_t stRegister;
    SSI_nERROR enErrorReg;
    SSI_nBOOLEAN enIsFifoFull;

    enIsFifoFull = SSI_enFALSE;
    enErrorReg = SSI__enIsTransmitFifoFull(enModuleArg, &enIsFifoFull);
    if(SSI_enERROR_OK == enErrorReg)
    {
        if(SSI_enTRUE == enIsFifoFull)
        {
            enErrorReg = SSI_enERROR_FULL;
        }
    }
    if(SSI_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = SSI_DR_R_DATA_BIT;
        stRegister.uxMask = MCU_MASK_32;
        stRegister.uptrAddress = SSI_DR_OFFSET;
        stRegister.uxValue = (UBase_t) uxDataArg;
        enErrorReg = SSI__enWriteRegister(enModuleArg, &stRegister);
    }
    return (enErrorReg);
}

SSI_nERROR SSI__enSetDataByte(SSI_nMODULE enModuleArg, uint8_t u8DataArg)
{
    SSI_nERROR enErrorReg;
    enErrorReg = SSI__enSetData(enModuleArg, (UBase_t) u8DataArg);
    return (enErrorReg);
}

SSI_nERROR SSI__enSetDataHalfWord(SSI_nMODULE enModuleArg, uint16_t u16DataArg)
{
    SSI_nERROR enErrorReg;
    enErrorReg = SSI__enSetData(enModuleArg, (UBase_t) u16DataArg);
    return (enErrorReg);
}

SSI_nERROR SSI__enSetDataTimeOut(SSI_nMODULE enModuleArg, UBase_t uxDataArg, UBase_t uxTimeoutArg)
{
    SSI_nERROR enErrorReg;

    if(0UL == uxTimeoutArg)
    {
        do{
            enErrorReg = SSI__enSetData(enModuleArg, uxDataArg);
        }while(SSI_enERROR_FULL == enErrorReg);
    }
    else
    {
        do{
            enErrorReg = SSI__enSetData(enModuleArg, uxDataArg);
            uxTimeoutArg --;
        }while((SSI_enERROR_FULL == enErrorReg) && (0UL != uxTimeoutArg));

        if((SSI_enERROR_FULL == enErrorReg) && (0UL == uxTimeoutArg))
        {
            enErrorReg = SSI_enERROR_TIMEOUT;
        }
    }

    return (enErrorReg);
}

SSI_nERROR SSI__enSetDataByteTimeOut(SSI_nMODULE enModuleArg, uint8_t u8DataArg, UBase_t uxTimeoutArg)
{
    SSI_nERROR enErrorReg;
    enErrorReg = SSI__enSetDataTimeOut(enModuleArg, (UBase_t) u8DataArg, uxTimeoutArg);
    return (enErrorReg);
}

SSI_nERROR SSI__enSetDataHalfWordTimeOut(SSI_nMODULE enModuleArg, uint16_t u16DataArg, UBase_t uxTimeoutArg)
{
    SSI_nERROR enErrorReg;
    enErrorReg = SSI__enSetDataTimeOut(enModuleArg, (UBase_t) u16DataArg, uxTimeoutArg);
    return (enErrorReg);
}


SSI_nERROR SSI__enSetFifoDataTimeOut(SSI_nMODULE enModuleArg, const UBase_t* puxDataArg, UBase_t* puxCount, UBase_t uxTimeoutArg)
{
    SSI_nERROR enErrorReg;
    UBase_t uxCountReg;
    UBase_t uxInitialCountReg;

    uxInitialCountReg = 0UL;
    uxCountReg = 0UL;
    enErrorReg = SSI_enERROR_OK;
    if((0UL == (uintptr_t) puxCount) || (0UL == (uintptr_t) puxDataArg))
    {
        enErrorReg = SSI_enERROR_POINTER;
    }
    if(SSI_enERROR_OK == enErrorReg)
    {
        uxCountReg = *puxCount;
        uxInitialCountReg = *puxCount;
        if(0UL == uxCountReg)
        {
            enErrorReg = SSI_enERROR_VALUE;
        }
    }
    if(SSI_enERROR_OK == enErrorReg)
    {
        do
        {
            enErrorReg = SSI__enSetDataTimeOut(enModuleArg, *puxDataArg, uxTimeoutArg);
            if(SSI_enERROR_OK == enErrorReg)
            {
                puxDataArg += 1UL;
            }
        }while((SSI_enERROR_OK == enErrorReg) && (0UL != uxCountReg));
    }
    if((SSI_enERROR_OK == enErrorReg) || (SSI_enERROR_TIMEOUT == enErrorReg))
    {
        *puxCount = uxInitialCountReg - uxCountReg ;
    }
    return (enErrorReg);
}

SSI_nERROR SSI__enSetFifoDataByteTimeOut(SSI_nMODULE enModuleArg, const uint8_t* pu8DataArg, UBase_t* puxCount, UBase_t uxTimeoutArg)
{
    SSI_nERROR enErrorReg;
    UBase_t uxCountReg;
    UBase_t uxDataReg;
    uint8_t u8DataReg;
    UBase_t uxInitialCountReg;

    uxInitialCountReg = 0UL;
    uxCountReg = 0UL;
    enErrorReg = SSI_enERROR_OK;
    if((0UL == (uintptr_t) puxCount) || (0UL == (uintptr_t) pu8DataArg))
    {
        enErrorReg = SSI_enERROR_POINTER;
    }
    if(SSI_enERROR_OK == enErrorReg)
    {
        uxCountReg = *puxCount;
        uxInitialCountReg = *puxCount;
        if(0UL == uxCountReg)
        {
            enErrorReg = SSI_enERROR_VALUE;
        }
    }
    if(SSI_enERROR_OK == enErrorReg)
    {
        do
        {
            u8DataReg = *pu8DataArg;
            uxDataReg = (UBase_t) u8DataReg;
            enErrorReg = SSI__enSetDataTimeOut(enModuleArg, uxDataReg, uxTimeoutArg);
            if(SSI_enERROR_OK == enErrorReg)
            {
                pu8DataArg += 1UL;
            }
        }while((SSI_enERROR_OK == enErrorReg) && (0UL != uxCountReg));
    }
    if((SSI_enERROR_OK == enErrorReg) || (SSI_enERROR_TIMEOUT == enErrorReg))
    {
        *puxCount = uxInitialCountReg - uxCountReg ;
    }
    return (enErrorReg);
}

SSI_nERROR SSI__enSetFifoDataHalfWordTimeOut(SSI_nMODULE enModuleArg, const uint16_t* pu16DataArg, UBase_t* puxCount, UBase_t uxTimeoutArg)
{
    SSI_nERROR enErrorReg;
    UBase_t uxCountReg;
    UBase_t uxDataReg;
    uint16_t u16DataReg;
    UBase_t uxInitialCountReg;

    uxInitialCountReg = 0UL;
    uxCountReg = 0UL;
    enErrorReg = SSI_enERROR_OK;
    if((0UL == (uintptr_t) puxCount) || (0UL == (uintptr_t) pu16DataArg))
    {
        enErrorReg = SSI_enERROR_POINTER;
    }
    if(SSI_enERROR_OK == enErrorReg)
    {
        uxCountReg = *puxCount;
        uxInitialCountReg = *puxCount;
        if(0UL == uxCountReg)
        {
            enErrorReg = SSI_enERROR_VALUE;
        }
    }
    if(SSI_enERROR_OK == enErrorReg)
    {
        do
        {
            u16DataReg = *pu16DataArg;
            uxDataReg = (UBase_t) u16DataReg;
            enErrorReg = SSI__enSetDataTimeOut(enModuleArg, uxDataReg, uxTimeoutArg);
            if(SSI_enERROR_OK == enErrorReg)
            {
                pu16DataArg += 1UL;
            }
        }while((SSI_enERROR_OK == enErrorReg) && (0UL != uxCountReg));
    }
    if((SSI_enERROR_OK == enErrorReg) || (SSI_enERROR_TIMEOUT == enErrorReg))
    {
        *puxCount = uxInitialCountReg - uxCountReg ;
    }
    return (enErrorReg);
}

SSI_nERROR SSI__enSetFifoData(SSI_nMODULE enModuleArg, const UBase_t* puxDataArg, UBase_t* puxCount)
{
    SSI_nERROR enErrorReg;
    enErrorReg = SSI__enSetFifoDataTimeOut(enModuleArg, puxDataArg, puxCount, 0UL);
    return (enErrorReg);
}

SSI_nERROR SSI__enSetFifoDataByte(SSI_nMODULE enModuleArg, const uint8_t* pu8DataArg, UBase_t* puxCount)
{
    SSI_nERROR enErrorReg;
    enErrorReg = SSI__enSetFifoDataByteTimeOut(enModuleArg, pu8DataArg, puxCount, 0UL);
    return (enErrorReg);
}

SSI_nERROR SSI__enSetFifoDataHalfWord(SSI_nMODULE enModuleArg, const uint16_t* pu16DataArg, UBase_t* puxCount)
{
    SSI_nERROR enErrorReg;
    enErrorReg = SSI__enSetFifoDataHalfWordTimeOut(enModuleArg, pu16DataArg, puxCount, 0UL);
    return (enErrorReg);
}


SSI_nERROR SSI__enSetFifoDataConstTimeOut(SSI_nMODULE enModuleArg, UBase_t uxDataArg, UBase_t* puxCount, UBase_t uxTimeoutArg)
{
    SSI_nERROR enErrorReg;
    UBase_t uxCountReg;
    UBase_t uxInitialCountReg;

    uxInitialCountReg = 0UL;
    uxCountReg = 0UL;
    enErrorReg = SSI_enERROR_OK;
    if(0UL == (uintptr_t) puxCount)
    {
        enErrorReg = SSI_enERROR_POINTER;
    }
    if(SSI_enERROR_OK == enErrorReg)
    {
        uxCountReg = *puxCount;
        uxInitialCountReg = *puxCount;
        if(0UL == uxCountReg)
        {
            enErrorReg = SSI_enERROR_VALUE;
        }
    }
    if(SSI_enERROR_OK == enErrorReg)
    {
        do
        {
            enErrorReg = SSI__enSetDataTimeOut(enModuleArg, uxDataArg, uxTimeoutArg);
        }while((SSI_enERROR_OK == enErrorReg) && (0UL != uxCountReg));
    }
    if((SSI_enERROR_OK == enErrorReg) || (SSI_enERROR_TIMEOUT == enErrorReg))
    {
        *puxCount = uxInitialCountReg - uxCountReg ;
    }
    return (enErrorReg);
}

SSI_nERROR SSI__enSetFifoDataConstByteTimeOut(SSI_nMODULE enModuleArg, uint8_t u8DataArg, UBase_t* puxCount, UBase_t uxTimeoutArg)
{
    SSI_nERROR enErrorReg;
    UBase_t uxCountReg;
    UBase_t uxDataReg;
    UBase_t uxInitialCountReg;

    uxInitialCountReg = 0UL;
    uxCountReg = 0UL;
    enErrorReg = SSI_enERROR_OK;
    if(0UL == (uintptr_t) puxCount)
    {
        enErrorReg = SSI_enERROR_POINTER;
    }
    if(SSI_enERROR_OK == enErrorReg)
    {
        uxCountReg = *puxCount;
        uxInitialCountReg = *puxCount;
        if(0UL == uxCountReg)
        {
            enErrorReg = SSI_enERROR_VALUE;
        }
    }
    if(SSI_enERROR_OK == enErrorReg)
    {
        do
        {
            uxDataReg = (UBase_t) u8DataArg;
            enErrorReg = SSI__enSetDataTimeOut(enModuleArg, uxDataReg, uxTimeoutArg);
        }while((SSI_enERROR_OK == enErrorReg) && (0UL != uxCountReg));
    }
    if((SSI_enERROR_OK == enErrorReg) || (SSI_enERROR_TIMEOUT == enErrorReg))
    {
        *puxCount = uxInitialCountReg - uxCountReg ;
    }
    return (enErrorReg);
}

SSI_nERROR SSI__enSetFifoDataConstHalfWordTimeOut(SSI_nMODULE enModuleArg, uint16_t u16DataArg, UBase_t* puxCount, UBase_t uxTimeoutArg)
{
    SSI_nERROR enErrorReg;
    UBase_t uxCountReg;
    UBase_t uxDataReg;
    UBase_t uxInitialCountReg;

    uxInitialCountReg = 0UL;
    uxCountReg = 0UL;
    enErrorReg = SSI_enERROR_OK;
    if(0UL == (uintptr_t) puxCount)
    {
        enErrorReg = SSI_enERROR_POINTER;
    }
    if(SSI_enERROR_OK == enErrorReg)
    {
        uxCountReg = *puxCount;
        uxInitialCountReg = *puxCount;
        if(0UL == uxCountReg)
        {
            enErrorReg = SSI_enERROR_VALUE;
        }
    }
    if(SSI_enERROR_OK == enErrorReg)
    {
        do
        {
            uxDataReg = (UBase_t) u16DataArg;
            enErrorReg = SSI__enSetDataTimeOut(enModuleArg, uxDataReg, uxTimeoutArg);
        }while((SSI_enERROR_OK == enErrorReg) && (0UL != uxCountReg));
    }
    if((SSI_enERROR_OK == enErrorReg) || (SSI_enERROR_TIMEOUT == enErrorReg))
    {
        *puxCount = uxInitialCountReg - uxCountReg ;
    }
    return (enErrorReg);
}


SSI_nERROR SSI__enSetFifoDataConst(SSI_nMODULE enModuleArg, UBase_t uxDataArg, UBase_t* puxCount)
{
    SSI_nERROR enErrorReg;
    enErrorReg = SSI__enSetFifoDataConstTimeOut(enModuleArg, uxDataArg, puxCount, 0UL);
    return (enErrorReg);
}

SSI_nERROR SSI__enSetFifoDataConstByte(SSI_nMODULE enModuleArg, uint8_t u8DataArg, UBase_t* puxCount)
{
    SSI_nERROR enErrorReg;
    enErrorReg = SSI__enSetFifoDataConstByteTimeOut(enModuleArg, u8DataArg, puxCount, 0UL);
    return (enErrorReg);
}

SSI_nERROR SSI__enSetFifoDataConstHalfWord(SSI_nMODULE enModuleArg, uint16_t u16DataArg, UBase_t* puxCount)
{
    SSI_nERROR enErrorReg;
    enErrorReg = SSI__enSetFifoDataConstHalfWordTimeOut(enModuleArg, u16DataArg, puxCount, 0UL);
    return (enErrorReg);
}

SSI_nERROR SSI__enGetData(SSI_nMODULE enModuleArg, UBase_t* puxDataArg)
{
    SSI_Register_t stRegister;
    SSI_nERROR enErrorReg;
    SSI_nBOOLEAN enIsFifoEmpty;

    enIsFifoEmpty = SSI_enFALSE;
    enErrorReg = SSI_enERROR_OK;
    if(0UL == (uintptr_t) puxDataArg)
    {
        enErrorReg = SSI_enERROR_POINTER;
    }
    if(SSI_enERROR_OK == enErrorReg)
    {
        enErrorReg = SSI__enIsReceiveFifoEmpty(enModuleArg, &enIsFifoEmpty);
    }
    if(SSI_enERROR_OK == enErrorReg)
    {
        if(SSI_enTRUE == enIsFifoEmpty)
        {
            enErrorReg = SSI_enERROR_EMPTY;
        }
    }
    if(SSI_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = SSI_DR_R_DATA_BIT;
        stRegister.uxMask = SSI_DR_DATA_MASK;
        stRegister.uptrAddress = SSI_DR_OFFSET;
        enErrorReg = SSI__enReadRegister(enModuleArg, &stRegister);
    }
    if(SSI_enERROR_OK == enErrorReg)
    {
        *puxDataArg = (UBase_t) stRegister.uxValue;
    }

    return (enErrorReg);
}

SSI_nERROR SSI__enGetDataByte(SSI_nMODULE enModuleArg, uint8_t* pu8DataArg)
{
    SSI_nERROR enErrorReg;
    UBase_t uxDataReg;
    uint8_t u8DataReg;

    uxDataReg = 0UL;
    enErrorReg = SSI_enERROR_OK;
    if(0UL == (uintptr_t) pu8DataArg)
    {
        enErrorReg = SSI_enERROR_POINTER;
    }
    if(SSI_enERROR_OK == enErrorReg)
    {
        enErrorReg = SSI__enGetData(enModuleArg, &uxDataReg);
    }
    if(SSI_enERROR_OK == enErrorReg)
    {
        u8DataReg = (uint8_t) uxDataReg;
        *pu8DataArg = (uint8_t) u8DataReg;
    }
    return (enErrorReg);
}

SSI_nERROR SSI__enGetDataHalfWord(SSI_nMODULE enModuleArg, uint16_t* pu16DataArg)
{
    SSI_nERROR enErrorReg;
    UBase_t uxDataReg;
    uint16_t u16DataReg;

    uxDataReg = 0UL;
    enErrorReg = SSI_enERROR_OK;
    if(0UL == (uintptr_t) pu16DataArg)
    {
        enErrorReg = SSI_enERROR_POINTER;
    }
    if(SSI_enERROR_OK == enErrorReg)
    {
        enErrorReg = SSI__enGetData(enModuleArg, &uxDataReg);
    }
    if(SSI_enERROR_OK == enErrorReg)
    {
        u16DataReg = (uint16_t) uxDataReg;
        *pu16DataArg = (uint16_t) u16DataReg;
    }
    return (enErrorReg);
}

SSI_nERROR SSI__enGetDataTimeOut(SSI_nMODULE enModuleArg, UBase_t* puxDataArg, UBase_t uxTimeoutArg)
{
    SSI_nERROR enErrorReg;

    enErrorReg = SSI_enERROR_OK;
    if(0UL == (uintptr_t) puxDataArg)
    {
        enErrorReg = SSI_enERROR_POINTER;
    }
    if(SSI_enERROR_OK == enErrorReg)
    {
        if(0UL == uxTimeoutArg)
        {
            do{
                enErrorReg = SSI__enGetData(enModuleArg, puxDataArg);
            }while(SSI_enERROR_EMPTY == enErrorReg);
        }
        else
        {
            do{
                enErrorReg = SSI__enGetData(enModuleArg, puxDataArg);
                uxTimeoutArg --;
            }while((SSI_enERROR_EMPTY == enErrorReg) && (0UL != uxTimeoutArg));

            if((SSI_enERROR_EMPTY == enErrorReg) && (0UL == uxTimeoutArg))
            {
                enErrorReg = SSI_enERROR_TIMEOUT;
            }
        }
    }

    return (enErrorReg);
}


SSI_nERROR SSI__enGetDataByteTimeOut(SSI_nMODULE enModuleArg, uint8_t* pu8DataArg, UBase_t uxTimeoutArg)
{
    SSI_nERROR enErrorReg;
    UBase_t uxDataReg;
    uint8_t u8DataReg;

    uxDataReg = 0UL;
    enErrorReg = SSI_enERROR_OK;
    if(0UL == (uintptr_t) pu8DataArg)
    {
        enErrorReg = SSI_enERROR_POINTER;
    }
    if(SSI_enERROR_OK == enErrorReg)
    {
        enErrorReg = SSI__enGetDataTimeOut(enModuleArg, &uxDataReg, uxTimeoutArg);
    }
    if(SSI_enERROR_OK == enErrorReg)
    {
        u8DataReg = (uint8_t) uxDataReg;
        *pu8DataArg = (uint8_t) u8DataReg;
    }
    return (enErrorReg);
}

SSI_nERROR SSI__enGetDataHalfWordTimeOut(SSI_nMODULE enModuleArg, uint16_t* pu16DataArg, UBase_t uxTimeoutArg)
{
    SSI_nERROR enErrorReg;
    UBase_t uxDataReg;
    uint16_t u16DataReg;

    uxDataReg = 0UL;
    enErrorReg = SSI_enERROR_OK;
    if(0UL == (uintptr_t) pu16DataArg)
    {
        enErrorReg = SSI_enERROR_POINTER;
    }
    if(SSI_enERROR_OK == enErrorReg)
    {
        enErrorReg = SSI__enGetDataTimeOut(enModuleArg, &uxDataReg, uxTimeoutArg);
    }
    if(SSI_enERROR_OK == enErrorReg)
    {
        u16DataReg = (uint16_t) uxDataReg;
        *pu16DataArg = (uint16_t) u16DataReg;
    }
    return (enErrorReg);
}

SSI_nERROR SSI__enGetFifoDataTimeOut(SSI_nMODULE enModuleArg, UBase_t* puxDataArg, UBase_t* puxCount, UBase_t uxTimeoutArg)
{
    SSI_nERROR enErrorReg;
    UBase_t uxCountReg;
    UBase_t uxInitialCountReg;

    uxInitialCountReg = 0UL;
    uxCountReg = 0UL;
    enErrorReg = SSI_enERROR_OK;
    if(0UL == (uintptr_t) puxCount)
    {
        enErrorReg = SSI_enERROR_POINTER;
    }
    if(SSI_enERROR_OK == enErrorReg)
    {
        uxCountReg = *puxCount;
        uxInitialCountReg = *puxCount;
        if(0UL == uxCountReg)
        {
            enErrorReg = SSI_enERROR_VALUE;
        }
    }
    if(SSI_enERROR_OK == enErrorReg)
    {
        do
        {
            enErrorReg = SSI__enGetDataTimeOut(enModuleArg, puxDataArg, uxTimeoutArg);
            if(SSI_enERROR_OK == enErrorReg)
            {
                puxDataArg += 1UL;
            }
        }while((SSI_enERROR_OK == enErrorReg) && (0UL != uxCountReg));
    }
    if((SSI_enERROR_OK == enErrorReg) || (SSI_enERROR_TIMEOUT == enErrorReg))
    {
        *puxCount = uxInitialCountReg - uxCountReg ;
    }
    return (enErrorReg);
}

SSI_nERROR SSI__enGetFifoDataByteTimeOut(SSI_nMODULE enModuleArg, uint8_t* pu8DataArg, UBase_t* puxCount, UBase_t uxTimeoutArg)
{
    SSI_nERROR enErrorReg;
    UBase_t uxCountReg;
    UBase_t uxDataReg;
    uint8_t u8DataReg;
    UBase_t uxInitialCountReg;

    uxInitialCountReg = 0UL;
    uxCountReg = 0UL;
    enErrorReg = SSI_enERROR_OK;
    if((0UL == (uintptr_t) puxCount) || (0UL == (uintptr_t) pu8DataArg))
    {
        enErrorReg = SSI_enERROR_POINTER;
    }
    if(SSI_enERROR_OK == enErrorReg)
    {
        uxCountReg = *puxCount;
        uxInitialCountReg = *puxCount;
        if(0UL == uxCountReg)
        {
            enErrorReg = SSI_enERROR_VALUE;
        }
    }
    if(SSI_enERROR_OK == enErrorReg)
    {
        do
        {
            enErrorReg = SSI__enGetDataTimeOut(enModuleArg, &uxDataReg, uxTimeoutArg);
            if(SSI_enERROR_OK == enErrorReg)
            {
                u8DataReg = (uint8_t) uxDataReg;
                *pu8DataArg = (uint8_t) u8DataReg;
                pu8DataArg += 1UL;
            }
        }while((SSI_enERROR_OK == enErrorReg) && (0UL != uxCountReg));
    }
    if((SSI_enERROR_OK == enErrorReg) || (SSI_enERROR_TIMEOUT == enErrorReg))
    {
        *puxCount = uxInitialCountReg - uxCountReg ;
    }
    return (enErrorReg);
}

SSI_nERROR SSI__enGetFifoDataHalfWordTimeOut(SSI_nMODULE enModuleArg, uint16_t* pu16DataArg, UBase_t* puxCount, UBase_t uxTimeoutArg)
{
    SSI_nERROR enErrorReg;
    UBase_t uxCountReg;
    UBase_t uxDataReg;
    uint16_t u16DataReg;
    UBase_t uxInitialCountReg;

    uxInitialCountReg = 0UL;
    uxCountReg = 0UL;
    enErrorReg = SSI_enERROR_OK;
    if((0UL == (uintptr_t) puxCount) || (0UL == (uintptr_t) pu16DataArg))
    {
        enErrorReg = SSI_enERROR_POINTER;
    }
    if(SSI_enERROR_OK == enErrorReg)
    {
        uxCountReg = *puxCount;
        uxInitialCountReg = *puxCount;
        if(0UL == uxCountReg)
        {
            enErrorReg = SSI_enERROR_VALUE;
        }
    }
    if(SSI_enERROR_OK == enErrorReg)
    {
        do
        {
            enErrorReg = SSI__enGetDataTimeOut(enModuleArg, &uxDataReg, uxTimeoutArg);
            if(SSI_enERROR_OK == enErrorReg)
            {
                u16DataReg = (uint16_t) uxDataReg;
                *pu16DataArg = (uint16_t) u16DataReg;
                pu16DataArg += 1UL;
            }
        }while((SSI_enERROR_OK == enErrorReg) && (0UL != uxCountReg));
    }
    if((SSI_enERROR_OK == enErrorReg) || (SSI_enERROR_TIMEOUT == enErrorReg))
    {
        *puxCount = uxInitialCountReg - uxCountReg ;
    }
    return (enErrorReg);
}

SSI_nERROR SSI__enGetFifoData(SSI_nMODULE enModuleArg, UBase_t* puxDataArg, UBase_t* puxCount)
{
    SSI_nERROR enErrorReg;
    enErrorReg = SSI__enGetFifoDataTimeOut(enModuleArg, puxDataArg, puxCount, 0UL);
    return (enErrorReg);
}

SSI_nERROR SSI__enGetFifoDataByte(SSI_nMODULE enModuleArg, uint8_t* pu8DataArg, UBase_t* puxCount)
{
    SSI_nERROR enErrorReg;
    enErrorReg = SSI__enGetFifoDataByteTimeOut(enModuleArg, pu8DataArg, puxCount, 0UL);
    return (enErrorReg);
}

SSI_nERROR SSI__enGetFifoDataHalfWord(SSI_nMODULE enModuleArg, uint16_t* pu16DataArg, UBase_t* puxCount)
{
    SSI_nERROR enErrorReg;
    enErrorReg = SSI__enGetFifoDataHalfWordTimeOut(enModuleArg, pu16DataArg, puxCount, 0UL);
    return (enErrorReg);
}



