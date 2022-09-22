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
    uint32_t* pu32BaseVectorReg;
    uint32_t u32FlashSizeInBytesReg;
    uint32_t u32VectorReg;
    uint32_t u32BaseVectorReg;
    uintptr_t uptrIrqVectorHandlerReg;
    SCB_nERROR enErrorReg;
    MCU_nSTATE enInterruptStateReg;

    u32FlashSizeInBytesReg = 0UL;
    u32VectorReg = 0UL;
    u32BaseVectorReg = 0UL;
    uptrIrqVectorHandlerReg = 0UL;
    enErrorReg = (SCB_nERROR) MCU__enCheckParams((uint32_t) enVectorArg, (uint32_t) SCB_enVECISR_MAX);
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
        enErrorReg = SCB__enGetVectorOffset(enModuleArg, &u32BaseVectorReg);
    }
    if(SCB_enERROR_OK == enErrorReg)
    {
        enErrorReg = (SCB_nERROR) FLASH__enGetSizeInBytes(FLASH_enMODULE_0, &u32FlashSizeInBytesReg);
    }
    if(SCB_enERROR_OK == enErrorReg)
    {
        u32VectorReg = (uint32_t) enVectorArg;
        u32VectorReg <<= 2UL;
        u32BaseVectorReg += u32VectorReg;
        if(u32FlashSizeInBytesReg > u32BaseVectorReg)
        {
            enInterruptStateReg = MCU__enDisGlobalInterrupt();
            enErrorReg = (SCB_nERROR) FLASH__enWriteWorld(FLASH_enMODULE_0, uptrIrqVectorHandlerReg, u32BaseVectorReg);
            MCU__vSetGlobalInterrupt(enInterruptStateReg);
        }
        else
        {
            pu32BaseVectorReg = (uint32_t*) u32BaseVectorReg;
            *pu32BaseVectorReg = (uint32_t) uptrIrqVectorHandlerReg;
        }
    }
    if(SCB_enERROR_OK == enErrorReg)
    {
        if(0UL != (uint32_t) pfIrqVectorHandlerExternArg)
        {
            *pfIrqVectorHandlerExternArg = (SCB_pvfIRQVectorHandler_t) uptrIrqVectorHandlerReg;
        }
    }
    return (enErrorReg);
}

/*
void SCB__vUnRegisterIRQVectorHandler(SCB_nVECISR enVector)
{
    uint32_t u32BaseVectorReg = SCB_VTOR_R;

    if(u32BaseVectorReg <= 0x00010000U)
    {
        MCU__enDisGlobalInterrupt();
        FLASH__enWrite((uint32_t) IntDefaultHandler | 1, u32BaseVectorReg+((uint32_t) enVector*4U));
        MCU__vEnGlobalInterrupt();
    }
    else if((u32BaseVectorReg >= 0x20000000U) && (u32BaseVectorReg <= 0x20000400U) )
    {
        *((uint32_t*)u32BaseVectorReg+(uint32_t) enVector)=(uint32_t) IntDefaultHandler | 1;
    }
}
*/
