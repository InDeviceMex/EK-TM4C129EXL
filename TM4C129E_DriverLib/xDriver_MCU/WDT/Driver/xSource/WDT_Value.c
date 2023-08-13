/**
 *
 * @file WDT_Value.c
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
#include <xDriver_MCU/WDT/Driver/xHeader/WDT_Value.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/WDT/Driver/Intrinsics/Primitives/WDT_Primitives.h>
#include <xDriver_MCU/WDT/Peripheral/WDT_Peripheral.h>

WDT_nERROR WDT__enGetCurrentCount(WDT_nMODULE enModuleArg, UBase_t* puxIntervalArg)
{
    WDT_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) puxIntervalArg) ? WDT_enERROR_POINTER : WDT_enERROR_OK;

    if(WDT_enERROR_OK == enErrorReg)
    {
        WDT_Register_t stRegister;
        stRegister.uxShift = WDT_VALUE_R_VALUE_BIT;
        stRegister.uxMask = WDT_VALUE_VALUE_MASK;
        stRegister.uptrAddress = WDT_VALUE_OFFSET;
        enErrorReg = WDT__enReadRegister(enModuleArg, &stRegister);
        if(WDT_enERROR_OK == enErrorReg)
        {
            *puxIntervalArg = (UBase_t) stRegister.uxValue;
        }
    }
    return (enErrorReg);
}
