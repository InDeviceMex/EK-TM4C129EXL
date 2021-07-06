
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
        volatile uint32_t DID0;
        DID0_TypeDef DID0_Bit;
    };
    union
    {
        volatile uint32_t DID1;
        DID1_TypeDef DID1_Bit;
    };
    const uint32_t reserved [12UL];
    union
    {
        volatile uint32_t PTBOCTL;
        PTBOCTL_TypeDef PTBOCTL_Bit;
    };
    const uint32_t reserved1 [5UL];
    union
    {
        volatile uint32_t RIS;
        RIS_TypeDef RIS_Bit;
    };
    union
    {
        volatile uint32_t IMC;
        IMC_TypeDef IMC_Bit;
    };
    union
    {
        volatile uint32_t MISC;
        MISC_TypeDef MISC_Bit;
    };
    union
    {
        volatile uint32_t RESC;
        RESC_TypeDef RESC_Bit;
    };
    union
    {
        volatile uint32_t PWRTC;
        PWRTC_TypeDef PWRTC_Bit;
    };
    union
    {
        volatile uint32_t NMIC;
        NMIC_TypeDef NMIC_Bit;
    };
    const uint32_t reserved2 [5UL];
    union
    {
        volatile uint32_t MOSCCTL;
        MOSCCTL_TypeDef MOSCCTL_Bit;
    };
    const uint32_t reserved3 [12UL];
    union
    {
        volatile uint32_t RSCLKCFG;
        RSCLKCFG_TypeDef RSCLKCFG_Bit;
    };
    const uint32_t reserved4 [3UL];
    union
    {
        volatile uint32_t MEMTIM0;
        MEMTIM0_TypeDef MEMTIM0_Bit;
    };
    const uint32_t reserved5 [4UL];
    union
    {
        volatile const uint32_t RVP;
        RVP_TypeDef RVP_Bit;
    };
    const uint32_t reserved6 [24UL];
    union
    {
        volatile uint32_t ALTCLKCFG;
        ALTCLKCFG_TypeDef ALTCLKCFG_Bit;
    };
    const uint32_t reserved7 [2UL];
    union
    {
        volatile uint32_t DSCLKCFG;
        DSCLKCFG_TypeDef DSCLKCFG_Bit;
    };
    union
    {
        volatile uint32_t DIVSCLK;
        DIVSCLK_TypeDef DIVSCLK_Bit;
    };
    union
    {
        volatile uint32_t SYSPROP;
        SYSPROP_TypeDef SYSPROP_Bit;
    };
    union
    {
        volatile uint32_t PIOSCCAL;
        PIOSCCAL_TypeDef PIOSCCAL_Bit;
    };
    union
    {
        volatile uint32_t PIOSCSTAT;
        PIOSCSTAT_TypeDef PIOSCSTAT_Bit;
    };
    const uint32_t reserved8 [2UL];
    union
    {
        volatile uint32_t PLLFREQ0;
        PLLFREQ0_TypeDef PLLFREQ0_Bit;
    };
    union
    {
        volatile uint32_t PLLFREQ1;
        PLLFREQ1_TypeDef PLLFREQ1_Bit;
    };
    union
    {
        volatile uint32_t PLLSTAT;
        PLLSTAT_TypeDef PLLSTAT_Bit;
    };
    const uint32_t reserved9 [7UL];
    union
    {
        volatile uint32_t SLPPWRCFG;
        SLPPWRCFG_TypeDef SLPPWRCFG_Bit;
    };
    union
    {
        volatile uint32_t DSLPPWRCFG;
        DSLPPWRCFG_TypeDef DSLPPWRCFG_Bit;
    };
    const uint32_t reserved10 [4UL];
    union
    {
        volatile uint32_t NVMSTAT;
        NVMSTAT_TypeDef NVMSTAT_Bit;
    };
    const uint32_t reserved11 [4UL];
    union
    {
        volatile uint32_t LDOSPCTL;
        LDOSPCTL_TypeDef LDOSPCTL_Bit;
    };
    union
    {
        volatile uint32_t LDOSPCAL;
        LDOSPCAL_TypeDef LDOSPCAL_Bit;
    };
    union
    {
        volatile uint32_t LDODPCTL;
        LDODPCTL_TypeDef LDODPCTL_Bit;
    };
    union
    {
        volatile uint32_t LDODPCAL;
        LDODPCAL_TypeDef LDODPCAL_Bit;
    };
    const uint32_t reserved12 [2UL];
    union
    {
        volatile uint32_t SDPMST;
        SDPMST_TypeDef SDPMST_Bit;
    };
    union
    {
        volatile uint32_t BOOTCFG;
        BOOTCFG_TypeDef BOOTCFG_Bit;
    };
    const uint32_t reserved13 [1UL];
    union
    {
        volatile uint32_t RESBEHAVCTL;
        RESBEHAVCTL_TypeDef RESBEHAVCTL_Bit;
    };
    const uint32_t reserved14 [1UL];
    union
    {
        volatile uint32_t USER_REG [4UL];
        USER_REG_TypeDef USER_REG_Bit [4UL];
    };
    const uint32_t reserved15 [1UL];
    union
    {
        volatile uint32_t HSSR;
        HSSR_TypeDef HSSR_Bit;
    };
    const uint32_t reserved16 [2UL];
    union
    {
        volatile uint32_t FMPRE [16UL];
        FMPRE_TypeDef FMPRE_Bit [16UL];
    };
    const uint32_t reserved17 [16UL];
    union
    {
        volatile uint32_t USBPDS;
        USBPDS_TypeDef USBPDS_Bit;
    };
    union
    {
        volatile uint32_t USBMPC;
        USBMPC_TypeDef USBMPC_Bit;
    };
    union
    {
        volatile uint32_t EMACPDS;
        EMACPDS_TypeDef EMACPDS_Bit;
    };
    union
    {
        volatile uint32_t EMACMPC;
        EMACMPC_TypeDef EMACMPC_Bit;
    };
    const uint32_t reserved18 [2UL];
    union
    {
        volatile uint32_t CAN0PDS;
        CAN0PDS_TypeDef CAN0PDS_Bit;
    };
    union
    {
        volatile uint32_t CAN0MPC;
        CAN0MPC_TypeDef CAN0MPC_Bit;
    };
    union
    {
        volatile uint32_t CAN1PDS;
        CAN1PDS_TypeDef CAN1PDS_Bit;
    };
    union
    {
        volatile uint32_t CAN1MPC;
        CAN1MPC_TypeDef CAN1MPC_Bit;
    };
    const uint32_t reserved19 [22UL];
    union
    {
        volatile const uint32_t PP [42UL];
        const PERIPHERAL_TypeDef PP_Bit [42UL];
    };
    const uint32_t reserved20 [22UL];
    union
    {
        volatile const uint32_t FMPPE [16UL];
        const FMPPE_TypeDef FMPPE_Bit [16UL];
    };
    const uint32_t reserved21 [48UL];
    union
    {
        volatile uint32_t SR [42UL];
        PERIPHERAL_TypeDef SR_Bit [42UL];
    };
    const uint32_t reserved22 [22UL];
    union
    {
        volatile uint32_t RCGC [42UL];
        PERIPHERAL_TypeDef RCGC_Bit [42UL];
    };
    const uint32_t reserved23 [22UL];
    union
    {
        volatile uint32_t SCGC [42UL];
        PERIPHERAL_TypeDef SCGC_Bit [42UL];
    };
    const uint32_t reserved24 [22UL];
    union
    {
        volatile uint32_t DCGC [42UL];
        PERIPHERAL_TypeDef DCGC_Bit [42UL];
    };
    const uint32_t reserved25 [22UL];
    union
    {
        volatile uint32_t PC [42UL];
        PERIPHERAL_TypeDef PC_Bit [42UL];
    };
    const uint32_t reserved26 [22UL];
    union
    {
        volatile uint32_t PR [42UL];
        PERIPHERAL_TypeDef PR_Bit [42UL];
    };
    const uint32_t reserved27 [286UL];
    union
    {
        volatile const uint32_t UNIQUEID [4UL];
        const UNIQUEID_TypeDef UNIQUEID_Bit [4UL];
    };
    const uint32_t reserved28 [52UL];
}SYSCTL_TypeDef;

#endif /* XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_PERIPHERAL_SYSCTL_STRUCT_SYSCTL_STRUCTPERIPHERAL_H_ */
