/**
 *
 * @file QEI_WriteRegister.c
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
 * @verbatim Apr 8, 2021 @endverbatim
 *
 * @author
 * @verbatim indevicemex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * Apr 8, 2021        indevicemex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/QEI/Driver/Intrinsics/Primitives/xHeader/QEI_WriteRegister.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/QEI/Peripheral/QEI_Peripheral.h>

void QEI__vWriteRegister(QEI_nMODULE enModule, UBase_t uxOffsetRegister,
                         UBase_t uxFeatureValue, UBase_t uxMaskFeature,
                         UBase_t uxBitFeature)
{
    UBase_t uxQEIBase = 0UL;
    UBase_t uxModule = 0UL;
    uxModule = MCU__uxCheckParams((UBase_t) enModule, (UBase_t) QEI_enMODULE_MAX);

    uxQEIBase = QEI__uxBlockBaseAddress((QEI_nMODULE) uxModule);
    MCU__vWriteRegister(uxQEIBase, uxOffsetRegister, uxFeatureValue,
                        uxMaskFeature, uxBitFeature);
}
