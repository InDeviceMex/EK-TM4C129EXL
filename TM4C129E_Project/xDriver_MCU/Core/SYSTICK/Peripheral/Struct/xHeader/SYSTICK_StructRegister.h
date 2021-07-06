/**
 *
 * @file SYSTICK_StructRegister.h
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
 * @verbatim 22 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 22 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_SYSTICK_SYSTICK_PERIPHERAL_SYSTICK_STRUCT_SYSTICK_STRUCTREGISTER_H_
#define XDRIVER_MCU_DRIVER_HEADER_SYSTICK_SYSTICK_PERIPHERAL_SYSTICK_STRUCT_SYSTICK_STRUCTREGISTER_H_

#include <xUtils/Standard/Standard.h>                             /* standard types definitions                      */

typedef volatile struct
{
    volatile uint32_t ENABLE :1;
    volatile uint32_t TICKINT :1;
    volatile uint32_t CLKSOURCE :1;
    const uint32_t reserved :13;
    const volatile uint32_t COUNTFLAG :1;
    const uint32_t reserved1 :15;
}SYSTICK_CSR_TypeDef;

typedef volatile struct
{
    volatile uint32_t RELOAD :24;
    const uint32_t reserved :8;
}SYSTICK_RVR_TypeDef;

typedef volatile struct
{
    volatile uint32_t CURRENT :24;
    const uint32_t reserved :8;
}SYSTICK_CVR_TypeDef;

typedef volatile struct
{
    volatile uint32_t TENMS :24;
    uint32_t reserved :6;
    volatile const uint32_t SKEW :1;
    volatile const uint32_t NOREF :1;
}SYSTICK_CR_TypeDef;

#endif /* XDRIVER_MCU_DRIVER_HEADER_SYSTICK_SYSTICK_PERIPHERAL_SYSTICK_STRUCT_SYSTICK_STRUCTREGISTER_H_ */
