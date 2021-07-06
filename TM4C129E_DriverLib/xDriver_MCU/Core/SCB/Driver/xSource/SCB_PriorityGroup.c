/**
 *
 * @file SCB_PriorityGroup.c
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
 * @verbatim 19 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 19 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/Core/SCB/Driver/xHeader/SCB_PriorityGroup.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/Core/SCB/Peripheral/SCB_Peripheral.h>

void SCB__vSetPriorityGroup(SCB_nPRIGROUP enGroup)
{
    uint32_t u32Reg = 0UL;

    u32Reg = MCU__u32CheckParams( (uint32_t) enGroup, (uint32_t) SCB_enPRIGROUP_MAX);
    u32Reg <<= SCB_AIRCR_R_PRIGROUP_BIT;
    u32Reg |= SCB_AIRCR_R_VECTKEY_WRITE;
    MCU__vDataSyncBarrier();
    MCU__vWriteRegister(SCB_BASE, SCB_AIRCR_OFFSET, u32Reg,
                        (SCB_AIRCR_R_VECTKEY_MASK | SCB_AIRCR_R_PRIGROUP_MASK),
                        0UL);
    MCU__vDataSyncBarrier();
}

SCB_nPRIGROUP SCB__enGetPriorityGroup(void)
{
    SCB_nPRIGROUP enReturn = SCB_enPRIGROUP_ERROR;
    enReturn = (SCB_nPRIGROUP) MCU__u32ReadRegister(SCB_BASE, SCB_AIRCR_OFFSET,
                                            SCB_AIRCR_PRIGROUP_MASK, SCB_AIRCR_R_PRIGROUP_BIT);
    return (enReturn);
}
