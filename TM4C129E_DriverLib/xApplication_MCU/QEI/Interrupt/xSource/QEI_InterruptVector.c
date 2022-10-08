/**
 *
 * @file QEI_InterruptVector.c
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
 * @verbatim 24 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 24 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xApplication_MCU/QEI/Interrupt/xHeader/QEI_InterruptVector.h>

#include <xApplication_MCU/QEI/Intrinsics/xHeader/QEI_Dependencies.h>

static NVIC_nVECTOR QEI__enGetInterruptVector(QEI_nMODULE enModule);

static NVIC_nVECTOR QEI__enGetInterruptVector(QEI_nMODULE enModule)
{
    NVIC_nVECTOR enVector = NVIC_enVECTOR_QEI0;
    UBase_t uxModule = 0UL;
    NVIC_nVECTOR NVIC_VECTOR_QEI[(UBase_t) QEI_enMODULE_MAX] =
    {
        NVIC_enVECTOR_QEI0
    };

    uxModule = MCU__uxCheckParams((UBase_t) enModule, (UBase_t) QEI_enMODULE_MAX);
    enVector = NVIC_VECTOR_QEI[uxModule];
    return (enVector);
}

void QEI__vEnInterruptVector(QEI_nMODULE enModule, QEI_nPRIORITY enQEIPriority)
{
    NVIC_nVECTOR enVector = NVIC_enVECTOR_QEI0;
    enVector = QEI__enGetInterruptVector(enModule);
    NVIC__enEnableVector(NVIC_enMODULE_0, enVector, (NVIC_nPRIORITY) enQEIPriority);
}

void QEI__vDisInterruptVector(QEI_nMODULE enModule)
{
    NVIC_nVECTOR enVector = NVIC_enVECTOR_QEI0;
    enVector = QEI__enGetInterruptVector(enModule);
    NVIC__enDisableVector(NVIC_enMODULE_0, enVector);
}
