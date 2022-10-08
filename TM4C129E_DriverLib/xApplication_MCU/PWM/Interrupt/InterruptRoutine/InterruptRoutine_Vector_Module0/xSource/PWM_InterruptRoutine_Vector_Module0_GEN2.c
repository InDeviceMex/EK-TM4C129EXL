/**
 *
 * @file PWM_InterruptRoutine_Vector_Module0_GEN2.c
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
#include <xApplication_MCU/PWM/Interrupt/InterruptRoutine/InterruptRoutine_Vector_Module0/xHeader/PWM_InterruptRoutine_Vector_Module0_GEN2.h>

#include <xApplication_MCU/PWM/Intrinsics/xHeader/PWM_Dependencies.h>

void PWM0_GEN2__vIRQVectorHandler(void)
{
    UBase_t uxReg;
    UBase_t uxReady;
    UBase_t uxRegSource;
    PWM_pvfIRQSourceHandler_t pvfCallback;

    uxReady = SYSCTL_PRPWM_R;
    if(SYSCTL_PRPWM_R_PWM0_NOREADY == (SYSCTL_PRPWM_R_PWM0_MASK & uxReady))
    {
        pvfCallback = PWM_Generator__pvfGetIRQSourceHandler(PWM_enMODULE_0, PWM_enGEN_2, PWM_enEVENT_SW);
        pvfCallback(PWM0_BASE, (void*) PWM_enEVENT_SW);
    }
    else
    {
        uxReg = PWM0_ISC_R;
        uxRegSource = PWM0_GEN2_ISC_R;
        if(0UL == ((UBase_t) PWM_enGENMASK_0 &uxReg))
        {
            pvfCallback = PWM_Generator__pvfGetIRQSourceHandler(PWM_enMODULE_0, PWM_enGEN_2, PWM_enEVENT_SW);
            pvfCallback(PWM_GEN2_CTL_OFFSET, (void*) PWM_enEVENT_SW);
        }
        else
        {
            if((UBase_t) PWM_enEVENTMASK_ZERO & uxRegSource)
            {
                PWM0_GEN2_ISC_R = (UBase_t) PWM_enEVENTMASK_ZERO;
                pvfCallback = PWM_Generator__pvfGetIRQSourceHandler(PWM_enMODULE_0, PWM_enGEN_2, PWM_enEVENT_ZERO);
                pvfCallback(PWM_GEN2_CTL_OFFSET, (void*) PWM_enEVENT_ZERO);
            }
            if((UBase_t) PWM_enEVENTMASK_LOAD & uxRegSource)
            {
                PWM0_GEN2_ISC_R = (UBase_t) PWM_enEVENTMASK_LOAD;
                pvfCallback = PWM_Generator__pvfGetIRQSourceHandler(PWM_enMODULE_0, PWM_enGEN_2, PWM_enEVENT_LOAD);
                pvfCallback(PWM_GEN2_CTL_OFFSET, (void*) PWM_enEVENT_LOAD);
            }
            if((UBase_t) PWM_enEVENTMASK_CMPA_UP & uxRegSource)
            {
                PWM0_GEN2_ISC_R = (UBase_t) PWM_enEVENTMASK_CMPA_UP;
                pvfCallback = PWM_Generator__pvfGetIRQSourceHandler(PWM_enMODULE_0, PWM_enGEN_2, PWM_enEVENT_CMPA_UP);
                pvfCallback(PWM_GEN2_CTL_OFFSET, (void*) PWM_enEVENT_CMPA_UP);
            }
            if((UBase_t) PWM_enEVENTMASK_CMPA_DOWN & uxRegSource)
            {
                PWM0_GEN2_ISC_R = (UBase_t) PWM_enEVENTMASK_CMPA_DOWN;
                pvfCallback = PWM_Generator__pvfGetIRQSourceHandler(PWM_enMODULE_0, PWM_enGEN_2, PWM_enEVENT_CMPA_UP);
                pvfCallback(PWM_GEN2_CTL_OFFSET, (void*) PWM_enEVENT_CMPA_DOWN);
            }
            if((UBase_t) PWM_enEVENTMASK_CMPB_UP & uxRegSource)
            {
                PWM0_GEN2_ISC_R = (UBase_t) PWM_enEVENTMASK_CMPB_UP;
                pvfCallback = PWM_Generator__pvfGetIRQSourceHandler(PWM_enMODULE_0, PWM_enGEN_2, PWM_enEVENT_CMPB_UP);
                pvfCallback(PWM_GEN2_CTL_OFFSET, (void*) PWM_enEVENT_CMPB_UP);
            }
            if((UBase_t) PWM_enEVENTMASK_CMPB_DOWN & uxRegSource)
            {
                PWM0_GEN2_ISC_R = (UBase_t) PWM_enEVENTMASK_CMPB_DOWN;
                pvfCallback = PWM_Generator__pvfGetIRQSourceHandler(PWM_enMODULE_0, PWM_enGEN_2, PWM_enEVENT_CMPB_DOWN);
                pvfCallback(PWM_GEN2_CTL_OFFSET, (void*) PWM_enEVENT_CMPB_DOWN);
            }
        }
    }
}
