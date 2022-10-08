/**
 *
 * @file SSI_ReadRegister.c
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
 * @verbatim 17 feb. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 17 feb. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/SSI/Driver/Intrinsics/Primitives/xHeader/SSI_ReadRegister.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/SSI/Peripheral/SSI_Peripheral.h>

UBase_t SSI__uxReadRegister(SSI_nMODULE enModule, UBase_t uxOffsetRegister,
                              UBase_t uxMaskFeature, UBase_t uxBitFeature)
{
    UBase_t uxFeatureValue = 0UL;
    UBase_t uxSsiBase = 0UL;
    UBase_t uxModule = 0UL;
    uxModule = MCU__uxCheckParams((UBase_t) enModule, (UBase_t) SSI_enMODULE_MAX);

    uxSsiBase = SSI__uxBlockBaseAddress((SSI_nMODULE) uxModule);
    uxFeatureValue = MCU__uxReadRegister(uxSsiBase, uxOffsetRegister,
                                           uxMaskFeature, uxBitFeature);

    return (uxFeatureValue);
}
