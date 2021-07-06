/**
 *
 * @file SCB_SysReset.c
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
#include <xDriver_MCU/Core/SCB/Driver/xHeader/SCB_SysReset.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/Core/SCB/Peripheral/SCB_Peripheral.h>

void SCB__vReqSysReset(void)
{
    uint32_t u32Reg = 0UL;

    u32Reg = MCU__u32ReadRegister(SCB_BASE, SCB_AIRCR_OFFSET,
                  SCB_AIRCR_VECTKEY_MASK, SCB_AIRCR_R_VECTKEY_BIT);
    if(SCB_AIRCR_VECTKEY_READ == u32Reg)
    {
        MCU__vDataSyncBarrier();
        MCU__vWriteRegister(SCB_BASE, SCB_AIRCR_OFFSET,
                (SCB_AIRCR_R_VECTKEY_WRITE | SCB_AIRCR_R_VECTRESET_NOUSE),
                (SCB_AIRCR_R_VECTKEY_MASK | SCB_AIRCR_R_VECTRESET_MASK),
                0UL);
        MCU__vDataSyncBarrier();

        while(1UL)
        {
          MCU__vNoOperation();
        }
    }
}

void SCB__vReqSysReset_Peripheral(void)
{
    uint32_t u32Reg = 0UL;

    u32Reg = MCU__u32ReadRegister(SCB_BASE, SCB_AIRCR_OFFSET,
                          SCB_AIRCR_VECTKEY_MASK, SCB_AIRCR_R_VECTKEY_BIT);
    if(SCB_AIRCR_VECTKEY_READ == u32Reg)
    {
        MCU__vDataSyncBarrier();
        MCU__vWriteRegister(SCB_BASE, SCB_AIRCR_OFFSET,
                            (SCB_AIRCR_R_VECTKEY_WRITE | SCB_AIRCR_R_SYSRESETREQ_RESET),
                            (SCB_AIRCR_R_VECTKEY_MASK | SCB_AIRCR_R_SYSRESETREQ_MASK),
                            0UL);
        MCU__vDataSyncBarrier();

        while(1U)
        {
            MCU__vNoOperation();
        }
    }
}
