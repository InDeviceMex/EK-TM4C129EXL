/**
 *
 * @file SCB_RegisterPeripheral.c
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
 * @verbatim 1 sep. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 1 sep. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/Core/SCB/Peripheral/Register/xHeader/SCB_RegisterPeripheral.h>

uintptr_t SCB__uptrBlockBaseAddress(SCB_nMODULE enModuleArg)
{
    uintptr_t SCB_BLOCK_BASE[(UBase_t) SCB_enMODULE_MAX] =
    {
     SCB_BASE
    };
    return (SCB_BLOCK_BASE[(UBase_t) enModuleArg]);
}




