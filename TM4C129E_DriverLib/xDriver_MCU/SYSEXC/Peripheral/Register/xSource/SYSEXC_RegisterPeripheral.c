/**
 *
 * @file SYSEXC_RegisterPeripheral.c
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
 * @verbatim 19 oct. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 19 oct. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/SYSEXC/Peripheral/Register/xHeader/SYSEXC_RegisterPeripheral.h>

uintptr_t SYSEXC__uptrBlockBaseAddress(SYSEXC_nMODULE enModuleArg)
{
    const uintptr_t SYSEXC_BLOCK_BASE[(UBase_t) SYSEXC_enMODULE_MAX] =
    {
     SYSEXC0_BASE,
    };
    return (SYSEXC_BLOCK_BASE[(UBase_t) enModuleArg]);
}





