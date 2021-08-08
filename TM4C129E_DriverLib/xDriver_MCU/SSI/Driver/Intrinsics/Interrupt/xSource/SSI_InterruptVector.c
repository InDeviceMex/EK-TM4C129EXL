/**
 *
 * @file SSI_InterruptVector.c
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
 * @verbatim 17 feb. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 17 feb. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/SSI/Driver/Intrinsics/Interrupt/xHeader/SSI_InterruptVector.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/SSI/Peripheral/xHeader/SSI_Dependencies.h>
#include <xDriver_MCU/SSI/Peripheral/SSI_Peripheral.h>

static NVIC_nSTIR SSI__enGetInterruptVector(SSI_nMODULE enModule);

static NVIC_nSTIR SSI__enGetInterruptVector(SSI_nMODULE enModule)
{
    NVIC_nSTIR enVector = NVIC_enSTIR_SSI0;
    uint32_t u32Module = 0UL;
    NVIC_nSTIR NVIC_VECTOR_SSI[(uint32_t) SSI_enMODULE_MAX] =
    {
        NVIC_enSTIR_SSI0, NVIC_enSTIR_SSI1, NVIC_enSTIR_SSI2, NVIC_enSTIR_SSI3,
    };

    u32Module = MCU__u32CheckParams((uint32_t) enModule, (uint32_t) SSI_enMODULE_MAX);
    enVector = NVIC_VECTOR_SSI[u32Module];
    return enVector;
}

void SSI__vEnInterruptVector(SSI_nMODULE enModule, SSI_nPRIORITY enSSIPriority)
{
    NVIC_nSTIR enVector = NVIC_enSTIR_SSI0;
    enVector = SSI__enGetInterruptVector(enModule);
    NVIC__vSetEnableIRQ(enVector, (NVIC_nPRIORITY) enSSIPriority);
}

void SSI__vDisInterruptVector(SSI_nMODULE enModule)
{
    NVIC_nSTIR enVector = NVIC_enSTIR_SSI0;
    enVector = SSI__enGetInterruptVector(enModule);
    NVIC__vClearEnableIRQ(enVector);
}
