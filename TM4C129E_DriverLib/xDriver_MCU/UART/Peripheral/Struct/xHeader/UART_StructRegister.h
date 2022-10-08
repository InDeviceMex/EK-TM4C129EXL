/**
 *
 * @file UART_StructRegister.h
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

#ifndef XDRIVER_MCU_UART_PERIPHERAL_STRUCT_XHEADER_UART_STRUCTREGISTER_H_
#define XDRIVER_MCU_UART_PERIPHERAL_STRUCT_XHEADER_UART_STRUCTREGISTER_H_

#include <xDriver_MCU/UART/Peripheral/xHeader/UART_Enum.h>

typedef volatile struct
{
    volatile UBase_t DATA :8;
    volatile const UBase_t FE :1;
    volatile const UBase_t PE :1;
    volatile const UBase_t BE :1;
    volatile const UBase_t OE :1;
    const UBase_t reserved :20;
} UARTDR_t;

typedef volatile struct
{
    volatile const UBase_t FE :1;
    volatile const UBase_t PE :1;
    volatile const UBase_t BE :1;
    volatile const UBase_t OE :1;
    const UBase_t reserved :28;
} UARTRSR_t;

typedef volatile struct
{
    volatile UBase_t DATA :8;
    const UBase_t reserved :24;
} UARTECR_t;

typedef volatile struct
{
    volatile const UBase_t CTS :1;
    volatile const UBase_t DSR :1;
    volatile const UBase_t DCD :1;
    volatile const UBase_t BUSY :1;
    volatile const UBase_t RXFE :1;
    volatile const UBase_t TXFF :1;
    volatile const UBase_t RXFF :1;
    volatile const UBase_t TXFE :1;
    volatile const UBase_t RI :1;
    const UBase_t reserved2 :23;
} UARTFR_t;

typedef volatile struct
{
    volatile UBase_t ILPDVSR :8;
    const UBase_t reserved :24;
} UARTILPR_t;

typedef volatile struct
{
    volatile UBase_t UARTIBRD :16;
    const UBase_t reserved :16;
} UARTIBRD_t;

typedef volatile struct
{
    volatile UBase_t DIVFRAC :6;
    const UBase_t reserved :26;
} UARTFBRD_t;

typedef volatile struct
{
    volatile UBase_t BRK :1;
    volatile UBase_t PEN :1;
    volatile UBase_t EPS :1;
    volatile UBase_t STP2 :1;
    volatile UBase_t FEN :1;
    volatile UBase_t WLEN :2;
    volatile UBase_t SPS :1;
    const UBase_t reserved :24;
} UARTLCRH_t;

typedef volatile struct
{
    volatile UBase_t UARTEN :1;
    volatile UBase_t SIREN :1;
    volatile UBase_t SIRLP :1;
    volatile UBase_t SMART :1;
    volatile UBase_t EOT :1;
    volatile UBase_t HSE :1;
    const UBase_t reserved :1;
    volatile UBase_t LBE :1;
    volatile UBase_t TXE :1;
    volatile UBase_t RXE :1;
    volatile UBase_t DTR :1;
    volatile UBase_t RTS :1;
    const UBase_t reserved3 :2;
    volatile UBase_t RTSEN :1;
    volatile UBase_t CTSEN :1;
    const UBase_t reserved4 :16;
} UARTCTL_t;

typedef volatile struct
{
    volatile UBase_t TXIFLSEL :3;
    volatile UBase_t RXIFLSEL :3;
    const UBase_t reserved :26;
} UARTIFLS_t;

typedef volatile struct
{
    volatile UBase_t RIIM :1;
    volatile UBase_t CTSIM :1;
    volatile UBase_t DCDIM :1;
    volatile UBase_t DSRIM :1;
    volatile UBase_t RXIM :1;
    volatile UBase_t TXIM :1;
    volatile UBase_t RTIM :1;
    volatile UBase_t FEIM :1;
    volatile UBase_t PEIM :1;
    volatile UBase_t BEIM :1;
    volatile UBase_t OEIM :1;
    volatile UBase_t EOTIM :1;
    volatile UBase_t BIT9IM :1;
    const UBase_t reserved :3;
    volatile UBase_t DMARXIM :1;
    volatile UBase_t DMATXIM :1;
    const UBase_t reserved1 :14;
} UARTIM_t;

typedef volatile struct
{
    volatile const UBase_t RIRIS :1;
    volatile const UBase_t CTSRIS :1;
    volatile const UBase_t DCDRIS :1;
    volatile const UBase_t DSRRIS :1;
    volatile const UBase_t RXRIS :1;
    volatile const UBase_t TXRIS :1;
    volatile const UBase_t RTRIS :1;
    volatile const UBase_t FERIS :1;
    volatile const UBase_t PERIS :1;
    volatile const UBase_t BERIS :1;
    volatile const UBase_t OERIS :1;
    volatile const UBase_t EOTRIS :1;
    volatile const UBase_t BIT9RIS :1;
    const UBase_t reserved :3;
    volatile const UBase_t DMARXRIS :1;
    volatile const UBase_t DMATXRIS :1;
    const UBase_t reserved1 :14;
} UARTRIS_t;

typedef volatile struct
{
    volatile const UBase_t RIMIS :1;
    volatile const UBase_t CTSMIS :1;
    volatile const UBase_t DCDMIS :1;
    volatile const UBase_t DSRMIS :1;
    volatile const UBase_t RXMIS :1;
    volatile const UBase_t TXMIS :1;
    volatile const UBase_t RTMIS :1;
    volatile const UBase_t FEMIS :1;
    volatile const UBase_t PEMIS :1;
    volatile const UBase_t BEMIS :1;
    volatile const UBase_t OEMIS :1;
    volatile const UBase_t EOTMIS :1;
    volatile const UBase_t BIT9MIS :1;
    const UBase_t reserved :3;
    volatile const UBase_t DMARXMIS :1;
    volatile const UBase_t DMATXMIS :1;
    const UBase_t reserved1 :14;
} UARTMIS_t;

typedef volatile struct
{
    volatile UBase_t RIMIC :1;
    volatile UBase_t CTSIC :1;
    volatile UBase_t DCDMIC :1;
    volatile UBase_t DSRMIC :1;
    volatile UBase_t RXIC :1;
    volatile UBase_t TXIC :1;
    volatile UBase_t RTIC :1;
    volatile UBase_t FEIC :1;
    volatile UBase_t PEIC :1;
    volatile UBase_t BEIC :1;
    volatile UBase_t OEIC :1;
    volatile UBase_t EOTIC :1;
    volatile UBase_t BIT9IC :1;
    const UBase_t reserved :3;
    volatile UBase_t DMARXIC :1;
    volatile UBase_t DMATXIC :1;
    const UBase_t reserved1 :14;
} UARTICR_t;

typedef volatile struct
{
    volatile UBase_t RXDMAE :1;
    volatile UBase_t TXDMAE :1;
    volatile UBase_t DMAERR :1;
    const UBase_t reserved :29;
} UARTDMACTL_t;

typedef volatile struct
{
    volatile UBase_t ADDR :8;
    const UBase_t reserved :7;
    volatile UBase_t BIT9EN :1;
    const UBase_t reserved1 :16;
} UART9BITADDR_t;

typedef volatile struct
{
    volatile UBase_t MASK :8;
    const UBase_t reserved :24;
} UART9BITAMASK_t;

typedef volatile struct
{
    volatile const UBase_t SC :1;
    volatile const UBase_t NB :1;
    volatile const UBase_t MS :1;
    volatile const UBase_t MSE :1;
    const UBase_t reserved : 30;
} UARTPP_t;

typedef volatile struct
{
    volatile UBase_t CS :4;
    UBase_t reserved : 28;
} UARTCC_t;


typedef volatile struct
{
    volatile const UBase_t PID0 :8;
    const UBase_t reserved :24;
}UARTPeriphID0_t;

typedef volatile struct
{
    volatile const UBase_t PID1 :8;
    const UBase_t reserved :24;
}UARTPeriphID1_t;

typedef volatile struct
{
    volatile const UBase_t PID2 :8;
    const UBase_t reserved :24;
}UARTPeriphID2_t;

typedef volatile struct
{
    volatile const UBase_t PID3 :8;
    const UBase_t reserved :24;
}UARTPeriphID3_t;

typedef volatile struct
{
    volatile const UBase_t PID4 :8;
    const UBase_t reserved :24;
}UARTPeriphID4_t;

typedef volatile struct
{
    volatile const UBase_t PID5 :8;
    const UBase_t reserved :24;
}UARTPeriphID5_t;

typedef volatile struct
{
    volatile const UBase_t PID6 :8;
    const UBase_t reserved :24;
}UARTPeriphID6_t;

typedef volatile struct
{
    volatile const UBase_t PID7 :8;
    const UBase_t reserved :24;
}UARTPeriphID7_t;

typedef volatile struct
{
    volatile const UBase_t CID0 :8;
    const UBase_t reserved :24;
}UARTCellID0_t;

typedef volatile struct
{
    volatile const UBase_t CID1 :8;
    const UBase_t reserved :24;
}UARTCellID1_t;

typedef volatile struct
{
    volatile const UBase_t CID2 :8;
    const UBase_t reserved :24;
}UARTCellID2_t;

typedef volatile struct
{
    volatile const UBase_t CID3 :8;
    const UBase_t reserved :24;
}UARTCellID3_t;

#endif /* XDRIVER_MCU_UART_PERIPHERAL_STRUCT_XHEADER_UART_STRUCTREGISTER_H_ */
