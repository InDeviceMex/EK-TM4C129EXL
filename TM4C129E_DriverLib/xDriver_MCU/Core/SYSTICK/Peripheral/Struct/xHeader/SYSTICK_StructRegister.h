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

#include <xDriver_MCU/Core/SYSTICK/Peripheral/xHeader/SYSTICK_Enum.h>

typedef volatile struct
{
    volatile UBase_t ENABLE :1;
    volatile UBase_t TICKINT :1;
    volatile UBase_t CLKSOURCE :1;
    const UBase_t reserved :13;
    const volatile UBase_t COUNTFLAG :1;
    const UBase_t reserved1 :15;
}SYSTICK_CSR_t;

typedef volatile struct
{
    volatile UBase_t RELOAD :24;
    const UBase_t reserved :8;
}SYSTICK_RVR_t;

typedef volatile struct
{
    volatile UBase_t CURRENT :24;
    const UBase_t reserved :8;
}SYSTICK_CVR_t;

typedef volatile struct
{
    volatile UBase_t TENMS :24;
    UBase_t reserved :6;
    volatile const UBase_t SKEW :1;
    volatile const UBase_t NOREF :1;
}SYSTICK_CR_t;

#endif /* XDRIVER_MCU_DRIVER_HEADER_SYSTICK_SYSTICK_PERIPHERAL_SYSTICK_STRUCT_SYSTICK_STRUCTREGISTER_H_ */
