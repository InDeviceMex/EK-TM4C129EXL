/**
 *
 * @file SCB_Debug.c
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
#include <xDriver_MCU/Core/SCB/Driver/Exception/xHeader/SCB_Debug.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/Core/SCB/Peripheral/SCB_Peripheral.h>

void SCB_Debug__vSetPriority(SCB_nPRIORITY enDebugPriority)
{
    MCU__vDataSyncBarrier();
    MCU__vWriteRegister(SCB_BASE, SCB_SHPR3_OFFSET, (uint32_t) enDebugPriority,
                        SCB_SHPR3_DEBUG_MASK, SCB_SHPR3_R_DEBUG_BIT);
    MCU__vDataSyncBarrier();
}

SCB_nPRIORITY SCB_Debug__enGetPriority(void)
{
    SCB_nPRIORITY enPriReg = SCB_enPRI0;
    enPriReg = (SCB_nPRIORITY) MCU__u32ReadRegister(SCB_BASE, SCB_SHPR3_OFFSET,
                                  SCB_SHPR3_DEBUG_MASK, SCB_SHPR3_R_DEBUG_BIT);

    return (enPriReg);
}
