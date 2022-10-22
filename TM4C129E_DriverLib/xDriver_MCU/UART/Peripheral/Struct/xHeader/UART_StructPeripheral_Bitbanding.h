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
        volatile UBase_t DR [32UL];
        UART_BITBANDING_DR_t DR_Bit;
    };
    union
    {
        volatile const UBase_t RSR [32UL];
        volatile UBase_t ECR [32UL];
        UART_BITBANDING_RSR_t RSR_Bit;
        UART_BITBANDING_ECR_t ECR_Bit;
    };
    const UBase_t reserved [4UL * 32UL];
    union
    {
        volatile const UBase_t FR [32UL];
        UART_BITBANDING_FR_t FR_Bit;
    };
    const UBase_t reserved1 [1UL * 32UL];
    union
    {
        volatile UBase_t ILPR [32UL];
        UART_BITBANDING_ILPR_t ILPR_Bit;
    };
    union
    {
        volatile UBase_t IBRD [32UL];
        UART_BITBANDING_IBRD_t IBRD_Bit;
    };
    union
    {
        volatile UBase_t FBRD [32UL];
        UART_BITBANDING_FBRD_t FBRD_Bit;
    };
    union
    {
        volatile UBase_t LCRH [32UL];
        UART_BITBANDING_LCRH_t LCRH_Bit;
    };
    union
    {
        volatile UBase_t CTL [32UL];
        UART_BITBANDING_CTL_t CTL_Bit;
    };
    union
    {
        volatile UBase_t IFLS [32UL];
        UART_BITBANDING_IFLS_t IFLS_Bit;
    };
    union
    {
        volatile UBase_t IM [32UL];
        UART_BITBANDING_IM_t IM_Bit;
    };
    union
    {
        volatile const UBase_t RIS [32UL];
        UART_BITBANDING_RIS_t RIS_Bit;
    };
    union
    {
        volatile const UBase_t MIS [32UL];
        UART_BITBANDING_MIS_t MIS_Bit;
    };
    union
    {
        volatile UBase_t ICR [32UL];
        UART_BITBANDING_ICR_t ICR_Bit;
    };
    union
    {
        volatile UBase_t DMACTL [32UL];
        UART_BITBANDING_DMACTL_t DMACTL_Bit;
    };
    const UBase_t reserved2 [22UL * 32UL];
    union
    {
        volatile UBase_t BIT9ADDR [32UL];
        UART_BITBANDING_BIT9ADDR_t BIT9ADDR_Bit;
    };
    union
    {
        volatile UBase_t BIT9AMASK [32UL];
        UART_BITBANDING_BIT9AMASK_t BIT9AMASK_Bit;
    };
    const UBase_t reserved3 [965UL * 32UL];
    union
    {
        volatile const UBase_t PP [32UL];
        UART_BITBANDING_PP_t PP_Bit;
    };
    const UBase_t reserved4 [1UL * 32UL];
    union
    {
        volatile const UBase_t CC [32UL];
        UART_BITBANDING_CC_t CC_Bit;
    };
    const UBase_t reserved5 [1UL * 32UL];
    union
    {
        volatile const UBase_t PeriphID4 [32UL];
        UART_BITBANDING_PeriphID4_t PeriphID4_Bit;
    };
    union
    {
        volatile const UBase_t PeriphID5 [32UL];
        UART_BITBANDING_PeriphID5_t PeriphID5_Bit;
    };
    union
    {
        volatile const UBase_t PeriphID6 [32UL];
        UART_BITBANDING_PeriphID6_t PeriphID6_Bit;
    };
    union
    {
        volatile const UBase_t PeriphID7 [32UL];
        UART_BITBANDING_PeriphID7_t PeriphID7_Bit;
    };
    union
    {
        volatile const UBase_t PeriphID0 [32UL];
        UART_BITBANDING_PeriphID0_t PeriphID0_Bit;
    };
    union
    {
        volatile const UBase_t PeriphID1 [32UL];
        UART_BITBANDING_PeriphID1_t PeriphID1_Bit;
    };
    union
    {
        volatile const UBase_t PeriphID2 [32UL];
        UART_BITBANDING_PeriphID2_t PeriphID2_Bit;
    };
    union
    {
        volatile const UBase_t PeriphID3 [32UL];
        UART_BITBANDING_PeriphID3_t PeriphID3_Bit;
    };
    union
    {
        volatile const UBase_t PCellID0 [32UL];
        UART_BITBANDING_PCellID0_t PCellID0_Bit;
    };
    union
    {
        volatile const UBase_t PCellID1 [32UL];
        UART_BITBANDING_PCellID1_t PCellID1_Bit;
    };
    union
    {
        volatile const UBase_t PCellID2 [32UL];
        UART_BITBANDING_PCellID2_t PCellID2_Bit;
    };
    union
    {
        volatile const UBase_t PCellID3 [32UL];
        UART_BITBANDING_PCellID3_t PCellID3_Bit;
    };
}UART_BITBANDING_t;


typedef volatile struct
{
    UART_BITBANDING_t MODULE [(UBase_t) UART_enMODULE_MAX];
}UARTS_BITBANDING_t;

#endif /* XDRIVER_MCU_UART_PERIPHERAL_STRUCT_XHEADER_UART_STRUCTPERIPHERAL_BITBANDING_H_ */
