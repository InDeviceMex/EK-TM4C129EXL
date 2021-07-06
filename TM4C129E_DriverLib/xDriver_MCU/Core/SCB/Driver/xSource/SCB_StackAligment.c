/**
 *
 * @file SCB_StackAligment.c
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
#include <xDriver_MCU/Core/SCB/Driver/xHeader/SCB_StackAligment.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/Core/SCB/Peripheral/SCB_Peripheral.h>

void SCB__vSetStackAligment(SCB_nAlignment enAlign)
{
    MCU__vWriteRegister(SCB_BASE, SCB_CCR_OFFSET, (uint32_t) enAlign,
                        SCB_CCR_STKALIGN_MASK, SCB_CCR_R_STKALIGN_BIT);
}

SCB_nAlignment SCB__enGetStackAligment(void)
{
    SCB_nAlignment enReturn = SCB_enALIGN_ERROR;
    enReturn = (SCB_nAlignment) MCU__u32ReadRegister(SCB_BASE, SCB_CCR_OFFSET,
                                     SCB_CCR_STKALIGN_MASK, SCB_CCR_R_STKALIGN_BIT);
    return (enReturn);
}
