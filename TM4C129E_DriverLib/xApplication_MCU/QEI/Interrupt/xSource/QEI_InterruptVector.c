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

static NVIC_nSTIR QEI__enGetInterruptVector(QEI_nMODULE enModule);

static NVIC_nSTIR QEI__enGetInterruptVector(QEI_nMODULE enModule)
{
    NVIC_nSTIR enVector = NVIC_enSTIR_QEI0;
    uint32_t u32Module = 0UL;
    NVIC_nSTIR NVIC_VECTOR_QEI[(uint32_t) QEI_enMODULE_MAX] =
    {
        NVIC_enSTIR_QEI0
    };

    u32Module = MCU__u32CheckParams((uint32_t) enModule, (uint32_t) QEI_enMODULE_MAX);
    enVector = NVIC_VECTOR_QEI[u32Module];
    return enVector;
}

void QEI__vEnInterruptVector(QEI_nMODULE enModule, QEI_nPRIORITY enQEIPriority)
{
    NVIC_nSTIR enVector = NVIC_enSTIR_QEI0;
    enVector = QEI__enGetInterruptVector(enModule);
    NVIC__vSetEnableIRQ(enVector, (NVIC_nPRIORITY) enQEIPriority);
}

void QEI__vDisInterruptVector(QEI_nMODULE enModule)
{
    NVIC_nSTIR enVector = NVIC_enSTIR_QEI0;
    enVector = QEI__enGetInterruptVector(enModule);
    NVIC__vClearEnableIRQ(enVector);
}
