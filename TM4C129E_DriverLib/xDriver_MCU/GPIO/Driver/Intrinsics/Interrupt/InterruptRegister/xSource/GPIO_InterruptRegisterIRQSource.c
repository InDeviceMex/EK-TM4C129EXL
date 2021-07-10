/**
 *
 * @file GPIO_InterruptRegisterIRQSource.c
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
 * @verbatim 2 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 2 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/GPIO/Driver/Intrinsics/Interrupt/InterruptRegister/xHeader/GPIO_InterruptRegisterIRQSource.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/GPIO/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/GPIO_InterruptRoutine_Source.h>
#include <xDriver_MCU/GPIO/Peripheral/GPIO_Peripheral.h>

void GPIO__vRegisterIRQSourceHandler(void (*pfIrqSourceHandler) (void), GPIO_nPORT enPort, GPIO_nPIN enPin)
{
    uint32_t u32PinNumber = 0UL;
    uint32_t u32Port = 0UL;
    uint32_t u32Pin = 0UL;

    if(0UL != (uint32_t) pfIrqSourceHandler)
    {
        u32Port = MCU__u32CheckParams( (uint32_t) enPort, (uint32_t) GPIO_enPORT_MAX);

        u32Pin = (uint32_t) enPin;
        u32Pin &= (uint32_t) GPIO_enPIN_ALL;
        while(0UL == (u32Pin & 0x1UL))
        {
            u32PinNumber++;
            u32Pin >>= 1UL;
        }
        MCU__vRegisterIRQSourceHandler(pfIrqSourceHandler,
                                       GPIO__pvfGetIRQSourceHandlerPointer((GPIO_nPORT) u32Port, (GPIO_nPIN_NUMBER) u32PinNumber),
                                       0UL,
                                       1UL);
    }
}

void GPIO__vRegisterIRQSourceDMAHandler(void (*pfIrqSourceHandler) (void), GPIO_nPORT enPort)
{
    uint32_t u32Port = 0UL;

    if(0UL != (uint32_t) pfIrqSourceHandler)
    {
        u32Port = MCU__u32CheckParams( (uint32_t) enPort, (uint32_t) GPIO_enPORT_MAX);
        MCU__vRegisterIRQSourceHandler(pfIrqSourceHandler,
                                       GPIO__pvfGetIRQSourceDMAHandlerPointer((GPIO_nPORT) u32Port),
                                       0UL,
                                       1UL);
    }
}
