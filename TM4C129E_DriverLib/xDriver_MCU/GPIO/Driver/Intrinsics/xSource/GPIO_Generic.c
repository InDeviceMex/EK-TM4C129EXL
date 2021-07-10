/**
 *
 * @file GPIO_Generic.c
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
 * @verbatim 30 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 30 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/GPIO/Driver/Intrinsics/xHeader/GPIO_Generic.h>

#include <xDriver_MCU/GPIO/Driver/Intrinsics/Primitives/GPIO_Primitives.h>
#include <xDriver_MCU/GPIO/Peripheral/GPIO_Peripheral.h>

void GPIO__vEnGeneric(GPIO_nPORT enPort, uint32_t u32RegisterOffset, GPIO_nPIN enPin)
{
    GPIO__vWriteRegister(enPort, u32RegisterOffset, (uint32_t) enPin, (uint32_t) enPin, 0UL);
}

void GPIO__vDisGeneric(GPIO_nPORT enPort, uint32_t u32RegisterOffset, GPIO_nPIN enPin)
{
    GPIO__vWriteRegister(enPort, u32RegisterOffset, 0UL, (uint32_t) enPin, 0UL);
}

void GPIO__vSetGeneric(GPIO_nPORT enPort, uint32_t u32RegisterOffset, GPIO_nPIN enPin, uint32_t u32Feature)
{
    if(0UL == u32Feature)
    {
        GPIO__vDisGeneric(enPort, u32RegisterOffset, enPin);
    }
    else
    {
        GPIO__vEnGeneric(enPort, u32RegisterOffset, enPin);
    }
}


uint32_t GPIO__u32GetGeneric(GPIO_nPORT enPort, uint32_t u32RegisterOffset, GPIO_nPIN enPin)
{
    uint32_t u32Feature = 0xFFFFFFFFUL;
    GPIO_nSTATUS enStatus = GPIO_enSTATUS_UNDEF;
    uint32_t u32Reg = 0UL;
    enPin &= (uint32_t) GPIO_enPIN_ALL;
    enStatus = GPIO__enReadRegister(enPort, GPIO_ADCCTL_OFFSET, &u32Reg, (uint32_t) enPin, 0UL);
    if(GPIO_enSTATUS_OK == enStatus)
    {
        if(0UL != u32Reg)
        {
            u32Feature = 1UL;
        }
        else
        {
            u32Feature = 0UL;
        }
    }
    return (u32Feature);
}
