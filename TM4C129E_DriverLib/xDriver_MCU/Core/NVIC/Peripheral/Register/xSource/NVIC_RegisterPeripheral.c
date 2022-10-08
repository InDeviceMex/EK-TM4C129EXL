/**
 *
 * @file NVIC_RegisterPeripheral.c
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
#include <xDriver_MCU/Core/NVIC/Peripheral/Register/xHeader/NVIC_RegisterPeripheral.h>

uintptr_t NVIC__uptrBlockBaseAddress(NVIC_nMODULE enModuleArg)
{
    uintptr_t NVIC_BLOCK_BASE[(UBase_t) NVIC_enMODULE_MAX] =
    {
     NVIC_BASE
    };
    return (NVIC_BLOCK_BASE[(UBase_t) enModuleArg]);
}




