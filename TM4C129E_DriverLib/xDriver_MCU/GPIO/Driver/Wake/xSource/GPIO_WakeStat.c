/**
 *
 * @file GPIO_WakeStat.c
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
#include <xDriver_MCU/GPIO/Driver/Wake/xHeader/GPIO_WakeStat.h>

#include <xDriver_MCU/GPIO/Driver/Intrinsics/xHeader/GPIO_Generic.h>
#include <xDriver_MCU/GPIO/Peripheral/GPIO_Peripheral.h>

void GPIO__vSetWakeStatus(GPIO_nPORT enPort, GPIO_nPINMASK enPin, GPIO_nWAKE_STATUS enWakeStatus)
{
    if(GPIO_enPORT_K == enPort)
    {
        GPIO__vSetGeneric(enPort, GPIO_WAKESTAT_OFFSET, enPin, (uint32_t) enWakeStatus);
    }
}

GPIO_nWAKE_STATUS GPIO__enGetWakeStatus(GPIO_nPORT enPort, GPIO_nPINMASK enPin)
{
    GPIO_nWAKE_STATUS enWakeReg = GPIO_enWAKE_STATUS_IDLE;

    if(GPIO_enPORT_K == enPort)
    {
        enWakeReg = (GPIO_nWAKE_STATUS) GPIO__u32GetGeneric(enPort, GPIO_WAKESTAT_OFFSET, enPin);
    }
    return (enWakeReg);
}
