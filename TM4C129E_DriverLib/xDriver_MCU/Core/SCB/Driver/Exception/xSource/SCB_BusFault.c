/**
 *
 * @file SCB_BusFault.c
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
#include <xDriver_MCU/Core/SCB/Driver/Exception/xHeader/SCB_BusFault.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/Core/SCB/Peripheral/SCB_Peripheral.h>

void SCB_BusFault__vSetPriority(SCB_nPRIORITY enSCBPriority)
{
    MCU__vDataSyncBarrier();
    MCU__vWriteRegister(SCB_BASE, SCB_SHPR1_OFFSET, (uint32_t) enSCBPriority,
                        SCB_SHPR1_BUS_MASK, SCB_SHPR1_R_BUS_BIT);
    MCU__vDataSyncBarrier();
}
SCB_nPRIORITY SCB_BusFault__enGetPriority(void)
{
    SCB_nPRIORITY enPriReg = SCB_enPRI0;

    enPriReg = (SCB_nPRIORITY) MCU__u32ReadRegister(SCB_BASE, SCB_SHPR1_OFFSET,
                                  SCB_SHPR1_BUS_MASK, SCB_SHPR1_R_BUS_BIT);

    return (enPriReg);
}

void SCB_BusFault__vSetPending(void)
{
    MCU__vWriteRegister(SCB_BASE, SCB_SHCSR_OFFSET, SCB_SHCSR_BUSFAULTPENDED_PEND,
                        SCB_SHCSR_BUSFAULTPENDED_MASK, SCB_SHCSR_R_BUSFAULTPENDED_BIT);
}
void SCB_BusFault__vClearPending(void)
{
    MCU__vWriteRegister(SCB_BASE, SCB_SHCSR_OFFSET, SCB_SHCSR_BUSFAULTPENDED_NOPEND,
                        SCB_SHCSR_BUSFAULTPENDED_MASK, SCB_SHCSR_R_BUSFAULTPENDED_BIT);
}
SCB_nPENDSTATE SCB_BusFault__enGetPending(void)
{
    SCB_nPENDSTATE enPendReg = SCB_enNOPENDING;
    enPendReg = (SCB_nPENDSTATE) MCU__u32ReadRegister(SCB_BASE, SCB_SHCSR_OFFSET,
                                  SCB_SHCSR_BUSFAULTPENDED_MASK, SCB_SHCSR_R_BUSFAULTPENDED_BIT);

    return (enPendReg);
}

void SCB_BusFault__vEnable(void)
{
    MCU__vWriteRegister(SCB_BASE, SCB_SHCSR_OFFSET, SCB_SHCSR_BUSFAULTENA_ENA,
                        SCB_SHCSR_BUSFAULTENA_MASK, SCB_SHCSR_R_BUSFAULTENA_BIT);
}
void SCB_BusFault__vDisable(void)
{
    MCU__vWriteRegister(SCB_BASE, SCB_SHCSR_OFFSET, SCB_SHCSR_BUSFAULTENA_DIS,
                        SCB_SHCSR_BUSFAULTENA_MASK, SCB_SHCSR_R_BUSFAULTENA_BIT);
}

uint32_t SCB_BusFault_u32GetAddress(void)
{
    uint32_t u32AddressReg = 0UL;
    u32AddressReg = MCU__u32ReadRegister(SCB_BASE, SCB_BFAR_OFFSET,
                                  SCB_BFAR_ADDRESS_MASK, SCB_BFAR_R_ADDRESS_BIT);
    return (u32AddressReg);
}
