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
            UARTDR_TypeDef DR_Bit;
    };
    union
    {
            volatile const uint32_t RSR;
            volatile uint32_t ECR;
            UARTRSR_TypeDef RSR_Bit;
            UARTECR_TypeDef ECR_Bit;
    };
    const uint32_t reserved [4UL];
    union
    {
            volatile const uint32_t FR;
            UARTFR_TypeDef FR_Bit;
    };
    const uint32_t reserved1 [1UL];
    union
    {
            volatile uint32_t ILPR;
            UARTILPR_TypeDef ILPR_Bit;
    };
    union
    {
            volatile uint32_t IBRD;
            UARTIBRD_TypeDef IBRD_Bit;
    };
    union
    {
            volatile uint32_t FBRD;
            UARTFBRD_TypeDef FBRD_Bit;
    };
    union
    {
            volatile uint32_t LCRH;
            UARTLCRH_TypeDef LCRH_Bit;
    };
    union
    {
            volatile uint32_t CTL;
            UARTCTL_TypeDef CTL_Bit;
    };
    union
    {
            volatile uint32_t IFLS;
            UARTIFLS_TypeDef IFLS_Bit;
    };
    union
    {
            volatile uint32_t IM;
            UARTIM_TypeDef IM_Bit;
    };
    union
    {
            volatile const uint32_t RIS;
            UARTRIS_TypeDef RIS_Bit;
    };
    union
    {
            volatile const uint32_t MIS;
            UARTMIS_TypeDef MIS_Bit;
    };
    union
    {
            volatile uint32_t ICR;
            UARTICR_TypeDef ICR_Bit;
    };
    union
    {
            volatile uint32_t DMACTL;
            UARTDMACTL_TypeDef DMACTL_Bit;
    };
    const uint32_t reserved2 [22UL];
    union
    {
            volatile uint32_t UART9BITADDR;
            UART9BITADDR_TypeDef UART9BITADDR_Bit;
    };
    union
    {
            volatile uint32_t UART9BITAMASK;
            UART9BITAMASK_TypeDef UART9BITAMASK_Bit;
    };
    const uint32_t reserved3 [965UL];
    union
    {
            volatile const uint32_t PP;
            UARTPP_TypeDef PP_Bit;
    };
    const uint32_t reserved4 [1UL];
    union
    {
            volatile uint32_t CC;
            UARTCC_TypeDef CC_Bit;
    };
    const uint32_t reserved5 [1UL];
    union
    {
            volatile const uint32_t PeriphID4;
            UARTPeriphID4_TypeDef PeriphID4_Bit;
    };
    union
    {
            volatile const uint32_t PeriphID5;
            UARTPeriphID5_TypeDef PeriphID5_Bit;
    };
    union
    {
            volatile const uint32_t PeriphID6;
            UARTPeriphID6_TypeDef PeriphID6_Bit;
    };
    union
    {
            volatile const uint32_t PeriphID7;
            UARTPeriphID7_TypeDef PeriphID7_Bit;
    };
    union
    {
            volatile const uint32_t PeriphID0;
            UARTPeriphID0_TypeDef PeriphID0_Bit;
    };
    union
    {
            volatile const uint32_t PeriphID1;
            UARTPeriphID1_TypeDef PeriphID1_Bit;
    };
    union
    {
            volatile const uint32_t PeriphID2;
            UARTPeriphID2_TypeDef PeriphID2_Bit;
    };
    union
    {
            volatile const uint32_t PeriphID3;
            UARTPeriphID3_TypeDef PeriphID3_Bit;
    };
    union
    {
            volatile const uint32_t CellID0;
            UARTCellID0_TypeDef CellID0_Bit;
    };
    union
    {
            volatile const uint32_t CellID1;
            UARTCellID1_TypeDef CellID1_Bit;
    };
    union
    {
            volatile const uint32_t CellID2;
            UARTCellID2_TypeDef CellID2_Bit;
    };
    union
    {
            volatile const uint32_t CellID3;
            UARTCellID3_TypeDef CellID3_Bit;
    };
} UART_TypeDef;

typedef volatile struct
{
    UART_TypeDef MODULE [(uint32_t) UART_enMODULE_MAX];
} UARTS_TypeDef;

#endif /* XDRIVER_MCU_UART_PERIPHERAL_STRUCT_XHEADER_UART_STRUCTPERIPHERAL_H_ */
