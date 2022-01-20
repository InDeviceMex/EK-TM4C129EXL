/**
 *
 * @file PWM_InterruptRoutine_Vector_Module0_GEN3.c
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
#include <xApplication_MCU/PWM/Interrupt/InterruptRoutine/InterruptRoutine_Vector_Module0/xHeader/PWM_InterruptRoutine_Vector_Module0_GEN3.h>

#include <xApplication_MCU/PWM/Intrinsics/xHeader/PWM_Dependencies.h>

void PWM0_GEN3__vIRQVectorHandler(void)
{
    volatile uint32_t u32Reg = 0UL;
    volatile uint32_t u32Ready = 0U;
    volatile uint32_t u32RegSource = 0UL;
    void(*pvfCallback)(void)  = (void(*)(void)) 0UL;

    u32Ready = SYSCTL_PRPWM_R;
    if(SYSCTL_PRPWM_R_PWM0_NOREADY == (SYSCTL_PRPWM_R_PWM0_MASK & u32Ready))
    {
        pvfCallback = PWM_Generator__pvfGetIRQSourceHandler(PWM_enMODULE_0,
                                                     PWM_enGEN_3, PWM_enGEN_INTERRUPT_SW);
        pvfCallback();
    }
    else
    {
        u32Reg = PWM0_ISC_R;
        u32RegSource = PWM0_GEN3_ISC_R;
        if(0UL == ((uint32_t) PWM_enGENMASK_3 &u32Reg))
        {
            pvfCallback = PWM_Generator__pvfGetIRQSourceHandler(PWM_enMODULE_0,
                                                         PWM_enGEN_3, PWM_enGEN_INTERRUPT_SW);
            pvfCallback();
        }
        else
        {
            if((uint32_t) PWM_enGEN_INT_SOURCE_ZERO & u32RegSource)
            {
                PWM0_GEN3_ISC_R = (uint32_t) PWM_enGEN_INT_SOURCE_ZERO;
                pvfCallback = PWM_Generator__pvfGetIRQSourceHandler(PWM_enMODULE_0,
                                                                 PWM_enGEN_3,
                                                                 PWM_enGEN_INTERRUPT_ZERO);
                pvfCallback();
            }
            if((uint32_t) PWM_enGEN_INT_SOURCE_LOAD & u32RegSource)
            {
                PWM0_GEN3_ISC_R = (uint32_t) PWM_enGEN_INT_SOURCE_LOAD;
                pvfCallback = PWM_Generator__pvfGetIRQSourceHandler(PWM_enMODULE_0,
                                                                 PWM_enGEN_3,
                                                                 PWM_enGEN_INTERRUPT_LOAD);
                pvfCallback();
            }
            if((uint32_t) PWM_enGEN_INT_SOURCE_CMPA_UP & u32RegSource)
            {
                PWM0_GEN3_ISC_R = (uint32_t) PWM_enGEN_INT_SOURCE_LOAD;
                pvfCallback = PWM_Generator__pvfGetIRQSourceHandler(PWM_enMODULE_0,
                                                                 PWM_enGEN_3,
                                                                 PWM_enGEN_INTERRUPT_CMPA_UP);
                pvfCallback();
            }
            if((uint32_t) PWM_enGEN_INT_SOURCE_CMPA_DOWN & u32RegSource)
            {
                PWM0_GEN3_ISC_R = (uint32_t) PWM_enGEN_INT_SOURCE_LOAD;
                pvfCallback = PWM_Generator__pvfGetIRQSourceHandler(PWM_enMODULE_0,
                                                                 PWM_enGEN_3,
                                                                 PWM_enGEN_INTERRUPT_CMPA_DOWN);
                pvfCallback();
            }
            if((uint32_t) PWM_enGEN_INT_SOURCE_CMPB_UP & u32RegSource)
            {
                PWM0_GEN3_ISC_R = (uint32_t) PWM_enGEN_INT_SOURCE_LOAD;
                pvfCallback = PWM_Generator__pvfGetIRQSourceHandler(PWM_enMODULE_0,
                                                                 PWM_enGEN_3,
                                                                 PWM_enGEN_INTERRUPT_CMPB_UP);
                pvfCallback();
            }
            if((uint32_t) PWM_enGEN_INT_SOURCE_CMPB_DOWN & u32RegSource)
            {
                PWM0_GEN3_ISC_R = (uint32_t) PWM_enGEN_INT_SOURCE_LOAD;
                pvfCallback = PWM_Generator__pvfGetIRQSourceHandler(PWM_enMODULE_0,
                                                                 PWM_enGEN_3,
                                                                 PWM_enGEN_INTERRUPT_CMPB_DOWN);
                pvfCallback();
            }
        }
    }
}



