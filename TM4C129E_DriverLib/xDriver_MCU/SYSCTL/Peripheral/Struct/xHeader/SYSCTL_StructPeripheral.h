
/**
 *
 * @file SYSCTL_StructPeripheral.h
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
 * @verbatim 20 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date Author Version Description
 * 20 jun. 2020 vyldram 1.0 initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_PERIPHERAL_SYSCTL_STRUCT_SYSCTL_STRUCTPERIPHERAL_H_
#define XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_PERIPHERAL_SYSCTL_STRUCT_SYSCTL_STRUCTPERIPHERAL_H_

#include <xDriver_MCU/SYSCTL/Peripheral/Struct/xHeader/SYSCTL_StructRegister.h>

typedef volatile struct
{
    union
    {
        volatile UBase_t DEVICE_ID0;
        DEVICE_ID0_t DEVICE_ID0_Bit;
    };
    union
    {
        volatile UBase_t DEVICE_ID1;
        DEVICE_ID1_t DEVICE_ID1_Bit;
    };
    const UBase_t reserved [12UL];
    union
    {
        volatile UBase_t PTBO_CTL;
        PTBO_CTL_t PTBO_CTL_Bit;
    };
    const UBase_t reserved1 [5UL];
    union
    {
        volatile UBase_t RIS;
        SYSCTL_RIS_t RIS_Bit;
    };
    union
    {
        volatile UBase_t IMC;
        SYSCTL_IMC_t IMC_Bit;
    };
    union
    {
        volatile UBase_t MISC;
        SYSCTL_MISC_t MISC_Bit;
    };
    union
    {
        volatile UBase_t RESC;
        SYSCTL_RESC_t RESC_Bit;
    };
    union
    {
        volatile UBase_t PWRTC;
        SYSCTL_PWRTC_t PWRTC_Bit;
    };
    union
    {
        volatile UBase_t NMIC;
        SYSCTL_NMIC_t NMIC_Bit;
    };
    const UBase_t reserved2 [5UL];
    union
    {
        volatile UBase_t MOSC_CTL;
        MOSC_CTL_t MOSC_CTL_Bit;
    };
    const UBase_t reserved3 [12UL];
    union
    {
        volatile UBase_t RSCLK_CFG;
        RSCLK_CFG_t RSCLK_CFG_Bit;
    };
    const UBase_t reserved4 [3UL];
    union
    {
        volatile UBase_t MEMORY_TIM0;
        MEMORY_TIM0_t MEMORY_TIM0_Bit;
    };
    const UBase_t reserved5 [4UL];
    union
    {
        volatile const UBase_t RVP;
        SYSCTL_RVP_t RVP_Bit;
    };
    const UBase_t reserved6 [24UL];
    union
    {
        volatile UBase_t ALTCLK_CFG;
        ALTCLK_CFG_t ALTCLK_CFG_Bit;
    };
    const UBase_t reserved7 [2UL];
    union
    {
        volatile UBase_t DSCLK_CFG;
        DSCLK_CFG_t DSCLK_CFG_Bit;
    };
    union
    {
        volatile UBase_t DIVSCLK_CFG;
        DIVSCLK_CFG_t DIVSCLK_CFG_Bit;
    };
    union
    {
        volatile UBase_t PROP;
        SYSCTL_PROP_t PROP_Bit;
    };
    union
    {
        volatile UBase_t PIOSC_CAL;
        PIOSC_CAL_t PIOSC_CAL_Bit;
    };
    union
    {
        volatile UBase_t PIOSC_STAT;
        PIOSC_STAT_t PIOSC_STAT_Bit;
    };
    const UBase_t reserved8 [2UL];
    union
    {
        volatile UBase_t PLL_FREQ0;
        PLL_FREQ0_t PLL_FREQ0_Bit;
    };
    union
    {
        volatile UBase_t PLL_FREQ1;
        PLL_FREQ1_t PLL_FREQ1_Bit;
    };
    union
    {
        volatile UBase_t PLL_STAT;
        PLL_STAT_t PLL_STAT_Bit;
    };
    const UBase_t reserved9 [7UL];
    union
    {
        volatile UBase_t SLPPWR_CFG;
        SLPPWR_CFG_t SLPPWR_CFG_Bit;
    };
    union
    {
        volatile UBase_t DSLPPWR_CFG;
        DSLPPWR_CFG_t DSLPPWR_CFG_Bit;
    };
    const UBase_t reserved10 [4UL];
    union
    {
        volatile UBase_t NVM_STAT;
        NVM_STAT_t NVM_STAT_Bit;
    };
    const UBase_t reserved11 [4UL];
    union
    {
        volatile UBase_t LDO_SPCTL;
        LDO_SPCTL_t LDO_SPCTL_Bit;
    };
    union
    {
        volatile UBase_t LDO_SPCAL;
        LDO_SPCAL_t LDO_SPCAL_Bit;
    };
    union
    {
        volatile UBase_t LDO_DPCTL;
        LDO_DPCTL_t LDO_DPCTL_Bit;
    };
    union
    {
        volatile UBase_t LDO_DPCAL;
        LDO_DPCAL_t LDO_DPCAL_Bit;
    };
    const UBase_t reserved12 [2UL];
    union
    {
        volatile UBase_t SDP_MST;
        SDP_MST_t SDP_MST_Bit;
    };
    union
    {
        volatile UBase_t BOOT_CFG;
        BOOT_CFG_t BOOT_CFG_Bit;
    };
    const UBase_t reserved13 [1UL];
    union
    {
        volatile UBase_t RESET_BEHAVCTL;
        RESET_BEHAVCTL_t RESET_BEHAVCTL_Bit;
    };
    const UBase_t reserved14 [1UL];
    union
    {
        volatile UBase_t USER_REG [4UL];
        USER_REG_t USER_REG_Bit [4UL];
    };
    const UBase_t reserved15 [1UL];
    union
    {
        volatile UBase_t HSSR;
        SYSCTL_HSSR_t HSSR_Bit;
    };
    const UBase_t reserved16 [2UL];
    union
    {
        volatile UBase_t FLASH_PRE [16UL];
        FLASH_PRE_t FLASH_PRE_Bit [16UL];
    };
    const UBase_t reserved17 [16UL];
    union
    {
        volatile UBase_t USB_PDS;
        USB_PDS_t USB_PDS_Bit;
    };
    union
    {
        volatile UBase_t USB_MPC;
        USB_MPC_t USB_MPC_Bit;
    };
    union
    {
        volatile UBase_t EMAC_PDS;
        EMAC_PDS_t EMAC_PDS_Bit;
    };
    union
    {
        volatile UBase_t EMAC_MPC;
        EMAC_MPC_t EMAC_MPC_Bit;
    };
    const UBase_t reserved18 [2UL];
    union
    {
        volatile UBase_t CAN0_PDS;
        CAN0_PDS_t CAN0_PDS_Bit;
    };
    union
    {
        volatile UBase_t CAN0_MPC;
        CAN0_MPC_t CAN0_MPC_Bit;
    };
    union
    {
        volatile UBase_t CAN1_PDS;
        CAN1_PDS_t CAN1_PDS_Bit;
    };
    union
    {
        volatile UBase_t CAN1_MPC;
        CAN1_MPC_t CAN1_MPC_Bit;
    };
    const UBase_t reserved19 [22UL];
    union
    {
        volatile const UBase_t PP [42UL];
        const PERIPHERAL_t PP_Bit [42UL];
    };
    const UBase_t reserved20 [22UL];
    union
    {
        volatile const UBase_t FLASH_PPE [16UL];
        const FLASH_PPE_t FLASH_PPE_Bit [16UL];
    };
    const UBase_t reserved21 [48UL];
    union
    {
        volatile UBase_t SR [42UL];
        PERIPHERAL_t SR_Bit [42UL];
    };
    const UBase_t reserved22 [22UL];
    union
    {
        volatile UBase_t RCGC [42UL];
        PERIPHERAL_t RCGC_Bit [42UL];
    };
    const UBase_t reserved23 [22UL];
    union
    {
        volatile UBase_t SCGC [42UL];
        PERIPHERAL_t SCGC_Bit [42UL];
    };
    const UBase_t reserved24 [22UL];
    union
    {
        volatile UBase_t DCGC [42UL];
        PERIPHERAL_t DCGC_Bit [42UL];
    };
    const UBase_t reserved25 [22UL];
    union
    {
        volatile UBase_t PC [42UL];
        PERIPHERAL_t PC_Bit [42UL];
    };
    const UBase_t reserved26 [22UL];
    union
    {
        volatile UBase_t PR [42UL];
        PERIPHERAL_t PR_Bit [42UL];
    };
    const UBase_t reserved27 [286UL];
    union
    {
        volatile const UBase_t UNIQUE_ID [4UL];
        const UNIQUE_ID_t UNIQUE_ID_Bit [4UL];
    };
    const UBase_t reserved28 [52UL];
}SYSCTL_t;

typedef volatile struct
{
    SYSCTL_t MODULE [(UBase_t) SYSCTL_enMODULE_MAX];
} SYSCTLS_t;

#endif /* XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_PERIPHERAL_SYSCTL_STRUCT_SYSCTL_STRUCTPERIPHERAL_H_ */
