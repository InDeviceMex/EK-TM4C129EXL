/**
 *
 * @file GPIO_Init.c
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
 * @verbatim 11 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 11 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xApplication_MCU/GPIO/xHeader/GPIO_Init.h>

#include <xApplication_MCU/GPIO/Interrupt/GPIO_Interrupt.h>

GPIO_nERROR GPIO__enInit(void)
{
    GPIO_nERROR enErrorReg;
    enErrorReg = GPIO__enRegisterAll_IRQVectorHandler();
    return (enErrorReg);
}
