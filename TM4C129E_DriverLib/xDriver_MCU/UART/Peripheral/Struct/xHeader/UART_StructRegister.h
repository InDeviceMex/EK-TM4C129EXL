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

#include <xDriver_MCU/Common/xHeader/MCU_Variables.h>

typedef volatile struct
{
    volatile uint32_t DATA :8;
    volatile const uint32_t FE :1;
    volatile const uint32_t PE :1;
    volatile const uint32_t BE :1;
    volatile const uint32_t OE :1;
    const uint32_t reserved :20;
} UARTDR_t;

typedef volatile struct
{
    volatile const uint32_t FE :1;
    volatile const uint32_t PE :1;
    volatile const uint32_t BE :1;
    volatile const uint32_t OE :1;
    const uint32_t reserved :28;
} UARTRSR_t;

typedef volatile struct
{
    volatile uint32_t DATA :8;
    const uint32_t reserved :24;
} UARTECR_t;

typedef volatile struct
{
    volatile const uint32_t CTS :1;
    volatile const uint32_t DSR :1;
    volatile const uint32_t DCD :1;
    volatile const uint32_t BUSY :1;
    volatile const uint32_t RXFE :1;
    volatile const uint32_t TXFF :1;
    volatile const uint32_t RXFF :1;
    volatile const uint32_t TXFE :1;
    volatile const uint32_t RI :1;
    const uint32_t reserved2 :23;
} UARTFR_t;

typedef volatile struct
{
    volatile uint32_t ILPDVSR :8;
    const uint32_t reserved :24;
} UARTILPR_t;

typedef volatile struct
{
    volatile uint32_t UARTIBRD :16;
    const uint32_t reserved :16;
} UARTIBRD_t;

typedef volatile struct
{
    volatile uint32_t DIVFRAC :6;
    const uint32_t reserved :26;
} UARTFBRD_t;

typedef volatile struct
{
    volatile uint32_t BRK :1;
    volatile uint32_t PEN :1;
    volatile uint32_t EPS :1;
    volatile uint32_t STP2 :1;
    volatile uint32_t FEN :1;
    volatile uint32_t WLEN :2;
    volatile uint32_t SPS :1;
    const uint32_t reserved :24;
} UARTLCRH_t;

typedef volatile struct
{
    volatile uint32_t UARTEN :1;
    volatile uint32_t SIREN :1;
    volatile uint32_t SIRLP :1;
    volatile uint32_t SMART :1;
    volatile uint32_t EOT :1;
    volatile uint32_t HSE :1;
    const uint32_t reserved :1;
    volatile uint32_t LBE :1;
    volatile uint32_t TXE :1;
    volatile uint32_t RXE :1;
    volatile uint32_t DTR :1;
    volatile uint32_t RTS :1;
    const uint32_t reserved3 :2;
    volatile uint32_t RTSEN :1;
    volatile uint32_t CTSEN :1;
    const uint32_t reserved4 :16;
} UARTCTL_t;

typedef volatile struct
{
    volatile uint32_t TXIFLSEL :3;
    volatile uint32_t RXIFLSEL :3;
    const uint32_t reserved :26;
} UARTIFLS_t;

typedef volatile struct
{
    volatile uint32_t RIIM :1;
    volatile uint32_t CTSIM :1;
    volatile uint32_t DCDIM :1;
    volatile uint32_t DSRIM :1;
    volatile uint32_t RXIM :1;
    volatile uint32_t TXIM :1;
    volatile uint32_t RTIM :1;
    volatile uint32_t FEIM :1;
    volatile uint32_t PEIM :1;
    volatile uint32_t BEIM :1;
    volatile uint32_t OEIM :1;
    volatile uint32_t EOTIM :1;
    volatile uint32_t BIT9IM :1;
    const uint32_t reserved :3;
    volatile uint32_t DMARXIM :1;
    volatile uint32_t DMATXIM :1;
    const uint32_t reserved1 :14;
} UARTIM_t;

typedef volatile struct
{
    volatile const uint32_t RIRIS :1;
    volatile const uint32_t CTSRIS :1;
    volatile const uint32_t DCDRIS :1;
    volatile const uint32_t DSRRIS :1;
    volatile const uint32_t RXRIS :1;
    volatile const uint32_t TXRIS :1;
    volatile const uint32_t RTRIS :1;
    volatile const uint32_t FERIS :1;
    volatile const uint32_t PERIS :1;
    volatile const uint32_t BERIS :1;
    volatile const uint32_t OERIS :1;
    volatile const uint32_t EOTRIS :1;
    volatile const uint32_t BIT9RIS :1;
    const uint32_t reserved :3;
    volatile const uint32_t DMARXRIS :1;
    volatile const uint32_t DMATXRIS :1;
    const uint32_t reserved1 :14;
} UARTRIS_t;

typedef volatile struct
{
    volatile const uint32_t RIMIS :1;
    volatile const uint32_t CTSMIS :1;
    volatile const uint32_t DCDMIS :1;
    volatile const uint32_t DSRMIS :1;
    volatile const uint32_t RXMIS :1;
    volatile const uint32_t TXMIS :1;
    volatile const uint32_t RTMIS :1;
    volatile const uint32_t FEMIS :1;
    volatile const uint32_t PEMIS :1;
    volatile const uint32_t BEMIS :1;
    volatile const uint32_t OEMIS :1;
    volatile const uint32_t EOTMIS :1;
    volatile const uint32_t BIT9MIS :1;
    const uint32_t reserved :3;
    volatile const uint32_t DMARXMIS :1;
    volatile const uint32_t DMATXMIS :1;
    const uint32_t reserved1 :14;
} UARTMIS_t;

typedef volatile struct
{
    volatile uint32_t RIMIC :1;
    volatile uint32_t CTSIC :1;
    volatile uint32_t DCDMIC :1;
    volatile uint32_t DSRMIC :1;
    volatile uint32_t RXIC :1;
    volatile uint32_t TXIC :1;
    volatile uint32_t RTIC :1;
    volatile uint32_t FEIC :1;
    volatile uint32_t PEIC :1;
    volatile uint32_t BEIC :1;
    volatile uint32_t OEIC :1;
    volatile uint32_t EOTIC :1;
    volatile uint32_t BIT9IC :1;
    const uint32_t reserved :3;
    volatile uint32_t DMARXIC :1;
    volatile uint32_t DMATXIC :1;
    const uint32_t reserved1 :14;
} UARTICR_t;

typedef volatile struct
{
    volatile uint32_t RXDMAE :1;
    volatile uint32_t TXDMAE :1;
    volatile uint32_t DMAERR :1;
    const uint32_t reserved :29;
} UARTDMACTL_t;

typedef volatile struct
{
    volatile uint32_t ADDR :8;
    const uint32_t reserved :7;
    volatile uint32_t BIT9EN :1;
    const uint32_t reserved1 :16;
} UART9BITADDR_t;

typedef volatile struct
{
    volatile uint32_t MASK :8;
    const uint32_t reserved :24;
} UART9BITAMASK_t;

typedef volatile struct
{
    volatile const uint32_t SC :1;
    volatile const uint32_t NB :1;
    volatile const uint32_t MS :1;
    volatile const uint32_t MSE :1;
    const uint32_t reserved : 30;
} UARTPP_t;

typedef volatile struct
{
    volatile uint32_t CS :4;
    uint32_t reserved : 28;
} UARTCC_t;


typedef volatile struct
{
    volatile const uint32_t PID0 :8;
    const uint32_t reserved :24;
}UARTPeriphID0_t;

typedef volatile struct
{
    volatile const uint32_t PID1 :8;
    const uint32_t reserved :24;
}UARTPeriphID1_t;

typedef volatile struct
{
    volatile const uint32_t PID2 :8;
    const uint32_t reserved :24;
}UARTPeriphID2_t;

typedef volatile struct
{
    volatile const uint32_t PID3 :8;
    const uint32_t reserved :24;
}UARTPeriphID3_t;

typedef volatile struct
{
    volatile const uint32_t PID4 :8;
    const uint32_t reserved :24;
}UARTPeriphID4_t;

typedef volatile struct
{
    volatile const uint32_t PID5 :8;
    const uint32_t reserved :24;
}UARTPeriphID5_t;

typedef volatile struct
{
    volatile const uint32_t PID6 :8;
    const uint32_t reserved :24;
}UARTPeriphID6_t;

typedef volatile struct
{
    volatile const uint32_t PID7 :8;
    const uint32_t reserved :24;
}UARTPeriphID7_t;

typedef volatile struct
{
    volatile const uint32_t CID0 :8;
    const uint32_t reserved :24;
}UARTCellID0_t;

typedef volatile struct
{
    volatile const uint32_t CID1 :8;
    const uint32_t reserved :24;
}UARTCellID1_t;

typedef volatile struct
{
    volatile const uint32_t CID2 :8;
    const uint32_t reserved :24;
}UARTCellID2_t;

typedef volatile struct
{
    volatile const uint32_t CID3 :8;
    const uint32_t reserved :24;
}UARTCellID3_t;

#endif /* XDRIVER_MCU_UART_PERIPHERAL_STRUCT_XHEADER_UART_STRUCTREGISTER_H_ */
