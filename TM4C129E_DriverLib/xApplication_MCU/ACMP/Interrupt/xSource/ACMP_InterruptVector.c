/**
 *
 * @file ACMP_InterruptVector.c
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
#include <xApplication_MCU/ACMP/Interrupt/xHeader/ACMP_InterruptVector.h>

#include <xApplication_MCU/ACMP/Intrinsics/xHeader/ACMP_Dependencies.h>

static NVIC_nVECTOR ACMP__enGetInterruptVector(ACMP_nMODULE enModule, ACMP_nCOMP enComparatorArg);

static NVIC_nVECTOR ACMP__enGetInterruptVector(ACMP_nMODULE enModule, ACMP_nCOMP enComparatorArg)
{

    NVIC_nVECTOR enVector;
    uint32_t u32Module;
    uint32_t u32Comparator;
    NVIC_nVECTOR NVIC_VECTOR_ACMP[(uint32_t) ACMP_enMODULE_MAX][(uint32_t) ACMP_enCOMP_MAX] =
    {
        {NVIC_enVECTOR_ACMP0, NVIC_enVECTOR_ACMP1, NVIC_enVECTOR_ACMP2}
    };

    u32Module = MCU__u32CheckParams((uint32_t) enModule,
                                    (uint32_t) ACMP_enMODULE_MAX);
    u32Comparator = MCU__u32CheckParams((uint32_t) enComparatorArg,
                                        (uint32_t) ACMP_enCOMP_MAX);
    enVector = NVIC_VECTOR_ACMP[u32Module][u32Comparator];
    return (enVector);
}

void ACMP__vEnInterruptVector(ACMP_nMODULE enModule,
                              ACMP_nCOMP enComparatorArg,
                              ACMP_nPRIORITY enACMPPriority)
{
    NVIC_nVECTOR enVector;
    enVector = ACMP__enGetInterruptVector(enModule, enComparatorArg);
    NVIC__vSetEnableIRQ(enVector, (NVIC_nPRIORITY) enACMPPriority);
}

void ACMP__vDisInterruptVector(ACMP_nMODULE enModule, ACMP_nCOMP enComparatorArg)
{
    NVIC_nVECTOR enVector;
    enVector = ACMP__enGetInterruptVector(enModule, enComparatorArg);
    NVIC__vClearEnableIRQ(enVector);
}
