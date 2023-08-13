/**
 *
 * @file WDT_Stall.c
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
 * @verbatim 23 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 23 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/WDT/Driver/xHeader/WDT_Stall.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/WDT/Driver/Intrinsics/Primitives/WDT_Primitives.h>
#include <xDriver_MCU/WDT/Peripheral/WDT_Peripheral.h>

WDT_nERROR WDT__enSetStallMode(WDT_nMODULE enModuleArg, WDT_nSTALL enModeArg)
{
    WDT_Register_t stRegister;
    stRegister.uxShift = WDT_TEST_R_STALL_BIT;
    stRegister.uxMask = WDT_TEST_STALL_MASK;
    stRegister.uptrAddress = WDT_TEST_OFFSET;
    stRegister.uxValue = (UBase_t) enModeArg;

    WDT_nERROR enErrorReg;
    enErrorReg = WDT__enWriteRegister(enModuleArg, &stRegister);
    return (enErrorReg);
}

WDT_nERROR WDT__enGetStallMode(WDT_nMODULE enModuleArg, WDT_nSTALL* penModeArg)
{
    WDT_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) penModeArg) ? WDT_enERROR_POINTER : WDT_enERROR_OK;

    if(WDT_enERROR_OK == enErrorReg)
    {
        WDT_Register_t stRegister;
        stRegister.uxShift = WDT_TEST_R_STALL_BIT;
        stRegister.uxMask = WDT_TEST_STALL_MASK;
        stRegister.uptrAddress = WDT_TEST_OFFSET;
        enErrorReg = WDT__enReadRegister(enModuleArg, &stRegister);
        if(WDT_enERROR_OK == enErrorReg)
        {
            *penModeArg = (WDT_nSTALL) stRegister.uxValue;
        }
    }
    return (enErrorReg);
}

