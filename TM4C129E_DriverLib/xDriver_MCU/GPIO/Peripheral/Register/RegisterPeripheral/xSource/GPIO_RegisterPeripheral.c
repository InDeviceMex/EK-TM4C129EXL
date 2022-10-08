/**
 *
 * @file GPIO_RegisterPeripheral.c
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
 * @verbatim 9 jul. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 9 jul. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/GPIO/Peripheral/Register/RegisterPeripheral/GPIO_RegisterPeripheral.h>

uintptr_t GPIO__uptrBlockBaseAddress(GPIO_nPORT enPortArg)
{
    const uintptr_t GPIO_BLOCK_BASE[(UBase_t) GPIO_enPORT_MAX] =
    {
     GPIOA_BASE, GPIOB_BASE, GPIOC_BASE, GPIOD_BASE,
     GPIOE_BASE, GPIOF_BASE, GPIOG_BASE, GPIOH_BASE,
     GPIOJ_BASE, GPIOK_BASE, GPIOL_BASE, GPIOM_BASE,
     GPION_BASE, GPIOP_BASE, GPIOQ_BASE
    };
    return (GPIO_BLOCK_BASE[(UBase_t) enPortArg]);
}


