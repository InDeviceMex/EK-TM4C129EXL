/**
 *
 * @file UART_Data.c
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
 * @verbatim 24 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 24 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/UART/Driver/xHeader/UART_Data.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/UART/Driver/Flags/xHeader/UART_FifoRx.h>
#include <xDriver_MCU/UART/Driver/Flags/xHeader/UART_FifoTx.h>
#include <xDriver_MCU/UART/Driver/Intrinsics/Primitives/UART_Primitives.h>
#include <xDriver_MCU/UART/Peripheral/UART_Peripheral.h>


UART_nERROR UART__enSetData(UART_nMODULE enModuleArg, UBase_t uxDataArg)
{
    UART_Register_t stRegister;
    UART_nERROR enErrorReg;
    UART_nBOOLEAN enIsFifoFull;

    enIsFifoFull = UART_enFALSE;
    enErrorReg = UART__enIsTransmitFifoFull(enModuleArg, &enIsFifoFull);
    if(UART_enERROR_OK == enErrorReg)
    {
        if(UART_enTRUE == enIsFifoFull)
        {
            enErrorReg = UART_enERROR_FULL;
        }
    }
    if(UART_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = UART_DR_R_DATA_BIT;
        stRegister.uxMask = MCU_MASK_32;
        stRegister.uptrAddress = UART_DR_OFFSET;
        stRegister.uxValue = (UBase_t) uxDataArg;
        enErrorReg = UART__enWriteRegister(enModuleArg, &stRegister);
    }
    return (enErrorReg);
}

UART_nERROR UART__enSetDataByte(UART_nMODULE enModuleArg, uint8_t u8DataArg)
{
    UART_nERROR enErrorReg;
    enErrorReg = UART__enSetData(enModuleArg, (UBase_t) u8DataArg);
    return (enErrorReg);
}

UART_nERROR UART__enSetDataTimeOut(UART_nMODULE enModuleArg, UBase_t uxDataArg, UBase_t uxTimeoutArg)
{
    UART_nERROR enErrorReg;
    if(0UL == uxTimeoutArg)
    {
        do{
            enErrorReg = UART__enSetData(enModuleArg, uxDataArg);
        }while(UART_enERROR_FULL == enErrorReg);
    }
    else
    {
        UBase_t uxTimeoutReg;
        uxTimeoutReg = uxTimeoutArg;
        do{
            enErrorReg = UART__enSetData(enModuleArg, uxDataArg);
            if(UART_enERROR_OK == enErrorReg)
            {
                uxTimeoutReg = uxTimeoutArg;
            }
            else
            {
                uxTimeoutReg --;
            }
        }while((UART_enERROR_FULL == enErrorReg) && (0UL != uxTimeoutReg));

        if((UART_enERROR_FULL == enErrorReg) && (0UL == uxTimeoutReg))
        {
            enErrorReg = UART_enERROR_TIMEOUT;
        }
    }
    return (enErrorReg);
}

UART_nERROR UART__enSetDataByteTimeOut(UART_nMODULE enModuleArg, uint8_t u8DataArg, UBase_t uxTimeoutArg)
{
    UART_nERROR enErrorReg;
    enErrorReg = UART__enSetDataTimeOut(enModuleArg, (UBase_t) u8DataArg, uxTimeoutArg);
    return (enErrorReg);
}


UART_nERROR UART__enSetFifoDataTimeOut(UART_nMODULE enModuleArg, const UBase_t* puxDataArg, UBase_t* puxCount, UBase_t uxTimeoutArg)
{
    UART_nERROR enErrorReg;
    UBase_t uxCountReg;
    UBase_t uxInitialCountReg;

    uxInitialCountReg = 0UL;
    uxCountReg = 0UL;
    enErrorReg = UART_enERROR_OK;
    if((0UL == (uintptr_t) puxCount) || (0UL == (uintptr_t) puxDataArg))
    {
        enErrorReg = UART_enERROR_POINTER;
    }
    if(UART_enERROR_OK == enErrorReg)
    {
        uxCountReg = *puxCount;
        uxInitialCountReg = *puxCount;
        if(0UL == uxCountReg)
        {
            enErrorReg = UART_enERROR_VALUE;
        }
    }
    if(UART_enERROR_OK == enErrorReg)
    {
        do
        {
            enErrorReg = UART__enSetDataTimeOut(enModuleArg, *puxDataArg, uxTimeoutArg);
            if(UART_enERROR_OK == enErrorReg)
            {
                puxDataArg += 1UL;
                uxCountReg -= 1UL;
            }
        }while((UART_enERROR_OK == enErrorReg) && (0UL != uxCountReg));
    }
    if((UART_enERROR_OK == enErrorReg) || (UART_enERROR_TIMEOUT == enErrorReg))
    {
        *puxCount = uxInitialCountReg - uxCountReg ;
    }
    return (enErrorReg);
}


UART_nERROR UART__enSetFifoDataByteTimeOut(UART_nMODULE enModuleArg, const uint8_t* pu8DataArg, UBase_t* puxCount, UBase_t uxTimeoutArg)
{
    UART_nERROR enErrorReg;
    UBase_t uxCountReg;
    UBase_t uxDataReg;
    uint8_t u8DataReg;
    UBase_t uxInitialCountReg;

    uxInitialCountReg = 0UL;
    uxCountReg = 0UL;
    enErrorReg = UART_enERROR_OK;
    if((0UL == (uintptr_t) puxCount) || (0UL == (uintptr_t) pu8DataArg))
    {
        enErrorReg = UART_enERROR_POINTER;
    }
    if(UART_enERROR_OK == enErrorReg)
    {
        uxCountReg = *puxCount;
        uxInitialCountReg = *puxCount;
        if(0UL == uxCountReg)
        {
            enErrorReg = UART_enERROR_VALUE;
        }
    }
    if(UART_enERROR_OK == enErrorReg)
    {
        do
        {
            u8DataReg = *pu8DataArg;
            uxDataReg = (UBase_t) u8DataReg;
            enErrorReg = UART__enSetDataTimeOut(enModuleArg, uxDataReg, uxTimeoutArg);
            if(UART_enERROR_OK == enErrorReg)
            {
                pu8DataArg += 1UL;
                uxCountReg -= 1UL;
            }
        }while((UART_enERROR_OK == enErrorReg) && (0UL != uxCountReg));
    }
    if((UART_enERROR_OK == enErrorReg) || (UART_enERROR_TIMEOUT == enErrorReg))
    {
        *puxCount = uxInitialCountReg - uxCountReg ;
    }
    return (enErrorReg);
}


UART_nERROR UART__enSetFifoData(UART_nMODULE enModuleArg, const UBase_t* puxDataArg, UBase_t* puxCount)
{
    UART_nERROR enErrorReg;
    enErrorReg = UART__enSetFifoDataTimeOut(enModuleArg, puxDataArg, puxCount, 0UL);
    return (enErrorReg);
}

UART_nERROR UART__enSetFifoDataByte(UART_nMODULE enModuleArg, const uint8_t* pu8DataArg, UBase_t* puxCount)
{
    UART_nERROR enErrorReg;
    enErrorReg = UART__enSetFifoDataByteTimeOut(enModuleArg, pu8DataArg, puxCount, 0UL);
    return (enErrorReg);
}


UART_nERROR UART__enSetFifoDataConstTimeOut(UART_nMODULE enModuleArg, UBase_t uxDataArg, UBase_t* puxCount, UBase_t uxTimeoutArg)
{
    UART_nERROR enErrorReg;
    UBase_t uxCountReg;
    UBase_t uxInitialCountReg;

    uxInitialCountReg = 0UL;
    uxCountReg = 0UL;
    enErrorReg = UART_enERROR_OK;
    if(0UL == (uintptr_t) puxCount)
    {
        enErrorReg = UART_enERROR_POINTER;
    }
    if(UART_enERROR_OK == enErrorReg)
    {
        uxCountReg = *puxCount;
        uxInitialCountReg = *puxCount;
        if(0UL == uxCountReg)
        {
            enErrorReg = UART_enERROR_VALUE;
        }
    }
    if(UART_enERROR_OK == enErrorReg)
    {
        do
        {
            enErrorReg = UART__enSetDataTimeOut(enModuleArg, uxDataArg, uxTimeoutArg);
            if(UART_enERROR_OK == enErrorReg)
            {
                uxCountReg -= 1UL;
            }
        }while((UART_enERROR_OK == enErrorReg) && (0UL != uxCountReg));
    }
    if((UART_enERROR_OK == enErrorReg) || (UART_enERROR_TIMEOUT == enErrorReg))
    {
        *puxCount = uxInitialCountReg - uxCountReg ;
    }
    return (enErrorReg);
}

UART_nERROR UART__enSetFifoDataConstByteTimeOut(UART_nMODULE enModuleArg, uint8_t u8DataArg, UBase_t* puxCount, UBase_t uxTimeoutArg)
{
    UART_nERROR enErrorReg;
    UBase_t uxCountReg;
    UBase_t uxDataReg;
    UBase_t uxInitialCountReg;

    uxInitialCountReg = 0UL;
    uxCountReg = 0UL;
    enErrorReg = UART_enERROR_OK;
    if(0UL == (uintptr_t) puxCount)
    {
        enErrorReg = UART_enERROR_POINTER;
    }
    if(UART_enERROR_OK == enErrorReg)
    {
        uxCountReg = *puxCount;
        uxInitialCountReg = *puxCount;
        if(0UL == uxCountReg)
        {
            enErrorReg = UART_enERROR_VALUE;
        }
    }
    if(UART_enERROR_OK == enErrorReg)
    {
        do
        {
            uxDataReg = (UBase_t) u8DataArg;
            enErrorReg = UART__enSetDataTimeOut(enModuleArg, uxDataReg, uxTimeoutArg);
            if(UART_enERROR_OK == enErrorReg)
            {
                uxCountReg -= 1UL;
            }
        }while((UART_enERROR_OK == enErrorReg) && (0UL != uxCountReg));
    }
    if((UART_enERROR_OK == enErrorReg) || (UART_enERROR_TIMEOUT == enErrorReg))
    {
        *puxCount = uxInitialCountReg - uxCountReg ;
    }
    return (enErrorReg);
}

UART_nERROR UART__enSetFifoDataConst(UART_nMODULE enModuleArg, UBase_t uxDataArg, UBase_t* puxCount)
{
    UART_nERROR enErrorReg;
    enErrorReg = UART__enSetFifoDataConstTimeOut(enModuleArg, uxDataArg, puxCount, 0UL);
    return (enErrorReg);
}

UART_nERROR UART__enSetFifoDataConstByte(UART_nMODULE enModuleArg, uint8_t u8DataArg, UBase_t* puxCount)
{
    UART_nERROR enErrorReg;
    enErrorReg = UART__enSetFifoDataConstByteTimeOut(enModuleArg, u8DataArg, puxCount, 0UL);
    return (enErrorReg);
}

UART_nERROR UART__enGetDataWithStatus(UART_nMODULE enModuleArg, UBase_t* puxDataArg)
{
    UART_Register_t stRegister;
    UART_nERROR enErrorReg;
    UART_nBOOLEAN enIsFifoEmpty;

    enIsFifoEmpty = UART_enFALSE;
    enErrorReg = UART_enERROR_OK;
    if(0UL == (uintptr_t) puxDataArg)
    {
        enErrorReg = UART_enERROR_POINTER;
    }
    if(UART_enERROR_OK == enErrorReg)
    {
        enErrorReg = UART__enIsReceiveFifoEmpty(enModuleArg, &enIsFifoEmpty);
    }
    if(UART_enERROR_OK == enErrorReg)
    {
        if(UART_enTRUE == enIsFifoEmpty)
        {
            enErrorReg = UART_enERROR_EMPTY;
        }
    }
    if(UART_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = UART_DR_R_DATA_BIT;
        stRegister.uxMask = MCU_MASK_32;
        stRegister.uptrAddress = UART_DR_OFFSET;
        enErrorReg = UART__enReadRegister(enModuleArg, &stRegister);
    }
    if(UART_enERROR_OK == enErrorReg)
    {
        *puxDataArg = (UBase_t) stRegister.uxValue;
    }

    return (enErrorReg);
}


UART_nERROR UART__enGetData(UART_nMODULE enModuleArg, UBase_t* puxDataArg)
{
    UART_Register_t stRegister;
    UART_nERROR enErrorReg;
    UART_nBOOLEAN enIsFifoEmpty;

    enIsFifoEmpty = UART_enFALSE;
    enErrorReg = UART_enERROR_OK;
    if(0UL == (uintptr_t) puxDataArg)
    {
        enErrorReg = UART_enERROR_POINTER;
    }
    if(UART_enERROR_OK == enErrorReg)
    {
        enErrorReg = UART__enIsReceiveFifoEmpty(enModuleArg, &enIsFifoEmpty);
    }
    if(UART_enERROR_OK == enErrorReg)
    {
        if(UART_enTRUE == enIsFifoEmpty)
        {
            enErrorReg = UART_enERROR_EMPTY;
        }
    }
    if(UART_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = UART_DR_R_DATA_BIT;
        stRegister.uxMask = UART_DR_DATA_MASK;
        stRegister.uptrAddress = UART_DR_OFFSET;
        enErrorReg = UART__enReadRegister(enModuleArg, &stRegister);
    }
    if(UART_enERROR_OK == enErrorReg)
    {
        *puxDataArg = (UBase_t) stRegister.uxValue;
    }

    return (enErrorReg);
}


UART_nERROR UART__enGetDataByte(UART_nMODULE enModuleArg, uint8_t* pu8DataArg)
{
    UART_nERROR enErrorReg;
    UBase_t uxDataReg;
    uint8_t u8DataReg;

    uxDataReg = 0UL;
    enErrorReg = UART_enERROR_OK;
    if(0UL == (uintptr_t) pu8DataArg)
    {
        enErrorReg = UART_enERROR_POINTER;
    }
    if(UART_enERROR_OK == enErrorReg)
    {
        enErrorReg = UART__enGetData(enModuleArg, &uxDataReg);
    }
    if(UART_enERROR_OK == enErrorReg)
    {
        u8DataReg = (uint8_t) uxDataReg;
        *pu8DataArg = (uint8_t) u8DataReg;
    }
    return (enErrorReg);
}


UART_nERROR UART__enGetDataWithStatusTimeOut(UART_nMODULE enModuleArg, UBase_t* puxDataArg, UBase_t uxTimeoutArg)
{
    UART_nERROR enErrorReg;
    enErrorReg = UART_enERROR_OK;
    if(0UL == (uintptr_t) puxDataArg)
    {
        enErrorReg = UART_enERROR_POINTER;
    }
    if(UART_enERROR_OK == enErrorReg)
    {
        if(0UL == uxTimeoutArg)
        {
            do{
                enErrorReg = UART__enGetDataWithStatus(enModuleArg, puxDataArg);
            }while(UART_enERROR_EMPTY == enErrorReg);
        }
        else
        {
            UBase_t uxTimeoutReg = uxTimeoutArg;
            do{
                enErrorReg = UART__enGetDataWithStatus(enModuleArg, puxDataArg);
                if(UART_enERROR_OK == enErrorReg)
                {
                    uxTimeoutReg = uxTimeoutArg;
                }
                else
                {
                    uxTimeoutReg --;
                }
            }while((UART_enERROR_EMPTY == enErrorReg) && (0UL != uxTimeoutReg));

            if((UART_enERROR_EMPTY == enErrorReg) && (0UL == uxTimeoutReg))
            {
                enErrorReg = UART_enERROR_TIMEOUT;
            }
        }
    }
    return (enErrorReg);
}

UART_nERROR UART__enGetDataTimeOut(UART_nMODULE enModuleArg, UBase_t* puxDataArg, UBase_t uxTimeoutArg)
{
    UART_nERROR enErrorReg;
    enErrorReg = UART_enERROR_OK;
    if(0UL == (uintptr_t) puxDataArg)
    {
        enErrorReg = UART_enERROR_POINTER;
    }
    if(UART_enERROR_OK == enErrorReg)
    {
        if(0UL == uxTimeoutArg)
        {
            do{
                enErrorReg = UART__enGetData(enModuleArg, puxDataArg);
            }while(UART_enERROR_EMPTY == enErrorReg);
        }
        else
        {
            UBase_t uxTimeoutReg = uxTimeoutArg;
            do{
                enErrorReg = UART__enGetData(enModuleArg, puxDataArg);
                if(UART_enERROR_OK == enErrorReg)
                {
                    uxTimeoutReg = uxTimeoutArg;
                }
                else
                {
                    uxTimeoutReg --;
                }
            }while((UART_enERROR_EMPTY == enErrorReg) && (0UL != uxTimeoutReg));

            if((UART_enERROR_EMPTY == enErrorReg) && (0UL == uxTimeoutReg))
            {
                enErrorReg = UART_enERROR_TIMEOUT;
            }
        }
    }
    return (enErrorReg);
}


UART_nERROR UART__enGetDataByteTimeOut(UART_nMODULE enModuleArg, uint8_t* pu8DataArg, UBase_t uxTimeoutArg)
{
    UART_nERROR enErrorReg;
    UBase_t uxDataReg;
    uint8_t u8DataReg;

    uxDataReg = 0UL;
    enErrorReg = UART_enERROR_OK;
    if(0UL == (uintptr_t) pu8DataArg)
    {
        enErrorReg = UART_enERROR_POINTER;
    }
    if(UART_enERROR_OK == enErrorReg)
    {
        enErrorReg = UART__enGetDataTimeOut(enModuleArg, &uxDataReg, uxTimeoutArg);
    }
    if(UART_enERROR_OK == enErrorReg)
    {
        u8DataReg = (uint8_t) uxDataReg;
        *pu8DataArg = (uint8_t) u8DataReg;
    }
    return (enErrorReg);
}


UART_nERROR UART__enGetFifoDataWithStatusTimeOut(UART_nMODULE enModuleArg, UBase_t* puxDataArg, UBase_t* puxCount, UBase_t uxTimeoutArg)
{
    UART_nERROR enErrorReg;
    UBase_t uxCountReg;
    UBase_t uxInitialCountReg;

    uxInitialCountReg = 0UL;
    uxCountReg = 0UL;
    enErrorReg = UART_enERROR_OK;
    if(0UL == (uintptr_t) puxCount)
    {
        enErrorReg = UART_enERROR_POINTER;
    }
    if(UART_enERROR_OK == enErrorReg)
    {
        uxCountReg = *puxCount;
        uxInitialCountReg = *puxCount;
        if(0UL == uxCountReg)
        {
            enErrorReg = UART_enERROR_VALUE;
        }
    }
    if(UART_enERROR_OK == enErrorReg)
    {
        do
        {
            enErrorReg = UART__enGetDataWithStatusTimeOut(enModuleArg, puxDataArg, uxTimeoutArg);
            if(UART_enERROR_OK == enErrorReg)
            {
                puxDataArg += 1UL;
                uxCountReg -= 1UL;
            }
        }while((UART_enERROR_OK == enErrorReg) && (0UL != uxCountReg));
    }
    if((UART_enERROR_OK == enErrorReg) || (UART_enERROR_TIMEOUT == enErrorReg))
    {
        *puxCount = uxInitialCountReg - uxCountReg ;
    }
    return (enErrorReg);
}


UART_nERROR UART__enGetFifoDataTimeOut(UART_nMODULE enModuleArg, UBase_t* puxDataArg, UBase_t* puxCount, UBase_t uxTimeoutArg)
{
    UART_nERROR enErrorReg;
    UBase_t uxCountReg;
    UBase_t uxInitialCountReg;

    uxInitialCountReg = 0UL;
    uxCountReg = 0UL;
    enErrorReg = UART_enERROR_OK;
    if(0UL == (uintptr_t) puxCount)
    {
        enErrorReg = UART_enERROR_POINTER;
    }
    if(UART_enERROR_OK == enErrorReg)
    {
        uxCountReg = *puxCount;
        uxInitialCountReg = *puxCount;
        if(0UL == uxCountReg)
        {
            enErrorReg = UART_enERROR_VALUE;
        }
    }
    if(UART_enERROR_OK == enErrorReg)
    {
        do
        {
            enErrorReg = UART__enGetDataTimeOut(enModuleArg, puxDataArg, uxTimeoutArg);
            if(UART_enERROR_OK == enErrorReg)
            {
                puxDataArg += 1UL;
                uxCountReg -= 1UL;
            }
        }while((UART_enERROR_OK == enErrorReg) && (0UL != uxCountReg));
    }
    if((UART_enERROR_OK == enErrorReg) || (UART_enERROR_TIMEOUT == enErrorReg))
    {
        *puxCount = uxInitialCountReg - uxCountReg ;
    }
    return (enErrorReg);
}

UART_nERROR UART__enGetFifoDataByteTimeOut(UART_nMODULE enModuleArg, uint8_t* pu8DataArg, UBase_t* puxCount, UBase_t uxTimeoutArg)
{
    UART_nERROR enErrorReg;
    UBase_t uxCountReg;
    UBase_t uxDataReg;
    uint8_t u8DataReg;
    UBase_t uxInitialCountReg;

    uxInitialCountReg = 0UL;
    uxCountReg = 0UL;
    enErrorReg = UART_enERROR_OK;
    if((0UL == (uintptr_t) puxCount) || (0UL == (uintptr_t) pu8DataArg))
    {
        enErrorReg = UART_enERROR_POINTER;
    }
    if(UART_enERROR_OK == enErrorReg)
    {
        uxCountReg = *puxCount;
        uxInitialCountReg = *puxCount;
        if(0UL == uxCountReg)
        {
            enErrorReg = UART_enERROR_VALUE;
        }
    }
    if(UART_enERROR_OK == enErrorReg)
    {
        do
        {
            enErrorReg = UART__enGetDataTimeOut(enModuleArg, &uxDataReg, uxTimeoutArg);
            if(UART_enERROR_OK == enErrorReg)
            {
                u8DataReg = (uint8_t) uxDataReg;
                *pu8DataArg = (uint8_t) u8DataReg;
                pu8DataArg += 1UL;
                uxCountReg -= 1UL;
            }
        }while((UART_enERROR_OK == enErrorReg) && (0UL != uxCountReg));
    }
    if((UART_enERROR_OK == enErrorReg) || (UART_enERROR_TIMEOUT == enErrorReg))
    {
        *puxCount = uxInitialCountReg - uxCountReg ;
    }
    return (enErrorReg);
}


UART_nERROR UART__enGetFifoDataWithStatus(UART_nMODULE enModuleArg, UBase_t* puxDataArg, UBase_t* puxCount)
{
    UART_nERROR enErrorReg;
    enErrorReg = UART__enGetFifoDataWithStatusTimeOut(enModuleArg, puxDataArg, puxCount, 0UL);
    return (enErrorReg);
}

UART_nERROR UART__enGetFifoData(UART_nMODULE enModuleArg, UBase_t* puxDataArg, UBase_t* puxCount)
{
    UART_nERROR enErrorReg;
    enErrorReg = UART__enGetFifoDataTimeOut(enModuleArg, puxDataArg, puxCount, 0UL);
    return (enErrorReg);
}

UART_nERROR UART__enGetFifoDataByte(UART_nMODULE enModuleArg, uint8_t* pu8DataArg, UBase_t* puxCount)
{
    UART_nERROR enErrorReg;
    enErrorReg = UART__enGetFifoDataByteTimeOut(enModuleArg, pu8DataArg, puxCount, 0UL);
    return (enErrorReg);
}
