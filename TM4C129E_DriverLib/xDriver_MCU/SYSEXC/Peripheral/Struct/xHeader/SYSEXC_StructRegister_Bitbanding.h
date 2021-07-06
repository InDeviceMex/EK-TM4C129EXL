/**
 *
 * @file SYSEXC_StructRegister_Bitbanding.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_SYSEXC_SYSEXC_PERIPHERAL_SYSEXC_STRUCT_SYSEXC_STRUCTREGISTER_BITBANDING_H_
#define XDRIVER_MCU_DRIVER_HEADER_SYSEXC_SYSEXC_PERIPHERAL_SYSEXC_STRUCT_SYSEXC_STRUCTREGISTER_BITBANDING_H_

#include <xUtils/Standard/Standard.h>

typedef volatile struct
{
    volatile const uint32_t FPIDCRIS;
    volatile const uint32_t FPDZCRIS;
    volatile const uint32_t FPIOCRIS;
    volatile const uint32_t FPUFCRIS;
    volatile const uint32_t FPOFCRIS;
    volatile const uint32_t FPIXCRIS;
    const uint32_t reserved [26UL];
}BITBANDING_SYSEXCRIS_TypeDef;


typedef volatile struct
{
    volatile uint32_t FPIDCIM;
    volatile uint32_t FPDZCIM;
    volatile uint32_t FPIOCIM;
    volatile uint32_t FPUFCIM;
    volatile uint32_t FPOFCIM;
    volatile uint32_t FPIXCIM;
    const uint32_t reserved [26UL];
}BITBANDING_SYSEXCIM_TypeDef;


typedef volatile struct
{
    volatile const uint32_t FPIDCMIS;
    volatile const uint32_t FPDZCMIS;
    volatile const uint32_t FPIOCMIS;
    volatile const uint32_t FPUFCMIS;
    volatile const uint32_t FPOFCMIS;
    volatile const uint32_t FPIXCMIS;
    const uint32_t reserved [26UL];
}BITBANDING_SYSEXCMIS_TypeDef;


typedef volatile struct
{
    volatile uint32_t FPIDCCIC;
    volatile uint32_t FPDZCCIC;
    volatile uint32_t FPIOCCIC;
    volatile uint32_t FPUFCCIC;
    volatile uint32_t FPOFCCIC;
    volatile uint32_t FPIXCCIC;
    const uint32_t reserved [26UL];
}BITBANDING_SYSEXCIC_TypeDef;

#endif /* XDRIVER_MCU_DRIVER_HEADER_SYSEXC_SYSEXC_PERIPHERAL_SYSEXC_STRUCT_SYSEXC_STRUCTREGISTER_BITBANDING_H_ */
