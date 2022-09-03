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
#include <xDriver_MCU/Core/SCB/Driver/Intrinsics/Primitives/SCB_Primitives.h>

SCB_nERROR SCB__enRequestSystemReset(SCB_nMODULE enModuleArg)
{
    SCB_Register_t stRegister;
    SCB_nERROR enErrorReg;

    stRegister.u32Shift = SCB_AIRCR_R_VECTKEY_BIT;
    stRegister.u32Mask = SCB_AIRCR_VECTKEY_MASK ;
    stRegister.uptrAddress = SCB_AIRCR_OFFSET;
    enErrorReg = SCB__enReadRegister(enModuleArg, &stRegister);
    if(SCB_enERROR_OK == enErrorReg)
    {
        if(SCB_AIRCR_VECTKEY_READ == stRegister.u32Value)
        {
            stRegister.u32Shift = 0UL;
            stRegister.u32Mask = SCB_AIRCR_R_VECTKEY_WRITE | SCB_AIRCR_R_SYSRESETREQ_RESET;
            stRegister.uptrAddress = SCB_AIRCR_OFFSET;
            stRegister.u32Value = SCB_AIRCR_R_VECTKEY_MASK | SCB_AIRCR_R_SYSRESETREQ_MASK;
            MCU__vDataSyncBarrier();
            enErrorReg = SCB__enWriteRegister(enModuleArg, &stRegister);
            MCU__vDataSyncBarrier();

            while(1U)
            {
                MCU__vNoOperation();
            }
        }
        else
        {
            enErrorReg = SCB_enERROR_VALUE;
        }
    }

    return (enErrorReg);
}

SCB_nERROR SCB__enRequestSystemReset_Debug(SCB_nMODULE enModuleArg)
{
    SCB_Register_t stRegister;
    SCB_nERROR enErrorReg;

    stRegister.u32Shift = SCB_AIRCR_R_VECTKEY_BIT;
    stRegister.u32Mask = SCB_AIRCR_VECTKEY_MASK;
    stRegister.uptrAddress = SCB_AIRCR_OFFSET;
    enErrorReg = SCB__enReadRegister(enModuleArg, &stRegister);
    if(SCB_enERROR_OK == enErrorReg)
    {
        if(SCB_AIRCR_VECTKEY_READ == stRegister.u32Value)
        {
            stRegister.u32Shift = 0UL;
            stRegister.u32Mask = SCB_AIRCR_R_VECTKEY_WRITE | SCB_AIRCR_R_VECTRESET_NOUSE;
            stRegister.uptrAddress = SCB_AIRCR_OFFSET;
            stRegister.u32Value = SCB_AIRCR_R_VECTKEY_MASK | SCB_AIRCR_R_VECTRESET_NOEFFECT;
            MCU__vDataSyncBarrier();
            enErrorReg = SCB__enWriteRegister(enModuleArg, &stRegister);
            MCU__vDataSyncBarrier();

            while(1U)
            {
                MCU__vNoOperation();
            }
        }
        else
        {
            enErrorReg = SCB_enERROR_VALUE;
        }
    }

    return (enErrorReg);
}

