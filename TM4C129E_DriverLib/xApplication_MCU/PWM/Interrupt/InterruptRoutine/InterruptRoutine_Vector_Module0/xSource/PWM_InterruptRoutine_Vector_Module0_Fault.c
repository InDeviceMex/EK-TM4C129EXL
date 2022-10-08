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
    UBase_t uxReg;
    UBase_t uxReady;
    UBase_t uxDCompValueReg;
    UBase_t uxInputValueReg;
    PWM_pvfIRQSourceHandler_t pvfCallback;

    uxReady = SYSCTL_PRPWM_R;
    if(SYSCTL_PRPWM_R_PWM0_NOREADY == (SYSCTL_PRPWM_R_PWM0_MASK & uxReady))
    {
        pvfCallback = PWM_FaultSW__pvfGetIRQSourceHandler(PWM_enMODULE_0);
        pvfCallback(PWM0_OFFSET, (void*) 0UL);
    }
    else
    {
        uxInputValueReg = PWM0_GEN0_EXT_FAULT_PIN_STAT_R;
        uxDCompValueReg = PWM0_GEN0_EXT_FAULT_DCMP_STAT_R;
        uxReg = PWM0_ISC_R;
        if(0UL == ((UBase_t)((UBase_t) PWM_enGENMASK_ALL << PWM_ISC_R_GEN0_FAULT_BIT) & uxReg))
        {
            pvfCallback = PWM_FaultSW__pvfGetIRQSourceHandler(PWM_enMODULE_0);
            pvfCallback(PWM0_OFFSET, (void*) 0UL);
        }
        else
        {
            if(PWM_ISC_R_GEN0_FAULT_MASK & uxReg)
            {
                UBase_t uxSourceReg = PWM0_GEN0_CTL_R;
                if(PWM_GEN_CTL_R_FAULT_SRC_INPUT == (PWM_GEN_CTL_R_FAULT_SRC_MASK & uxSourceReg))
                {
                    PWM0_GEN0_EXT_FAULT_PIN_STAT_R = PWM_GEN_EXT_FAULT_PIN_STAT_R_PIN0_CLEAR;
                    pvfCallback = PWM_FaultInput__pvfGetIRQSourceHandler(PWM_enMODULE_0, PWM_enGEN_0, PWM_enFAULT_INPUT_0);
                    pvfCallback(PWM_GEN0_CTL_OFFSET, (void*) PWM_enFAULT_INPUT_0);
                }
                else
                {
                    UBase_t uxCount;
                    UBase_t uxInputEnableReg = PWM0_GEN0_FAULT_PIN_ENABLE_R;
                    UBase_t uxDCompEnableReg = PWM0_GEN0_FAULT_DCMP_ENABLE_R;


                    uxInputEnableReg &= uxInputValueReg;
                    uxDCompEnableReg &= uxDCompValueReg;
                    uxCount = 0UL;

                    while(0UL != uxInputEnableReg)
                    {
                        if(0UL != (0x1UL & uxInputEnableReg))
                        {
                            pvfCallback = PWM_FaultInput__pvfGetIRQSourceHandler(PWM_enMODULE_0, PWM_enGEN_0, (PWM_nFAULT_INPUT) uxCount);
                            pvfCallback(PWM_GEN0_CTL_OFFSET, (void*) uxCount);

                        }
                        uxInputEnableReg >>= 1UL;
                        uxCount++;
                    }
                    PWM0_GEN0_EXT_FAULT_PIN_STAT_R = (UBase_t) PWM_enFAULT_INPUTMASK_ALL;

                    uxCount = 0UL;
                    while(0UL != uxDCompEnableReg)
                    {
                        if(0UL != (0x1UL & uxDCompEnableReg))
                        {
                            pvfCallback = PWM_FaultDComp__pvfGetIRQSourceHandler(PWM_enMODULE_0, PWM_enGEN_0, (PWM_nFAULT_DCOMP) uxCount);
                            pvfCallback(PWM_GEN0_CTL_OFFSET, (void*) uxCount);

                        }
                        uxDCompEnableReg >>= 1UL;
                        uxCount++;
                    }
                    PWM0_GEN0_EXT_FAULT_DCMP_STAT_R = (UBase_t) PWM_enFAULT_DCOMPMASK_ALL;
                }

                PWM0_ISC_R = PWM_ISC_R_GEN0_FAULT_MASK;
            }
            if(PWM_ISC_R_GEN1_FAULT_MASK & uxReg)
            {
                UBase_t uxSourceReg = PWM0_GEN1_CTL_R;
                if(PWM_GEN_CTL_R_FAULT_SRC_INPUT == (PWM_GEN_CTL_R_FAULT_SRC_MASK & uxSourceReg))
                {
                    PWM0_GEN1_EXT_FAULT_PIN_STAT_R = PWM_GEN_EXT_FAULT_PIN_STAT_R_PIN0_CLEAR;
                    pvfCallback = PWM_FaultInput__pvfGetIRQSourceHandler(PWM_enMODULE_0, PWM_enGEN_1, PWM_enFAULT_INPUT_0);
                    pvfCallback(PWM_GEN1_CTL_OFFSET, (void*) PWM_enFAULT_INPUT_0);
                }
                else
                {
                    UBase_t uxCount;
                    UBase_t uxInputEnableReg = PWM0_GEN1_FAULT_PIN_ENABLE_R;
                    UBase_t uxDCompEnableReg = PWM0_GEN1_FAULT_DCMP_ENABLE_R;


                    uxInputEnableReg &= uxInputValueReg;
                    uxDCompEnableReg &= uxDCompValueReg;
                    uxCount = 0UL;

                    while(0UL != uxInputEnableReg)
                    {
                        if(0UL != (0x1UL & uxInputEnableReg))
                        {
                            pvfCallback = PWM_FaultInput__pvfGetIRQSourceHandler(PWM_enMODULE_0, PWM_enGEN_1, (PWM_nFAULT_INPUT) uxCount);
                            pvfCallback(PWM_GEN1_CTL_OFFSET, (void*) uxCount);

                        }
                        uxInputEnableReg >>= 1UL;
                        uxCount++;
                    }
                    PWM0_GEN1_EXT_FAULT_PIN_STAT_R = (UBase_t) PWM_enFAULT_INPUTMASK_ALL;

                    uxCount = 0UL;
                    while(0UL != uxDCompEnableReg)
                    {
                        if(0UL != (0x1UL & uxDCompEnableReg))
                        {
                            pvfCallback = PWM_FaultDComp__pvfGetIRQSourceHandler(PWM_enMODULE_0, PWM_enGEN_1, (PWM_nFAULT_DCOMP) uxCount);
                            pvfCallback(PWM_GEN1_CTL_OFFSET, (void*) uxCount);

                        }
                        uxDCompEnableReg >>= 1UL;
                        uxCount++;
                    }
                    PWM0_GEN1_EXT_FAULT_DCMP_STAT_R = (UBase_t) PWM_enFAULT_DCOMPMASK_ALL;
                }

                PWM0_ISC_R = PWM_ISC_R_GEN1_FAULT_MASK;
            }
            if(PWM_ISC_R_GEN2_FAULT_MASK & uxReg)
            {
                UBase_t uxSourceReg = PWM0_GEN2_CTL_R;
                if(PWM_GEN_CTL_R_FAULT_SRC_INPUT == (PWM_GEN_CTL_R_FAULT_SRC_MASK & uxSourceReg))
                {
                    PWM0_GEN2_EXT_FAULT_PIN_STAT_R = PWM_GEN_EXT_FAULT_PIN_STAT_R_PIN0_CLEAR;
                    pvfCallback = PWM_FaultInput__pvfGetIRQSourceHandler(PWM_enMODULE_0, PWM_enGEN_2, PWM_enFAULT_INPUT_0);
                    pvfCallback(PWM_GEN2_CTL_OFFSET, (void*) PWM_enFAULT_INPUT_0);
                }
                else
                {
                    UBase_t uxCount;
                    UBase_t uxInputEnableReg = PWM0_GEN2_FAULT_PIN_ENABLE_R;
                    UBase_t uxDCompEnableReg = PWM0_GEN2_FAULT_DCMP_ENABLE_R;


                    uxInputEnableReg &= uxInputValueReg;
                    uxDCompEnableReg &= uxDCompValueReg;
                    uxCount = 0UL;

                    while(0UL != uxInputEnableReg)
                    {
                        if(0UL != (0x1UL & uxInputEnableReg))
                        {
                            pvfCallback = PWM_FaultInput__pvfGetIRQSourceHandler(PWM_enMODULE_0, PWM_enGEN_2, (PWM_nFAULT_INPUT) uxCount);
                            pvfCallback(PWM_GEN2_CTL_OFFSET, (void*) uxCount);

                        }
                        uxInputEnableReg >>= 1UL;
                        uxCount++;
                    }
                    PWM0_GEN2_EXT_FAULT_PIN_STAT_R = (UBase_t) PWM_enFAULT_INPUTMASK_ALL;

                    uxCount = 0UL;
                    while(0UL != uxDCompEnableReg)
                    {
                        if(0UL != (0x1UL & uxDCompEnableReg))
                        {
                            pvfCallback = PWM_FaultDComp__pvfGetIRQSourceHandler(PWM_enMODULE_0, PWM_enGEN_2, (PWM_nFAULT_DCOMP) uxCount);
                            pvfCallback(PWM_GEN2_CTL_OFFSET, (void*) uxCount);

                        }
                        uxDCompEnableReg >>= 1UL;
                        uxCount++;
                    }
                    PWM0_GEN2_EXT_FAULT_DCMP_STAT_R = (UBase_t) PWM_enFAULT_DCOMPMASK_ALL;
                }

                PWM0_ISC_R = PWM_ISC_R_GEN2_FAULT_MASK;
            }
            if(PWM_ISC_R_GEN3_FAULT_MASK & uxReg)
            {
                UBase_t uxSourceReg = PWM0_GEN3_CTL_R;
                if(PWM_GEN_CTL_R_FAULT_SRC_INPUT == (PWM_GEN_CTL_R_FAULT_SRC_MASK & uxSourceReg))
                {
                    PWM0_GEN3_EXT_FAULT_PIN_STAT_R = PWM_GEN_EXT_FAULT_PIN_STAT_R_PIN0_CLEAR;
                    pvfCallback = PWM_FaultInput__pvfGetIRQSourceHandler(PWM_enMODULE_0, PWM_enGEN_3, PWM_enFAULT_INPUT_0);
                    pvfCallback(PWM_GEN3_CTL_OFFSET, (void*) PWM_enFAULT_INPUT_0);
                }
                else
                {
                    UBase_t uxCount;
                    UBase_t uxInputEnableReg = PWM0_GEN3_FAULT_PIN_ENABLE_R;
                    UBase_t uxDCompEnableReg = PWM0_GEN3_FAULT_DCMP_ENABLE_R;


                    uxInputEnableReg &= uxInputValueReg;
                    uxDCompEnableReg &= uxDCompValueReg;
                    uxCount = 0UL;

                    while(0UL != uxInputEnableReg)
                    {
                        if(0UL != (0x1UL & uxInputEnableReg))
                        {
                            pvfCallback = PWM_FaultInput__pvfGetIRQSourceHandler(PWM_enMODULE_0, PWM_enGEN_3, (PWM_nFAULT_INPUT) uxCount);
                            pvfCallback(PWM_GEN3_CTL_OFFSET, (void*) uxCount);

                        }
                        uxInputEnableReg >>= 1UL;
                        uxCount++;
                    }
                    PWM0_GEN3_EXT_FAULT_PIN_STAT_R = (UBase_t) PWM_enFAULT_INPUTMASK_ALL;

                    uxCount = 0UL;
                    while(0UL != uxDCompEnableReg)
                    {
                        if(0UL != (0x1UL & uxDCompEnableReg))
                        {
                            pvfCallback = PWM_FaultDComp__pvfGetIRQSourceHandler(PWM_enMODULE_0, PWM_enGEN_3, (PWM_nFAULT_DCOMP) uxCount);
                            pvfCallback(PWM_GEN3_CTL_OFFSET, (void*) uxCount);

                        }
                        uxDCompEnableReg >>= 1UL;
                        uxCount++;
                    }
                    PWM0_GEN3_EXT_FAULT_DCMP_STAT_R = (UBase_t) PWM_enFAULT_DCOMPMASK_ALL;
                }

                PWM0_ISC_R = PWM_ISC_R_GEN3_FAULT_MASK;
            }
        }
    }
}
