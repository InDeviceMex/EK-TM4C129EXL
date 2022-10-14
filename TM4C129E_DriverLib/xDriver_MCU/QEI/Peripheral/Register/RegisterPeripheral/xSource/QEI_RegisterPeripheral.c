/**
 *
 * @file QEI_RegisterPeripheral.c
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
 * @verbatim Apr 5, 2021 @endverbatim
 *
 * @author
 * @verbatim indevicemex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * Apr 5, 2021        indevicemex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/QEI/Peripheral/Register/RegisterPeripheral/QEI_RegisterPeripheral.h>

uintptr_t QEI__uptrBlockBaseAddress(QEI_nMODULE enModuleArg)
{
    const uintptr_t QEI_BLOCK_BASE[(UBase_t) QEI_enMODULE_MAX] =
    {
     QEI0_BASE
    };
    return (QEI_BLOCK_BASE[(UBase_t) enModuleArg]);
}
