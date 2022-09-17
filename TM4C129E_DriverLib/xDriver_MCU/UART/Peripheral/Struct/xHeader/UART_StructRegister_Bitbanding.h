/**
 *
 * @file UART_StructRegister_Bitbanding.h
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
 * @verbatim 22 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date Author Version Description
 * 22 ene. 2021 vyldram 1.0 initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_UART_PERIPHERAL_STRUCT_XHEADER_UART_STRUCTREGISTER_BITBANDING_H_
#define XDRIVER_MCU_UART_PERIPHERAL_STRUCT_XHEADER_UART_STRUCTREGISTER_BITBANDING_H_

#include <xDriver_MCU/UART/Peripheral/xHeader/UART_Enum.h>

typedef volatile struct
{
    volatile uint32_t DATA [8UL];
    volatile const uint32_t FE;
    volatile const uint32_t PE;
    volatile const uint32_t BE;
    volatile const uint32_t OE;
    const uint32_t reserved [20UL];
}BITBANDING_UARTDR_t;

typedef volatile struct
{
    volatile const uint32_t FE;
    volatile const uint32_t PE;
    volatile const uint32_t BE;
    volatile const uint32_t OE;
    const uint32_t reserved [28UL];
}BITBANDING_UARTRSR_t;

typedef volatile struct
{
    volatile uint32_t DATA [8UL];
    const uint32_t reserved [24UL];
}BITBANDING_UARTECR_t;

typedef volatile struct
{
    volatile const uint32_t CTS;
    volatile const uint32_t DSR;
    volatile const uint32_t DCD;
    volatile const uint32_t BUSY;
    volatile const uint32_t RXFE;
    volatile const uint32_t TXFF;
    volatile const uint32_t RXFF;
    volatile const uint32_t TXFE;
    volatile const uint32_t RI;
    const uint32_t reserved2 [23UL];
}BITBANDING_UARTFR_t;

typedef volatile struct
{
    volatile uint32_t ILPDVSR [8UL];
    const uint32_t reserved [24UL];
}BITBANDING_UARTILPR_t;

typedef volatile struct
{
    volatile uint32_t UARTIBRD [16UL];
    const uint32_t reserved [16UL];
}BITBANDING_UARTIBRD_t;

typedef volatile struct
{
    volatile uint32_t DIVFRAC [6UL];
    const uint32_t reserved [26UL];
}BITBANDING_UARTFBRD_t;

typedef volatile struct
{
    volatile uint32_t BRK;
    volatile uint32_t PEN;
    volatile uint32_t EPS;
    volatile uint32_t STP2;
    volatile uint32_t FEN;
    volatile uint32_t WLEN [2UL];
    volatile uint32_t SPS;
    const uint32_t reserved [24UL];
}BITBANDING_UARTLCRH_t;

typedef volatile struct
{
    volatile uint32_t UARTEN;
    volatile uint32_t SIREN;
    volatile uint32_t SIRLP;
    volatile uint32_t SMART;
    volatile uint32_t EOT;
    volatile uint32_t HSE;
    const uint32_t reserved;
    volatile uint32_t LBE;
    volatile uint32_t TXE;
    volatile uint32_t RXE;
    const uint32_t reserved2;
    volatile uint32_t RTS;
    const uint32_t reserved3 [2UL];
    volatile uint32_t RTSEN;
    volatile uint32_t CTSEN;
    const uint32_t reserved4 [16UL];
}BITBANDING_UARTCTL_t;

typedef volatile struct
{
    volatile uint32_t TXIFLSEL [3UL];
    volatile uint32_t RXIFLSEL [3UL];
    const uint32_t reserved [26UL];
}BITBANDING_UARTIFLS_t;

typedef volatile struct
{
    volatile uint32_t RIIM;
    volatile uint32_t CTSIM;
    volatile uint32_t DCDIM;
    volatile uint32_t DSRIM;
    volatile uint32_t RXIM;
    volatile uint32_t TXIM;
    volatile uint32_t RTIM;
    volatile uint32_t FEIM;
    volatile uint32_t PEIM;
    volatile uint32_t BEIM;
    volatile uint32_t OEIM;
    volatile uint32_t EOTIM;
    volatile uint32_t BIT9IM;
    const uint32_t reserved [3UL];
    volatile uint32_t DMARXIM;
    volatile uint32_t DMATXIM;
    const uint32_t reserved1 [14UL];
}BITBANDING_UARTIM_t;

typedef volatile struct
{
    volatile const uint32_t RIRIS;
    volatile const uint32_t CTSRIS;
    volatile const uint32_t DCDRIS;
    volatile const uint32_t DSRRIS;
    volatile const uint32_t RXRIS;
    volatile const uint32_t TXRIS;
    volatile const uint32_t RTRIS;
    volatile const uint32_t FERIS;
    volatile const uint32_t PERIS;
    volatile const uint32_t BERIS;
    volatile const uint32_t OERIS;
    volatile const uint32_t EOTRIS;
    volatile const uint32_t BIT9RIS;
    const uint32_t reserved [3UL];
    volatile const uint32_t DMARXRIS;
    volatile const uint32_t DMATXRIS;
    const uint32_t reserved1 [14UL];
}BITBANDING_UARTRIS_t;

typedef volatile struct
{
    volatile const uint32_t RIMIS;
    volatile const uint32_t CTSMIS;
    volatile const uint32_t DCDMIS;
    volatile const uint32_t DSRMIS;
    volatile const uint32_t RXMIS;
    volatile const uint32_t TXMIS;
    volatile const uint32_t RTMIS;
    volatile const uint32_t FEMIS;
    volatile const uint32_t PEMIS;
    volatile const uint32_t BEMIS;
    volatile const uint32_t OEMIS;
    volatile const uint32_t EOTMIS;
    volatile const uint32_t BIT9MIS;
    const uint32_t reserved [3UL];
    volatile const uint32_t DMARXMIS;
    volatile const uint32_t DMATXMIS;
    const uint32_t reserved1 [14UL];
}BITBANDING_UARTMIS_t;

typedef volatile struct
{
    volatile uint32_t RIMIC;
    volatile uint32_t CTSIC;
    volatile uint32_t DCDMIC;
    volatile uint32_t DSRMIC;
    volatile uint32_t RXIC;
    volatile uint32_t TXIC;
    volatile uint32_t RTIC;
    volatile uint32_t FEIC;
    volatile uint32_t PEIC;
    volatile uint32_t BEIC;
    volatile uint32_t OEIC;
    volatile uint32_t EOTIC;
    volatile uint32_t BIT9IC;
    const uint32_t reserved [3UL];
    volatile uint32_t DMARXIC;
    volatile uint32_t DMATXIC;
    const uint32_t reserved1 [14UL];
}BITBANDING_UARTICR_t;

typedef volatile struct
{
    volatile uint32_t RXDMAE;
    volatile uint32_t TXDMAE;
    volatile uint32_t DMAERR;
    const uint32_t reserved [29UL];
}BITBANDING_UARTDMACTL_t;

typedef volatile struct
{
    volatile uint32_t ADDR [8UL];
    const uint32_t reserved [7UL];
    volatile uint32_t BIT9EN;
    const uint32_t reserved1 [16UL];
}BITBANDING_9BITADDR_t;

typedef volatile struct
{
    volatile uint32_t MASK [8UL];
    const uint32_t reserved [24UL];
}BITBANDING_9BITAMASK_t;

typedef volatile struct
{
    volatile const uint32_t SC;
    volatile const uint32_t NB;
    volatile const uint32_t MS;
    volatile const uint32_t MSE;
    const uint32_t reserved [30UL];
}BITBANDING_UARTPP_t;

typedef volatile struct
{
    volatile uint32_t CS [4UL];
    const uint32_t reserved [28UL];
}BITBANDING_UARTCC_t;


typedef volatile struct
{
    volatile const uint32_t PID0 [8UL];
    const uint32_t reserved [24UL];
}BITBANDING_UARTPeriphID0_t;

typedef volatile struct
{
    volatile const uint32_t PID1 [8UL];
    const uint32_t reserved [24UL];
}BITBANDING_UARTPeriphID1_t;

typedef volatile struct
{
    volatile const uint32_t PID2 [8UL];
    const uint32_t reserved [24UL];
}BITBANDING_UARTPeriphID2_t;

typedef volatile struct
{
    volatile const uint32_t PID3 [8UL];
    const uint32_t reserved [24UL];
}BITBANDING_UARTPeriphID3_t;

typedef volatile struct
{
    volatile const uint32_t PID4 [8UL];
    const uint32_t reserved [24UL];
}BITBANDING_UARTPeriphID4_t;

typedef volatile struct
{
    volatile const uint32_t PID5 [8UL];
    const uint32_t reserved [24UL];
}BITBANDING_UARTPeriphID5_t;

typedef volatile struct
{
    volatile const uint32_t PID6 [8UL];
    const uint32_t reserved [24UL];
}BITBANDING_UARTPeriphID6_t;

typedef volatile struct
{
    volatile const uint32_t PID7 [8UL];
    const uint32_t reserved [24UL];
}BITBANDING_UARTPeriphID7_t;

typedef volatile struct
{
    volatile const uint32_t CID0 [8UL];
    const uint32_t reserved [24UL];
}BITBANDING_UARTCellID0_t;

typedef volatile struct
{
    volatile const uint32_t CID1 [8UL];
    const uint32_t reserved [24UL];
}BITBANDING_UARTCellID1_t;

typedef volatile struct
{
    volatile const uint32_t CID2 [8UL];
    const uint32_t reserved [24UL];
}BITBANDING_UARTCellID2_t;

typedef volatile struct
{
    volatile const uint32_t CID3 [8UL];
    const uint32_t reserved [24UL];
}BITBANDING_UARTCellID3_t;

#endif /* XDRIVER_MCU_UART_PERIPHERAL_STRUCT_XHEADER_UART_STRUCTREGISTER_BITBANDING_H_ */
