/**
 *
 * @file SCB_EnumInterrupt.h
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
 * @verbatim 19 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 19 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_SCB_SCB_PERIPHERAL_SCB_ENUMINTERRUPT_H_
#define XDRIVER_MCU_DRIVER_HEADER_SCB_SCB_PERIPHERAL_SCB_ENUMINTERRUPT_H_

/*
 * ISR
 */
typedef enum
{
    ISR_enR0 = 0UL,
    ISR_enR1 = 1UL,
    ISR_enR2 = 2UL,
    ISR_enR3 = 3UL,
    ISR_enR12 = 4UL,
    ISR_enLR = 5UL,
    ISR_enPC = 6UL,
    ISR_enPSR = 7UL,
}ISR_nContext;

#endif /* XDRIVER_MCU_DRIVER_HEADER_SCB_SCB_PERIPHERAL_SCB_ENUMINTERRUPT_H_ */
