/**
 *
 * @file PWM_InterruptRoutine_Source.c
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
#include <xDriver_MCU/PWM/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/PWM_InterruptRoutine_Source.h>

static void PWM_vIRQSourceHandler_Dummy(void);

void (*PWM_Generator__vIRQSourceHandler[(uint32_t)PWM_enMODULE_MAX]
                                    [(uint32_t)PWM_enGEN_MAX]
                                    [(uint32_t)PWM_enGEN_INTERRUPT_MAX])(void) =
{
    {
        {
             &PWM_vIRQSourceHandler_Dummy, &PWM_vIRQSourceHandler_Dummy, &PWM_vIRQSourceHandler_Dummy,
             &PWM_vIRQSourceHandler_Dummy, &PWM_vIRQSourceHandler_Dummy, &PWM_vIRQSourceHandler_Dummy,
             &PWM_vIRQSourceHandler_Dummy
        },
        {
             &PWM_vIRQSourceHandler_Dummy, &PWM_vIRQSourceHandler_Dummy, &PWM_vIRQSourceHandler_Dummy,
             &PWM_vIRQSourceHandler_Dummy, &PWM_vIRQSourceHandler_Dummy, &PWM_vIRQSourceHandler_Dummy,
             &PWM_vIRQSourceHandler_Dummy
        },
        {
             &PWM_vIRQSourceHandler_Dummy, &PWM_vIRQSourceHandler_Dummy, &PWM_vIRQSourceHandler_Dummy,
             &PWM_vIRQSourceHandler_Dummy, &PWM_vIRQSourceHandler_Dummy, &PWM_vIRQSourceHandler_Dummy,
             &PWM_vIRQSourceHandler_Dummy
        },
        {
             &PWM_vIRQSourceHandler_Dummy, &PWM_vIRQSourceHandler_Dummy, &PWM_vIRQSourceHandler_Dummy,
             &PWM_vIRQSourceHandler_Dummy, &PWM_vIRQSourceHandler_Dummy, &PWM_vIRQSourceHandler_Dummy,
             &PWM_vIRQSourceHandler_Dummy
        }
    }
};

void (*PWM_Fault__vIRQSourceHandler[(uint32_t)PWM_enMODULE_MAX]
                                    [(uint32_t)PWM_enFAULT_MAX]
                                     [(uint32_t)PWM_enFAULT_INTERRUPT_MAX])(void) =
{
 {
    {
        &PWM_vIRQSourceHandler_Dummy, &PWM_vIRQSourceHandler_Dummy
    },
    {
        &PWM_vIRQSourceHandler_Dummy, &PWM_vIRQSourceHandler_Dummy
    },
    {
        &PWM_vIRQSourceHandler_Dummy, &PWM_vIRQSourceHandler_Dummy
    },
    {
        &PWM_vIRQSourceHandler_Dummy, &PWM_vIRQSourceHandler_Dummy
    }
 }
};

static void PWM_vIRQSourceHandler_Dummy(void)
{
    while(1UL){}
}

void (*PWM_Fault__pvfGetIRQSourceHandler(PWM_nMODULE enPWMSubmodule,
                                          PWM_nFAULT enPWMFaultNum,
                                          PWM_nFAULT_INTERRUPT enFaultIntSource))(void)
{
    void(*pvfReg)(void) = (void(*)(void)) 0UL;
    pvfReg = PWM_Fault__vIRQSourceHandler[(uint32_t) enPWMSubmodule]
                                          [(uint32_t)enPWMFaultNum]
                                           [(uint32_t)enFaultIntSource];
    return (pvfReg);
}

void (**PWM_Fault__pvfGetIRQSourceHandlerPointer(PWM_nMODULE enPWMSubmodule,
                                              PWM_nFAULT enPWMFaultNum,
                                              PWM_nFAULT_INTERRUPT enFaultIntSource))(void)
{
    void(**pvfReg)(void) = (void(**)(void)) 0UL;
    pvfReg = (void(**)(void)) &PWM_Fault__vIRQSourceHandler[(uint32_t) enPWMSubmodule]
                                                            [(uint32_t)enPWMFaultNum]
                                                             [(uint32_t)enFaultIntSource];
    return (pvfReg);
}

void (*PWM_Generator__pvfGetIRQSourceHandler(PWM_nMODULE enPWMSubmodule,
                                          PWM_nGENERATOR enPWMGeneratorNum,
                                          PWM_nGEN_INTERRUPT enPWMIntSource))(void)
{
    void(*pvfReg)(void) = (void(*)(void)) 0UL;
    pvfReg = PWM_Generator__vIRQSourceHandler[(uint32_t) enPWMSubmodule]
                                          [(uint32_t)enPWMGeneratorNum]
                                          [(uint32_t)enPWMIntSource];
    return (pvfReg);
}

void (**PWM_Generator__pvfGetIRQSourceHandlerPointer(PWM_nMODULE enPWMSubmodule,
                                                     PWM_nGENERATOR enPWMGeneratorNum,
                                                     PWM_nGEN_INTERRUPT enPWMIntSource))(void)
{
    void(**pvfReg)(void) = (void(**)(void)) 0UL;
    pvfReg = (void(**)(void)) &PWM_Generator__vIRQSourceHandler[(uint32_t) enPWMSubmodule]
                                                            [(uint32_t)enPWMGeneratorNum]
                                                            [(uint32_t)enPWMIntSource];
    return (pvfReg);
}

