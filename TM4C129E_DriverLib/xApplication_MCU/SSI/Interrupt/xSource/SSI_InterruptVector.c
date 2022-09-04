/**
 *
 * @file SSI_InterruptVector.c
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
 * @verbatim 11 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 11 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xApplication_MCU/SSI/Interrupt/xHeader/SSI_InterruptVector.h>

#include <xApplication_MCU/SSI/Intrinsics/xHeader/SSI_Dependencies.h>

static NVIC_nVECTOR SSI__enGetInterruptVector(SSI_nMODULE enModule);

static NVIC_nVECTOR SSI__enGetInterruptVector(SSI_nMODULE enModule)
{
    NVIC_nVECTOR enVector = NVIC_enVECTOR_SSI0;
    uint32_t u32Module = 0UL;
    NVIC_nVECTOR NVIC_VECTOR_SSI[(uint32_t) SSI_enMODULE_MAX] =
    {
        NVIC_enVECTOR_SSI0, NVIC_enVECTOR_SSI1, NVIC_enVECTOR_SSI2, NVIC_enVECTOR_SSI3,
    };

    u32Module = MCU__u32CheckParams((uint32_t) enModule, (uint32_t) SSI_enMODULE_MAX);
    enVector = NVIC_VECTOR_SSI[u32Module];
    return (enVector);
}

void SSI__vEnInterruptVector(SSI_nMODULE enModule, SSI_nPRIORITY enSSIPriority)
{
    NVIC_nVECTOR enVector = NVIC_enVECTOR_SSI0;
    enVector = SSI__enGetInterruptVector(enModule);
    NVIC__vSetEnableIRQ(enVector, (NVIC_nPRIORITY) enSSIPriority);
}

void SSI__vDisInterruptVector(SSI_nMODULE enModule)
{
    NVIC_nVECTOR enVector = NVIC_enVECTOR_SSI0;
    enVector = SSI__enGetInterruptVector(enModule);
    NVIC__vClearEnableIRQ(enVector);
}
