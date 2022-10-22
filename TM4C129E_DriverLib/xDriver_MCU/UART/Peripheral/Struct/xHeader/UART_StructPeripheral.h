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
            volatile UBase_t DR;
            UART_DR_t DR_Bit;
    };
    union
    {
            volatile const UBase_t RSR;
            volatile UBase_t ECR;
            UART_RSR_t RSR_Bit;
            UART_ECR_t ECR_Bit;
    };
    const UBase_t reserved [4UL];
    union
    {
            volatile const UBase_t FR;
            UART_FR_t FR_Bit;
    };
    const UBase_t reserved1 [1UL];
    union
    {
            volatile UBase_t ILPR;
            UART_ILPR_t ILPR_Bit;
    };
    union
    {
            volatile UBase_t IBRD;
            UART_IBRD_t IBRD_Bit;
    };
    union
    {
            volatile UBase_t FBRD;
            UART_FBRD_t FBRD_Bit;
    };
    union
    {
            volatile UBase_t LCRH;
            UART_LCRH_t LCRH_Bit;
    };
    union
    {
            volatile UBase_t CTL;
            UART_CTL_t CTL_Bit;
    };
    union
    {
            volatile UBase_t IFLS;
            UART_IFLS_t IFLS_Bit;
    };
    union
    {
            volatile UBase_t IM;
            UART_IM_t IM_Bit;
    };
    union
    {
            volatile const UBase_t RIS;
            UART_RIS_t RIS_Bit;
    };
    union
    {
            volatile const UBase_t MIS;
            UART_MIS_t MIS_Bit;
    };
    union
    {
            volatile UBase_t ICR;
            UART_ICR_t ICR_Bit;
    };
    union
    {
            volatile UBase_t DMACTL;
            UART_DMACTL_t DMACTL_Bit;
    };
    const UBase_t reserved2 [22UL];
    union
    {
            volatile UBase_t BIT9ADDR;
            UART_BIT9ADDR_t BIT9ADDR_Bit;
    };
    union
    {
            volatile UBase_t BIT9AMASK;
            UART_BIT9AMASK_t BIT9AMASK_Bit;
    };
    const UBase_t reserved3 [965UL];
    union
    {
            volatile const UBase_t PP;
            UART_PP_t PP_Bit;
    };
    const UBase_t reserved4 [1UL];
    union
    {
            volatile UBase_t CC;
            UART_CC_t CC_Bit;
    };
    const UBase_t reserved5 [1UL];
    union
    {
            volatile const UBase_t PeriphID4;
            UART_PeriphID4_t PeriphID4_Bit;
    };
    union
    {
            volatile const UBase_t PeriphID5;
            UART_PeriphID5_t PeriphID5_Bit;
    };
    union
    {
            volatile const UBase_t PeriphID6;
            UART_PeriphID6_t PeriphID6_Bit;
    };
    union
    {
            volatile const UBase_t PeriphID7;
            UART_PeriphID7_t PeriphID7_Bit;
    };
    union
    {
            volatile const UBase_t PeriphID0;
            UART_PeriphID0_t PeriphID0_Bit;
    };
    union
    {
            volatile const UBase_t PeriphID1;
            UART_PeriphID1_t PeriphID1_Bit;
    };
    union
    {
            volatile const UBase_t PeriphID2;
            UART_PeriphID2_t PeriphID2_Bit;
    };
    union
    {
            volatile const UBase_t PeriphID3;
            UART_PeriphID3_t PeriphID3_Bit;
    };
    union
    {
            volatile const UBase_t PCellID0;
            UART_PCellID0_t PCellID0_Bit;
    };
    union
    {
            volatile const UBase_t PCellID1;
            UART_PCellID1_t PCellID1_Bit;
    };
    union
    {
            volatile const UBase_t PCellID2;
            UART_PCellID2_t PCellID2_Bit;
    };
    union
    {
            volatile const UBase_t PCellID3;
            UART_PCellID3_t PCellID3_Bit;
    };
} UART_t;

typedef volatile struct
{
    UART_t MODULE [(UBase_t) UART_enMODULE_MAX];
} UARTS_t;

#endif /* XDRIVER_MCU_UART_PERIPHERAL_STRUCT_XHEADER_UART_STRUCTPERIPHERAL_H_ */
