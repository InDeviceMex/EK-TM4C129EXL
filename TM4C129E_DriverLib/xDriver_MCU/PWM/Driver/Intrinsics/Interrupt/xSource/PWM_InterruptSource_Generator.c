/**
 *
 * @file PWM_InterruptSource_Generator.c
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
 * @verbatim 28 dic. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 28 dic. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/Common/xHeader/MCU_CheckParams.h>
#include <xDriver_MCU/PWM/Driver/Intrinsics/Interrupt/xHeader/PWM_InterruptSource_Generator.h>
#include <xDriver_MCU/PWM/Peripheral/PWM_Peripheral.h>
#include <xDriver_MCU/PWM/Driver/Intrinsics/Primitives/PWM_Primitives.h>

void PWM_Generator__vEnInterrupt(PWM_nMODULE enModule, PWM_nGENMASK enGenArg)
{
    uint32_t u32Module = 0UL;
    uint32_t u32GenReg = 0UL;
    u32Module = MCU__u32CheckParams((uint32_t) enModule, (uint32_t) PWM_enMODULE_MAX);
    u32GenReg = (uint32_t) enGenArg;
    u32GenReg &= (uint32_t) PWM_enGENMASK_MAX;
    PWM__vWriteRegister((PWM_nMODULE) u32Module , PWM_INTEN_OFFSET,
                        u32GenReg, u32GenReg, PWM_INTEN_R_INTPWM0_BIT);
}

void PWM_Generator__vDisInterrupt(PWM_nMODULE enModule, PWM_nGENMASK enGenArg)
{
    uint32_t u32Module = 0UL;
    uint32_t u32GenReg = 0UL;
    u32Module = MCU__u32CheckParams((uint32_t) enModule, (uint32_t) PWM_enMODULE_MAX);
    u32GenReg = (uint32_t) enGenArg;
    u32GenReg &= (uint32_t) PWM_enGENMASK_MAX;
    PWM__vWriteRegister((PWM_nMODULE) u32Module , PWM_INTEN_OFFSET,
                        0UL, u32GenReg, PWM_INTEN_R_INTPWM0_BIT);
}
PWM_nGENMASK PWM_Generator__enStatusInterrupt(PWM_nMODULE enModule, PWM_nGENMASK enGenArg)
{
    PWM_nGENMASK enInterruptReg = PWM_enGENMASK_NONE;
    uint32_t u32Register = 0UL;
    uint32_t u32Module = 0UL;
    uint32_t u32GenReg = 0UL;
    u32Module = MCU__u32CheckParams((uint32_t) enModule, (uint32_t) PWM_enMODULE_MAX);
    u32GenReg = (uint32_t) enGenArg;
    u32GenReg &= (uint32_t) PWM_enGENMASK_MAX;
    u32Register = PWM__u32ReadRegister((PWM_nMODULE) u32Module , PWM_RIS_OFFSET,
                                       u32GenReg, PWM_RIS_R_INTPWM0_BIT);

    enInterruptReg = (PWM_nGENMASK) u32Register;
    return (enInterruptReg);
}
