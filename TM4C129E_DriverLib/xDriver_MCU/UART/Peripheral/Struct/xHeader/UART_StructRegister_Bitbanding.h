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
}UART_BITBANDING_DR_t;

typedef volatile struct
{
    volatile const UBase_t FE;
    volatile const UBase_t PE;
    volatile const UBase_t BE;
    volatile const UBase_t OE;
    const UBase_t reserved [28UL];
}UART_BITBANDING_RSR_t;

typedef volatile struct
{
    volatile UBase_t DATA [8UL];
    const UBase_t reserved [24UL];
}UART_BITBANDING_ECR_t;

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
}UART_BITBANDING_FR_t;

typedef volatile struct
{
    volatile UBase_t ILPDVSR [8UL];
    const UBase_t reserved [24UL];
}UART_BITBANDING_ILPR_t;

typedef volatile struct
{
    volatile UBase_t UART_IBRD [16UL];
    const UBase_t reserved [16UL];
}UART_BITBANDING_IBRD_t;

typedef volatile struct
{
    volatile UBase_t DIVFRAC [6UL];
    const UBase_t reserved [26UL];
}UART_BITBANDING_FBRD_t;

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
}UART_BITBANDING_LCRH_t;

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
}UART_BITBANDING_CTL_t;

typedef volatile struct
{
    volatile UBase_t TXIFLSEL [3UL];
    volatile UBase_t RXIFLSEL [3UL];
    const UBase_t reserved [26UL];
}UART_BITBANDING_IFLS_t;

typedef volatile struct
{
    volatile UBase_t RI;
    volatile UBase_t CTS;
    volatile UBase_t DCD;
    volatile UBase_t DSR;
    volatile UBase_t RX;
    volatile UBase_t TX;
    volatile UBase_t RT;
    volatile UBase_t FE;
    volatile UBase_t PE;
    volatile UBase_t BE;
    volatile UBase_t OE;
    volatile UBase_t EOT;
    volatile UBase_t BIT9;
    const UBase_t reserved [3UL];
    volatile UBase_t DMARX;
    volatile UBase_t DMATX;
    const UBase_t reserved1 [14UL];
}UART_BITBANDING_IM_t;

typedef volatile struct
{
    volatile const UBase_t RI;
    volatile const UBase_t CTS;
    volatile const UBase_t DCD;
    volatile const UBase_t DSR;
    volatile const UBase_t RX;
    volatile const UBase_t TX;
    volatile const UBase_t RT;
    volatile const UBase_t FE;
    volatile const UBase_t PE;
    volatile const UBase_t BE;
    volatile const UBase_t OE;
    volatile const UBase_t EOT;
    volatile const UBase_t BIT9;
    const UBase_t reserved [3UL];
    volatile const UBase_t DMARX;
    volatile const UBase_t DMATX;
    const UBase_t reserved1 [14UL];
}UART_BITBANDING_RIS_t;

typedef volatile struct
{
    volatile const UBase_t RI;
    volatile const UBase_t CTS;
    volatile const UBase_t DCD;
    volatile const UBase_t DSR;
    volatile const UBase_t RX;
    volatile const UBase_t TX;
    volatile const UBase_t RT;
    volatile const UBase_t FE;
    volatile const UBase_t PE;
    volatile const UBase_t BE;
    volatile const UBase_t OE;
    volatile const UBase_t EOT;
    volatile const UBase_t BIT9;
    const UBase_t reserved [3UL];
    volatile const UBase_t DMARX;
    volatile const UBase_t DMATX;
    const UBase_t reserved1 [14UL];
}UART_BITBANDING_MIS_t;

typedef volatile struct
{
    volatile UBase_t RIM;
    volatile UBase_t CTS;
    volatile UBase_t DCDM;
    volatile UBase_t DSRM;
    volatile UBase_t RX;
    volatile UBase_t TX;
    volatile UBase_t RT;
    volatile UBase_t FE;
    volatile UBase_t PE;
    volatile UBase_t BE;
    volatile UBase_t OE;
    volatile UBase_t EOT;
    volatile UBase_t BIT9;
    const UBase_t reserved [3UL];
    volatile UBase_t DMARX;
    volatile UBase_t DMATX;
    const UBase_t reserved1 [14UL];
}UART_BITBANDING_ICR_t;

typedef volatile struct
{
    volatile UBase_t RXDMAE;
    volatile UBase_t TXDMAE;
    volatile UBase_t DMAERR;
    const UBase_t reserved [29UL];
}UART_BITBANDING_DMACTL_t;

typedef volatile struct
{
    volatile UBase_t ADDR [8UL];
    const UBase_t reserved [7UL];
    volatile UBase_t BIT9EN;
    const UBase_t reserved1 [16UL];
}UART_BITBANDING_BIT9ADDR_t;

typedef volatile struct
{
    volatile UBase_t MASK [8UL];
    const UBase_t reserved [24UL];
}UART_BITBANDING_BIT9AMASK_t;

typedef volatile struct
{
    volatile const UBase_t SC;
    volatile const UBase_t NB;
    volatile const UBase_t MS;
    volatile const UBase_t MSE;
    const UBase_t reserved [30UL];
}UART_BITBANDING_PP_t;

typedef volatile struct
{
    volatile UBase_t CS [4UL];
    const UBase_t reserved [28UL];
}UART_BITBANDING_CC_t;


typedef volatile struct
{
    volatile const UBase_t PID0 [8UL];
    const UBase_t reserved [24UL];
}UART_BITBANDING_PeriphID0_t;

typedef volatile struct
{
    volatile const UBase_t PID1 [8UL];
    const UBase_t reserved [24UL];
}UART_BITBANDING_PeriphID1_t;

typedef volatile struct
{
    volatile const UBase_t PID2 [8UL];
    const UBase_t reserved [24UL];
}UART_BITBANDING_PeriphID2_t;

typedef volatile struct
{
    volatile const UBase_t PID3 [8UL];
    const UBase_t reserved [24UL];
}UART_BITBANDING_PeriphID3_t;

typedef volatile struct
{
    volatile const UBase_t PID4 [8UL];
    const UBase_t reserved [24UL];
}UART_BITBANDING_PeriphID4_t;

typedef volatile struct
{
    volatile const UBase_t PID5 [8UL];
    const UBase_t reserved [24UL];
}UART_BITBANDING_PeriphID5_t;

typedef volatile struct
{
    volatile const UBase_t PID6 [8UL];
    const UBase_t reserved [24UL];
}UART_BITBANDING_PeriphID6_t;

typedef volatile struct
{
    volatile const UBase_t PID7 [8UL];
    const UBase_t reserved [24UL];
}UART_BITBANDING_PeriphID7_t;

typedef volatile struct
{
    volatile const UBase_t CID0 [8UL];
    const UBase_t reserved [24UL];
}UART_BITBANDING_PCellID0_t;

typedef volatile struct
{
    volatile const UBase_t CID1 [8UL];
    const UBase_t reserved [24UL];
}UART_BITBANDING_PCellID1_t;

typedef volatile struct
{
    volatile const UBase_t CID2 [8UL];
    const UBase_t reserved [24UL];
}UART_BITBANDING_PCellID2_t;

typedef volatile struct
{
    volatile const UBase_t CID3 [8UL];
    const UBase_t reserved [24UL];
}UART_BITBANDING_PCellID3_t;

#endif /* XDRIVER_MCU_UART_PERIPHERAL_STRUCT_XHEADER_UART_STRUCTREGISTER_BITBANDING_H_ */
