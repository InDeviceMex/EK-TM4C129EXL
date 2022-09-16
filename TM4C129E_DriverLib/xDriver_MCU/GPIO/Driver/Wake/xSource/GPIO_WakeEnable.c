/**
 *
 * @file GPIO_WakeEnable.c
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
 * @verbatim 10 jul. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 10 jul. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/GPIO/Driver/Wake/xHeader/GPIO_WakeEnable.h>

#include <xDriver_MCU/GPIO/Driver/Intrinsics/xHeader/GPIO_Generic.h>
#include <xDriver_MCU/GPIO/Peripheral/GPIO_Peripheral.h>

void GPIO__vSetWakeEnable(GPIO_nPORT enPort, GPIO_nPINMASK enPin, GPIO_nSTATE enWakeEnable)
{
    if(GPIO_enPORT_K == enPort)
    {
        GPIO__vSetGeneric(enPort, GPIO_WAKEPEN_OFFSET, enPin, (uint32_t) enWakeEnable);
    }
}

GPIO_nSTATE GPIO__enGetWakeEnable(GPIO_nPORT enPort, GPIO_nPINMASK enPin)
{
    GPIO_nSTATE enWakeReg = GPIO_enSTATE_DIS;

    if(GPIO_enPORT_K == enPort)
    {
        enWakeReg = (GPIO_nSTATE) GPIO__u32GetGeneric(enPort, GPIO_WAKEPEN_OFFSET, enPin);
    }
    return (enWakeReg);
}

