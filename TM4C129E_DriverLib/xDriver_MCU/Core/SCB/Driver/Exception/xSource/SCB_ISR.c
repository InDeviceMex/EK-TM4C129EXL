/**
 *
 * @file SCB_ISR.c
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
 * @verbatim 19 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 19 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/Core/SCB/Driver/Exception/xHeader/SCB_ISR.h>

#include <xDriver_MCU/Core/SCB/Peripheral/SCB_Peripheral.h>
#include <xDriver_MCU/Core/SCB/Driver/Intrinsics/Primitives/SCB_Primitives.h>


SCB_nERROR SCB_ISR__enGetPendingState(SCB_nMODULE enModuleArg, SCB_nPENDSTATE* enStateArg)
{
    SCB_Register_t stRegister;
    SCB_nERROR enErrorReg;

    if(0UL != (uintptr_t) enStateArg)
    {
        stRegister.u32Shift = SCB_ICSR_R_ISRPENDING_BIT;
        stRegister.u32Mask = SCB_ICSR_ISRPENDING_MASK;
        stRegister.uptrAddress = SCB_ICSR_OFFSET;
        enErrorReg = SCB__enReadRegister(enModuleArg, &stRegister);

        *enStateArg = (SCB_nPENDSTATE) stRegister.u32Value;
    }
    else
    {
        enErrorReg = SCB_enERROR_POINTER;
    }
    return (enErrorReg);
}

SCB_nERROR SCB_ISR__enGetVectorPending(SCB_nMODULE enModuleArg, SCB_nVECISR* enVectorArg)
{
    SCB_Register_t stRegister;
    SCB_nERROR enErrorReg;

    if(0UL != (uintptr_t) enVectorArg)
    {
        stRegister.u32Shift = SCB_ICSR_R_VECTPENDING_BIT;
        stRegister.u32Mask = SCB_ICSR_VECTPENDING_MASK;
        stRegister.uptrAddress = SCB_ICSR_OFFSET;
        enErrorReg = SCB__enReadRegister(enModuleArg, &stRegister);

        *enVectorArg = (SCB_nVECISR) stRegister.u32Value;
    }
    else
    {
        enErrorReg = SCB_enERROR_POINTER;
    }
    return (enErrorReg);
}

SCB_nERROR SCB_ISR__enGetVectorActive(SCB_nMODULE enModuleArg, SCB_nVECISR* enVectorArg)
{
    SCB_Register_t stRegister;
    SCB_nERROR enErrorReg;

    if(0UL != (uintptr_t) enVectorArg)
    {
        stRegister.u32Shift = SCB_ICSR_R_VECTACTIVE_BIT;
        stRegister.u32Mask = SCB_ICSR_VECTACTIVE_MASK;
        stRegister.uptrAddress = SCB_ICSR_OFFSET;
        enErrorReg = SCB__enReadRegister(enModuleArg, &stRegister);

        *enVectorArg = (SCB_nVECISR) stRegister.u32Value;
    }
    else
    {
        enErrorReg = SCB_enERROR_POINTER;
    }
    return (enErrorReg);
}

