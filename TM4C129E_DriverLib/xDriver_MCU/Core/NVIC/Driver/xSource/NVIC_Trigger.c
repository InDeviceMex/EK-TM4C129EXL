/**
 *
 * @file NVIC_Trigger.c
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
 * @verbatim 20 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 20 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/Core/NVIC/Driver/xHeader/NVIC_Trigger.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/Core/NVIC/Peripheral/NVIC_Peripheral.h>

void NVIC__vTriggerIRQ(NVIC_nSTIR enIRQ)
{
    uint32_t u32IRQ = 0UL;

    u32IRQ = MCU__u32CheckParams( (uint32_t) enIRQ, NVIC_IRQ_MAX);
    MCU__vWriteRegister(NVIC_BASE, NVIC_STIR_OFFSET, u32IRQ, NVIC_STIR_R_INTID_MASK, NVIC_STIR_R_INTID_BIT);
}
