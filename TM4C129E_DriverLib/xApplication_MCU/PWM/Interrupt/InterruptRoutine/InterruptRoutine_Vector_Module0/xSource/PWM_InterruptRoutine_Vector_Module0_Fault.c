/**
 *
 * @file PWM_InterruptRoutine_Vector_Module0_Fault.c
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
 * @verbatim 9 ene. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 9 ene. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xApplication_MCU/PWM/Interrupt/InterruptRoutine/InterruptRoutine_Vector_Module0/xHeader/PWM_InterruptRoutine_Vector_Module0_Fault.h>

#include <xApplication_MCU/PWM/Intrinsics/xHeader/PWM_Dependencies.h>

void PWM0_Fault__vIRQVectorHandler(void)
{
    volatile uint32_t u32Reg = 0UL;
    volatile uint32_t u32Ready = 0U;
    void(*pvfCallback)(void)  = (void(*)(void)) 0UL;

    u32Ready = SYSCTL_PRPWM_R;
    if(SYSCTL_PRPWM_R_PWM0_NOREADY == (SYSCTL_PRPWM_R_PWM0_MASK & u32Ready))
    {
        pvfCallback = PWM_Fault__pvfGetIRQSourceHandler(PWM_enMODULE_0,
                                                     PWM_enFAULT_0, PWM_enFAULT_INTERRUPT_SW);
        pvfCallback();

        pvfCallback = PWM_Fault__pvfGetIRQSourceHandler(PWM_enMODULE_0,
                                                     PWM_enFAULT_1, PWM_enFAULT_INTERRUPT_SW);
        pvfCallback();

        pvfCallback = PWM_Fault__pvfGetIRQSourceHandler(PWM_enMODULE_0,
                                                     PWM_enFAULT_2, PWM_enFAULT_INTERRUPT_SW);
        pvfCallback();

        pvfCallback = PWM_Fault__pvfGetIRQSourceHandler(PWM_enMODULE_0,
                                                     PWM_enFAULT_3, PWM_enFAULT_INTERRUPT_SW);
        pvfCallback();
    }
    else
    {
        u32Reg = PWM0_ISC_R;
        if(0UL == (PWM_enFAULTMASK_ALL & u32Reg))
        {
            pvfCallback = PWM_Fault__pvfGetIRQSourceHandler(PWM_enMODULE_0,
                                                         PWM_enFAULT_0, PWM_enFAULT_INTERRUPT_SW);
            pvfCallback();

            pvfCallback = PWM_Fault__pvfGetIRQSourceHandler(PWM_enMODULE_0,
                                                         PWM_enFAULT_1, PWM_enFAULT_INTERRUPT_SW);
            pvfCallback();

            pvfCallback = PWM_Fault__pvfGetIRQSourceHandler(PWM_enMODULE_0,
                                                         PWM_enFAULT_2, PWM_enFAULT_INTERRUPT_SW);
            pvfCallback();

            pvfCallback = PWM_Fault__pvfGetIRQSourceHandler(PWM_enMODULE_0,
                                                         PWM_enFAULT_3, PWM_enFAULT_INTERRUPT_SW);
            pvfCallback();
        }
        else
        {
            if(PWM_enFAULTMASK_0 & u32Reg)
            {
                PWM0_ISC_R = (uint32_t) PWM_enFAULTMASK_0;
                pvfCallback = PWM_Fault__pvfGetIRQSourceHandler(PWM_enMODULE_0,
                                                                 PWM_enFAULT_0,
                                                                 PWM_enFAULT_INTERRUPT_FAULT);
                pvfCallback();
            }
            if(PWM_enFAULTMASK_1 & u32Reg)
            {
                PWM0_ISC_R = (uint32_t) PWM_enFAULTMASK_1;
                pvfCallback = PWM_Fault__pvfGetIRQSourceHandler(PWM_enMODULE_0,
                                                                 PWM_enFAULT_1,
                                                                 PWM_enFAULT_INTERRUPT_FAULT);
                pvfCallback();
            }
            if(PWM_enFAULTMASK_2 & u32Reg)
            {
                PWM0_ISC_R = (uint32_t) PWM_enFAULTMASK_2;
                pvfCallback = PWM_Fault__pvfGetIRQSourceHandler(PWM_enMODULE_0,
                                                                 PWM_enFAULT_2,
                                                                 PWM_enFAULT_INTERRUPT_FAULT);
                pvfCallback();
            }
            if(PWM_enFAULTMASK_3 & u32Reg)
            {
                PWM0_ISC_R = (uint32_t) PWM_enFAULTMASK_3;
                pvfCallback = PWM_Fault__pvfGetIRQSourceHandler(PWM_enMODULE_0,
                                                                 PWM_enFAULT_3,
                                                                 PWM_enFAULT_INTERRUPT_FAULT);
                pvfCallback();
            }
        }
    }
}
