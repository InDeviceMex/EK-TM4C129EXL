/**
 *
 * @file CAN_RegisterDefines_ERR.h
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

#ifndef XDRIVER_MCU_CAN_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_CAN_REGISTERDEFINES_ERR_H_
#define XDRIVER_MCU_CAN_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_CAN_REGISTERDEFINES_ERR_H_

#include <xDriver_MCU/CAN/Peripheral/xHeader/CAN_Enum.h>

/******************************************************************************************
************************************ 3 ERR *********************************************
******************************************************************************************/
/*--------*/
#define CAN_ERR_R_TEC_MASK    ((UBase_t) 0x000000FFUL)
#define CAN_ERR_R_TEC_BIT    ((UBase_t) 0UL)

#define CAN_ERR_TEC_MASK    ((UBase_t) 0x000000FFUL)
/*--------*/

/*--------*/
#define CAN_ERR_R_REC_MASK    ((UBase_t) 0x00007F00UL)
#define CAN_ERR_R_REC_BIT    ((UBase_t) 8UL)

#define CAN_ERR_REC_MASK    ((UBase_t) 0x0000007FUL)
/*--------*/

/*--------*/
#define CAN_ERR_R_RP_MASK    ((UBase_t) 0x00008000UL)
#define CAN_ERR_R_RP_BIT    ((UBase_t) 15UL)
#define CAN_ERR_R_RP_LESS    ((UBase_t) 0x00000000UL)
#define CAN_ERR_R_RP_GREATER    ((UBase_t) 0x00008000UL)

#define CAN_ERR_RP_MASK    ((UBase_t) 0x00000001UL)
#define CAN_ERR_RP_LESS    ((UBase_t) 0x00000000UL)
#define CAN_ERR_RP_GREATER    ((UBase_t) 0x00000001UL)
/*--------*/

#endif /* XDRIVER_MCU_CAN_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_CAN_REGISTERDEFINES_ERR_H_ */
