/**
 *
 * @file GPIO_Ready.c
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
#include <xApplication_MCU/GPIO/Intrinsics/xHeader/GPIO_Ready.h>

#include <xApplication_MCU/GPIO/Intrinsics/xHeader/GPIO_Dependencies.h>

void GPIO__vSetReady(GPIO_nPORT enPort)
{
#if !defined(Opt_Check)
    SYSCTL_nPERIPHERAL enPeripheral = SYSCTL_enGPIOA;
    enPort = (GPIO_nPORT) MCU__u32CheckParams( (uint32_t) enPort, (uint32_t) GPIO_enPORT_MAX);
    enPeripheral |= enPort;
    SYSCTL__vSetReady(enPeripheral);
#endif
}

void GPIO__vClearReady(GPIO_nPORT enPort)
{
    SYSCTL_nPERIPHERAL enPeripheral = SYSCTL_enGPIOA;
    enPort = (GPIO_nPORT) MCU__u32CheckParams( (uint32_t) enPort, (uint32_t) GPIO_enPORT_MAX);
    enPeripheral |= enPort;
    SYSCTL__vClearReady(enPeripheral);
}
GPIO_nREADY GPIO__enIsReady(GPIO_nPORT enPort)
{
#if !defined(Opt_Check)
    GPIO_nREADY enReady = GPIO_enNOREADY;
    SYSCTL_nPERIPHERAL enPeripheral = SYSCTL_enGPIOA;
    enPort = (GPIO_nPORT) MCU__u32CheckParams( (uint32_t) enPort, (uint32_t) GPIO_enPORT_MAX);
    enPeripheral |= enPort;
    enReady = (GPIO_nREADY) SYSCTL__enIsReady(enPeripheral);
#else
    GPIO_nREADY enReady = GPIO_enREADY;
#endif
    return (enReady);
}
