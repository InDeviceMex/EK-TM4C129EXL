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
    volatile const UBase_t FPIDC;
    volatile const UBase_t FPDZC;
    volatile const UBase_t FPIOC;
    volatile const UBase_t FPUFC;
    volatile const UBase_t FPOFC;
    volatile const UBase_t FPIXC;
    const UBase_t reserved [26UL];
}SYSEXC_BITBANDING_RIS_t;


typedef volatile struct
{
    volatile UBase_t FPIDC;
    volatile UBase_t FPDZC;
    volatile UBase_t FPIOC;
    volatile UBase_t FPUFC;
    volatile UBase_t FPOFC;
    volatile UBase_t FPIXC;
    const UBase_t reserved [26UL];
}SYSEXC_BITBANDING_IM_t;


typedef volatile struct
{
    volatile const UBase_t FPIDC;
    volatile const UBase_t FPDZC;
    volatile const UBase_t FPIOC;
    volatile const UBase_t FPUFC;
    volatile const UBase_t FPOFC;
    volatile const UBase_t FPIXC;
    const UBase_t reserved [26UL];
}SYSEXC_BITBANDING_MIS_t;


typedef volatile struct
{
    volatile UBase_t FPIDC;
    volatile UBase_t FPDZC;
    volatile UBase_t FPIOC;
    volatile UBase_t FPUFC;
    volatile UBase_t FPOFC;
    volatile UBase_t FPIXC;
    const UBase_t reserved [26UL];
}SYSEXC_BITBANDING_IC_t;

#endif /* XDRIVER_MCU_DRIVER_HEADER_SYSEXC_SYSEXC_PERIPHERAL_SYSEXC_STRUCT_SYSEXC_STRUCTREGISTER_BITBANDING_H_ */
