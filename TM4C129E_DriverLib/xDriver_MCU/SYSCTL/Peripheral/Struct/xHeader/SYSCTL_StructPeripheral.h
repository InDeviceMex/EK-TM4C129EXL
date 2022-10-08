
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
        volatile UBase_t DID0;
        DID0_t DID0_Bit;
    };
    union
    {
        volatile UBase_t DID1;
        DID1_t DID1_Bit;
    };
    const UBase_t reserved [12UL];
    union
    {
        volatile UBase_t PTBOCTL;
        PTBOCTL_t PTBOCTL_Bit;
    };
    const UBase_t reserved1 [5UL];
    union
    {
        volatile UBase_t RIS;
        RIS_t RIS_Bit;
    };
    union
    {
        volatile UBase_t IMC;
        IMC_t IMC_Bit;
    };
    union
    {
        volatile UBase_t MISC;
        MISC_t MISC_Bit;
    };
    union
    {
        volatile UBase_t RESC;
        RESC_t RESC_Bit;
    };
    union
    {
        volatile UBase_t PWRTC;
        PWRTC_t PWRTC_Bit;
    };
    union
    {
        volatile UBase_t NMIC;
        NMIC_t NMIC_Bit;
    };
    const UBase_t reserved2 [5UL];
    union
    {
        volatile UBase_t MOSCCTL;
        MOSCCTL_t MOSCCTL_Bit;
    };
    const UBase_t reserved3 [12UL];
    union
    {
        volatile UBase_t RSCLKCFG;
        RSCLKCFG_t RSCLKCFG_Bit;
    };
    const UBase_t reserved4 [3UL];
    union
    {
        volatile UBase_t MEMTIM0;
        MEMTIM0_t MEMTIM0_Bit;
    };
    const UBase_t reserved5 [4UL];
    union
    {
        volatile const UBase_t RVP;
        RVP_t RVP_Bit;
    };
    const UBase_t reserved6 [24UL];
    union
    {
        volatile UBase_t ALTCLKCFG;
        ALTCLKCFG_t ALTCLKCFG_Bit;
    };
    const UBase_t reserved7 [2UL];
    union
    {
        volatile UBase_t DSCLKCFG;
        DSCLKCFG_t DSCLKCFG_Bit;
    };
    union
    {
        volatile UBase_t DIVSCLK;
        DIVSCLK_t DIVSCLK_Bit;
    };
    union
    {
        volatile UBase_t SYSPROP;
        SYSPROP_t SYSPROP_Bit;
    };
    union
    {
        volatile UBase_t PIOSCCAL;
        PIOSCCAL_t PIOSCCAL_Bit;
    };
    union
    {
        volatile UBase_t PIOSCSTAT;
        PIOSCSTAT_t PIOSCSTAT_Bit;
    };
    const UBase_t reserved8 [2UL];
    union
    {
        volatile UBase_t PLLFREQ0;
        PLLFREQ0_t PLLFREQ0_Bit;
    };
    union
    {
        volatile UBase_t PLLFREQ1;
        PLLFREQ1_t PLLFREQ1_Bit;
    };
    union
    {
        volatile UBase_t PLLSTAT;
        PLLSTAT_t PLLSTAT_Bit;
    };
    const UBase_t reserved9 [7UL];
    union
    {
        volatile UBase_t SLPPWRCFG;
        SLPPWRCFG_t SLPPWRCFG_Bit;
    };
    union
    {
        volatile UBase_t DSLPPWRCFG;
        DSLPPWRCFG_t DSLPPWRCFG_Bit;
    };
    const UBase_t reserved10 [4UL];
    union
    {
        volatile UBase_t NVMSTAT;
        NVMSTAT_t NVMSTAT_Bit;
    };
    const UBase_t reserved11 [4UL];
    union
    {
        volatile UBase_t LDOSPCTL;
        LDOSPCTL_t LDOSPCTL_Bit;
    };
    union
    {
        volatile UBase_t LDOSPCAL;
        LDOSPCAL_t LDOSPCAL_Bit;
    };
    union
    {
        volatile UBase_t LDODPCTL;
        LDODPCTL_t LDODPCTL_Bit;
    };
    union
    {
        volatile UBase_t LDODPCAL;
        LDODPCAL_t LDODPCAL_Bit;
    };
    const UBase_t reserved12 [2UL];
    union
    {
        volatile UBase_t SDPMST;
        SDPMST_t SDPMST_Bit;
    };
    union
    {
        volatile UBase_t BOOTCFG;
        BOOTCFG_t BOOTCFG_Bit;
    };
    const UBase_t reserved13 [1UL];
    union
    {
        volatile UBase_t RESBEHAVCTL;
        RESBEHAVCTL_t RESBEHAVCTL_Bit;
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
        HSSR_t HSSR_Bit;
    };
    const UBase_t reserved16 [2UL];
    union
    {
        volatile UBase_t FMPRE [16UL];
        FMPRE_t FMPRE_Bit [16UL];
    };
    const UBase_t reserved17 [16UL];
    union
    {
        volatile UBase_t USBPDS;
        USBPDS_t USBPDS_Bit;
    };
    union
    {
        volatile UBase_t USBMPC;
        USBMPC_t USBMPC_Bit;
    };
    union
    {
        volatile UBase_t EMACPDS;
        EMACPDS_t EMACPDS_Bit;
    };
    union
    {
        volatile UBase_t EMACMPC;
        EMACMPC_t EMACMPC_Bit;
    };
    const UBase_t reserved18 [2UL];
    union
    {
        volatile UBase_t CAN0PDS;
        CAN0PDS_t CAN0PDS_Bit;
    };
    union
    {
        volatile UBase_t CAN0MPC;
        CAN0MPC_t CAN0MPC_Bit;
    };
    union
    {
        volatile UBase_t CAN1PDS;
        CAN1PDS_t CAN1PDS_Bit;
    };
    union
    {
        volatile UBase_t CAN1MPC;
        CAN1MPC_t CAN1MPC_Bit;
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
        volatile const UBase_t FMPPE [16UL];
        const FMPPE_t FMPPE_Bit [16UL];
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
        volatile const UBase_t UNIQUEID [4UL];
        const UNIQUEID_t UNIQUEID_Bit [4UL];
    };
    const UBase_t reserved28 [52UL];
}SYSCTL_t;

#endif /* XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_PERIPHERAL_SYSCTL_STRUCT_SYSCTL_STRUCTPERIPHERAL_H_ */
