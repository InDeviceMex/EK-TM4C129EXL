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
}UART_DR_t;

typedef volatile struct
{
    volatile const UBase_t FE :1;
    volatile const UBase_t PE :1;
    volatile const UBase_t BE :1;
    volatile const UBase_t OE :1;
    const UBase_t reserved :28;
}UART_RSR_t;

typedef volatile struct
{
    volatile UBase_t DATA :8;
    const UBase_t reserved :24;
}UART_ECR_t;

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
}UART_FR_t;

typedef volatile struct
{
    volatile UBase_t ILPDVSR :8;
    const UBase_t reserved :24;
}UART_ILPR_t;

typedef volatile struct
{
    volatile UBase_t IBRD :16;
    const UBase_t reserved :16;
}UART_IBRD_t;

typedef volatile struct
{
    volatile UBase_t DIVFRAC :6;
    const UBase_t reserved :26;
}UART_FBRD_t;

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
}UART_LCRH_t;

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
}UART_CTL_t;

typedef volatile struct
{
    volatile UBase_t TXIFLSEL :3;
    volatile UBase_t RXIFLSEL :3;
    const UBase_t reserved :26;
}UART_IFLS_t;

typedef volatile struct
{
    volatile UBase_t RI :1;
    volatile UBase_t CTS :1;
    volatile UBase_t DCD :1;
    volatile UBase_t DSR :1;
    volatile UBase_t RX :1;
    volatile UBase_t TX :1;
    volatile UBase_t RT :1;
    volatile UBase_t FE :1;
    volatile UBase_t PE :1;
    volatile UBase_t BE :1;
    volatile UBase_t OE :1;
    volatile UBase_t EOT :1;
    volatile UBase_t BIT9 :1;
    const UBase_t reserved :3;
    volatile UBase_t DMARX :1;
    volatile UBase_t DMATX :1;
    const UBase_t reserved1 :14;
}UART_IM_t;

typedef volatile struct
{
    volatile const UBase_t RI :1;
    volatile const UBase_t CTS :1;
    volatile const UBase_t DCD :1;
    volatile const UBase_t DSR :1;
    volatile const UBase_t RX :1;
    volatile const UBase_t TX :1;
    volatile const UBase_t RT :1;
    volatile const UBase_t FE :1;
    volatile const UBase_t PE :1;
    volatile const UBase_t BE :1;
    volatile const UBase_t OE :1;
    volatile const UBase_t EOT :1;
    volatile const UBase_t BIT9 :1;
    const UBase_t reserved :3;
    volatile const UBase_t DMARX :1;
    volatile const UBase_t DMATX :1;
    const UBase_t reserved1 :14;
}UART_RIS_t;

typedef volatile struct
{
    volatile const UBase_t RI :1;
    volatile const UBase_t CTS :1;
    volatile const UBase_t DCD :1;
    volatile const UBase_t DSR :1;
    volatile const UBase_t RX :1;
    volatile const UBase_t TX :1;
    volatile const UBase_t RT :1;
    volatile const UBase_t FE :1;
    volatile const UBase_t PE :1;
    volatile const UBase_t BE :1;
    volatile const UBase_t OE :1;
    volatile const UBase_t EOT :1;
    volatile const UBase_t BIT9 :1;
    const UBase_t reserved :3;
    volatile const UBase_t DMARX :1;
    volatile const UBase_t DMATX :1;
    const UBase_t reserved1 :14;
}UART_MIS_t;

typedef volatile struct
{
    volatile UBase_t RIM  :1;
    volatile UBase_t CTS  :1;
    volatile UBase_t DCDM  :1;
    volatile UBase_t DSRM  :1;
    volatile UBase_t RX  :1;
    volatile UBase_t TX  :1;
    volatile UBase_t RT  :1;
    volatile UBase_t FE  :1;
    volatile UBase_t PE  :1;
    volatile UBase_t BE  :1;
    volatile UBase_t OE  :1;
    volatile UBase_t EOT  :1;
    volatile UBase_t BIT9  :1;
    const UBase_t reserved :3;
    volatile UBase_t DMARX  :1;
    volatile UBase_t DMATX  :1;
    const UBase_t reserved1 :14;
}UART_ICR_t;

typedef volatile struct
{
    volatile UBase_t RXDMAE :1;
    volatile UBase_t TXDMAE :1;
    volatile UBase_t DMAERR :1;
    const UBase_t reserved :29;
}UART_DMACTL_t;

typedef volatile struct
{
    volatile UBase_t ADDR :8;
    const UBase_t reserved :7;
    volatile UBase_t BIT9EN :1;
    const UBase_t reserved1 :16;
}UART_BIT9ADDR_t;

typedef volatile struct
{
    volatile UBase_t MASK :8;
    const UBase_t reserved :24;
}UART_BIT9AMASK_t;

typedef volatile struct
{
    volatile const UBase_t SC :1;
    volatile const UBase_t NB :1;
    volatile const UBase_t MS :1;
    volatile const UBase_t MSE :1;
    const UBase_t reserved : 28;
}UART_PP_t;

typedef volatile struct
{
    volatile UBase_t CS :4;
    UBase_t reserved : 28;
}UART_CC_t;


typedef volatile struct
{
    volatile const UBase_t PID0 :8;
    const UBase_t reserved :24;
}UART_PeriphID0_t;

typedef volatile struct
{
    volatile const UBase_t PID1 :8;
    const UBase_t reserved :24;
}UART_PeriphID1_t;

typedef volatile struct
{
    volatile const UBase_t PID2 :8;
    const UBase_t reserved :24;
}UART_PeriphID2_t;

typedef volatile struct
{
    volatile const UBase_t PID3 :8;
    const UBase_t reserved :24;
}UART_PeriphID3_t;

typedef volatile struct
{
    volatile const UBase_t PID4 :8;
    const UBase_t reserved :24;
}UART_PeriphID4_t;

typedef volatile struct
{
    volatile const UBase_t PID5 :8;
    const UBase_t reserved :24;
}UART_PeriphID5_t;

typedef volatile struct
{
    volatile const UBase_t PID6 :8;
    const UBase_t reserved :24;
}UART_PeriphID6_t;

typedef volatile struct
{
    volatile const UBase_t PID7 :8;
    const UBase_t reserved :24;
}UART_PeriphID7_t;

typedef volatile struct
{
    volatile const UBase_t CID0 :8;
    const UBase_t reserved :24;
}UART_PCellID0_t;

typedef volatile struct
{
    volatile const UBase_t CID1 :8;
    const UBase_t reserved :24;
}UART_PCellID1_t;

typedef volatile struct
{
    volatile const UBase_t CID2 :8;
    const UBase_t reserved :24;
}UART_PCellID2_t;

typedef volatile struct
{
    volatile const UBase_t CID3 :8;
    const UBase_t reserved :24;
}UART_PCellID3_t;

#endif /* XDRIVER_MCU_UART_PERIPHERAL_STRUCT_XHEADER_UART_STRUCTREGISTER_H_ */
