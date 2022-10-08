/**
 *
 * @file WDT_ReadReg.c
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
 * @verbatim 24 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 24 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/WDT/Driver/Intrinsics/Primitives/xHeader/WDT_ReadReg.h>

#include <xDriver_MCU/WDT/Driver/Intrinsics/Primitives/xHeader/WDT_Wait.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/WDT/Peripheral/WDT_Peripheral.h>

UBase_t WDT__uxReadRegister(WDT_nMODULE enModule, UBase_t uxOffsetRegister,
                              UBase_t uxMaskFeature, UBase_t uxBitFeature)
{
    UBase_t uxFeatureValue = 0UL;
    UBase_t uxWDTBase = 0UL;
    UBase_t uxModule = 0UL;

    uxModule = MCU__uxCheckParams((UBase_t) enModule, (UBase_t) WDT_enMODULE_MAX);

    uxWDTBase = WDT__uxBlockBaseAddress((WDT_nMODULE) uxModule);
    uxFeatureValue = MCU__uxReadRegister(uxWDTBase, uxOffsetRegister,
                                           uxMaskFeature, uxBitFeature);

    return (uxFeatureValue);
}
