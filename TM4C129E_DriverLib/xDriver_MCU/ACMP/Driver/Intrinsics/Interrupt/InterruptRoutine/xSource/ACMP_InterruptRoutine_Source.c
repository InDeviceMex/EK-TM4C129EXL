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

static void ACMP_vIRQSourceHandler_Dummy(uintptr_t uptrModuleArg, void* pvArgument);

static ACMP_pvfIRQSourceHandler_t ACMP_SW__vIRQSourceHandler[(uint32_t)ACMP_enMODULE_MAX][(uint32_t)ACMP_enCOMP_MAX] =
{
    {
     &ACMP_vIRQSourceHandler_Dummy,
     &ACMP_vIRQSourceHandler_Dummy,
     &ACMP_vIRQSourceHandler_Dummy
    }
};

static ACMP_pvfIRQSourceHandler_t ACMP__vIRQSourceHandler[(uint32_t)ACMP_enMODULE_MAX][(uint32_t)ACMP_enCOMP_MAX] =
{
    {
     &ACMP_vIRQSourceHandler_Dummy,
     &ACMP_vIRQSourceHandler_Dummy,
     &ACMP_vIRQSourceHandler_Dummy
    }
};

static void ACMP_vIRQSourceHandler_Dummy(uintptr_t uptrModuleArg, void* pvArgument)
{
    (void) uptrModuleArg;
    (void) pvArgument;

    while(1UL){}
}

ACMP_pvfIRQSourceHandler_t ACMP_SW__pvfGetIRQSourceHandler(ACMP_nMODULE enModuleArg,
                                                           ACMP_nCOMP enACMPComparatorNum)
{
    ACMP_pvfIRQSourceHandler_t pvfFunctionReg;

    pvfFunctionReg = ACMP_SW__vIRQSourceHandler[(uint32_t) enModuleArg]
                                               [(uint32_t)enACMPComparatorNum];

    return (pvfFunctionReg);
}

ACMP_pvfIRQSourceHandler_t* ACMP_SW__pvfGetIRQSourceHandlerPointer(ACMP_nMODULE enModuleArg,
                                                                   ACMP_nCOMP enACMPComparatorNum)
{
    ACMP_pvfIRQSourceHandler_t* pvfFunctionReg;

    pvfFunctionReg = &ACMP_SW__vIRQSourceHandler[(uint32_t) enModuleArg]
                                                [(uint32_t)enACMPComparatorNum];

    return (pvfFunctionReg);
}

ACMP_pvfIRQSourceHandler_t ACMP__pvfGetIRQSourceHandler(ACMP_nMODULE enModuleArg,
                                                        ACMP_nCOMP enACMPComparatorNum)
{
    ACMP_pvfIRQSourceHandler_t pvfFunctionReg;

    pvfFunctionReg = ACMP__vIRQSourceHandler[(uint32_t) enModuleArg]
                                            [(uint32_t)enACMPComparatorNum];

    return (pvfFunctionReg);
}

ACMP_pvfIRQSourceHandler_t* ACMP__pvfGetIRQSourceHandlerPointer(ACMP_nMODULE enModuleArg,
                                                               ACMP_nCOMP enACMPComparatorNum)
{
    ACMP_pvfIRQSourceHandler_t* pvfFunctionReg;
    pvfFunctionReg = &ACMP__vIRQSourceHandler[(uint32_t) enModuleArg]
                                             [(uint32_t)enACMPComparatorNum];
    return (pvfFunctionReg);
}
