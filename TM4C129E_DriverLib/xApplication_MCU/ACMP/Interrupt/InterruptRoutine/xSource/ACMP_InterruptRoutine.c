/**
 *
 * @file ACMP_InterruptRoutine.c
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
 * @verbatim 20 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 20 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xApplication_MCU/ACMP/Interrupt/InterruptRoutine/ACMP_InterruptRoutine.h>
#include <xApplication_MCU/ACMP/Intrinsics/xHeader/ACMP_Defines.h>

ACMP_pvfIRQVectorHandler_t ACMP_pvIRQVectorHandler[(UBase_t) ACMP_enMODULE_MAX][(UBase_t) ACMP_enCOMP_MAX ]=
{
     {
      &ACMP0_Comp0__vIRQVectorHandler,
      &ACMP0_Comp1__vIRQVectorHandler,
      &ACMP0_Comp2__vIRQVectorHandler
     }
};

ACMP_pvfIRQVectorHandler_t ACMP__pvfGetIRQVectorHandler(ACMP_nMODULE enModuleArg, ACMP_nCOMP enComparatorArg)
{
    ACMP_pvfIRQVectorHandler_t pvfVectorReg;
    pvfVectorReg = ACMP_pvIRQVectorHandler[(UBase_t) enModuleArg][(UBase_t) enComparatorArg];
    return (pvfVectorReg);
}

ACMP_pvfIRQVectorHandler_t* ACMP__pvfGetIRQVectorHandlerPointer(ACMP_nMODULE enModuleArg, ACMP_nCOMP enComparatorArg)
{
    ACMP_pvfIRQVectorHandler_t* pvfVectorReg;
    pvfVectorReg = &ACMP_pvIRQVectorHandler[(UBase_t) enModuleArg][(UBase_t) enComparatorArg];
    return (pvfVectorReg);
}
