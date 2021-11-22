/**
 *
 * @file CRC_RegisterDefines.h
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

#ifndef XDRIVER_MCU_CRC_PERIPHERAL_REGISTER_XHEADER_CRC_REGISTERDEFINES_H_
#define XDRIVER_MCU_CRC_PERIPHERAL_REGISTER_XHEADER_CRC_REGISTERDEFINES_H_

#include <xDriver_MCU/Common/xHeader/MCU_Variables.h>

/******************************************************************************************
************************************ 1 CRCCTRL *********************************************
******************************************************************************************/

/*----------*/
#define CRC_CTRL_R_TYPE_MASK    ((uint32_t) 0x0000000FUL)
#define CRC_CTRL_R_TYPE_BIT    (0UL)
#define CRC_CTRL_R_TYPE_POL_8005    ((uint32_t) 0x00000000UL)
#define CRC_CTRL_R_TYPE_POL_1021    ((uint32_t) 0x00000001UL)
#define CRC_CTRL_R_TYPE_POL_4C11DB7    ((uint32_t) 0x00000002UL)
#define CRC_CTRL_R_TYPE_POL_1EDC6F41    ((uint32_t) 0x00000003UL)
#define CRC_CTRL_R_TYPE_TCP_CHECKSUM    ((uint32_t) 0x00000008UL)

#define CRC_CTRL_TYPE_MASK    ((uint32_t) 0x0000000FUL)
#define CRC_CTRL_TYPE_POL_8005    ((uint32_t) 0x00000000UL)
#define CRC_CTRL_TYPE_POL_1021    ((uint32_t) 0x00000001UL)
#define CRC_CTRL_TYPE_POL_4C11DB7    ((uint32_t) 0x00000002UL)
#define CRC_CTRL_TYPE_POL_1EDC6F41    ((uint32_t) 0x00000003UL)
#define CRC_CTRL_TYPE_TCP_CHECKSUM    ((uint32_t) 0x00000008UL)
/*----------*/

/*----------*/
#define CRC_CTRL_R_ENDIAN_MASK    ((uint32_t) 0x00000030UL)
#define CRC_CTRL_R_ENDIAN_BIT    (4UL)
#define CRC_CTRL_R_ENDIAN_B3_B2_B1_B0    ((uint32_t) 0x00000000UL)
#define CRC_CTRL_R_ENDIAN_B2_B3_B0_B1    ((uint32_t) 0x00000010UL)
#define CRC_CTRL_R_ENDIAN_B1_B0_B3_B2    ((uint32_t) 0x00000020UL)
#define CRC_CTRL_R_ENDIAN_B0_B1_B2_B3    ((uint32_t) 0x00000030UL)

#define CRC_CTRL_ENDIAN_MASK    ((uint32_t) 0x00000003UL)
#define CRC_CTRL_ENDIAN_B3_B2_B1_B0    ((uint32_t) 0x00000000UL)
#define CRC_CTRL_ENDIAN_B2_B3_B0_B1    ((uint32_t) 0x00000001UL)
#define CRC_CTRL_ENDIAN_B1_B0_B3_B2    ((uint32_t) 0x00000002UL)
#define CRC_CTRL_ENDIAN_B0_B1_B2_B3    ((uint32_t) 0x00000003UL)
/*----------*/

/*----------*/
#define CRC_CTRL_R_BR_MASK    ((uint32_t) 0x00000080UL)
#define CRC_CTRL_R_BR_BIT    (7UL)
#define CRC_CTRL_R_BR_UNCHANGED    ((uint32_t) 0x00000000UL)
#define CRC_CTRL_R_BR_REVERSE    ((uint32_t) 0x00000080UL)

#define CRC_CTRL_BR_MASK    ((uint32_t) 0x00000001UL)
#define CRC_CTRL_BR_UNCHANGED    ((uint32_t) 0x00000000UL)
#define CRC_CTRL_BR_REVERSE    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define CRC_CTRL_R_OBR_MASK    ((uint32_t) 0x00000100UL)
#define CRC_CTRL_R_OBR_BIT    (8UL)
#define CRC_CTRL_R_OBR_UNCHANGED    ((uint32_t) 0x00000000UL)
#define CRC_CTRL_R_OBR_REVERSE    ((uint32_t) 0x00000100UL)

#define CRC_CTRL_OBR_MASK    ((uint32_t) 0x00000001UL)
#define CRC_CTRL_OBR_UNCHANGED    ((uint32_t) 0x00000000UL)
#define CRC_CTRL_OBR_REVERSE    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define CRC_CTRL_R_RESINV_MASK    ((uint32_t) 0x00000200UL)
#define CRC_CTRL_R_RESINV_BIT    (9UL)
#define CRC_CTRL_R_RESINV_UNCHANGED    ((uint32_t) 0x00000000UL)
#define CRC_CTRL_R_RESINV_INVERT    ((uint32_t) 0x00000200UL)

#define CRC_CTRL_RESINV_MASK    ((uint32_t) 0x00000001UL)
#define CRC_CTRL_RESINV_UNCHANGED    ((uint32_t) 0x00000000UL)
#define CRC_CTRL_RESINV_INVERT    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define CRC_CTRL_R_SIZE_MASK    ((uint32_t) 0x00001000UL)
#define CRC_CTRL_R_SIZE_BIT    (12UL)
#define CRC_CTRL_R_SIZE_WORD    ((uint32_t) 0x00000000UL)
#define CRC_CTRL_R_SIZE_BYTE    ((uint32_t) 0x00001000UL)

#define CRC_CTRL_SIZE_MASK    ((uint32_t) 0x00000001UL)
#define CRC_CTRL_SIZE_WORD    ((uint32_t) 0x00000000UL)
#define CRC_CTRL_SIZE_BYTE    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define CRC_CTRL_R_INIT_MASK    ((uint32_t) 0x00006000UL)
#define CRC_CTRL_R_INIT_BIT    (13UL)
#define CRC_CTRL_R_INIT_SEED    ((uint32_t) 0x00000000UL)
#define CRC_CTRL_R_INIT_0S    ((uint32_t) 0x00004000UL)
#define CRC_CTRL_R_INIT_1S    ((uint32_t) 0x00006000UL)

#define CRC_CTRL_INIT_MASK    ((uint32_t) 0x00000003UL)
#define CRC_CTRL_INIT_SEED    ((uint32_t) 0x00000000UL)
#define CRC_CTRL_INIT_0S    ((uint32_t) 0x00000002UL)
#define CRC_CTRL_INIT_1S    ((uint32_t) 0x00000003UL)
/*----------*/

/******************************************************************************************
************************************ 2 CRCSEED *********************************************
******************************************************************************************/

/*----------*/
#define CRC_SEED_R_OFFSET_MASK    ((uint32_t) 0x000FFFFFUL)
#define CRC_SEED_R_OFFSET_BIT    (0UL)

#define CRC_SEED_OFFSET_MASK    ((uint32_t) 0x000FFFFFUL)
/*----------*/

/******************************************************************************************
************************************ 3 CRCDIN *********************************************
******************************************************************************************/

/*----------*/
#define CRC_DIN_R_OFFSET_MASK    ((uint32_t) 0x000FFFFFUL)
#define CRC_DIN_R_OFFSET_BIT    (0UL)

#define CRC_DIN_OFFSET_MASK    ((uint32_t) 0x000FFFFFUL)
/*----------*/

/******************************************************************************************
************************************ 4 CRCRSLTPP *********************************************
******************************************************************************************/

/*----------*/
#define CRC_RSLTPP_R_OFFSET_MASK    ((uint32_t) 0x000FFFFFUL)
#define CRC_RSLTPP_R_OFFSET_BIT    (0UL)

#define CRC_RSLTPP_OFFSET_MASK    ((uint32_t) 0x000FFFFFUL)
/*----------*/

#endif /* XDRIVER_MCU_CRC_PERIPHERAL_REGISTER_XHEADER_CRC_REGISTERDEFINES_H_ */
