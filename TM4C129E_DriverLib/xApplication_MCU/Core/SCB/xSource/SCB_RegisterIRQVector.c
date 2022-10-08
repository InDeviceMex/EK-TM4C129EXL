/**
 *
 * @file SCB_RegisterIRQVector.c
 * @copyright
 * @verbatim InDeviceMex 2021 @endverbatim
 *
 * @par Responsibility
 * @verbatim InDeviceMex Developers @endverbatim
 *
 * @version
 * @verbatim 1.0 @endverbatim
 *
 * @date
 * @verbatim 2 jul. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 2 jul. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xApplication_MCU/Core/SCB/xHeader/SCB_RegisterIRQVector.h>

#include <xApplication_MCU/Core/SCB/Intrinsics/xHeader/SCB_Dependencies.h>

SCB_nERROR SCB__enRegisterIRQVectorHandler(SCB_nMODULE enModuleArg,
                                           SCB_nVECISR enVectorArg,
                                           SCB_pvfIRQVectorHandler_t pfIrqVectorHandlerArg,
                                           SCB_pvfIRQVectorHandler_t* pfIrqVectorHandlerExternArg)
{
    UBase_t* puxBaseVectorReg;
    UBase_t uxFlashSizeInBytesReg;
    UBase_t uxVectorReg;
    UBase_t uxBaseVectorReg;
    uintptr_t uptrIrqVectorHandlerReg;
    SCB_nERROR enErrorReg;
    MCU_nSTATE enInterruptStateReg;

    uxFlashSizeInBytesReg = 0UL;
    uxVectorReg = 0UL;
    uxBaseVectorReg = 0UL;
    uptrIrqVectorHandlerReg = 0UL;
    enErrorReg = (SCB_nERROR) MCU__enCheckParams((UBase_t) enVectorArg, (UBase_t) SCB_enVECISR_MAX);
    if(SCB_enERROR_OK == enErrorReg)
    {
        if(0UL != (uintptr_t) pfIrqVectorHandlerArg)
        {
            uptrIrqVectorHandlerReg = (uintptr_t) pfIrqVectorHandlerArg;
            uptrIrqVectorHandlerReg |= 1UL;
        }
    }
    if(SCB_enERROR_OK == enErrorReg)
    {
        enErrorReg = SCB__enGetVectorOffset(enModuleArg, &uxBaseVectorReg);
    }
    if(SCB_enERROR_OK == enErrorReg)
    {
        enErrorReg = (SCB_nERROR) FLASH__enGetSizeInBytes(FLASH_enMODULE_0, &uxFlashSizeInBytesReg);
    }
    if(SCB_enERROR_OK == enErrorReg)
    {
        uxVectorReg = (UBase_t) enVectorArg;
        uxVectorReg <<= 2UL;
        uxBaseVectorReg += uxVectorReg;
        if(uxFlashSizeInBytesReg > uxBaseVectorReg)
        {
            enInterruptStateReg = MCU__enDisGlobalInterrupt();
            enErrorReg = (SCB_nERROR) FLASH__enWriteWorld(FLASH_enMODULE_0, uptrIrqVectorHandlerReg, uxBaseVectorReg);
            MCU__vSetGlobalInterrupt(enInterruptStateReg);
        }
        else
        {
            puxBaseVectorReg = (UBase_t*) uxBaseVectorReg;
            *puxBaseVectorReg = (UBase_t) uptrIrqVectorHandlerReg;
        }
    }
    if(SCB_enERROR_OK == enErrorReg)
    {
        if(0UL != (UBase_t) pfIrqVectorHandlerExternArg)
        {
            *pfIrqVectorHandlerExternArg = (SCB_pvfIRQVectorHandler_t) uptrIrqVectorHandlerReg;
        }
    }
    return (enErrorReg);
}

/*
void SCB__vUnRegisterIRQVectorHandler(SCB_nVECISR enVector)
{
    UBase_t uxBaseVectorReg = SCB_VTOR_R;

    if(uxBaseVectorReg <= 0x00010000U)
    {
        MCU__enDisGlobalInterrupt();
        FLASH__enWrite((UBase_t) IntDefaultHandler | 1, uxBaseVectorReg+((UBase_t) enVector*4U));
        MCU__vEnGlobalInterrupt();
    }
    else if((uxBaseVectorReg >= 0x20000000U) && (uxBaseVectorReg <= 0x20000400U) )
    {
        *((UBase_t*)uxBaseVectorReg+(UBase_t) enVector)=(UBase_t) IntDefaultHandler | 1;
    }
}
*/
