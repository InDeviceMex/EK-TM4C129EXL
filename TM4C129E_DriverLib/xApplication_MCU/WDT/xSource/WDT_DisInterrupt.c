/**
 *
 * @file WDT_DisInterrupt.c
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
 * @verbatim 27 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 27 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xApplication_MCU/WDT/xHeader/WDT_DisInterrupt.h>

#include <xApplication_MCU/WDT/Intrinsics/WDT_Intrinsics.h>

WDT_nERROR WDT__enDisableInterruptSourceByMask(WDT_nMODULE enModuleArg, WDT_nINTMASK enInterruptMaskArg)
{
    WDT_nERROR enErrorReg;

    enErrorReg = (WDT_nERROR) MCU__enCheckParams((UBase_t) enModuleArg, (UBase_t) WDT_enMODULE_MAX);
    if(WDT_enERROR_OK == enErrorReg)
    {
        enErrorReg = WDT__enReset(enModuleArg);
    }

    return (enErrorReg);
}

WDT_nERROR WDT__enDisableInterruptSourceByNumber(WDT_nMODULE enModuleArg, WDT_nINT enInterruptArg)
{
    WDT_nERROR enErrorReg;

    enErrorReg = (WDT_nERROR) MCU__enCheckParams((UBase_t) enModuleArg, (UBase_t) WDT_enMODULE_MAX);
    if(WDT_enERROR_OK == enErrorReg)
    {
        enErrorReg = WDT__enReset(enModuleArg);
    }

    return (enErrorReg);
}
