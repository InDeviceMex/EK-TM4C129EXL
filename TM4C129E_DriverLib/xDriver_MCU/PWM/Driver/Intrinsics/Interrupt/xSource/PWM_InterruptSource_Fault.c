/**
 *
 * @file PWM_InterruptSource_Fault.c
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
 * @verbatim 26 dic. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 26 dic. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/PWM/Driver/Intrinsics/Interrupt/xHeader/PWM_InterruptSource_Fault.h>

#include <xDriver_MCU/Common/xHeader/MCU_CheckParams.h>
#include <xDriver_MCU/PWM/Peripheral/PWM_Peripheral.h>
#include <xDriver_MCU/PWM/Driver/Intrinsics/Primitives/PWM_Primitives.h>

void PWM_Fault__vEnInterrupt(PWM_nMODULE enModule, PWM_nFAULTMASK enFaultArg)
{
    uint32_t u32Module = 0UL;
    uint32_t u32FaultReg = 0UL;
    u32Module = MCU__u32CheckParams((uint32_t) enModule, (uint32_t) PWM_enMODULE_MAX);
    u32FaultReg = (uint32_t) enFaultArg;
    u32FaultReg &= (uint32_t) PWM_enFAULTMASK_ALL;
    PWM__vWriteRegister((PWM_nMODULE) u32Module , PWM_INTEN_OFFSET,
                        u32FaultReg, u32FaultReg, PWM_INTEN_R_INTFAULT0_BIT);
}

void PWM_Fault__vDisInterrupt(PWM_nMODULE enModule, PWM_nFAULTMASK enFaultArg)
{
    uint32_t u32Module = 0UL;
    uint32_t u32FaultReg = 0UL;
    u32Module = MCU__u32CheckParams((uint32_t) enModule, (uint32_t) PWM_enMODULE_MAX);
    u32FaultReg = (uint32_t) enFaultArg;
    u32FaultReg &= (uint32_t) PWM_enFAULTMASK_ALL;
    PWM__vWriteRegister((PWM_nMODULE) u32Module , PWM_INTEN_OFFSET,
                        0UL, u32FaultReg, PWM_INTEN_R_INTFAULT0_BIT);
}

void PWM_Fault__vClearInterrupt(PWM_nMODULE enModule, PWM_nFAULTMASK enFaultArg)
{
    uint32_t u32Module = 0UL;
    uint32_t u32FaultReg = 0UL;
    u32Module = MCU__u32CheckParams((uint32_t) enModule, (uint32_t) PWM_enMODULE_MAX);
    u32FaultReg = (uint32_t) enFaultArg;
    u32FaultReg &= (uint32_t) PWM_enFAULTMASK_ALL;
    PWM__vWriteRegister((PWM_nMODULE) u32Module, PWM_ISC_OFFSET,
                        u32FaultReg, u32FaultReg, PWM_ISC_R_INTFAULT0_BIT);
}

PWM_nFAULTMASK PWM_Fault__enStatusInterrupt(PWM_nMODULE enModule, PWM_nFAULTMASK enFaultArg)
{
    PWM_nFAULTMASK enInterruptReg = PWM_enFAULTMASK_NONE;
    uint32_t u32Register = 0UL;
    uint32_t u32Module = 0UL;
    uint32_t u32FaultReg = 0UL;
    u32Module = MCU__u32CheckParams((uint32_t) enModule, (uint32_t) PWM_enMODULE_MAX);
    u32FaultReg = (uint32_t) enFaultArg;
    u32FaultReg &= (uint32_t) PWM_enFAULTMASK_ALL;
    u32Register = PWM__u32ReadRegister((PWM_nMODULE) u32Module , PWM_RIS_OFFSET,
                                       u32FaultReg, PWM_RIS_R_INTFAULT0_BIT);

    enInterruptReg = (PWM_nFAULTMASK) u32Register;
    return (enInterruptReg);
}
