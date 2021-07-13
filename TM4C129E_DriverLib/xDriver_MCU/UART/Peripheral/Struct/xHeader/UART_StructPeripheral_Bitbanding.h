/**
 *
 * @file UART_StructPeripheral_Bitbanding.h
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

#ifndef XDRIVER_MCU_UART_PERIPHERAL_STRUCT_XHEADER_UART_STRUCTPERIPHERAL_BITBANDING_H_
#define XDRIVER_MCU_UART_PERIPHERAL_STRUCT_XHEADER_UART_STRUCTPERIPHERAL_BITBANDING_H_

#include <xDriver_MCU/UART/Peripheral/Struct/xHeader/UART_StructRegister_Bitbanding.h>
#include <xDriver_MCU/UART/Peripheral/xHeader/UART_Enum.h>

typedef volatile struct
{
    union
    {
        volatile uint32_t DR [32UL];
        BITBANDING_UARTDR_TypeDef DR_Bit;
    };
    union
    {
        volatile const uint32_t RSR [32UL];
        volatile uint32_t ECR [32UL];
        BITBANDING_UARTRSR_TypeDef RSR_Bit;
        BITBANDING_UARTECR_TypeDef ECR_Bit;
    };
    const uint32_t reserved [4UL * 32UL];
    union
    {
        volatile const uint32_t FR [32UL];
        BITBANDING_UARTFR_TypeDef FR_Bit;
    };
    const uint32_t reserved1 [1UL * 32UL];
    union
    {
        volatile uint32_t ILPR [32UL];
        BITBANDING_UARTILPR_TypeDef ILPR_Bit;
    };
    union
    {
        volatile uint32_t IBRD [32UL];
        BITBANDING_UARTIBRD_TypeDef IBRD_Bit;
    };
    union
    {
        volatile uint32_t FBRD [32UL];
        BITBANDING_UARTFBRD_TypeDef FBRD_Bit;
    };
    union
    {
        volatile uint32_t LCRH [32UL];
        BITBANDING_UARTLCRH_TypeDef LCRH_Bit;
    };
    union
    {
        volatile uint32_t CTL [32UL];
        BITBANDING_UARTCTL_TypeDef CTL_Bit;
    };
    union
    {
        volatile uint32_t IFLS [32UL];
        BITBANDING_UARTIFLS_TypeDef IFLS_Bit;
    };
    union
    {
        volatile uint32_t IM [32UL];
        BITBANDING_UARTIM_TypeDef IM_Bit;
    };
    union
    {
        volatile const uint32_t RIS [32UL];
        BITBANDING_UARTRIS_TypeDef RIS_Bit;
    };
    union
    {
        volatile const uint32_t MIS [32UL];
        BITBANDING_UARTMIS_TypeDef MIS_Bit;
    };
    union
    {
        volatile uint32_t ICR [32UL];
        BITBANDING_UARTICR_TypeDef ICR_Bit;
    };
    union
    {
        volatile uint32_t DMACTL [32UL];
        BITBANDING_UARTDMACTL_TypeDef DMACTL_Bit;
    };
    const uint32_t reserved2 [22UL * 32UL];
    union
    {
        volatile uint32_t UART9BITADDR [32UL];
        BITBANDING_9BITADDR_TypeDef UART9BITADDR_Bit;
    };
    union
    {
        volatile uint32_t UART9BITAMASK [32UL];
        BITBANDING_9BITAMASK_TypeDef UART9BITAMASK_Bit;
    };
    const uint32_t reserved3 [965UL * 32UL];
    union
    {
        volatile const uint32_t PP [32UL];
        BITBANDING_UARTPP_TypeDef PP_Bit;
    };
    const uint32_t reserved4 [1UL * 32UL];
    union
    {
        volatile const uint32_t CC [32UL];
        BITBANDING_UARTCC_TypeDef CC_Bit;
    };
    const uint32_t reserved5 [1UL * 32UL];
    union
    {
        volatile const uint32_t PeriphID4 [32UL];
        BITBANDING_UARTPeriphID4_TypeDef PeriphID4_Bit;
    };
    union
    {
        volatile const uint32_t PeriphID5 [32UL];
        BITBANDING_UARTPeriphID5_TypeDef PeriphID5_Bit;
    };
    union
    {
        volatile const uint32_t PeriphID6 [32UL];
        BITBANDING_UARTPeriphID6_TypeDef PeriphID6_Bit;
    };
    union
    {
        volatile const uint32_t PeriphID7 [32UL];
        BITBANDING_UARTPeriphID7_TypeDef PeriphID7_Bit;
    };
    union
    {
        volatile const uint32_t PeriphID0 [32UL];
        BITBANDING_UARTPeriphID0_TypeDef PeriphID0_Bit;
    };
    union
    {
        volatile const uint32_t PeriphID1 [32UL];
        BITBANDING_UARTPeriphID1_TypeDef PeriphID1_Bit;
    };
    union
    {
        volatile const uint32_t PeriphID2 [32UL];
        BITBANDING_UARTPeriphID2_TypeDef PeriphID2_Bit;
    };
    union
    {
        volatile const uint32_t PeriphID3 [32UL];
        BITBANDING_UARTPeriphID3_TypeDef PeriphID3_Bit;
    };
    union
    {
        volatile const uint32_t CellID0 [32UL];
        BITBANDING_UARTCellID0_TypeDef CellID0_Bit;
    };
    union
    {
        volatile const uint32_t CellID1 [32UL];
        BITBANDING_UARTCellID1_TypeDef CellID1_Bit;
    };
    union
    {
        volatile const uint32_t CellID2 [32UL];
        BITBANDING_UARTCellID2_TypeDef CellID2_Bit;
    };
    union
    {
        volatile const uint32_t CellID3 [32UL];
        BITBANDING_UARTCellID3_TypeDef CellID3_Bit;
    };
} UART_BITBANDING_TypeDef;


typedef volatile struct
{
    UART_BITBANDING_TypeDef MODULE [(uint32_t) UART_enMODULE_MAX];
} UARTS_BITBANDING_TypeDef;

#endif /* XDRIVER_MCU_UART_PERIPHERAL_STRUCT_XHEADER_UART_STRUCTPERIPHERAL_BITBANDING_H_ */
