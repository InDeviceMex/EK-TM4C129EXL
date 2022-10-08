/**
 *
 * @file UART_RegisterDefines_RIS.h
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
#ifndef XDRIVER_MCU_UART_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_UART_REGISTERDEFINES_RIS_H_
#define XDRIVER_MCU_UART_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_UART_REGISTERDEFINES_RIS_H_

#include <xDriver_MCU/UART/Peripheral/xHeader/UART_Enum.h>

/******************************************************************************************
************************************ 11 RIS *********************************************
******************************************************************************************/

/*--------*/
#define UART_RIS_R_RIRIS_MASK    ((UBase_t) 0x00000001UL)
#define UART_RIS_R_RIRIS_BIT    ((UBase_t) 0UL)
#define UART_RIS_R_RIRIS_DIS    ((UBase_t) 0x00000000UL)
#define UART_RIS_R_RIRIS_ENA    ((UBase_t) 0x00000001UL)

#define UART_RIS_RIRIS_MASK    ((UBase_t) 0x00000001UL)
#define UART_RIS_RIRIS_DIS    ((UBase_t) 0x00000000UL)
#define UART_RIS_RIRIS_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_RIS_R_CTSRIS_MASK    ((UBase_t) 0x00000002UL)
#define UART_RIS_R_CTSRIS_BIT    ((UBase_t) 1UL)
#define UART_RIS_R_CTSRIS_DIS    ((UBase_t) 0x00000000UL)
#define UART_RIS_R_CTSRIS_ENA    ((UBase_t) 0x00000002UL)

#define UART_RIS_CTSRIS_MASK    ((UBase_t) 0x00000001UL)
#define UART_RIS_CTSRIS_DIS    ((UBase_t) 0x00000000UL)
#define UART_RIS_CTSRIS_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_RIS_R_DCDRIS_MASK    ((UBase_t) 0x00000004UL)
#define UART_RIS_R_DCDRIS_BIT    ((UBase_t) 2UL)
#define UART_RIS_R_DCDRIS_DIS    ((UBase_t) 0x00000000UL)
#define UART_RIS_R_DCDRIS_ENA    ((UBase_t) 0x00000004UL)

#define UART_RIS_DCDRIS_MASK    ((UBase_t) 0x00000001UL)
#define UART_RIS_DCDRIS_DIS    ((UBase_t) 0x00000000UL)
#define UART_RIS_DCDRIS_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_RIS_R_DSRRIS_MASK    ((UBase_t) 0x00000008UL)
#define UART_RIS_R_DSRRIS_BIT    ((UBase_t) 3UL)
#define UART_RIS_R_DSRRIS_DIS    ((UBase_t) 0x00000000UL)
#define UART_RIS_R_DSRRIS_ENA    ((UBase_t) 0x00000008UL)

#define UART_RIS_DSRRIS_MASK    ((UBase_t) 0x00000001UL)
#define UART_RIS_DSRRIS_DIS    ((UBase_t) 0x00000000UL)
#define UART_RIS_DSRRIS_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_RIS_R_RXRIS_MASK    ((UBase_t) 0x00000010UL)
#define UART_RIS_R_RXRIS_BIT    ((UBase_t) 4UL)
#define UART_RIS_R_RXRIS_DIS    ((UBase_t) 0x00000000UL)
#define UART_RIS_R_RXRIS_ENA    ((UBase_t) 0x00000010UL)

#define UART_RIS_RXRIS_MASK    ((UBase_t) 0x00000001UL)
#define UART_RIS_RXRIS_DIS    ((UBase_t) 0x00000000UL)
#define UART_RIS_RXRIS_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_RIS_R_TXRIS_MASK    ((UBase_t) 0x00000020UL)
#define UART_RIS_R_TXRIS_BIT    ((UBase_t) 5UL)
#define UART_RIS_R_TXRIS_DIS    ((UBase_t) 0x00000000UL)
#define UART_RIS_R_TXRIS_ENA    ((UBase_t) 0x00000020UL)

#define UART_RIS_TXRIS_MASK    ((UBase_t) 0x00000001UL)
#define UART_RIS_TXRIS_DIS    ((UBase_t) 0x00000000UL)
#define UART_RIS_TXRIS_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_RIS_R_RTRIS_MASK    ((UBase_t) 0x00000040UL)
#define UART_RIS_R_RTRIS_BIT    ((UBase_t) 6UL)
#define UART_RIS_R_RTRIS_DIS    ((UBase_t) 0x00000000UL)
#define UART_RIS_R_RTRIS_ENA    ((UBase_t) 0x00000040UL)

#define UART_RIS_RTRIS_MASK    ((UBase_t) 0x00000001UL)
#define UART_RIS_RTRIS_DIS    ((UBase_t) 0x00000000UL)
#define UART_RIS_RTRIS_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_RIS_R_FERIS_MASK    ((UBase_t) 0x00000080UL)
#define UART_RIS_R_FERIS_BIT    ((UBase_t) 7UL)
#define UART_RIS_R_FERIS_DIS    ((UBase_t) 0x00000000UL)
#define UART_RIS_R_FERIS_ENA    ((UBase_t) 0x00000080UL)

#define UART_RIS_FERIS_MASK    ((UBase_t) 0x00000001UL)
#define UART_RIS_FERIS_DIS    ((UBase_t) 0x00000000UL)
#define UART_RIS_FERIS_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_RIS_R_PERIS_MASK    ((UBase_t) 0x00000100UL)
#define UART_RIS_R_PERIS_BIT    ((UBase_t) 8UL)
#define UART_RIS_R_PERIS_DIS    ((UBase_t) 0x00000000UL)
#define UART_RIS_R_PERIS_ENA    ((UBase_t) 0x00000100UL)

#define UART_RIS_PERIS_MASK    ((UBase_t) 0x00000001UL)
#define UART_RIS_PERIS_DIS    ((UBase_t) 0x00000000UL)
#define UART_RIS_PERIS_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_RIS_R_BERIS_MASK    ((UBase_t) 0x00000200UL)
#define UART_RIS_R_BERIS_BIT    ((UBase_t) 9UL)
#define UART_RIS_R_BERIS_DIS    ((UBase_t) 0x00000000UL)
#define UART_RIS_R_BERIS_ENA    ((UBase_t) 0x00000200UL)

#define UART_RIS_BERIS_MASK    ((UBase_t) 0x00000001UL)
#define UART_RIS_BERIS_DIS    ((UBase_t) 0x00000000UL)
#define UART_RIS_BERIS_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_RIS_R_OERIS_MASK    ((UBase_t) 0x00000400UL)
#define UART_RIS_R_OERIS_BIT    ((UBase_t) 10UL)
#define UART_RIS_R_OERIS_DIS    ((UBase_t) 0x00000000UL)
#define UART_RIS_R_OERIS_ENA    ((UBase_t) 0x00000400UL)

#define UART_RIS_OERIS_MASK    ((UBase_t) 0x00000001UL)
#define UART_RIS_OERIS_DIS    ((UBase_t) 0x00000000UL)
#define UART_RIS_OERIS_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_RIS_R_EOTRIS_MASK    ((UBase_t) 0x00000800UL)
#define UART_RIS_R_EOTRIS_BIT    ((UBase_t) 11UL)
#define UART_RIS_R_EOTRIS_DIS    ((UBase_t) 0x00000000UL)
#define UART_RIS_R_EOTRIS_ENA    ((UBase_t) 0x00000800UL)

#define UART_RIS_EOTRIS_MASK    ((UBase_t) 0x00000001UL)
#define UART_RIS_EOTRIS_DIS    ((UBase_t) 0x00000000UL)
#define UART_RIS_EOTRIS_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_RIS_R_BIT9RIS_MASK    ((UBase_t) 0x00001000UL)
#define UART_RIS_R_BIT9RIS_BIT    ((UBase_t) 12UL)
#define UART_RIS_R_BIT9RIS_DIS    ((UBase_t) 0x00000000UL)
#define UART_RIS_R_BIT9RIS_ENA    ((UBase_t) 0x00001000UL)

#define UART_RIS_BIT9RIS_MASK    ((UBase_t) 0x00000001UL)
#define UART_RIS_BIT9RIS_DIS    ((UBase_t) 0x00000000UL)
#define UART_RIS_BIT9RIS_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_RIS_R_DMARXRIS_MASK    ((UBase_t) 0x00010000UL)
#define UART_RIS_R_DMARXRIS_BIT    ((UBase_t) 16UL)
#define UART_RIS_R_DMARXRIS_DIS    ((UBase_t) 0x00000000UL)
#define UART_RIS_R_DMARXRIS_ENA    ((UBase_t) 0x00010000UL)

#define UART_RIS_DMARXRIS_MASK    ((UBase_t) 0x00000001UL)
#define UART_RIS_DMARXRIS_DIS    ((UBase_t) 0x00000000UL)
#define UART_RIS_DMARXRIS_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_RIS_R_DMATXRIS_MASK    ((UBase_t) 0x00020000UL)
#define UART_RIS_R_DMATXRIS_BIT    ((UBase_t) 17UL)
#define UART_RIS_R_DMATXRIS_DIS    ((UBase_t) 0x00000000UL)
#define UART_RIS_R_DMATXRIS_ENA    ((UBase_t) 0x00020000UL)

#define UART_RIS_DMATXRIS_MASK    ((UBase_t) 0x00000001UL)
#define UART_RIS_DMATXRIS_DIS    ((UBase_t) 0x00000000UL)
#define UART_RIS_DMATXRIS_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

#endif /* XDRIVER_MCU_UART_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_UART_REGISTERDEFINES_RIS_H_ */
