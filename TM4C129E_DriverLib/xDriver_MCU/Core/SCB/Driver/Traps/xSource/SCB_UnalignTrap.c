/**
 *
 * @file SCB_UnalignTrap.c
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
 * @verbatim 2 jul. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 2 jul. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/Core/SCB/Driver/Traps/xHeader/SCB_UnalignTrap.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/Core/SCB/Peripheral/SCB_Peripheral.h>

void SCB__vEnUnalignTrap(void)
{
    MCU__vWriteRegister(SCB_BASE, SCB_CCR_OFFSET, SCB_CCR_UNALIGN_TRP_TRAP,
                        SCB_CCR_UNALIGN_TRP_MASK, SCB_CCR_R_UNALIGN_TRP_BIT);
}

void SCB__vDisUnalignTrap(void)
{
    MCU__vWriteRegister(SCB_BASE, SCB_CCR_OFFSET, SCB_CCR_UNALIGN_TRP_NOTRAP,
                        SCB_CCR_UNALIGN_TRP_MASK, SCB_CCR_R_UNALIGN_TRP_BIT);
}



