/**
 *
 * @file CRC_RegisterAddress.h
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

#ifndef XDRIVER_MCU_CRC_PERIPHERAL_REGISTER_XHEADER_CRC_REGISTERADDRESS_H_
#define XDRIVER_MCU_CRC_PERIPHERAL_REGISTER_XHEADER_CRC_REGISTERADDRESS_H_

#include <xDriver_MCU/CRC/Peripheral/xHeader/CRC_Enum.h>

#define CRC_BASE    ((UBase_t) 0x44030000UL)

#define CRC_CTRL_OFFSET    ((UBase_t) 0x0400UL)
#define CRC_SEED_OFFSET    ((UBase_t) 0x0410UL)
#define CRC_DIN_OFFSET    ((UBase_t) 0x0414UL)
#define CRC_RSLTPP_OFFSET    ((UBase_t) 0x0418UL)

#endif /* XDRIVER_MCU_CRC_PERIPHERAL_REGISTER_XHEADER_CRC_REGISTERADDRESS_H_ */
