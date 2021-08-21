/**
 *
 * @file ACMP_Init.c
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
 * @verbatim 21 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 21 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xApplication_MCU/ACMP/xHeader/ACMP_Init.h>

#include <xApplication_MCU/ACMP/Interrupt/ACMP_Interrupt.h>
#include <xApplication_MCU/ACMP/Intrinsics/xHeader/ACMP_Dependencies.h>

void ACMP__vInit(void)
{
    void (*pfIrqVectorHandler) (void) = (void (*) (void)) 0UL;

    pfIrqVectorHandler = ACMP__pvfGetIRQVectorHandler(ACMP_enMODULE_0, ACMP_enCOMP_0);
    ACMP__vRegisterIRQVectorHandler( pfIrqVectorHandler, ACMP_enMODULE_0, ACMP_enCOMP_0);

    pfIrqVectorHandler = ACMP__pvfGetIRQVectorHandler(ACMP_enMODULE_0, ACMP_enCOMP_1);
    ACMP__vRegisterIRQVectorHandler( pfIrqVectorHandler, ACMP_enMODULE_0, ACMP_enCOMP_1);

    pfIrqVectorHandler = ACMP__pvfGetIRQVectorHandler(ACMP_enMODULE_0, ACMP_enCOMP_2);
    ACMP__vRegisterIRQVectorHandler( pfIrqVectorHandler, ACMP_enMODULE_0, ACMP_enCOMP_2);
}

