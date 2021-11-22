/**
 *
 * @file UART_StructPeripheral.h
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

#ifndef XDRIVER_MCU_UART_PERIPHERAL_STRUCT_XHEADER_UART_STRUCTPERIPHERAL_H_
#define XDRIVER_MCU_UART_PERIPHERAL_STRUCT_XHEADER_UART_STRUCTPERIPHERAL_H_

#include <xDriver_MCU/UART/Peripheral/Struct/xHeader/UART_StructRegister.h>
#include <xDriver_MCU/UART/Peripheral/xHeader/UART_Enum.h>

typedef volatile struct
{
    union
    {
            volatile uint32_t DR;
            UARTDR_t DR_Bit;
    };
    union
    {
            volatile const uint32_t RSR;
            volatile uint32_t ECR;
            UARTRSR_t RSR_Bit;
            UARTECR_t ECR_Bit;
    };
    const uint32_t reserved [4UL];
    union
    {
            volatile const uint32_t FR;
            UARTFR_t FR_Bit;
    };
    const uint32_t reserved1 [1UL];
    union
    {
            volatile uint32_t ILPR;
            UARTILPR_t ILPR_Bit;
    };
    union
    {
            volatile uint32_t IBRD;
            UARTIBRD_t IBRD_Bit;
    };
    union
    {
            volatile uint32_t FBRD;
            UARTFBRD_t FBRD_Bit;
    };
    union
    {
            volatile uint32_t LCRH;
            UARTLCRH_t LCRH_Bit;
    };
    union
    {
            volatile uint32_t CTL;
            UARTCTL_t CTL_Bit;
    };
    union
    {
            volatile uint32_t IFLS;
            UARTIFLS_t IFLS_Bit;
    };
    union
    {
            volatile uint32_t IM;
            UARTIM_t IM_Bit;
    };
    union
    {
            volatile const uint32_t RIS;
            UARTRIS_t RIS_Bit;
    };
    union
    {
            volatile const uint32_t MIS;
            UARTMIS_t MIS_Bit;
    };
    union
    {
            volatile uint32_t ICR;
            UARTICR_t ICR_Bit;
    };
    union
    {
            volatile uint32_t DMACTL;
            UARTDMACTL_t DMACTL_Bit;
    };
    const uint32_t reserved2 [22UL];
    union
    {
            volatile uint32_t UART9BITADDR;
            UART9BITADDR_t UART9BITADDR_Bit;
    };
    union
    {
            volatile uint32_t UART9BITAMASK;
            UART9BITAMASK_t UART9BITAMASK_Bit;
    };
    const uint32_t reserved3 [965UL];
    union
    {
            volatile const uint32_t PP;
            UARTPP_t PP_Bit;
    };
    const uint32_t reserved4 [1UL];
    union
    {
            volatile uint32_t CC;
            UARTCC_t CC_Bit;
    };
    const uint32_t reserved5 [1UL];
    union
    {
            volatile const uint32_t PeriphID4;
            UARTPeriphID4_t PeriphID4_Bit;
    };
    union
    {
            volatile const uint32_t PeriphID5;
            UARTPeriphID5_t PeriphID5_Bit;
    };
    union
    {
            volatile const uint32_t PeriphID6;
            UARTPeriphID6_t PeriphID6_Bit;
    };
    union
    {
            volatile const uint32_t PeriphID7;
            UARTPeriphID7_t PeriphID7_Bit;
    };
    union
    {
            volatile const uint32_t PeriphID0;
            UARTPeriphID0_t PeriphID0_Bit;
    };
    union
    {
            volatile const uint32_t PeriphID1;
            UARTPeriphID1_t PeriphID1_Bit;
    };
    union
    {
            volatile const uint32_t PeriphID2;
            UARTPeriphID2_t PeriphID2_Bit;
    };
    union
    {
            volatile const uint32_t PeriphID3;
            UARTPeriphID3_t PeriphID3_Bit;
    };
    union
    {
            volatile const uint32_t CellID0;
            UARTCellID0_t CellID0_Bit;
    };
    union
    {
            volatile const uint32_t CellID1;
            UARTCellID1_t CellID1_Bit;
    };
    union
    {
            volatile const uint32_t CellID2;
            UARTCellID2_t CellID2_Bit;
    };
    union
    {
            volatile const uint32_t CellID3;
            UARTCellID3_t CellID3_Bit;
    };
} UART_t;

typedef volatile struct
{
    UART_t MODULE [(uint32_t) UART_enMODULE_MAX];
} UARTS_t;

#endif /* XDRIVER_MCU_UART_PERIPHERAL_STRUCT_XHEADER_UART_STRUCTPERIPHERAL_H_ */
