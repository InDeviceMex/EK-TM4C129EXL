/**
 *
 * @file WDT_InterruptType.c
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
 * @verbatim 26 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 26 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/WDT/Driver/xHeader/WDT_InterruptType.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/WDT/Driver/Intrinsics/Primitives/WDT_Primitives.h>
#include <xDriver_MCU/WDT/Peripheral/WDT_Peripheral.h>

WDT_nERROR WDT__enSetInterruptSourceType(WDT_nMODULE enModuleArg, WDT_nINT_TYPE enTypeArg)
{
    WDT_Register_t stRegister;
    stRegister.uxShift = WDT_CTL_R_INTTYPE_BIT;
    stRegister.uxMask = WDT_CTL_INTTYPE_MASK;
    stRegister.uptrAddress = WDT_CTL_OFFSET;
    stRegister.uxValue = (UBase_t) enTypeArg;

    WDT_nERROR enErrorReg;
    enErrorReg = WDT__enWriteRegister(enModuleArg, &stRegister);
    return (enErrorReg);
}

WDT_nERROR WDT__enGetInterruptSourceType(WDT_nMODULE enModuleArg, WDT_nINT_TYPE* penTypeArg)
{
    WDT_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) penTypeArg) ? WDT_enERROR_POINTER : WDT_enERROR_OK;
    if(WDT_enERROR_OK == enErrorReg)
    {
        WDT_Register_t stRegister;
        stRegister.uxShift = WDT_CTL_R_INTTYPE_BIT;
        stRegister.uxMask = WDT_CTL_INTTYPE_MASK;
        stRegister.uptrAddress = WDT_CTL_OFFSET;
        enErrorReg = WDT__enReadRegister(enModuleArg, &stRegister);
        if(WDT_enERROR_OK == enErrorReg)
        {
            *penTypeArg = (WDT_nINT_TYPE) stRegister.uxValue;
        }
    }
    return (enErrorReg);
}
