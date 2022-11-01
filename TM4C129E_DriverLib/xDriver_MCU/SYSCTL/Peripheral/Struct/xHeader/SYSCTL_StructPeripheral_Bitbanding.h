/**
 *
 * @file SYSCTL_StructPeripheral_Bitbanding.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_PERIPHERAL_SYSCTL_STRUCT_SYSCTL_STRUCTPERIPHERAL_BITBANDING_H_
#define XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_PERIPHERAL_SYSCTL_STRUCT_SYSCTL_STRUCTPERIPHERAL_BITBANDING_H_

#include <xDriver_MCU/SYSCTL/Peripheral/Struct/xHeader/SYSCTL_StructRegister_Bitbanding.h>

typedef volatile struct
{
    union
    {
        volatile UBase_t DEVICE_ID0[32UL];
        DEVICE_BITBANDING_ID0_t DEVICE_ID0_Bit;
    };
    union
    {
        volatile UBase_t DEVICE_ID1[32UL];
        DEVICE_BITBANDING_ID1_t DEVICE_ID1_Bit;
    };
    const UBase_t reserved [12UL * 32UL];
    union
    {
        volatile UBase_t PTBO_CTL[32UL];
        PTBO_BITBANDING_CTL_t PTBO_CTL_Bit;
    };
    const UBase_t reserved1 [5UL * 32UL];
    union
    {
        volatile UBase_t RIS[32UL];
        SYSCTL_BITBANDING_RIS_t RIS_Bit;
    };
    union
    {
        volatile UBase_t IMC[32UL];
        SYSCTL_BITBANDING_IMC_t IMC_Bit;
    };
    union
    {
        volatile UBase_t MISC[32UL];
        SYSCTL_BITBANDING_MISC_t MISC_Bit;
    };
    union
    {
        volatile UBase_t RESC[32UL];
        SYSCTL_BITBANDING_RESC_t RESC_Bit;
    };
    union
    {
        volatile UBase_t PWRTC[32UL];
        SYSCTL_BITBANDING_PWRTC_t PWRTC_Bit;
    };
    union
    {
        volatile UBase_t NMIC[32UL];
        SYSCTL_BITBANDING_NMIC_t NMIC_Bit;
    };
    const UBase_t reserved2 [5UL * 32UL];
    union
    {
        volatile UBase_t MOSC_CTL[32UL];
        MOSC_BITBANDING_CTL_t MOSC_CTL_Bit;
    };
    const UBase_t reserved3 [12UL * 32UL];
    union
    {
        volatile UBase_t RSCLK_CFG[32UL];
        RSCLK_BITBANDING_CFG_t RSCLK_CFG_Bit;
    };
    const UBase_t reserved4 [3UL * 32UL];
    union
    {
        volatile UBase_t MEMORY_TIM0[32UL];
        MEMORY_BITBANDING_TIM0_t MEMORY_TIM0_Bit;
    };
    const UBase_t reserved5 [4UL * 32UL];
    union
    {
        volatile const UBase_t RVP[32UL];
        SYSCTL_BITBANDING_RVP_t RVP_Bit;
    };
    const UBase_t reserved6 [24UL * 32UL];
    union
    {
        volatile UBase_t ALTCLK_CFG[32UL];
        ALTCLK_BITBANDING_CFG_t ALTCLK_CFG_Bit;
    };
    const UBase_t reserved7 [2UL * 32UL];
    union
    {
        volatile UBase_t DSCLK_CFG[32UL];
        DSCLK_BITBANDING_CFG_t DSCLK_CFG_Bit;
    };
    union
    {
        volatile UBase_t DIVSCLK_CFG[32UL];
        DIVSCLK_BITBANDING_CFG_t DIVSCLK_CFG_Bit;
    };
    union
    {
        volatile UBase_t PROP[32UL];
        SYSCTL_BITBANDING_PROP_t PROP_Bit;
    };
    union
    {
        volatile UBase_t PIOSC_CAL[32UL];
        PIOSC_BITBANDING_CAL_t PIOSC_CAL_Bit;
    };
    union
    {
        volatile UBase_t PIOSC_STAT[32UL];
        PIOSC_BITBANDING_STAT_t PIOSC_STAT_Bit;
    };
    const UBase_t reserved8 [2UL * 32UL];
    union
    {
        volatile UBase_t PLL_FREQ0[32UL];
        PLL_BITBANDING_FREQ0_t PLL_FREQ0_Bit;
    };
    union
    {
        volatile UBase_t PLL_FREQ1[32UL];
        PLL_BITBANDING_FREQ1_t PLL_FREQ1_Bit;
    };
    union
    {
        volatile UBase_t PLL_STAT[32UL];
        PLL_BITBANDING_STAT_t PLL_STAT_Bit;
    };
    const UBase_t reserved9 [7UL * 32UL];
    union
    {
        volatile UBase_t SLPPWR_CFG[32UL];
        SLPPWR_BITBANDING_CFG_t SLPPWR_CFG_Bit;
    };
    union
    {
        volatile UBase_t DSLPPWR_CFG[32UL];
        DSLPPWR_BITBANDING_CFG_t DSLPPWR_CFG_Bit;
    };
    const UBase_t reserved10 [4UL * 32UL];
    union
    {
        volatile UBase_t NVM_STAT[32UL];
        NVM_BITBANDING_STAT_t NVM_STAT_Bit;
    };
    const UBase_t reserved11 [4UL * 32UL];
    union
    {
        volatile UBase_t LDO_SPCTL[32UL];
        LDO_BITBANDING_SPCTL_t LDO_SPCTL_Bit;
    };
    union
    {
        volatile UBase_t LDO_SPCAL[32UL];
        LDO_BITBANDING_SPCAL_t LDO_SPCAL_Bit;
    };
    union
    {
        volatile UBase_t LDO_DPCTL[32UL];
        LDO_BITBANDING_DPCTL_t LDO_DPCTL_Bit;
    };
    union
    {
        volatile UBase_t LDO_DPCAL[32UL];
        LDO_BITBANDING_DPCAL_t LDO_DPCAL_Bit;
    };
    const UBase_t reserved12 [2UL * 32UL];
    union
    {
        volatile UBase_t SDP_MST[32UL];
        SDP_BITBANDING_MST_t SDP_MST_Bit;
    };
    union
    {
        volatile UBase_t BOOT_CFG[32UL];
        BOOT_BITBANDING_CFG_t BOOT_CFG_Bit;
    };
    const UBase_t reserved13 [1UL * 32UL];
    union
    {
        volatile UBase_t RESET_BEHAVCTL[32UL];
        RESET_BITBANDING_BEHAVCTL_t RESET_BEHAVCTL_Bit;
    };
    const UBase_t reserved14 [1UL * 32UL];
    union
    {
        volatile UBase_t USER_REG [4UL][32UL];
        USER_BITBANDING_REG_t USER_REG_Bit [4UL];
    };
    const UBase_t reserved15 [1UL * 32UL];
    union
    {
        volatile UBase_t HSSR[32UL];
        SYSCTL_BITBANDING_HSSR_t HSSR_Bit;
    };
    const UBase_t reserved16 [2UL * 32UL];
    union
    {
        volatile UBase_t FLASH_PRE [16UL][32UL];
        FLASH_BITBANDING_PRE_t FLASH_PRE_Bit [16UL];
    };
    const UBase_t reserved17 [16UL * 32UL];
    union
    {
        volatile UBase_t USB_PDS[32UL];
        USB_BITBANDING_PDS_t USB_PDS_Bit;
    };
    union
    {
        volatile UBase_t USB_MPC[32UL];
        USB_BITBANDING_MPC_t USB_MPC_Bit;
    };
    union
    {
        volatile UBase_t EMAC_PDS[32UL];
        EMAC_BITBANDING_PDS_t EMAC_PDS_Bit;
    };
    union
    {
        volatile UBase_t EMAC_MPC[32UL];
        EMAC_BITBANDING_MPC_t EMAC_MPC_Bit;
    };
    const UBase_t reserved18 [2UL * 32UL];
    union
    {
        volatile UBase_t CAN0_PDS[32UL];
        CAN0_BITBANDING_PDS_t CAN0_PDS_Bit;
    };
    union
    {
        volatile UBase_t CAN0_MPC[32UL];
        CAN0_BITBANDING_MPC_t CAN0_MPC_Bit;
    };
    union
    {
        volatile UBase_t CAN1_PDS[32UL];
        CAN1_BITBANDING_PDS_t CAN1_PDS_Bit;
    };
    union
    {
        volatile UBase_t CAN1_MPC[32UL];
        CAN1_BITBANDING_MPC_t CAN1_MPC_Bit;
    };
    const UBase_t reserved19 [22UL * 32UL];
    union
    {
        volatile const UBase_t PP [42UL][32UL];
        const PERIPHERAL_BITBANDING_t PP_Bit [42UL];
    };
    const UBase_t reserved20 [22UL * 32UL];
    union
    {
        volatile const UBase_t FLASH_PPE [16UL][32UL];
        const FLASH_BITBANDING_PPE_t FLASH_PPE_Bit [16UL];
    };
    const UBase_t reserved21 [48UL * 32UL];
    union
    {
        volatile UBase_t SR [42UL][32UL];
        PERIPHERAL_BITBANDING_t SR_Bit [42UL];
    };
    const UBase_t reserved22 [22UL * 32UL];
    union
    {
        volatile UBase_t RCGC [42UL][32UL];
        PERIPHERAL_BITBANDING_t RCGC_Bit [42UL];
    };
    const UBase_t reserved23 [22UL * 32UL];
    union
    {
        volatile UBase_t SCGC [42UL][32UL];
        PERIPHERAL_BITBANDING_t SCGC_Bit [42UL];
    };
    const UBase_t reserved24 [22UL * 32UL];
    union
    {
        volatile UBase_t DCGC [42UL][32UL];
        PERIPHERAL_BITBANDING_t DCGC_Bit [42UL];
    };
    const UBase_t reserved25 [22UL * 32UL];
    union
    {
        volatile UBase_t PC [42UL][32UL];
        PERIPHERAL_BITBANDING_t PC_Bit [42UL];
    };
    const UBase_t reserved26 [22UL * 32UL];
    union
    {
        volatile UBase_t PR [42UL][32UL];
        PERIPHERAL_BITBANDING_t PR_Bit [42UL];
    };
    const UBase_t reserved27 [286UL * 32UL];
    union
    {
        volatile const UBase_t UNIQUE_ID [4UL][32UL];
        const UNIQUE_BITBANDING_ID_t UNIQUE_ID_Bit [4UL];
    };
    const UBase_t reserved28 [52UL * 32UL];
}SYSCTL_BITBANDING_t;

typedef volatile struct
{
    SYSCTL_BITBANDING_t MODULE [(UBase_t) SYSCTL_enMODULE_MAX];
}SYSCTLS_BITBANDING_t;

#endif /* XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_PERIPHERAL_SYSCTL_STRUCT_SYSCTL_STRUCTPERIPHERAL_BITBANDING_H_ */
