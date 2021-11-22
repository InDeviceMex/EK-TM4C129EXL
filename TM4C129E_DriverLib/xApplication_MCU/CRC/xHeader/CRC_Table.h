/**
 *
 * @file CRC_Table.h
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

#ifndef XAPPLICATION_MCU_CRC_XHEADER_CRC_TABLE_H_
#define XAPPLICATION_MCU_CRC_XHEADER_CRC_TABLE_H_

#include <xApplication_MCU/CRC/Intrinsics/xHeader/CRC_Defines.h>

typedef enum
{
    CRC16_enSubType_CCITT_FALSE = 0UL,
    CRC16_enSubType_ARC = 1UL,
    CRC16_enSubType_AUG_CCITT = 2UL,
    CRC16_enSubType_BUYPASS = 3UL,
    CRC16_enSubType_CDMA2000 = 4UL,
    CRC16_enSubType_DDS_110 = 5UL,
    CRC16_enSubType_DECT_R = 6UL,
    CRC16_enSubType_DECT_X = 7UL,
    CRC16_enSubType_DNP = 8UL,
    CRC16_enSubType_EN_13757 = 9UL,
    CRC16_enSubType_GENIBUS = 10UL,
    CRC16_enSubType_MAXIM = 11UL,
    CRC16_enSubType_MCRF4XX = 12UL,
    CRC16_enSubType_RIELLO = 13UL,
    CRC16_enSubType_T10_DIF = 14UL,
    CRC16_enSubType_TELEDISK = 15UL,
    CRC16_enSubType_TMS37157 = 16UL,
    CRC16_enSubType_USB = 17UL,
    CRC16_enSubType_A = 18UL,
    CRC16_enSubType_KERMIT = 19UL,
    CRC16_enSubType_MODBUS = 20UL,
    CRC16_enSubType_X_25 = 21UL,
    CRC16_enSubType_XMODEM = 22UL,
    CRC16_enSubType_MAX = 23UL,
}CRC16_eSubType;

typedef struct
{
    uint16_t u16Poly;
    uint16_t u16Init;
    uint16_t u16XorOut;
    boolean_t boRefIn;
    boolean_t boRefOut;
}CRC16_Params_t;

#endif /* XAPPLICATION_MCU_CRC_XHEADER_CRC_TABLE_H_ */
