/**
 *
 * @file SYSEXC_StructPeripheral_Bitbanding.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_SYSEXC_SYSEXC_PERIPHERAL_SYSEXC_STRUCT_SYSEXC_STRUCTPERIPHERAL_BITBANDING_H_
#define XDRIVER_MCU_DRIVER_HEADER_SYSEXC_SYSEXC_PERIPHERAL_SYSEXC_STRUCT_SYSEXC_STRUCTPERIPHERAL_BITBANDING_H_

#include <xDriver_MCU/SYSEXC/Peripheral/Struct/xHeader/SYSEXC_StructRegister_Bitbanding.h>

typedef volatile struct
{
    union
    {
        volatile const uint32_t RIS [32UL];
        BITBANDING_SYSEXCRIS_TypeDef RIS_Bit;
    };
    union
    {
        volatile uint32_t IM [32UL];
        BITBANDING_SYSEXCIM_TypeDef IM_Bit;
    };
    union
    {
        volatile const uint32_t MIS [32UL];
        BITBANDING_SYSEXCMIS_TypeDef MIS_Bit;
    };
    union
    {
        volatile uint32_t IC [32UL];
        BITBANDING_SYSEXCIC_TypeDef IC_Bit;
    };
}SYSEXC_BITBANDING_TypeDef;

#endif /* XDRIVER_MCU_DRIVER_HEADER_SYSEXC_SYSEXC_PERIPHERAL_SYSEXC_STRUCT_SYSEXC_STRUCTPERIPHERAL_BITBANDING_H_ */
