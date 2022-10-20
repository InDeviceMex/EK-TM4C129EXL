/**
 *
 * @file SYSEXC_StructPeripheral.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_SYSEXC_SYSEXC_PERIPHERAL_SYSEXC_STRUCT_SYSEXC_STRUCTPERIPHERAL_H_
#define XDRIVER_MCU_DRIVER_HEADER_SYSEXC_SYSEXC_PERIPHERAL_SYSEXC_STRUCT_SYSEXC_STRUCTPERIPHERAL_H_

#include <xDriver_MCU/SYSEXC/Peripheral/Struct/xHeader/SYSEXC_StructRegister.h>

typedef volatile struct
{
    union
    {
        volatile const UBase_t RIS;
        SYSEXC_RIS_t RIS_Bit;
    };
    union
    {
        volatile UBase_t IM;
        SYSEXC_IM_t IM_Bit;
    };
    union
    {
        volatile const UBase_t MIS;
        SYSEXC_MIS_t MIS_Bit;
    };
    union
    {
        volatile UBase_t IC;
        SYSEXC_IC_t IC_Bit;
    };
}SYSEXC_t;


typedef volatile struct
{
    SYSEXC_t MODULE [(UBase_t) SYSEXC_enMODULE_MAX];
}SYSEXCS_t;

#endif /* XDRIVER_MCU_DRIVER_HEADER_SYSEXC_SYSEXC_PERIPHERAL_SYSEXC_STRUCT_SYSEXC_STRUCTPERIPHERAL_H_ */
