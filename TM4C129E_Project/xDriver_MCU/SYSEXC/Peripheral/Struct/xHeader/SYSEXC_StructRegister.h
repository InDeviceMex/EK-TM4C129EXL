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

#include <xUtils/Standard/Standard.h>

typedef volatile struct
{
    volatile const uint32_t FPIDCRIS :1;
    volatile const uint32_t FPDZCRIS :1;
    volatile const uint32_t FPIOCRIS :1;
    volatile const uint32_t FPUFCRIS :1;
    volatile const uint32_t FPOFCRIS :1;
    volatile const uint32_t FPIXCRIS :1;
    const uint32_t reserved :26;
}SYSEXCRIS_TypeDef;

typedef volatile struct
{
    volatile uint32_t FPIDCIM :1;
    volatile uint32_t FPDZCIM :1;
    volatile uint32_t FPIOCIM :1;
    volatile uint32_t FPUFCIM :1;
    volatile uint32_t FPOFCIM :1;
    volatile uint32_t FPIXCIM :1;
    const uint32_t reserved :26;
}SYSEXCIM_TypeDef;


typedef volatile struct
{
    volatile const uint32_t FPIDCMIS :1;
    volatile const uint32_t FPDZCMIS :1;
    volatile const uint32_t FPIOCMIS :1;
    volatile const uint32_t FPUFCMIS :1;
    volatile const uint32_t FPOFCMIS :1;
    volatile const uint32_t FPIXCMIS :1;
    const uint32_t reserved :26;
}SYSEXCMIS_TypeDef;

typedef volatile struct
{
    volatile uint32_t FPIDCCIC :1;
    volatile uint32_t FPDZCCIC :1;
    volatile uint32_t FPIOCCIC :1;
    volatile uint32_t FPUFCCIC :1;
    volatile uint32_t FPOFCCIC :1;
    volatile uint32_t FPIXCCIC :1;
    const uint32_t reserved :26;
}SYSEXCIC_TypeDef;

#endif /* XDRIVER_MCU_DRIVER_HEADER_SYSEXC_SYSEXC_PERIPHERAL_SYSEXC_STRUCT_SYSEXC_STRUCTREGISTER_H_ */
