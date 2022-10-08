/**
 *
 * @file CRC_Enum.h
 * @copyright
 * @verbatim InDeviceMex 2021 @endverbatim
 *
 * @par Responsibility
 * @verbatim InDeviceMex Developers @endverbatim
 *
 * @version
 * @verbatim 1.0 @endverbatim
 *
 * @date
 * @verbatim 30 oct. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 30 oct. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_CRC_PERIPHERAL_XHEADER_CRC_ENUM_H_
#define XDRIVER_MCU_CRC_PERIPHERAL_XHEADER_CRC_ENUM_H_

#include <xDriver_MCU/Common/xHeader/MCU_Enum.h>

typedef enum
{
    CRC_enERROR_OK = (UBase_t) MCU_enERROR_OK,
    CRC_enERROR_POINTER = (UBase_t) MCU_enERROR_POINTER,
    CRC_enERROR_VALUE = (UBase_t) MCU_enERROR_VALUE,
    CRC_enERROR_RANGE = (UBase_t) MCU_enERROR_RANGE,
    CRC_enERROR_UNDEF = (UBase_t) MCU_enERROR_UNDEF,
}CRC_nERROR;

#endif /* XDRIVER_MCU_CRC_PERIPHERAL_XHEADER_CRC_ENUM_H_ */
