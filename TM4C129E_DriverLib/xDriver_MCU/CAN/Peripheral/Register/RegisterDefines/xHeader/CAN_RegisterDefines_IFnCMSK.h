/**
 *
 * @file CAN_RegisterDefines_IFn_CMSK.h
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
 * @verbatim Apr 15, 2021 @endverbatim
 *
 * @author
 * @verbatim indevicemex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * Apr 15, 2021        indevicemex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_CAN_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_CAN_REGISTERDEFINES_IFNCMSK_H_
#define XDRIVER_MCU_CAN_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_CAN_REGISTERDEFINES_IFNCMSK_H_

#include <xDriver_MCU/CAN/Peripheral/xHeader/CAN_Enum.h>

/******************************************************************************************
************************************ 10-11 IFn_CMSK *********************************************
******************************************************************************************/
/*--------*/
#define CAN_IFn_CMSK_R_DATAB_MASK    ((UBase_t) 0x00000001UL)
#define CAN_IFn_CMSK_R_DATAB_BIT    ((UBase_t) 0UL)
#define CAN_IFn_CMSK_R_DATAB_UNCHANGED    ((UBase_t) 0x00000000UL)
#define CAN_IFn_CMSK_R_DATAB_TRANSFER    ((UBase_t) 0x00000001UL)

#define CAN_IFn_CMSK_DATAB_MASK    ((UBase_t) 0x00000001UL)
#define CAN_IFn_CMSK_DATAB_UNCHANGED    ((UBase_t) 0x00000000UL)
#define CAN_IFn_CMSK_DATAB_TRANSFER    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define CAN_IFn_CMSK_R_DATAA_MASK    ((UBase_t) 0x00000002UL)
#define CAN_IFn_CMSK_R_DATAA_BIT    ((UBase_t) 1UL)
#define CAN_IFn_CMSK_R_DATAA_UNCHANGED    ((UBase_t) 0x00000000UL)
#define CAN_IFn_CMSK_R_DATAA_TRANSFER    ((UBase_t) 0x00000002UL)

#define CAN_IFn_CMSK_DATAA_MASK    ((UBase_t) 0x00000001UL)
#define CAN_IFn_CMSK_DATAA_UNCHANGED    ((UBase_t) 0x00000000UL)
#define CAN_IFn_CMSK_DATAA_TRANSFER    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define CAN_IFn_CMSK_R_NEWDAT_TXRQST_MASK    ((UBase_t) 0x00000004UL)
#define CAN_IFn_CMSK_R_NEWDAT_TXRQST_BIT    ((UBase_t) 2UL)
/*WRNRD CLEAR*/
#define CAN_IFn_CMSK_R_NEWDAT_TRANSFER    ((UBase_t) 0x00000000UL)
#define CAN_IFn_CMSK_R_NEWDAT_CLEAR    ((UBase_t) 0x00000004UL)
/*WRNRD SET*/
#define CAN_IFn_CMSK_R_TXRQST_NOREQ    ((UBase_t) 0x00000000UL)
#define CAN_IFn_CMSK_R_TXRQST_REQ    ((UBase_t) 0x00000004UL)

#define CAN_IFn_CMSK_NEWDAT_TXRQST_MASK    ((UBase_t) 0x00000001UL)
/*WRNRD CLEAR*/
#define CAN_IFn_CMSK_NEWDAT_TRANSFER    ((UBase_t) 0x00000000UL)
#define CAN_IFn_CMSK_NEWDAT_CLEAR    ((UBase_t) 0x00000001UL)
/*WRNRD SET*/
#define CAN_IFn_CMSK_TXRQST_NOREQ    ((UBase_t) 0x00000000UL)
#define CAN_IFn_CMSK_TXRQST_REQ    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define CAN_IFn_CMSK_R_CLRINTPND_MASK    ((UBase_t) 0x00000008UL)
#define CAN_IFn_CMSK_R_CLRINTPND_BIT    ((UBase_t) 3UL)
/*WRNRD CLEAR*/
#define CAN_IFn_CMSK_R_CLRINTPND_TRANSFER    ((UBase_t) 0x00000000UL)
#define CAN_IFn_CMSK_R_CLRINTPND_CLEAR    ((UBase_t) 0x00000008UL)
/*WRNRD SET*/
#define CAN_IFn_CMSK_R_CLRINTPND_UNCHANGED    ((UBase_t) 0x00000000UL)
#define CAN_IFn_CMSK_R_CLRINTPND_CLEARED    ((UBase_t) 0x00000008UL)

#define CAN_IFn_CMSK_CLRINTPND_MASK    ((UBase_t) 0x00000001UL)
/*WRNRD CLEAR*/
#define CAN_IFn_CMSK_CLRINTPND_TRANSFER    ((UBase_t) 0x00000000UL)
#define CAN_IFn_CMSK_CLRINTPND_CLEAR    ((UBase_t) 0x00000001UL)
/*WRNRD SET*/
#define CAN_IFn_CMSK_CLRINTPND_UNCHANGED    ((UBase_t) 0x00000000UL)
#define CAN_IFn_CMSK_CLRINTPND_CLEARED    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define CAN_IFn_CMSK_R_CONTROL_MASK    ((UBase_t) 0x00000010UL)
#define CAN_IFn_CMSK_R_CONTROL_BIT    ((UBase_t) 4UL)
#define CAN_IFn_CMSK_R_CONTROL_UNCHANGED    ((UBase_t) 0x00000000UL)
#define CAN_IFn_CMSK_R_CONTROL_TRANSFER    ((UBase_t) 0x00000010UL)

#define CAN_IFn_CMSK_CONTROL_MASK    ((UBase_t) 0x00000001UL)
#define CAN_IFn_CMSK_CONTROL_UNCHANGED    ((UBase_t) 0x00000000UL)
#define CAN_IFn_CMSK_CONTROL_TRANSFER    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define CAN_IFn_CMSK_R_ARB_MASK    ((UBase_t) 0x00000020UL)
#define CAN_IFn_CMSK_R_ARB_BIT    ((UBase_t) 5UL)
#define CAN_IFn_CMSK_R_ARB_UNCHANGED    ((UBase_t) 0x00000000UL)
#define CAN_IFn_CMSK_R_ARB_TRANSFER    ((UBase_t) 0x00000020UL)

#define CAN_IFn_CMSK_ARB_MASK    ((UBase_t) 0x00000001UL)
#define CAN_IFn_CMSK_ARB_UNCHANGED    ((UBase_t) 0x00000000UL)
#define CAN_IFn_CMSK_ARB_TRANSFER    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define CAN_IFn_CMSK_R_MASK_MASK    ((UBase_t) 0x00000040UL)
#define CAN_IFn_CMSK_R_MASK_BIT    ((UBase_t) 6UL)
#define CAN_IFn_CMSK_R_MASK_UNCHANGED    ((UBase_t) 0x00000000UL)
#define CAN_IFn_CMSK_R_MASK_TRANSFER    ((UBase_t) 0x00000040UL)

#define CAN_IFn_CMSK_MASK_MASK    ((UBase_t) 0x00000001UL)
#define CAN_IFn_CMSK_MASK_UNCHANGED    ((UBase_t) 0x00000000UL)
#define CAN_IFn_CMSK_MASK_TRANSFER    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define CAN_IFn_CMSK_R_WRNRD_MASK    ((UBase_t) 0x00000080UL)
#define CAN_IFn_CMSK_R_WRNRD_BIT    ((UBase_t) 7UL)
#define CAN_IFn_CMSK_R_WRNRD_FIFO2REG    ((UBase_t) 0x00000000UL)
#define CAN_IFn_CMSK_R_WRNRD_REG2FIFO    ((UBase_t) 0x00000080UL)

#define CAN_IFn_CMSK_WRNRD_MASK    ((UBase_t) 0x00000001UL)
#define CAN_IFn_CMSK_WRNRD_FIFO2REG    ((UBase_t) 0x00000000UL)
#define CAN_IFn_CMSK_WRNRD_REG2FIFO    ((UBase_t) 0x00000001UL)
/*--------*/

#endif /* XDRIVER_MCU_CAN_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_CAN_REGISTERDEFINES_IFNCMSK_H_ */
