/**
 *
 * @file CRC_SW.h
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
 * @verbatim 31 oct. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 31 oct. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XAPPLICATION_MCU_CRC_XHEADER_CRC_SW_H_
#define XAPPLICATION_MCU_CRC_XHEADER_CRC_SW_H_

#include <xApplication_MCU/CRC/xHeader/CRC_Table.h>

CRC_nERROR CRC16__enCalculate(const char* pcDataValuesArg, uint32_t u32DataLengthArg, CRC16_eSubType enCrc16TypeArg, uint16_t* pu16ResultArg);

#endif /* XAPPLICATION_MCU_CRC_XHEADER_CRC_SW_H_ */
