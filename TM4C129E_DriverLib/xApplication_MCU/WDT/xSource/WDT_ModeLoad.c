/**
 *
 * @file WDT_ModeLoad.c
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
#include <xApplication_MCU/WDT/xHeader/WDT_ModeLoad.h>

#include <xApplication_MCU/WDT/xHeader/WDT_Mode.h>
#include <xApplication_MCU/WDT/Intrinsics/xHeader/WDT_Dependencies.h>


WDT_nSTATUS WDT__enSetMode_Load(WDT_nMODULE enModule, WDT_nMODE enModeArg, uint32_t u32Load)
{
    WDT_nSTATUS enReturn = WDT_enSTATUS_ERROR;
    WDT__vSetLoad(enModule, u32Load);
    enReturn = WDT__enSetMode(enModule, enModeArg);
    return (enReturn);
}

WDT_nSTATUS WDT__enSetModeStruct_Load(WDT_nMODULE enModule,
                                      const WDT_MODE_t* pstMode,
                                      uint32_t u32Load)
{
    WDT_nSTATUS enReturn = WDT_enSTATUS_ERROR;
    WDT__vSetLoad(enModule, u32Load);
    enReturn = WDT__enSetModeStruct(enModule, pstMode);
    return (enReturn);
}


