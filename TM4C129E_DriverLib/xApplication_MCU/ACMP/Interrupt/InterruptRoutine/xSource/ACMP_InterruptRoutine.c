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

void (*ACMP__pvIRQVectorHandler[(uint32_t) ACMP_enMODULE_MAX][(uint32_t) ACMP_enCOMP_MAX ]) (void)=
{
     {&ACMP0_Comp0__vIRQVectorHandler, &ACMP0_Comp1__vIRQVectorHandler, &ACMP0_Comp2__vIRQVectorHandler}
};

void (*ACMP__pvfGetIRQVectorHandler(ACMP_nMODULE enACMPModule, ACMP_nCOMP enACMPComparator))(void)
{
    return (ACMP__pvIRQVectorHandler[(uint32_t) enACMPModule][(uint32_t) enACMPComparator]);
}

void (**ACMP__pvfGetIRQVectorHandlerPointer(ACMP_nMODULE enACMPModule, ACMP_nCOMP enACMPComparator))(void)
{
    return ((void(**)(void)) &ACMP__pvIRQVectorHandler[(uint32_t) enACMPModule][(uint32_t) enACMPComparator]);
}
