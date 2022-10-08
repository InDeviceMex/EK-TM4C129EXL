/**
 *
 * @file PWM_RegisterPeripheral.c
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
 * @verbatim 24 dic. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 24 dic. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/PWM/Peripheral/Register/RegisterPeripheral/PWM_RegisterPeripheral.h>

uintptr_t PWM__uptrBlockBaseAddress(PWM_nMODULE enModuleArg)
{
    const uintptr_t PWM_BLOCK_BASE[(UBase_t) PWM_enMODULE_MAX] =
    {
     PWM0_BASE
    };
    return (PWM_BLOCK_BASE[(UBase_t) enModuleArg]);
}




