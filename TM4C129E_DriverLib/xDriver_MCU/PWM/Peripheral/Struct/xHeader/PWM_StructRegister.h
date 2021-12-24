/**
 *
 * @file PWM_StructRegister.h
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
 * @verbatim May 26, 2021 @endverbatim
 *
 * @author
 * @verbatim indevicemex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * May 26, 2021        indevicemex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_PWM_PERIPHERAL_STRUCT_XHEADER_PWM_STRUCTREGISTER_H_
#define XDRIVER_MCU_PWM_PERIPHERAL_STRUCT_XHEADER_PWM_STRUCTREGISTER_H_

#include <xDriver_MCU/Common/xHeader/MCU_Variables.h>

/**
 *  Global Struct Definitions for PWM Generators
 */

typedef volatile struct
{
    volatile uint32_t GLOBALSYNC0: 1;
    volatile uint32_t GLOBALSYNC1: 1;
    volatile uint32_t GLOBALSYNC2: 1;
    volatile uint32_t GLOBALSYNC3: 1;
    const uint32_t reserved: 28;
}PWMCTL_t;

typedef volatile struct
{
    volatile uint32_t SYNC0: 1;
    volatile uint32_t SYNC1: 1;
    volatile uint32_t SYNC2: 1;
    volatile uint32_t SYNC3: 1;
    const uint32_t reserved: 28;
}PWMSYNC_t;

typedef volatile struct
{
    volatile uint32_t PWM0EN: 1;
    volatile uint32_t PWM1EN: 1;
    volatile uint32_t PWM2EN: 1;
    volatile uint32_t PWM3EN: 1;
    volatile uint32_t PWM4EN: 1;
    volatile uint32_t PWM5EN: 1;
    volatile uint32_t PWM6EN: 1;
    volatile uint32_t PWM7EN: 1;
    const uint32_t reserved: 24;
}PWMENABLE_t;

typedef volatile struct
{
    volatile uint32_t PWM0INV: 1;
    volatile uint32_t PWM1INV: 1;
    volatile uint32_t PWM2INV: 1;
    volatile uint32_t PWM3INV: 1;
    volatile uint32_t PWM4INV: 1;
    volatile uint32_t PWM5INV: 1;
    volatile uint32_t PWM6INV: 1;
    volatile uint32_t PWM7INV: 1;
    const uint32_t reserved: 24;
}PWMINVERT_t;

typedef volatile struct
{
    volatile uint32_t FAULT0: 1;
    volatile uint32_t FAULT1: 1;
    volatile uint32_t FAULT2: 1;
    volatile uint32_t FAULT3: 1;
    volatile uint32_t FAULT4: 1;
    volatile uint32_t FAULT5: 1;
    volatile uint32_t FAULT6: 1;
    volatile uint32_t FAULT7: 1;
    const uint32_t reserved: 24;
}PWMFAULT_t;

typedef volatile struct
{
    volatile uint32_t INTPWM0: 1;
    volatile uint32_t INTPWM1: 1;
    volatile uint32_t INTPWM2: 1;
    volatile uint32_t INTPWM3: 1;
    const uint32_t reserved: 12;
    volatile uint32_t INTFAULT0: 1;
    volatile uint32_t INTFAULT1: 1;
    volatile uint32_t INTFAULT2: 1;
    volatile uint32_t INTFAULT3: 1;
    const uint32_t reserved1: 12;
}PWMINTEN_t;

typedef volatile struct
{
    volatile const uint32_t INTPWM0: 1;
    volatile const uint32_t INTPWM1: 1;
    volatile const uint32_t INTPWM2: 1;
    volatile const uint32_t INTPWM3: 1;
    const uint32_t reserved: 12;
    volatile const uint32_t INTFAULT0: 1;
    volatile const uint32_t INTFAULT1: 1;
    volatile const uint32_t INTFAULT2: 1;
    volatile const uint32_t INTFAULT3: 1;
    const uint32_t reserved1: 12;
}PWMRIS_t;

typedef volatile struct
{
    volatile const uint32_t INTPWM0: 1;
    volatile const uint32_t INTPWM1: 1;
    volatile const uint32_t INTPWM2: 1;
    volatile const uint32_t INTPWM3: 1;
    const uint32_t reserved: 12;
    volatile uint32_t INTFAULT0: 1;
    volatile uint32_t INTFAULT1: 1;
    volatile uint32_t INTFAULT2: 1;
    volatile uint32_t INTFAULT3: 1;
    const uint32_t reserved1: 12;
}PWMISC_t;

typedef volatile struct
{
    volatile const uint32_t FAULT0: 1;
    volatile const uint32_t FAULT1: 1;
    volatile const uint32_t FAULT2: 1;
    volatile const uint32_t FAULT3: 1;
    const uint32_t reserved1: 28;
}PWMSTATUS_t;

typedef volatile struct
{
    volatile uint32_t PWM0_: 1;
    volatile uint32_t PWM1_: 1;
    volatile uint32_t PWM2_: 1;
    volatile uint32_t PWM3_: 1;
    volatile uint32_t PWM4_: 1;
    volatile uint32_t PWM5_: 1;
    volatile uint32_t PWM6_: 1;
    volatile uint32_t PWM7_: 1;
    const uint32_t reserved: 24;
}PWMFAULTVAL_t;

typedef volatile struct
{
    volatile uint32_t ENUPD0: 2;
    volatile uint32_t ENUPD1: 2;
    volatile uint32_t ENUPD2: 2;
    volatile uint32_t ENUPD3: 2;
    volatile uint32_t ENUPD4: 2;
    volatile uint32_t ENUPD5: 2;
    volatile uint32_t ENUPD6: 2;
    volatile uint32_t ENUPD7: 2;
    const uint32_t reserved: 16;
}PWMENUPD_t;

/**
 *  Global Struct Definitions for PWM Properties
 */

typedef volatile struct
{
    volatile const uint32_t GCNT: 4;
    volatile const uint32_t FCNT: 4;
    volatile const uint32_t ESYNC: 1;
    volatile const uint32_t EFAULT: 1;
    volatile const uint32_t ONE: 1;
    const uint32_t reserved: 21;
}PWMPP_t;

typedef volatile struct
{
    volatile uint32_t PWMDIV: 3;
    const uint32_t reserved: 5;
    volatile uint32_t USEPWM: 1;
    const uint32_t reserved1: 23;
}PWMCC_t;


/**
 * PWM Generators configurations
 */

typedef volatile struct
{
    volatile uint32_t ENABLE: 1;
    volatile uint32_t MODE: 1;
    volatile uint32_t DEBUG: 1;
    volatile uint32_t LOADUPD: 1;
    volatile uint32_t CMPAUPD: 1;
    volatile uint32_t CMPBUPD: 1;
    volatile uint32_t GENAUPD: 2;
    volatile uint32_t GENBUPD: 2;
    volatile uint32_t DBCTLUPD: 2;
    volatile uint32_t DBRISEUPD: 2;
    volatile uint32_t DBFALLUPD: 2;
    volatile uint32_t FLTSRC: 1;
    volatile uint32_t MINFLTPER: 1;
    volatile uint32_t LATCH: 1;
    const uint32_t reserved: 13;
}PWMnCTL_t;

typedef volatile struct
{
    volatile uint32_t INTCNTZERO: 1;
    volatile uint32_t INTCNTLOAD: 1;
    volatile uint32_t INTCMPAU: 1;
    volatile uint32_t INTCMPAD: 1;
    volatile uint32_t INTCMPBU: 1;
    volatile uint32_t INTCMPBD: 1;
    const uint32_t reserved: 2;
    volatile uint32_t TRCNTZERO: 1;
    volatile uint32_t TRCNTLOAD: 1;
    volatile uint32_t TRCMPAU: 1;
    volatile uint32_t TRCMPAD: 1;
    volatile uint32_t TRCMPBU: 1;
    volatile uint32_t TRCMPBD: 1;
    const uint32_t reserved1: 18;
}PWMnINTEN_t;

typedef volatile struct
{
    volatile const uint32_t INTCNTZERO: 1;
    volatile const uint32_t INTCNTLOAD: 1;
    volatile const uint32_t INTCMPAU: 1;
    volatile const uint32_t INTCMPAD: 1;
    volatile const uint32_t INTCMPBU: 1;
    volatile const uint32_t INTCMPBD: 1;
    const uint32_t reserved: 26;
}PWMnRIS_t;

typedef volatile struct
{
    volatile uint32_t INTCNTZERO: 1;
    volatile uint32_t INTCNTLOAD: 1;
    volatile uint32_t INTCMPAU: 1;
    volatile uint32_t INTCMPAD: 1;
    volatile uint32_t INTCMPBU: 1;
    volatile uint32_t INTCMPBD: 1;
    const uint32_t reserved: 26;
}PWMnISC_t;

typedef volatile struct
{
    volatile uint32_t LOAD: 16;
    const uint32_t reserved: 16;
}PWMnLOAD_t;

typedef volatile struct
{
    volatile const uint32_t COUNT: 16;
    const uint32_t reserved: 16;
}PWMnCOUNT_t;

typedef volatile struct
{
    volatile uint32_t COMPA: 16;
    const uint32_t reserved: 16;
}PWMnCMPA_t;

typedef volatile struct
{
    volatile uint32_t COMPB: 16;
    const uint32_t reserved: 16;
}PWMnCMPB_t;

typedef volatile struct
{
    volatile uint32_t ACTZERO: 2;
    volatile uint32_t ACTLOAD: 2;
    volatile uint32_t ACTCMPAU: 2;
    volatile uint32_t ACTCMPAD: 2;
    volatile uint32_t ACTCMPBU: 2;
    volatile uint32_t ACTCMPBD: 2;
    const uint32_t reserved: 20;
}PWMnGENA_t;

typedef volatile struct
{
    volatile uint32_t ACTZERO: 2;
    volatile uint32_t ACTLOAD: 2;
    volatile uint32_t ACTCMPAU: 2;
    volatile uint32_t ACTCMPAD: 2;
    volatile uint32_t ACTCMPBU: 2;
    volatile uint32_t ACTCMPBD: 2;
    const uint32_t reserved: 20;
}PWMnGENB_t;

typedef volatile struct
{
    volatile uint32_t ENABLE: 1;
    const uint32_t reserved: 31;
}PWMnDBCTL_t;

typedef volatile struct
{
    volatile uint32_t RISEDELAY: 12;
    const uint32_t reserved: 20;
}PWMnDBRISE_t;

typedef volatile struct
{
    volatile uint32_t FALLDELAY: 12;
    const uint32_t reserved: 20;
}PWMnDBFALL_t;

typedef volatile struct
{
    volatile uint32_t FAULT0: 1;
    volatile uint32_t FAULT1: 1;
    volatile uint32_t FAULT2: 1;
    volatile uint32_t FAULT3: 1;
    const uint32_t reserved: 28;
}PWMnFLTSRC0_t;

typedef volatile struct
{
    volatile uint32_t DCMP0: 1;
    volatile uint32_t DCMP1: 1;
    volatile uint32_t DCMP2: 1;
    volatile uint32_t DCMP3: 1;
    volatile uint32_t DCMP4: 1;
    volatile uint32_t DCMP5: 1;
    volatile uint32_t DCMP6: 1;
    volatile uint32_t DCMP7: 1;
    const uint32_t reserved: 24;
}PWMnFLTSRC1_t;

typedef volatile struct
{
    volatile uint32_t MFP: 16;
    const uint32_t reserved: 16;
}PWMnMINFLTPER_t;

typedef volatile struct
{
    volatile uint32_t FAULT0: 1;
    volatile uint32_t FAULT1: 1;
    volatile uint32_t FAULT2: 1;
    volatile uint32_t FAULT3: 1;
    const uint32_t reserved: 28;
}PWMnFLTSEN_t;

typedef volatile struct
{
    volatile uint32_t FAULT0: 1;
    volatile uint32_t FAULT1: 1;
    volatile uint32_t FAULT2: 1;
    volatile uint32_t FAULT3: 1;
    const uint32_t reserved: 28;
}PWMnFLTSTAT0_t;

typedef volatile struct
{
    volatile uint32_t DCMP0: 1;
    volatile uint32_t DCMP1: 1;
    volatile uint32_t DCMP2: 1;
    volatile uint32_t DCMP3: 1;
    volatile uint32_t DCMP4: 1;
    volatile uint32_t DCMP5: 1;
    volatile uint32_t DCMP6: 1;
    volatile uint32_t DCMP7: 1;
    const uint32_t reserved: 24;
}PWMnFLTSTAT1_t;

#endif /* XDRIVER_MCU_PWM_PERIPHERAL_STRUCT_XHEADER_PWM_STRUCTREGISTER_H_ */
