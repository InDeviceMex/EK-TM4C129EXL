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
        volatile UBase_t DID0 [32UL];
        BITBANDING_DID0_t DID0_Bit;
    };
    union
    {
        volatile UBase_t DID1 [32UL];
        BITBANDING_DID1_t DID1_Bit;
    };
    const UBase_t reserved [12UL * 32UL];
    union
    {
        volatile UBase_t PTBOCTL [32UL];
        BITBANDING_PTBOCTL_t PTBOCTL_Bit;
    };
    const UBase_t reserved1 [5UL * 32UL];
    union
    {
        volatile UBase_t RIS [32UL];
        BITBANDING_RIS_t RIS_Bit;
    };
    union
    {
        volatile UBase_t IMC [32UL];
        BITBANDING_IMC_t IMC_Bit;
    };
    union
    {
        volatile UBase_t MISC [32UL];
        BITBANDING_MISC_t MISC_Bit;
    };
    union
    {
        volatile UBase_t RESC [32UL];
        BITBANDING_RESC_t RESC_Bit;
    };
    union
    {
        volatile UBase_t PWRTC [32UL];
        BITBANDING_PWRTC_t PWRTC_Bit;
    };
    union
    {
        volatile UBase_t NMIC [32UL];
        BITBANDING_NMIC_t NMIC_Bit;
    };
    const UBase_t reserved2 [5UL * 32UL];
    union
    {
        volatile UBase_t MOSCCTL [32UL];
        BITBANDING_MOSCCTL_t MOSCCTL_Bit;
    };
    const UBase_t reserved3 [12UL * 32UL];
    union
    {
        volatile UBase_t RSCLKCFG [32UL];
        BITBANDING_RSCLKCFG_t RSCLKCFG_Bit;
    };
    const UBase_t reserved4 [3UL * 32UL];
    union
    {
        volatile UBase_t MEMTIM0 [32UL];
        BITBANDING_MEMTIM0_t MEMTIM0_Bit;
    };
    const UBase_t reserved5 [4UL * 32UL];
    union
    {
        volatile const UBase_t RVP [32UL];
        BITBANDING_RVP_t RVP_Bit;
    };
    const UBase_t reserved6 [24UL * 32UL];
    union
    {
        volatile UBase_t ALTCLKCFG [32UL];
        BITBANDING_ALTCLKCFG_t ALTCLKCFG_Bit;
    };
    const UBase_t reserved7 [2UL * 32UL];
    union
    {
        volatile UBase_t DSCLKCFG [32UL];
        BITBANDING_DSCLKCFG_t DSCLKCFG_Bit;
    };
    union
    {
        volatile UBase_t DIVSCLK [32UL];
        BITBANDING_DIVSCLK_t DIVSCLK_Bit;
    };
    union
    {
        volatile UBase_t SYSPROP [32UL];
        BITBANDING_SYSPROP_t SYSPROP_Bit;
    };
    union
    {
        volatile UBase_t PIOSCCAL [32UL];
        BITBANDING_PIOSCCAL_t PIOSCCAL_Bit;
    };
    union
    {
        volatile UBase_t PIOSCSTAT [32UL];
        BITBANDING_PIOSCSTAT_t PIOSCSTAT_Bit;
    };
    const UBase_t reserved8 [2UL * 32UL];
    union
    {
        volatile UBase_t PLLFREQ0 [32UL];
        BITBANDING_PLLFREQ0_t PLLFREQ0_Bit;
    };
    union
    {
        volatile UBase_t PLLFREQ1 [32UL];
        BITBANDING_PLLFREQ1_t PLLFREQ1_Bit;
    };
    union
    {
        volatile UBase_t PLLSTAT [32UL];
        BITBANDING_PLLSTAT_t PLLSTAT_Bit;
    };
    const UBase_t reserved9 [7UL * 32UL];
    union
    {
        volatile UBase_t SLPPWRCFG [32UL];
        BITBANDING_SLPPWRCFG_t SLPPWRCFG_Bit;
    };
    union
    {
        volatile UBase_t DSLPPWRCFG [32UL];
        BITBANDING_DSLPPWRCFG_t DSLPPWRCFG_Bit;
    };
    const UBase_t reserved10 [4UL * 32UL];
    union
    {
        volatile UBase_t NVMSTAT [32UL];
        BITBANDING_NVMSTAT_t NVMSTAT_Bit;
    };
    const UBase_t reserved11 [4UL * 32UL];
    union
    {
        volatile UBase_t LDOSPCTL [32UL];
        BITBANDING_LDOSPCTL_t LDOSPCTL_Bit;
    };
    union
    {
        volatile UBase_t LDOSPCAL [32UL];
        BITBANDING_LDOSPCAL_t LDOSPCAL_Bit;
    };
    union
    {
        volatile UBase_t LDODPCTL [32UL];
        BITBANDING_LDODPCTL_t LDODPCTL_Bit;
    };
    union
    {
        volatile UBase_t LDODPCAL [32UL];
        BITBANDING_LDODPCAL_t LDODPCAL_Bit;
    };
    const UBase_t reserved12 [2UL * 32UL];
    union
    {
        volatile UBase_t SDPMST [32UL];
        BITBANDING_SDPMST_t SDPMST_Bit;
    };
    union
    {
        volatile UBase_t BOOTCFG [32UL];
        BITBANDING_BOOTCFG_t BOOTCFG_Bit;
    };
    const UBase_t reserved13 [1UL * 32UL];
    union
    {
        volatile UBase_t RESBEHAVCTL [32UL];
        BITBANDING_RESBEHAVCTL_t RESBEHAVCTL_Bit;
    };
    const UBase_t reserved14 [1UL * 32UL];
    union
    {
        volatile UBase_t USER_REG [4UL][32UL];
        BITBANDING_USER_REG_t USER_REG_Bit [4UL];
    };
    const UBase_t reserved15 [1UL * 32UL];
    union
    {
        volatile UBase_t HSSR [32UL];
        BITBANDING_HSSR_t HSSR_Bit;
    };
    const UBase_t reserved16 [2UL * 32UL];
    union
    {
        volatile UBase_t FMPRE [16UL][32UL];
        BITBANDING_FMPRE_t FMPRE_Bit [16UL];
    };
    const UBase_t reserved17 [16UL * 32UL];
    union
    {
        volatile UBase_t USBPDS [32UL];
        BITBANDING_USBPDS_t USBPDS_Bit;
    };
    union
    {
        volatile UBase_t USBMPC [32UL];
        BITBANDING_USBMPC_t USBMPC_Bit;
    };
    union
    {
        volatile UBase_t EMACPDS [32UL];
        BITBANDING_EMACPDS_t EMACPDS_Bit;
    };
    union
    {
        volatile UBase_t EMACMPC [32UL];
        BITBANDING_EMACMPC_t EMACMPC_Bit;
    };
    const UBase_t reserved18 [2UL * 32UL];
    union
    {
        volatile UBase_t CAN0PDS [32UL];
        BITBANDING_CAN0PDS_t CAN0PDS_Bit;
    };
    union
    {
        volatile UBase_t CAN0MPC [32UL];
        BITBANDING_CAN0MPC_t CAN0MPC_Bit;
    };
    union
    {
        volatile UBase_t CAN1PDS [32UL];
        BITBANDING_CAN1PDS_t CAN1PDS_Bit;
    };
    union
    {
        volatile UBase_t CAN1MPC [32UL];
        BITBANDING_CAN1MPC_t CAN1MPC_Bit;
    };
    const UBase_t reserved19 [22UL * 32UL];
    union
    {
        volatile const UBase_t PP [42UL][32UL];
        const BITBANDING_PERIPHERAL_t PP_Bit [42UL];
    };
    const UBase_t reserved20 [22UL * 32UL];
    union
    {
        volatile const UBase_t FMPPE [16UL][32UL];
        const BITBANDING_FMPPE_t FMPPE_Bit [16UL];
    };
    const UBase_t reserved21 [48UL *32UL];
    union
    {
        volatile UBase_t SR [42UL][32UL];
        BITBANDING_PERIPHERAL_t SR_Bit [42UL];
    };
    const UBase_t reserved22 [22UL * 32UL];
    union
    {
        volatile UBase_t RCGC [42UL][32UL];
        BITBANDING_PERIPHERAL_t RCGC_Bit [42UL];
    };
    const UBase_t reserved23 [22UL * 32UL];
    union
    {
        volatile UBase_t SCGC [42UL][32UL];
        BITBANDING_PERIPHERAL_t SCGC_Bit [42UL];
    };
    const UBase_t reserved24 [22UL * 32UL];
    union
    {
        volatile UBase_t DCGC [42UL][32UL];
        BITBANDING_PERIPHERAL_t DCGC_Bit [42UL];
    };
    const UBase_t reserved25 [22UL * 32UL];
    union
    {
        volatile UBase_t PC [42UL][32UL];
        BITBANDING_PERIPHERAL_t PC_Bit [42UL];
    };
    const UBase_t reserved26 [22UL * 32UL];
    union
    {
        volatile UBase_t PR [42UL][32UL];
        BITBANDING_PERIPHERAL_t PR_Bit [42UL];
    };
    const UBase_t reserved27 [286UL * 32UL];
    union
    {
        volatile const UBase_t UNIQUEID [4UL][32UL];
        const BITBANDING_UNIQUEID_t UNIQUEID_Bit [4UL];
    };
    const UBase_t reserved28 [52UL * 32UL];
}SYSCTL_BITBANDING_t;

#endif /* XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_PERIPHERAL_SYSCTL_STRUCT_SYSCTL_STRUCTPERIPHERAL_BITBANDING_H_ */
