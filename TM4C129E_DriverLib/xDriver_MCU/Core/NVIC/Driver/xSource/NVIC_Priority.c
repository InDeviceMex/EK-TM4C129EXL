/**
 *
 * @file NVIC_Priority.c
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
#include <xDriver_MCU/Core/NVIC/Driver/xHeader/NVIC_Priority.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/Core/NVIC/Peripheral/NVIC_Peripheral.h>

void NVIC__vSetPriorityIRQ(NVIC_nSTIR enIRQ, NVIC_nPRIORITY enPriority)
{
    uint32_t u32RegisterOffset = NVIC_IPR_OFFSET;
    uint32_t u32IsrIndex = 0UL;
    uint32_t u32IsrBit = 0UL;
    uint32_t u32Priority = 0UL;
    uint32_t u32IRQ = 0UL;

    u32Priority = MCU__u32CheckParams( (uint32_t) enPriority, NVIC_PRI_MAX);
    u32IRQ = MCU__u32CheckParams( (uint32_t) enIRQ, NVIC_IRQ_MAX);
    u32IsrBit = u32IRQ % 4UL;
    u32IsrBit *= 8UL;
    u32IsrBit += NVIC_PRI_BIT_OFFSET;
    u32IsrIndex = u32IRQ / 4UL;
    u32IsrIndex *= 4UL;
    u32RegisterOffset += u32IsrIndex;
    MCU__vWriteRegister(NVIC_BASE, u32RegisterOffset, u32Priority, NVIC_PRI_MASK, u32IsrBit);
}

NVIC_nPRIORITY  NVIC__enGetPriorityIRQ(NVIC_nSTIR enIRQ)
{
    NVIC_nPRIORITY enPriority = NVIC_enDEFAULT;
    uint32_t u32RegisterOffset = NVIC_IPR_OFFSET;
    uint32_t u32IsrIndex = 0UL;
    uint32_t u32IsrBit = 0UL;
    uint32_t u32IRQ = 0UL;

    u32IRQ = MCU__u32CheckParams( (uint32_t) enIRQ, NVIC_IRQ_MAX);
    u32IsrBit = u32IRQ % 4UL;
    u32IsrBit *= 8UL;
    u32IsrIndex = u32IRQ / 4UL;
    u32IsrIndex *= 4UL;
    u32RegisterOffset += u32IsrIndex;

    enPriority = (NVIC_nPRIORITY) MCU__u32ReadRegister(NVIC_BASE, u32RegisterOffset,
                                                       NVIC_PRI_MASK, u32IsrBit);

    return (enPriority);
}
