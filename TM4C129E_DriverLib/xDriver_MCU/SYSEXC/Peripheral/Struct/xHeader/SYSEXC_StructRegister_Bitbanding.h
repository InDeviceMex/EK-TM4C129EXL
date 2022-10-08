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

#include <xDriver_MCU/SYSEXC/Peripheral/xHeader/SYSEXC_Enum.h>

typedef volatile struct
{
    volatile const UBase_t FPIDCRIS;
    volatile const UBase_t FPDZCRIS;
    volatile const UBase_t FPIOCRIS;
    volatile const UBase_t FPUFCRIS;
    volatile const UBase_t FPOFCRIS;
    volatile const UBase_t FPIXCRIS;
    const UBase_t reserved [26UL];
}BITBANDING_SYSEXCRIS_t;


typedef volatile struct
{
    volatile UBase_t FPIDCIM;
    volatile UBase_t FPDZCIM;
    volatile UBase_t FPIOCIM;
    volatile UBase_t FPUFCIM;
    volatile UBase_t FPOFCIM;
    volatile UBase_t FPIXCIM;
    const UBase_t reserved [26UL];
}BITBANDING_SYSEXCIM_t;


typedef volatile struct
{
    volatile const UBase_t FPIDCMIS;
    volatile const UBase_t FPDZCMIS;
    volatile const UBase_t FPIOCMIS;
    volatile const UBase_t FPUFCMIS;
    volatile const UBase_t FPOFCMIS;
    volatile const UBase_t FPIXCMIS;
    const UBase_t reserved [26UL];
}BITBANDING_SYSEXCMIS_t;


typedef volatile struct
{
    volatile UBase_t FPIDCCIC;
    volatile UBase_t FPDZCCIC;
    volatile UBase_t FPIOCCIC;
    volatile UBase_t FPUFCCIC;
    volatile UBase_t FPOFCCIC;
    volatile UBase_t FPIXCCIC;
    const UBase_t reserved [26UL];
}BITBANDING_SYSEXCIC_t;

#endif /* XDRIVER_MCU_DRIVER_HEADER_SYSEXC_SYSEXC_PERIPHERAL_SYSEXC_STRUCT_SYSEXC_STRUCTREGISTER_BITBANDING_H_ */
