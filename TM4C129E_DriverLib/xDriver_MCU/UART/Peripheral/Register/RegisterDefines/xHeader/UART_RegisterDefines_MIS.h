/**
 *
 * @file UART_RegisterDefines_MIS.h
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
#ifndef XDRIVER_MCU_UART_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_UART_REGISTERDEFINES_MIS_H_
#define XDRIVER_MCU_UART_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_UART_REGISTERDEFINES_MIS_H_

#include <xDriver_MCU/Common/xHeader/MCU_Variables.h>

/******************************************************************************************
************************************ 12 MIS *********************************************
******************************************************************************************/

/*--------*/
#define UART_MIS_R_RIMIS_MASK    ((uint32_t) 0x00000001UL)
#define UART_MIS_R_RIMIS_BIT    ((uint32_t) 0UL)
#define UART_MIS_R_RIMIS_DIS    ((uint32_t) 0x00000000UL)
#define UART_MIS_R_RIMIS_ENA    ((uint32_t) 0x00000001UL)

#define UART_MIS_RIMIS_MASK    ((uint32_t) 0x00000001UL)
#define UART_MIS_RIMIS_DIS    ((uint32_t) 0x00000000UL)
#define UART_MIS_RIMIS_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_MIS_R_CTSMIS_MASK    ((uint32_t) 0x00000002UL)
#define UART_MIS_R_CTSMIS_BIT    ((uint32_t) 1UL)
#define UART_MIS_R_CTSMIS_DIS    ((uint32_t) 0x00000000UL)
#define UART_MIS_R_CTSMIS_ENA    ((uint32_t) 0x00000002UL)

#define UART_MIS_CTSMIS_MASK    ((uint32_t) 0x00000001UL)
#define UART_MIS_CTSMIS_DIS    ((uint32_t) 0x00000000UL)
#define UART_MIS_CTSMIS_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_MIS_R_DCDMIS_MASK    ((uint32_t) 0x00000004UL)
#define UART_MIS_R_DCDMIS_BIT    ((uint32_t) 2UL)
#define UART_MIS_R_DCDMIS_DIS    ((uint32_t) 0x00000000UL)
#define UART_MIS_R_DCDMIS_ENA    ((uint32_t) 0x00000004UL)

#define UART_MIS_DCDMIS_MASK    ((uint32_t) 0x00000001UL)
#define UART_MIS_DCDMIS_DIS    ((uint32_t) 0x00000000UL)
#define UART_MIS_DCDMIS_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_MIS_R_DSRMIS_MASK    ((uint32_t) 0x00000008UL)
#define UART_MIS_R_DSRMIS_BIT    ((uint32_t) 3UL)
#define UART_MIS_R_DSRMIS_DIS    ((uint32_t) 0x00000000UL)
#define UART_MIS_R_DSRMIS_ENA    ((uint32_t) 0x00000008UL)

#define UART_MIS_DSRMIS_MASK    ((uint32_t) 0x00000001UL)
#define UART_MIS_DSRMIS_DIS    ((uint32_t) 0x00000000UL)
#define UART_MIS_DSRMIS_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_MIS_R_RXMIS_MASK    ((uint32_t) 0x00000010UL)
#define UART_MIS_R_RXMIS_BIT    ((uint32_t) 4UL)
#define UART_MIS_R_RXMIS_DIS    ((uint32_t) 0x00000000UL)
#define UART_MIS_R_RXMIS_ENA    ((uint32_t) 0x00000010UL)

#define UART_MIS_RXMIS_MASK    ((uint32_t) 0x00000001UL)
#define UART_MIS_RXMIS_DIS    ((uint32_t) 0x00000000UL)
#define UART_MIS_RXMIS_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_MIS_R_TXMIS_MASK    ((uint32_t) 0x00000020UL)
#define UART_MIS_R_TXMIS_BIT    ((uint32_t) 5UL)
#define UART_MIS_R_TXMIS_DIS    ((uint32_t) 0x00000000UL)
#define UART_MIS_R_TXMIS_ENA    ((uint32_t) 0x00000020UL)

#define UART_MIS_TXMIS_MASK    ((uint32_t) 0x00000001UL)
#define UART_MIS_TXMIS_DIS    ((uint32_t) 0x00000000UL)
#define UART_MIS_TXMIS_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_MIS_R_RTMIS_MASK    ((uint32_t) 0x00000040UL)
#define UART_MIS_R_RTMIS_BIT    ((uint32_t) 6UL)
#define UART_MIS_R_RTMIS_DIS    ((uint32_t) 0x00000000UL)
#define UART_MIS_R_RTMIS_ENA    ((uint32_t) 0x00000040UL)

#define UART_MIS_RTMIS_MASK    ((uint32_t) 0x00000001UL)
#define UART_MIS_RTMIS_DIS    ((uint32_t) 0x00000000UL)
#define UART_MIS_RTMIS_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_MIS_R_FEMIS_MASK    ((uint32_t) 0x00000080UL)
#define UART_MIS_R_FEMIS_BIT    ((uint32_t) 7UL)
#define UART_MIS_R_FEMIS_DIS    ((uint32_t) 0x00000000UL)
#define UART_MIS_R_FEMIS_ENA    ((uint32_t) 0x00000080UL)

#define UART_MIS_FEMIS_MASK    ((uint32_t) 0x00000001UL)
#define UART_MIS_FEMIS_DIS    ((uint32_t) 0x00000000UL)
#define UART_MIS_FEMIS_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_MIS_R_PEMIS_MASK    ((uint32_t) 0x00000100UL)
#define UART_MIS_R_PEMIS_BIT    ((uint32_t) 8UL)
#define UART_MIS_R_PEMIS_DIS    ((uint32_t) 0x00000000UL)
#define UART_MIS_R_PEMIS_ENA    ((uint32_t) 0x00000100UL)

#define UART_MIS_PEMIS_MASK    ((uint32_t) 0x00000001UL)
#define UART_MIS_PEMIS_DIS    ((uint32_t) 0x00000000UL)
#define UART_MIS_PEMIS_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_MIS_R_BEMIS_MASK    ((uint32_t) 0x00000200UL)
#define UART_MIS_R_BEMIS_BIT    ((uint32_t) 9UL)
#define UART_MIS_R_BEMIS_DIS    ((uint32_t) 0x00000000UL)
#define UART_MIS_R_BEMIS_ENA    ((uint32_t) 0x00000200UL)

#define UART_MIS_BEMIS_MASK    ((uint32_t) 0x00000001UL)
#define UART_MIS_BEMIS_DIS    ((uint32_t) 0x00000000UL)
#define UART_MIS_BEMIS_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_MIS_R_OEMIS_MASK    ((uint32_t) 0x00000400UL)
#define UART_MIS_R_OEMIS_BIT    ((uint32_t) 10UL)
#define UART_MIS_R_OEMIS_DIS    ((uint32_t) 0x00000000UL)
#define UART_MIS_R_OEMIS_ENA    ((uint32_t) 0x00000400UL)

#define UART_MIS_OEMIS_MASK    ((uint32_t) 0x00000001UL)
#define UART_MIS_OEMIS_DIS    ((uint32_t) 0x00000000UL)
#define UART_MIS_OEMIS_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_MIS_R_EOTMIS_MASK    ((uint32_t) 0x00000800UL)
#define UART_MIS_R_EOTMIS_BIT    ((uint32_t) 11UL)
#define UART_MIS_R_EOTMIS_DIS    ((uint32_t) 0x00000000UL)
#define UART_MIS_R_EOTMIS_ENA    ((uint32_t) 0x00000800UL)

#define UART_MIS_EOTMIS_MASK    ((uint32_t) 0x00000001UL)
#define UART_MIS_EOTMIS_DIS    ((uint32_t) 0x00000000UL)
#define UART_MIS_EOTMIS_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_MIS_R_BIT9MIS_MASK    ((uint32_t) 0x00001000UL)
#define UART_MIS_R_BIT9MIS_BIT    ((uint32_t) 12UL)
#define UART_MIS_R_BIT9MIS_DIS    ((uint32_t) 0x00000000UL)
#define UART_MIS_R_BIT9MIS_ENA    ((uint32_t) 0x00001000UL)

#define UART_MIS_BIT9MIS_MASK    ((uint32_t) 0x00000001UL)
#define UART_MIS_BIT9MIS_DIS    ((uint32_t) 0x00000000UL)
#define UART_MIS_BIT9MIS_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_MIS_R_DMARXMIS_MASK    ((uint32_t) 0x00010000UL)
#define UART_MIS_R_DMARXMIS_BIT    ((uint32_t) 16UL)
#define UART_MIS_R_DMARXMIS_DIS    ((uint32_t) 0x00000000UL)
#define UART_MIS_R_DMARXMIS_ENA    ((uint32_t) 0x00010000UL)

#define UART_MIS_DMARXMIS_MASK    ((uint32_t) 0x00000001UL)
#define UART_MIS_DMARXMIS_DIS    ((uint32_t) 0x00000000UL)
#define UART_MIS_DMARXMIS_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_MIS_R_DMATXMIS_MASK    ((uint32_t) 0x00020000UL)
#define UART_MIS_R_DMATXMIS_BIT    ((uint32_t) 17UL)
#define UART_MIS_R_DMATXMIS_DIS    ((uint32_t) 0x00000000UL)
#define UART_MIS_R_DMATXMIS_ENA    ((uint32_t) 0x00020000UL)

#define UART_MIS_DMATXMIS_MASK    ((uint32_t) 0x00000001UL)
#define UART_MIS_DMATXMIS_DIS    ((uint32_t) 0x00000000UL)
#define UART_MIS_DMATXMIS_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

#endif /* XDRIVER_MCU_UART_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_UART_REGISTERDEFINES_MIS_H_ */
