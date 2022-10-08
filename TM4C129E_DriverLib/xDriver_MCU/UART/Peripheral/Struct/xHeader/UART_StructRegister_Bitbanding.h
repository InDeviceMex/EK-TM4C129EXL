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
    volatile UBase_t DATA [8UL];
    volatile const UBase_t FE;
    volatile const UBase_t PE;
    volatile const UBase_t BE;
    volatile const UBase_t OE;
    const UBase_t reserved [20UL];
}BITBANDING_UARTDR_t;

typedef volatile struct
{
    volatile const UBase_t FE;
    volatile const UBase_t PE;
    volatile const UBase_t BE;
    volatile const UBase_t OE;
    const UBase_t reserved [28UL];
}BITBANDING_UARTRSR_t;

typedef volatile struct
{
    volatile UBase_t DATA [8UL];
    const UBase_t reserved [24UL];
}BITBANDING_UARTECR_t;

typedef volatile struct
{
    volatile const UBase_t CTS;
    volatile const UBase_t DSR;
    volatile const UBase_t DCD;
    volatile const UBase_t BUSY;
    volatile const UBase_t RXFE;
    volatile const UBase_t TXFF;
    volatile const UBase_t RXFF;
    volatile const UBase_t TXFE;
    volatile const UBase_t RI;
    const UBase_t reserved2 [23UL];
}BITBANDING_UARTFR_t;

typedef volatile struct
{
    volatile UBase_t ILPDVSR [8UL];
    const UBase_t reserved [24UL];
}BITBANDING_UARTILPR_t;

typedef volatile struct
{
    volatile UBase_t UARTIBRD [16UL];
    const UBase_t reserved [16UL];
}BITBANDING_UARTIBRD_t;

typedef volatile struct
{
    volatile UBase_t DIVFRAC [6UL];
    const UBase_t reserved [26UL];
}BITBANDING_UARTFBRD_t;

typedef volatile struct
{
    volatile UBase_t BRK;
    volatile UBase_t PEN;
    volatile UBase_t EPS;
    volatile UBase_t STP2;
    volatile UBase_t FEN;
    volatile UBase_t WLEN [2UL];
    volatile UBase_t SPS;
    const UBase_t reserved [24UL];
}BITBANDING_UARTLCRH_t;

typedef volatile struct
{
    volatile UBase_t UARTEN;
    volatile UBase_t SIREN;
    volatile UBase_t SIRLP;
    volatile UBase_t SMART;
    volatile UBase_t EOT;
    volatile UBase_t HSE;
    const UBase_t reserved;
    volatile UBase_t LBE;
    volatile UBase_t TXE;
    volatile UBase_t RXE;
    const UBase_t reserved2;
    volatile UBase_t RTS;
    const UBase_t reserved3 [2UL];
    volatile UBase_t RTSEN;
    volatile UBase_t CTSEN;
    const UBase_t reserved4 [16UL];
}BITBANDING_UARTCTL_t;

typedef volatile struct
{
    volatile UBase_t TXIFLSEL [3UL];
    volatile UBase_t RXIFLSEL [3UL];
    const UBase_t reserved [26UL];
}BITBANDING_UARTIFLS_t;

typedef volatile struct
{
    volatile UBase_t RIIM;
    volatile UBase_t CTSIM;
    volatile UBase_t DCDIM;
    volatile UBase_t DSRIM;
    volatile UBase_t RXIM;
    volatile UBase_t TXIM;
    volatile UBase_t RTIM;
    volatile UBase_t FEIM;
    volatile UBase_t PEIM;
    volatile UBase_t BEIM;
    volatile UBase_t OEIM;
    volatile UBase_t EOTIM;
    volatile UBase_t BIT9IM;
    const UBase_t reserved [3UL];
    volatile UBase_t DMARXIM;
    volatile UBase_t DMATXIM;
    const UBase_t reserved1 [14UL];
}BITBANDING_UARTIM_t;

typedef volatile struct
{
    volatile const UBase_t RIRIS;
    volatile const UBase_t CTSRIS;
    volatile const UBase_t DCDRIS;
    volatile const UBase_t DSRRIS;
    volatile const UBase_t RXRIS;
    volatile const UBase_t TXRIS;
    volatile const UBase_t RTRIS;
    volatile const UBase_t FERIS;
    volatile const UBase_t PERIS;
    volatile const UBase_t BERIS;
    volatile const UBase_t OERIS;
    volatile const UBase_t EOTRIS;
    volatile const UBase_t BIT9RIS;
    const UBase_t reserved [3UL];
    volatile const UBase_t DMARXRIS;
    volatile const UBase_t DMATXRIS;
    const UBase_t reserved1 [14UL];
}BITBANDING_UARTRIS_t;

typedef volatile struct
{
    volatile const UBase_t RIMIS;
    volatile const UBase_t CTSMIS;
    volatile const UBase_t DCDMIS;
    volatile const UBase_t DSRMIS;
    volatile const UBase_t RXMIS;
    volatile const UBase_t TXMIS;
    volatile const UBase_t RTMIS;
    volatile const UBase_t FEMIS;
    volatile const UBase_t PEMIS;
    volatile const UBase_t BEMIS;
    volatile const UBase_t OEMIS;
    volatile const UBase_t EOTMIS;
    volatile const UBase_t BIT9MIS;
    const UBase_t reserved [3UL];
    volatile const UBase_t DMARXMIS;
    volatile const UBase_t DMATXMIS;
    const UBase_t reserved1 [14UL];
}BITBANDING_UARTMIS_t;

typedef volatile struct
{
    volatile UBase_t RIMIC;
    volatile UBase_t CTSIC;
    volatile UBase_t DCDMIC;
    volatile UBase_t DSRMIC;
    volatile UBase_t RXIC;
    volatile UBase_t TXIC;
    volatile UBase_t RTIC;
    volatile UBase_t FEIC;
    volatile UBase_t PEIC;
    volatile UBase_t BEIC;
    volatile UBase_t OEIC;
    volatile UBase_t EOTIC;
    volatile UBase_t BIT9IC;
    const UBase_t reserved [3UL];
    volatile UBase_t DMARXIC;
    volatile UBase_t DMATXIC;
    const UBase_t reserved1 [14UL];
}BITBANDING_UARTICR_t;

typedef volatile struct
{
    volatile UBase_t RXDMAE;
    volatile UBase_t TXDMAE;
    volatile UBase_t DMAERR;
    const UBase_t reserved [29UL];
}BITBANDING_UARTDMACTL_t;

typedef volatile struct
{
    volatile UBase_t ADDR [8UL];
    const UBase_t reserved [7UL];
    volatile UBase_t BIT9EN;
    const UBase_t reserved1 [16UL];
}BITBANDING_9BITADDR_t;

typedef volatile struct
{
    volatile UBase_t MASK [8UL];
    const UBase_t reserved [24UL];
}BITBANDING_9BITAMASK_t;

typedef volatile struct
{
    volatile const UBase_t SC;
    volatile const UBase_t NB;
    volatile const UBase_t MS;
    volatile const UBase_t MSE;
    const UBase_t reserved [30UL];
}BITBANDING_UARTPP_t;

typedef volatile struct
{
    volatile UBase_t CS [4UL];
    const UBase_t reserved [28UL];
}BITBANDING_UARTCC_t;


typedef volatile struct
{
    volatile const UBase_t PID0 [8UL];
    const UBase_t reserved [24UL];
}BITBANDING_UARTPeriphID0_t;

typedef volatile struct
{
    volatile const UBase_t PID1 [8UL];
    const UBase_t reserved [24UL];
}BITBANDING_UARTPeriphID1_t;

typedef volatile struct
{
    volatile const UBase_t PID2 [8UL];
    const UBase_t reserved [24UL];
}BITBANDING_UARTPeriphID2_t;

typedef volatile struct
{
    volatile const UBase_t PID3 [8UL];
    const UBase_t reserved [24UL];
}BITBANDING_UARTPeriphID3_t;

typedef volatile struct
{
    volatile const UBase_t PID4 [8UL];
    const UBase_t reserved [24UL];
}BITBANDING_UARTPeriphID4_t;

typedef volatile struct
{
    volatile const UBase_t PID5 [8UL];
    const UBase_t reserved [24UL];
}BITBANDING_UARTPeriphID5_t;

typedef volatile struct
{
    volatile const UBase_t PID6 [8UL];
    const UBase_t reserved [24UL];
}BITBANDING_UARTPeriphID6_t;

typedef volatile struct
{
    volatile const UBase_t PID7 [8UL];
    const UBase_t reserved [24UL];
}BITBANDING_UARTPeriphID7_t;

typedef volatile struct
{
    volatile const UBase_t CID0 [8UL];
    const UBase_t reserved [24UL];
}BITBANDING_UARTCellID0_t;

typedef volatile struct
{
    volatile const UBase_t CID1 [8UL];
    const UBase_t reserved [24UL];
}BITBANDING_UARTCellID1_t;

typedef volatile struct
{
    volatile const UBase_t CID2 [8UL];
    const UBase_t reserved [24UL];
}BITBANDING_UARTCellID2_t;

typedef volatile struct
{
    volatile const UBase_t CID3 [8UL];
    const UBase_t reserved [24UL];
}BITBANDING_UARTCellID3_t;

#endif /* XDRIVER_MCU_UART_PERIPHERAL_STRUCT_XHEADER_UART_STRUCTREGISTER_BITBANDING_H_ */
