/**
 *
 * @file SYSEXC_StructRegister.h
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
 * Date Author Version Description
 * 22 jun. 2020 vyldram 1.0 initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_SYSEXC_SYSEXC_PERIPHERAL_SYSEXC_STRUCT_SYSEXC_STRUCTREGISTER_H_
#define XDRIVER_MCU_DRIVER_HEADER_SYSEXC_SYSEXC_PERIPHERAL_SYSEXC_STRUCT_SYSEXC_STRUCTREGISTER_H_

#include <xDriver_MCU/SYSEXC/Peripheral/xHeader/SYSEXC_Enum.h>

typedef volatile struct
{
    volatile const UBase_t FPIDC :1;
    volatile const UBase_t FPDZC :1;
    volatile const UBase_t FPIOC :1;
    volatile const UBase_t FPUFC :1;
    volatile const UBase_t FPOFC :1;
    volatile const UBase_t FPIXC :1;
    const UBase_t reserved :26;
}SYSEXC_RIS_t;

typedef volatile struct
{
    volatile UBase_t FPIDC :1;
    volatile UBase_t FPDZC :1;
    volatile UBase_t FPIOC :1;
    volatile UBase_t FPUFC :1;
    volatile UBase_t FPOFC :1;
    volatile UBase_t FPIXC :1;
    const UBase_t reserved :26;
}SYSEXC_IM_t;


typedef volatile struct
{
    volatile const UBase_t FPIDC :1;
    volatile const UBase_t FPDZC :1;
    volatile const UBase_t FPIOC :1;
    volatile const UBase_t FPUFC :1;
    volatile const UBase_t FPOFC :1;
    volatile const UBase_t FPIXC :1;
    const UBase_t reserved :26;
}SYSEXC_MIS_t;

typedef volatile struct
{
    volatile UBase_t FPIDC :1;
    volatile UBase_t FPDZC :1;
    volatile UBase_t FPIOC :1;
    volatile UBase_t FPUFC :1;
    volatile UBase_t FPOFC :1;
    volatile UBase_t FPIXC :1;
    const UBase_t reserved :26;
}SYSEXC_IC_t;

#endif /* XDRIVER_MCU_DRIVER_HEADER_SYSEXC_SYSEXC_PERIPHERAL_SYSEXC_STRUCT_SYSEXC_STRUCTREGISTER_H_ */
