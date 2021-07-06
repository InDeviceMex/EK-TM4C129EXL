/**
 *
 * @file SCB_VectorOffset.c
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
#include <xDriver_MCU/Core/SCB/Driver/xHeader/SCB_VectorOffset.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/Core/SCB/Peripheral/SCB_Peripheral.h>

void SCB__vSetVectorOffset(uint32_t u32Offset)
{
    MCU_nENABLE enInterruptState = MCU_enENABLE_DIS;
    enInterruptState = MCU__enDisGlobalInterrupt();
    MCU__vWriteRegister(SCB_BASE, SCB_VTOR_OFFSET, u32Offset,
                        SCB_VTOR_R_TBLOFF_MASK, 0UL);
    MCU__vDataSyncBarrier();
    MCU__enSetGlobalInterrupt(enInterruptState);
}

uint32_t SCB__u32GetVectorOffset(void)
{
    uint32_t u32Return = 0UL;
    u32Return =  MCU__u32ReadRegister(SCB_BASE, SCB_VTOR_OFFSET,
                                      SCB_VTOR_R_TBLOFF_MASK, 0UL);
    return (u32Return);
}
