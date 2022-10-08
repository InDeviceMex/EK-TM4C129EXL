/**
 *
 * @file SCB_WakeUp.c
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
#include <xDriver_MCU/Core/SCB/Driver/xHeader/SCB_WakeUp.h>

#include <xDriver_MCU/Core/SCB/Peripheral/SCB_Peripheral.h>
#include <xDriver_MCU/Core/SCB/Driver/Intrinsics/Primitives/SCB_Primitives.h>

SCB_nERROR SCB__enSetWakeUpSource(SCB_nMODULE enModuleArg, SCB_nWAKEUP enSourceArg)
{
    SCB_Register_t stRegister;
    SCB_nERROR enErrorReg;

    stRegister.uxShift = SCB_SCR_R_SEVONPEND_BIT;
    stRegister.uxMask = SCB_SCR_SEVONPEND_MASK;
    stRegister.uptrAddress = SCB_SCR_OFFSET;
    stRegister.uxValue = (UBase_t) enSourceArg;
    enErrorReg = SCB__enWriteRegister(enModuleArg, &stRegister);

    return (enErrorReg);
}

SCB_nERROR SCB__enGetWakeUpSource(SCB_nMODULE enModuleArg, SCB_nWAKEUP* enSourceArg)
{
    SCB_Register_t stRegister;
    SCB_nERROR enErrorReg;

    enErrorReg = SCB_enERROR_OK;
    if(0UL == (uintptr_t) enSourceArg)
    {
        enErrorReg = SCB_enERROR_POINTER;
    }
    if(SCB_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = SCB_SCR_R_SEVONPEND_BIT;
        stRegister.uxMask = SCB_SCR_SEVONPEND_MASK;
        stRegister.uptrAddress = SCB_SCR_OFFSET;
        enErrorReg = SCB__enReadRegister(enModuleArg, &stRegister);
    }
    if(SCB_enERROR_OK == enErrorReg)
    {
        *enSourceArg = (SCB_nWAKEUP) stRegister.uxValue;
    }
    return (enErrorReg);
}

