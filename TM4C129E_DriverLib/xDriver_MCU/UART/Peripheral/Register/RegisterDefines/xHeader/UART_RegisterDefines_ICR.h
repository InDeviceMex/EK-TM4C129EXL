/**
 *
 * @file UART_RegisterDefines_ICR.h
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
#ifndef XDRIVER_MCU_UART_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_UART_REGISTERDEFINES_ICR_H_
#define XDRIVER_MCU_UART_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_UART_REGISTERDEFINES_ICR_H_

#include <xDriver_MCU/UART/Peripheral/xHeader/UART_Enum.h>

/******************************************************************************************
************************************ 13 ICR *********************************************
******************************************************************************************/

/*--------*/
#define UART_ICR_R_RIIC_MASK    ((UBase_t) 0x00000001UL)
#define UART_ICR_R_RIIC_BIT    ((UBase_t) 0UL)
#define UART_ICR_R_RIIC_DIS    ((UBase_t) 0x00000000UL)
#define UART_ICR_R_RIIC_ENA    ((UBase_t) 0x00000001UL)

#define UART_ICR_RIIC_MASK    ((UBase_t) 0x00000001UL)
#define UART_ICR_RIIC_DIS    ((UBase_t) 0x00000000UL)
#define UART_ICR_RIIC_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_ICR_R_CTSIC_MASK    ((UBase_t) 0x00000002UL)
#define UART_ICR_R_CTSIC_BIT    ((UBase_t) 1UL)
#define UART_ICR_R_CTSIC_DIS    ((UBase_t) 0x00000000UL)
#define UART_ICR_R_CTSIC_ENA    ((UBase_t) 0x00000002UL)

#define UART_ICR_CTSIC_MASK    ((UBase_t) 0x00000001UL)
#define UART_ICR_CTSIC_DIS    ((UBase_t) 0x00000000UL)
#define UART_ICR_CTSIC_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_ICR_R_DCDIC_MASK    ((UBase_t) 0x00000004UL)
#define UART_ICR_R_DCDIC_BIT    ((UBase_t) 2UL)
#define UART_ICR_R_DCDIC_DIS    ((UBase_t) 0x00000000UL)
#define UART_ICR_R_DCDIC_ENA    ((UBase_t) 0x00000004UL)

#define UART_ICR_DCDIC_MASK    ((UBase_t) 0x00000001UL)
#define UART_ICR_DCDIC_DIS    ((UBase_t) 0x00000000UL)
#define UART_ICR_DCDIC_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_ICR_R_DSRIC_MASK    ((UBase_t) 0x00000008UL)
#define UART_ICR_R_DSRIC_BIT    ((UBase_t) 3UL)
#define UART_ICR_R_DSRIC_DIS    ((UBase_t) 0x00000000UL)
#define UART_ICR_R_DSRIC_ENA    ((UBase_t) 0x00000008UL)

#define UART_ICR_DSRIC_MASK    ((UBase_t) 0x00000001UL)
#define UART_ICR_DSRIC_DIS    ((UBase_t) 0x00000000UL)
#define UART_ICR_DSRIC_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_ICR_R_RXIC_MASK    ((UBase_t) 0x00000010UL)
#define UART_ICR_R_RXIC_BIT    ((UBase_t) 4UL)
#define UART_ICR_R_RXIC_DIS    ((UBase_t) 0x00000000UL)
#define UART_ICR_R_RXIC_ENA    ((UBase_t) 0x00000010UL)

#define UART_ICR_RXIC_MASK    ((UBase_t) 0x00000001UL)
#define UART_ICR_RXIC_DIS    ((UBase_t) 0x00000000UL)
#define UART_ICR_RXIC_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_ICR_R_TXIC_MASK    ((UBase_t) 0x00000020UL)
#define UART_ICR_R_TXIC_BIT    ((UBase_t) 5UL)
#define UART_ICR_R_TXIC_DIS    ((UBase_t) 0x00000000UL)
#define UART_ICR_R_TXIC_ENA    ((UBase_t) 0x00000020UL)

#define UART_ICR_TXIC_MASK    ((UBase_t) 0x00000001UL)
#define UART_ICR_TXIC_DIS    ((UBase_t) 0x00000000UL)
#define UART_ICR_TXIC_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_ICR_R_RTIC_MASK    ((UBase_t) 0x00000040UL)
#define UART_ICR_R_RTIC_BIT    ((UBase_t) 6UL)
#define UART_ICR_R_RTIC_DIS    ((UBase_t) 0x00000000UL)
#define UART_ICR_R_RTIC_ENA    ((UBase_t) 0x00000040UL)

#define UART_ICR_RTIC_MASK    ((UBase_t) 0x00000001UL)
#define UART_ICR_RTIC_DIS    ((UBase_t) 0x00000000UL)
#define UART_ICR_RTIC_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_ICR_R_FEIC_MASK    ((UBase_t) 0x00000080UL)
#define UART_ICR_R_FEIC_BIT    ((UBase_t) 7UL)
#define UART_ICR_R_FEIC_DIS    ((UBase_t) 0x00000000UL)
#define UART_ICR_R_FEIC_ENA    ((UBase_t) 0x00000080UL)

#define UART_ICR_FEIC_MASK    ((UBase_t) 0x00000001UL)
#define UART_ICR_FEIC_DIS    ((UBase_t) 0x00000000UL)
#define UART_ICR_FEIC_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_ICR_R_PEIC_MASK    ((UBase_t) 0x00000100UL)
#define UART_ICR_R_PEIC_BIT    ((UBase_t) 8UL)
#define UART_ICR_R_PEIC_DIS    ((UBase_t) 0x00000000UL)
#define UART_ICR_R_PEIC_ENA    ((UBase_t) 0x00000100UL)

#define UART_ICR_PEIC_MASK    ((UBase_t) 0x00000001UL)
#define UART_ICR_PEIC_DIS    ((UBase_t) 0x00000000UL)
#define UART_ICR_PEIC_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_ICR_R_BEIC_MASK    ((UBase_t) 0x00000200UL)
#define UART_ICR_R_BEIC_BIT    ((UBase_t) 9UL)
#define UART_ICR_R_BEIC_DIS    ((UBase_t) 0x00000000UL)
#define UART_ICR_R_BEIC_ENA    ((UBase_t) 0x00000200UL)

#define UART_ICR_BEIC_MASK    ((UBase_t) 0x00000001UL)
#define UART_ICR_BEIC_DIS    ((UBase_t) 0x00000000UL)
#define UART_ICR_BEIC_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_ICR_R_OEIC_MASK    ((UBase_t) 0x00000400UL)
#define UART_ICR_R_OEIC_BIT    ((UBase_t) 10UL)
#define UART_ICR_R_OEIC_DIS    ((UBase_t) 0x00000000UL)
#define UART_ICR_R_OEIC_ENA    ((UBase_t) 0x00000400UL)

#define UART_ICR_OEIC_MASK    ((UBase_t) 0x00000001UL)
#define UART_ICR_OEIC_DIS    ((UBase_t) 0x00000000UL)
#define UART_ICR_OEIC_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_ICR_R_EOTIC_MASK    ((UBase_t) 0x00000800UL)
#define UART_ICR_R_EOTIC_BIT    ((UBase_t) 11UL)
#define UART_ICR_R_EOTIC_DIS    ((UBase_t) 0x00000000UL)
#define UART_ICR_R_EOTIC_ENA    ((UBase_t) 0x00000800UL)

#define UART_ICR_EOTIC_MASK    ((UBase_t) 0x00000001UL)
#define UART_ICR_EOTIC_DIS    ((UBase_t) 0x00000000UL)
#define UART_ICR_EOTIC_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_ICR_R_BIT9IC_MASK    ((UBase_t) 0x00001000UL)
#define UART_ICR_R_BIT9IC_BIT    ((UBase_t) 12UL)
#define UART_ICR_R_BIT9IC_DIS    ((UBase_t) 0x00000000UL)
#define UART_ICR_R_BIT9IC_ENA    ((UBase_t) 0x00001000UL)

#define UART_ICR_BIT9IC_MASK    ((UBase_t) 0x00000001UL)
#define UART_ICR_BIT9IC_DIS    ((UBase_t) 0x00000000UL)
#define UART_ICR_BIT9IC_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_ICR_R_DMARXIC_MASK    ((UBase_t) 0x00010000UL)
#define UART_ICR_R_DMARXIC_BIT    ((UBase_t) 16UL)
#define UART_ICR_R_DMARXIC_DIS    ((UBase_t) 0x00000000UL)
#define UART_ICR_R_DMARXIC_ENA    ((UBase_t) 0x00010000UL)

#define UART_ICR_DMARXIC_MASK    ((UBase_t) 0x00000001UL)
#define UART_ICR_DMARXIC_DIS    ((UBase_t) 0x00000000UL)
#define UART_ICR_DMARXIC_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_ICR_R_DMATXIC_MASK    ((UBase_t) 0x00020000UL)
#define UART_ICR_R_DMATXIC_BIT    ((UBase_t) 17UL)
#define UART_ICR_R_DMATXIC_DIS    ((UBase_t) 0x00000000UL)
#define UART_ICR_R_DMATXIC_ENA    ((UBase_t) 0x00020000UL)

#define UART_ICR_DMATXIC_MASK    ((UBase_t) 0x00000001UL)
#define UART_ICR_DMATXIC_DIS    ((UBase_t) 0x00000000UL)
#define UART_ICR_DMATXIC_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

#endif /* XDRIVER_MCU_UART_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_UART_REGISTERDEFINES_ICR_H_ */
