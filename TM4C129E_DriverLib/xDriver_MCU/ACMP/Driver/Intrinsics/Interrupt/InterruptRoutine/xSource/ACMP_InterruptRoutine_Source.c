/**
 *
 * @file ACMP_InterruptRoutine_Source.c
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
 * @verbatim 4 dic. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 4 dic. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/ACMP/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/ACMP_InterruptRoutine_Source.h>

static void ACMP_vIRQSourceHandler_Dummy(void);

void (*ACMP_SW__vIRQSourceHandler[(uint32_t)ACMP_enMODULE_MAX][(uint32_t)ACMP_enCOMP_MAX])(void) =
{
    {
     &ACMP_vIRQSourceHandler_Dummy,
     &ACMP_vIRQSourceHandler_Dummy,
     &ACMP_vIRQSourceHandler_Dummy
    }
};

void (*ACMP__vIRQSourceHandler[(uint32_t)ACMP_enMODULE_MAX][(uint32_t)ACMP_enCOMP_MAX])(void) =
{
    {
     &ACMP_vIRQSourceHandler_Dummy,
     &ACMP_vIRQSourceHandler_Dummy,
     &ACMP_vIRQSourceHandler_Dummy
    }
};

static void ACMP_vIRQSourceHandler_Dummy(void)
{
    while(1UL){}
}

void (*ACMP_SW__pvfGetIRQSourceHandler(ACMP_nMODULE enACMPSubmodule,
                                          ACMP_nCOMP enACMPComparatorNum))(void)
{
    void(*pvfReg)(void) = (void(*)(void)) 0UL;
    pvfReg = ACMP_SW__vIRQSourceHandler[(uint32_t) enACMPSubmodule]
                                    [(uint32_t)enACMPComparatorNum];
    return (pvfReg);
}

void (**ACMP_SW__pvfGetIRQSourceHandlerPointer(ACMP_nMODULE enACMPSubmodule,
                                                  ACMP_nCOMP enACMPComparatorNum))(void)
{
    void(**pvfReg)(void) = (void(**)(void)) 0UL;
    pvfReg = (void(**)(void)) &ACMP_SW__vIRQSourceHandler[(uint32_t) enACMPSubmodule]
                                                      [(uint32_t)enACMPComparatorNum];
    return (pvfReg);
}

void (*ACMP__pvfGetIRQSourceHandler(ACMP_nMODULE enACMPSubmodule,
                                          ACMP_nCOMP enACMPComparatorNum))(void)
{
    void(*pvfReg)(void) = (void(*)(void)) 0UL;
    pvfReg = ACMP__vIRQSourceHandler[(uint32_t) enACMPSubmodule]
                                    [(uint32_t)enACMPComparatorNum];
    return (pvfReg);
}

void (**ACMP__pvfGetIRQSourceHandlerPointer(ACMP_nMODULE enACMPSubmodule,
                                                  ACMP_nCOMP enACMPComparatorNum))(void)
{
    void(**pvfReg)(void) = (void(**)(void)) 0UL;
    pvfReg = (void(**)(void)) &ACMP__vIRQSourceHandler[(uint32_t) enACMPSubmodule]
                                                      [(uint32_t)enACMPComparatorNum];
    return (pvfReg);
}
