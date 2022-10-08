/**
 *
 * @file UART_RegisterDefines_IM.h
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
 * @verbatim 23 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 23 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_UART_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_UART_REGISTERDEFINES_IM_H_
#define XDRIVER_MCU_UART_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_UART_REGISTERDEFINES_IM_H_

#include <xDriver_MCU/UART/Peripheral/xHeader/UART_Enum.h>

/******************************************************************************************
************************************ 10 IM *********************************************
******************************************************************************************/

/*--------*/
#define UART_IM_R_RIIM_MASK    ((UBase_t) 0x00000001UL)
#define UART_IM_R_RIIM_BIT    ((UBase_t) 0UL)
#define UART_IM_R_RIIM_DIS    ((UBase_t) 0x00000000UL)
#define UART_IM_R_RIIM_ENA    ((UBase_t) 0x00000001UL)

#define UART_IM_RIIM_MASK    ((UBase_t) 0x00000001UL)
#define UART_IM_RIIM_DIS    ((UBase_t) 0x00000000UL)
#define UART_IM_RIIM_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_IM_R_CTSIM_MASK    ((UBase_t) 0x00000002UL)
#define UART_IM_R_CTSIM_BIT    ((UBase_t) 1UL)
#define UART_IM_R_CTSIM_DIS    ((UBase_t) 0x00000000UL)
#define UART_IM_R_CTSIM_ENA    ((UBase_t) 0x00000002UL)

#define UART_IM_CTSIM_MASK    ((UBase_t) 0x00000001UL)
#define UART_IM_CTSIM_DIS    ((UBase_t) 0x00000000UL)
#define UART_IM_CTSIM_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_IM_R_DCDIM_MASK    ((UBase_t) 0x00000004UL)
#define UART_IM_R_DCDIM_BIT    ((UBase_t) 2UL)
#define UART_IM_R_DCDIM_DIS    ((UBase_t) 0x00000000UL)
#define UART_IM_R_DCDIM_ENA    ((UBase_t) 0x00000004UL)

#define UART_IM_DCDIM_MASK    ((UBase_t) 0x00000001UL)
#define UART_IM_DCDIM_DIS    ((UBase_t) 0x00000000UL)
#define UART_IM_DCDIM_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_IM_R_DSRIM_MASK    ((UBase_t) 0x00000008UL)
#define UART_IM_R_DSRIM_BIT    ((UBase_t) 3UL)
#define UART_IM_R_DSRIM_DIS    ((UBase_t) 0x00000000UL)
#define UART_IM_R_DSRIM_ENA    ((UBase_t) 0x00000008UL)

#define UART_IM_DSRIM_MASK    ((UBase_t) 0x00000001UL)
#define UART_IM_DSRIM_DIS    ((UBase_t) 0x00000000UL)
#define UART_IM_DSRIM_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_IM_R_RXIM_MASK    ((UBase_t) 0x00000010UL)
#define UART_IM_R_RXIM_BIT    ((UBase_t) 4UL)
#define UART_IM_R_RXIM_DIS    ((UBase_t) 0x00000000UL)
#define UART_IM_R_RXIM_ENA    ((UBase_t) 0x00000010UL)

#define UART_IM_RXIM_MASK    ((UBase_t) 0x00000001UL)
#define UART_IM_RXIM_DIS    ((UBase_t) 0x00000000UL)
#define UART_IM_RXIM_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_IM_R_TXIM_MASK    ((UBase_t) 0x00000020UL)
#define UART_IM_R_TXIM_BIT    ((UBase_t) 5UL)
#define UART_IM_R_TXIM_DIS    ((UBase_t) 0x00000000UL)
#define UART_IM_R_TXIM_ENA    ((UBase_t) 0x00000020UL)

#define UART_IM_TXIM_MASK    ((UBase_t) 0x00000001UL)
#define UART_IM_TXIM_DIS    ((UBase_t) 0x00000000UL)
#define UART_IM_TXIM_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_IM_R_RTIM_MASK    ((UBase_t) 0x00000040UL)
#define UART_IM_R_RTIM_BIT    ((UBase_t) 6UL)
#define UART_IM_R_RTIM_DIS    ((UBase_t) 0x00000000UL)
#define UART_IM_R_RTIM_ENA    ((UBase_t) 0x00000040UL)

#define UART_IM_RTIM_MASK    ((UBase_t) 0x00000001UL)
#define UART_IM_RTIM_DIS    ((UBase_t) 0x00000000UL)
#define UART_IM_RTIM_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_IM_R_FEIM_MASK    ((UBase_t) 0x00000080UL)
#define UART_IM_R_FEIM_BIT    ((UBase_t) 7UL)
#define UART_IM_R_FEIM_DIS    ((UBase_t) 0x00000000UL)
#define UART_IM_R_FEIM_ENA    ((UBase_t) 0x00000080UL)

#define UART_IM_FEIM_MASK    ((UBase_t) 0x00000001UL)
#define UART_IM_FEIM_DIS    ((UBase_t) 0x00000000UL)
#define UART_IM_FEIM_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_IM_R_PEIM_MASK    ((UBase_t) 0x00000100UL)
#define UART_IM_R_PEIM_BIT    ((UBase_t) 8UL)
#define UART_IM_R_PEIM_DIS    ((UBase_t) 0x00000000UL)
#define UART_IM_R_PEIM_ENA    ((UBase_t) 0x00000100UL)

#define UART_IM_PEIM_MASK    ((UBase_t) 0x00000001UL)
#define UART_IM_PEIM_DIS    ((UBase_t) 0x00000000UL)
#define UART_IM_PEIM_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_IM_R_BEIM_MASK    ((UBase_t) 0x00000200UL)
#define UART_IM_R_BEIM_BIT    ((UBase_t) 9UL)
#define UART_IM_R_BEIM_DIS    ((UBase_t) 0x00000000UL)
#define UART_IM_R_BEIM_ENA    ((UBase_t) 0x00000200UL)

#define UART_IM_BEIM_MASK    ((UBase_t) 0x00000001UL)
#define UART_IM_BEIM_DIS    ((UBase_t) 0x00000000UL)
#define UART_IM_BEIM_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_IM_R_OEIM_MASK    ((UBase_t) 0x00000400UL)
#define UART_IM_R_OEIM_BIT    ((UBase_t) 10UL)
#define UART_IM_R_OEIM_DIS    ((UBase_t) 0x00000000UL)
#define UART_IM_R_OEIM_ENA    ((UBase_t) 0x00000400UL)

#define UART_IM_OEIM_MASK    ((UBase_t) 0x00000001UL)
#define UART_IM_OEIM_DIS    ((UBase_t) 0x00000000UL)
#define UART_IM_OEIM_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_IM_R_EOTIM_MASK    ((UBase_t) 0x00000800UL)
#define UART_IM_R_EOTIM_BIT    ((UBase_t) 11UL)
#define UART_IM_R_EOTIM_DIS    ((UBase_t) 0x00000000UL)
#define UART_IM_R_EOTIM_ENA    ((UBase_t) 0x00000800UL)

#define UART_IM_EOTIM_MASK    ((UBase_t) 0x00000001UL)
#define UART_IM_EOTIM_DIS    ((UBase_t) 0x00000000UL)
#define UART_IM_EOTIM_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_IM_R_BIT9IM_MASK    ((UBase_t) 0x00001000UL)
#define UART_IM_R_BIT9IM_BIT    ((UBase_t) 12UL)
#define UART_IM_R_BIT9IM_DIS    ((UBase_t) 0x00000000UL)
#define UART_IM_R_BIT9IM_ENA    ((UBase_t) 0x00001000UL)

#define UART_IM_BIT9IM_MASK    ((UBase_t) 0x00000001UL)
#define UART_IM_BIT9IM_DIS    ((UBase_t) 0x00000000UL)
#define UART_IM_BIT9IM_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_IM_R_DMARXIM_MASK    ((UBase_t) 0x00010000UL)
#define UART_IM_R_DMARXIM_BIT    ((UBase_t) 16UL)
#define UART_IM_R_DMARXIM_DIS    ((UBase_t) 0x00000000UL)
#define UART_IM_R_DMARXIM_ENA    ((UBase_t) 0x00010000UL)

#define UART_IM_DMARXIM_MASK    ((UBase_t) 0x00000001UL)
#define UART_IM_DMARXIM_DIS    ((UBase_t) 0x00000000UL)
#define UART_IM_DMARXIM_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_IM_R_DMATXIM_MASK    ((UBase_t) 0x00020000UL)
#define UART_IM_R_DMATXIM_BIT    ((UBase_t) 17UL)
#define UART_IM_R_DMATXIM_DIS    ((UBase_t) 0x00000000UL)
#define UART_IM_R_DMATXIM_ENA    ((UBase_t) 0x00020000UL)

#define UART_IM_DMATXIM_MASK    ((UBase_t) 0x00000001UL)
#define UART_IM_DMATXIM_DIS    ((UBase_t) 0x00000000UL)
#define UART_IM_DMATXIM_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

#endif /* XDRIVER_MCU_UART_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_UART_REGISTERDEFINES_IM_H_ */
