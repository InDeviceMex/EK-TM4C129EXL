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
        volatile uint32_t DID0 [32UL];
        BITBANDING_DID0_TypeDef DID0_Bit;
    };
    union
    {
        volatile uint32_t DID1 [32UL];
        BITBANDING_DID1_TypeDef DID1_Bit;
    };
    const uint32_t reserved [12UL * 32UL];
    union
    {
        volatile uint32_t PTBOCTL [32UL];
        BITBANDING_PTBOCTL_TypeDef PTBOCTL_Bit;
    };
    const uint32_t reserved1 [5UL * 32UL];
    union
    {
        volatile uint32_t RIS [32UL];
        BITBANDING_RIS_TypeDef RIS_Bit;
    };
    union
    {
        volatile uint32_t IMC [32UL];
        BITBANDING_IMC_TypeDef IMC_Bit;
    };
    union
    {
        volatile uint32_t MISC [32UL];
        BITBANDING_MISC_TypeDef MISC_Bit;
    };
    union
    {
        volatile uint32_t RESC [32UL];
        BITBANDING_RESC_TypeDef RESC_Bit;
    };
    union
    {
        volatile uint32_t PWRTC [32UL];
        BITBANDING_PWRTC_TypeDef PWRTC_Bit;
    };
    union
    {
        volatile uint32_t NMIC [32UL];
        BITBANDING_NMIC_TypeDef NMIC_Bit;
    };
    const uint32_t reserved2 [5UL * 32UL];
    union
    {
        volatile uint32_t MOSCCTL [32UL];
        BITBANDING_MOSCCTL_TypeDef MOSCCTL_Bit;
    };
    const uint32_t reserved3 [12UL * 32UL];
    union
    {
        volatile uint32_t RSCLKCFG [32UL];
        BITBANDING_RSCLKCFG_TypeDef RSCLKCFG_Bit;
    };
    const uint32_t reserved4 [3UL * 32UL];
    union
    {
        volatile uint32_t MEMTIM0 [32UL];
        BITBANDING_MEMTIM0_TypeDef MEMTIM0_Bit;
    };
    const uint32_t reserved5 [4UL * 32UL];
    union
    {
        volatile const uint32_t RVP [32UL];
        BITBANDING_RVP_TypeDef RVP_Bit;
    };
    const uint32_t reserved6 [24UL * 32UL];
    union
    {
        volatile uint32_t ALTCLKCFG [32UL];
        BITBANDING_ALTCLKCFG_TypeDef ALTCLKCFG_Bit;
    };
    const uint32_t reserved7 [2UL * 32UL];
    union
    {
        volatile uint32_t DSCLKCFG [32UL];
        BITBANDING_DSCLKCFG_TypeDef DSCLKCFG_Bit;
    };
    union
    {
        volatile uint32_t DIVSCLK [32UL];
        BITBANDING_DIVSCLK_TypeDef DIVSCLK_Bit;
    };
    union
    {
        volatile uint32_t SYSPROP [32UL];
        BITBANDING_SYSPROP_TypeDef SYSPROP_Bit;
    };
    union
    {
        volatile uint32_t PIOSCCAL [32UL];
        BITBANDING_PIOSCCAL_TypeDef PIOSCCAL_Bit;
    };
    union
    {
        volatile uint32_t PIOSCSTAT [32UL];
        BITBANDING_PIOSCSTAT_TypeDef PIOSCSTAT_Bit;
    };
    const uint32_t reserved8 [2UL * 32UL];
    union
    {
        volatile uint32_t PLLFREQ0 [32UL];
        BITBANDING_PLLFREQ0_TypeDef PLLFREQ0_Bit;
    };
    union
    {
        volatile uint32_t PLLFREQ1 [32UL];
        BITBANDING_PLLFREQ1_TypeDef PLLFREQ1_Bit;
    };
    union
    {
        volatile uint32_t PLLSTAT [32UL];
        BITBANDING_PLLSTAT_TypeDef PLLSTAT_Bit;
    };
    const uint32_t reserved9 [7UL * 32UL];
    union
    {
        volatile uint32_t SLPPWRCFG [32UL];
        BITBANDING_SLPPWRCFG_TypeDef SLPPWRCFG_Bit;
    };
    union
    {
        volatile uint32_t DSLPPWRCFG [32UL];
        BITBANDING_DSLPPWRCFG_TypeDef DSLPPWRCFG_Bit;
    };
    const uint32_t reserved10 [4UL * 32UL];
    union
    {
        volatile uint32_t NVMSTAT [32UL];
        BITBANDING_NVMSTAT_TypeDef NVMSTAT_Bit;
    };
    const uint32_t reserved11 [4UL * 32UL];
    union
    {
        volatile uint32_t LDOSPCTL [32UL];
        BITBANDING_LDOSPCTL_TypeDef LDOSPCTL_Bit;
    };
    union
    {
        volatile uint32_t LDOSPCAL [32UL];
        BITBANDING_LDOSPCAL_TypeDef LDOSPCAL_Bit;
    };
    union
    {
        volatile uint32_t LDODPCTL [32UL];
        BITBANDING_LDODPCTL_TypeDef LDODPCTL_Bit;
    };
    union
    {
        volatile uint32_t LDODPCAL [32UL];
        BITBANDING_LDODPCAL_TypeDef LDODPCAL_Bit;
    };
    const uint32_t reserved12 [2UL * 32UL];
    union
    {
        volatile uint32_t SDPMST [32UL];
        BITBANDING_SDPMST_TypeDef SDPMST_Bit;
    };
    union
    {
        volatile uint32_t BOOTCFG [32UL];
        BITBANDING_BOOTCFG_TypeDef BOOTCFG_Bit;
    };
    const uint32_t reserved13 [1UL * 32UL];
    union
    {
        volatile uint32_t RESBEHAVCTL [32UL];
        BITBANDING_RESBEHAVCTL_TypeDef RESBEHAVCTL_Bit;
    };
    const uint32_t reserved14 [1UL * 32UL];
    union
    {
        volatile uint32_t USER_REG [4UL][32UL];
        BITBANDING_USER_REG_TypeDef USER_REG_Bit [4UL];
    };
    const uint32_t reserved15 [1UL * 32UL];
    union
    {
        volatile uint32_t HSSR [32UL];
        BITBANDING_HSSR_TypeDef HSSR_Bit;
    };
    const uint32_t reserved16 [2UL * 32UL];
    union
    {
        volatile uint32_t FMPRE [16UL][32UL];
        BITBANDING_FMPRE_TypeDef FMPRE_Bit [16UL];
    };
    const uint32_t reserved17 [16UL * 32UL];
    union
    {
        volatile uint32_t USBPDS [32UL];
        BITBANDING_USBPDS_TypeDef USBPDS_Bit;
    };
    union
    {
        volatile uint32_t USBMPC [32UL];
        BITBANDING_USBMPC_TypeDef USBMPC_Bit;
    };
    union
    {
        volatile uint32_t EMACPDS [32UL];
        BITBANDING_EMACPDS_TypeDef EMACPDS_Bit;
    };
    union
    {
        volatile uint32_t EMACMPC [32UL];
        BITBANDING_EMACMPC_TypeDef EMACMPC_Bit;
    };
    const uint32_t reserved18 [2UL * 32UL];
    union
    {
        volatile uint32_t CAN0PDS [32UL];
        BITBANDING_CAN0PDS_TypeDef CAN0PDS_Bit;
    };
    union
    {
        volatile uint32_t CAN0MPC [32UL];
        BITBANDING_CAN0MPC_TypeDef CAN0MPC_Bit;
    };
    union
    {
        volatile uint32_t CAN1PDS [32UL];
        BITBANDING_CAN1PDS_TypeDef CAN1PDS_Bit;
    };
    union
    {
        volatile uint32_t CAN1MPC [32UL];
        BITBANDING_CAN1MPC_TypeDef CAN1MPC_Bit;
    };
    const uint32_t reserved19 [22UL * 32UL];
    union
    {
        volatile const uint32_t PP [42UL][32UL];
        const BITBANDING_PERIPHERAL_TypeDef PP_Bit [42UL];
    };
    const uint32_t reserved20 [22UL * 32UL];
    union
    {
        volatile const uint32_t FMPPE [16UL][32UL];
        const BITBANDING_FMPPE_TypeDef FMPPE_Bit [16UL];
    };
    const uint32_t reserved21 [48UL *32UL];
    union
    {
        volatile uint32_t SR [42UL][32UL];
        BITBANDING_PERIPHERAL_TypeDef SR_Bit [42UL];
    };
    const uint32_t reserved22 [22UL * 32UL];
    union
    {
        volatile uint32_t RCGC [42UL][32UL];
        BITBANDING_PERIPHERAL_TypeDef RCGC_Bit [42UL];
    };
    const uint32_t reserved23 [22UL * 32UL];
    union
    {
        volatile uint32_t SCGC [42UL][32UL];
        BITBANDING_PERIPHERAL_TypeDef SCGC_Bit [42UL];
    };
    const uint32_t reserved24 [22UL * 32UL];
    union
    {
        volatile uint32_t DCGC [42UL][32UL];
        BITBANDING_PERIPHERAL_TypeDef DCGC_Bit [42UL];
    };
    const uint32_t reserved25 [22UL * 32UL];
    union
    {
        volatile uint32_t PC [42UL][32UL];
        BITBANDING_PERIPHERAL_TypeDef PC_Bit [42UL];
    };
    const uint32_t reserved26 [22UL * 32UL];
    union
    {
        volatile uint32_t PR [42UL][32UL];
        BITBANDING_PERIPHERAL_TypeDef PR_Bit [42UL];
    };
    const uint32_t reserved27 [286UL * 32UL];
    union
    {
        volatile const uint32_t UNIQUEID [4UL][32UL];
        const BITBANDING_UNIQUEID_TypeDef UNIQUEID_Bit [4UL];
    };
    const uint32_t reserved28 [52UL * 32UL];
}SYSCTL_BITBANDING_TypeDef;

#endif /* XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_PERIPHERAL_SYSCTL_STRUCT_SYSCTL_STRUCTPERIPHERAL_BITBANDING_H_ */
