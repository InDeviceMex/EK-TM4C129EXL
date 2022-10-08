/**
 *
 * @file CAN_RegisterDefines_BIT.h
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
 * @verbatim Apr 14, 2021 @endverbatim
 *
 * @author
 * @verbatim indevicemex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * Apr 14, 2021        indevicemex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_CAN_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_CAN_REGISTERDEFINES_BIT_H_
#define XDRIVER_MCU_CAN_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_CAN_REGISTERDEFINES_BIT_H_

#include <xDriver_MCU/CAN/Peripheral/xHeader/CAN_Enum.h>

/******************************************************************************************
************************************ 4 BIT *********************************************
******************************************************************************************/
/*--------*/
#define CAN_BIT_R_BRP_MASK    ((UBase_t) 0x0000003FUL)
#define CAN_BIT_R_BRP_BIT    ((UBase_t) 0UL)

#define CAN_BIT_BRP_MASK    ((UBase_t) 0x0000003FUL)
/*--------*/

/*--------*/
#define CAN_BIT_R_SJW_MASK    ((UBase_t) 0x000000C0UL)
#define CAN_BIT_R_SJW_BIT    ((UBase_t) 6UL)
#define CAN_BIT_R_SJW_1    ((UBase_t) 0x00000000UL)
#define CAN_BIT_R_SJW_2    ((UBase_t) 0x00000040UL)
#define CAN_BIT_R_SJW_3    ((UBase_t) 0x00000080UL)
#define CAN_BIT_R_SJW_4    ((UBase_t) 0x000000C0UL)

#define CAN_BIT_SJW_MASK    ((UBase_t) 0x00000003UL)
#define CAN_BIT_SJW_1    ((UBase_t) 0x00000000UL)
#define CAN_BIT_SJW_2    ((UBase_t) 0x00000001UL)
#define CAN_BIT_SJW_3    ((UBase_t) 0x00000002UL)
#define CAN_BIT_SJW_4    ((UBase_t) 0x00000003UL)
/*--------*/

/*--------*/
#define CAN_BIT_R_TSEG1_MASK    ((UBase_t) 0x00000F00UL)
#define CAN_BIT_R_TSEG1_BIT    ((UBase_t) 8UL)
#define CAN_BIT_R_TSEG1_1    ((UBase_t) 0x00000000UL)
#define CAN_BIT_R_TSEG1_2    ((UBase_t) 0x00000100UL)
#define CAN_BIT_R_TSEG1_3    ((UBase_t) 0x00000200UL)
#define CAN_BIT_R_TSEG1_4    ((UBase_t) 0x00000300UL)
#define CAN_BIT_R_TSEG1_5    ((UBase_t) 0x00000400UL)
#define CAN_BIT_R_TSEG1_6    ((UBase_t) 0x00000500UL)
#define CAN_BIT_R_TSEG1_7    ((UBase_t) 0x00000600UL)
#define CAN_BIT_R_TSEG1_8    ((UBase_t) 0x00000700UL)
#define CAN_BIT_R_TSEG1_9    ((UBase_t) 0x00000800UL)
#define CAN_BIT_R_TSEG1_10    ((UBase_t) 0x00000900UL)
#define CAN_BIT_R_TSEG1_11    ((UBase_t) 0x00000A00UL)
#define CAN_BIT_R_TSEG1_12    ((UBase_t) 0x00000B00UL)
#define CAN_BIT_R_TSEG1_13    ((UBase_t) 0x00000C00UL)
#define CAN_BIT_R_TSEG1_14    ((UBase_t) 0x00000D00UL)
#define CAN_BIT_R_TSEG1_15    ((UBase_t) 0x00000E00UL)
#define CAN_BIT_R_TSEG1_16    ((UBase_t) 0x00000F00UL)

#define CAN_BIT_TSEG1_MASK    ((UBase_t) 0x00000003UL)
#define CAN_BIT_TSEG1_1    ((UBase_t) 0x00000000UL)
#define CAN_BIT_TSEG1_2    ((UBase_t) 0x00000001UL)
#define CAN_BIT_TSEG1_3    ((UBase_t) 0x00000002UL)
#define CAN_BIT_TSEG1_4    ((UBase_t) 0x00000003UL)
#define CAN_BIT_TSEG1_5    ((UBase_t) 0x00000004UL)
#define CAN_BIT_TSEG1_6    ((UBase_t) 0x00000005UL)
#define CAN_BIT_TSEG1_7    ((UBase_t) 0x00000006UL)
#define CAN_BIT_TSEG1_8    ((UBase_t) 0x00000007UL)
#define CAN_BIT_TSEG1_9    ((UBase_t) 0x00000008UL)
#define CAN_BIT_TSEG1_10    ((UBase_t) 0x00000009UL)
#define CAN_BIT_TSEG1_11    ((UBase_t) 0x0000000AUL)
#define CAN_BIT_TSEG1_12    ((UBase_t) 0x0000000BUL)
#define CAN_BIT_TSEG1_13    ((UBase_t) 0x0000000CUL)
#define CAN_BIT_TSEG1_14    ((UBase_t) 0x0000000DUL)
#define CAN_BIT_TSEG1_15    ((UBase_t) 0x0000000EUL)
#define CAN_BIT_TSEG1_16    ((UBase_t) 0x0000000FUL)
/*--------*/

/*--------*/
#define CAN_BIT_R_TSEG2_MASK    ((UBase_t) 0x00000F00UL)
#define CAN_BIT_R_TSEG2_BIT    ((UBase_t) 12UL)
#define CAN_BIT_R_TSEG2_1    ((UBase_t) 0x00000000UL)
#define CAN_BIT_R_TSEG2_2    ((UBase_t) 0x00000100UL)
#define CAN_BIT_R_TSEG2_3    ((UBase_t) 0x00000200UL)
#define CAN_BIT_R_TSEG2_4    ((UBase_t) 0x00000300UL)
#define CAN_BIT_R_TSEG2_5    ((UBase_t) 0x00000400UL)
#define CAN_BIT_R_TSEG2_6    ((UBase_t) 0x00000500UL)
#define CAN_BIT_R_TSEG2_7    ((UBase_t) 0x00000600UL)
#define CAN_BIT_R_TSEG2_8    ((UBase_t) 0x00000700UL)

#define CAN_BIT_TSEG2_MASK    ((UBase_t) 0x00000003UL)
#define CAN_BIT_TSEG2_1    ((UBase_t) 0x00000000UL)
#define CAN_BIT_TSEG2_2    ((UBase_t) 0x00000001UL)
#define CAN_BIT_TSEG2_3    ((UBase_t) 0x00000002UL)
#define CAN_BIT_TSEG2_4    ((UBase_t) 0x00000003UL)
#define CAN_BIT_TSEG2_5    ((UBase_t) 0x00000004UL)
#define CAN_BIT_TSEG2_6    ((UBase_t) 0x00000005UL)
#define CAN_BIT_TSEG2_7    ((UBase_t) 0x00000006UL)
#define CAN_BIT_TSEG2_8    ((UBase_t) 0x00000007UL)
/*--------*/

#endif /* XDRIVER_MCU_CAN_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_CAN_REGISTERDEFINES_BIT_H_ */
