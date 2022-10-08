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
    volatile const UBase_t FPIDCRIS :1;
    volatile const UBase_t FPDZCRIS :1;
    volatile const UBase_t FPIOCRIS :1;
    volatile const UBase_t FPUFCRIS :1;
    volatile const UBase_t FPOFCRIS :1;
    volatile const UBase_t FPIXCRIS :1;
    const UBase_t reserved :26;
}SYSEXCRIS_t;

typedef volatile struct
{
    volatile UBase_t FPIDCIM :1;
    volatile UBase_t FPDZCIM :1;
    volatile UBase_t FPIOCIM :1;
    volatile UBase_t FPUFCIM :1;
    volatile UBase_t FPOFCIM :1;
    volatile UBase_t FPIXCIM :1;
    const UBase_t reserved :26;
}SYSEXCIM_t;


typedef volatile struct
{
    volatile const UBase_t FPIDCMIS :1;
    volatile const UBase_t FPDZCMIS :1;
    volatile const UBase_t FPIOCMIS :1;
    volatile const UBase_t FPUFCMIS :1;
    volatile const UBase_t FPOFCMIS :1;
    volatile const UBase_t FPIXCMIS :1;
    const UBase_t reserved :26;
}SYSEXCMIS_t;

typedef volatile struct
{
    volatile UBase_t FPIDCCIC :1;
    volatile UBase_t FPDZCCIC :1;
    volatile UBase_t FPIOCCIC :1;
    volatile UBase_t FPUFCCIC :1;
    volatile UBase_t FPOFCCIC :1;
    volatile UBase_t FPIXCCIC :1;
    const UBase_t reserved :26;
}SYSEXCIC_t;

#endif /* XDRIVER_MCU_DRIVER_HEADER_SYSEXC_SYSEXC_PERIPHERAL_SYSEXC_STRUCT_SYSEXC_STRUCTREGISTER_H_ */
