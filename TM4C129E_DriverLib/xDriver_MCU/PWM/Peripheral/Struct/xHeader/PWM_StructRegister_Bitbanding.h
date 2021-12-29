/**
 *
 * @file PWM_StructRegister_Bitbanding.h
 * @copyright
 * @verbatim InDeviceMex 2021 @endverbatim
 *
 * @par Responsibility
 * @verbatim InDeviceMex Developers @endverbatim
 *
 * @version
 * @verbatim 1.0 @endverbatim
 *
 * @date
 * @verbatim 23 dic. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 23 dic. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_PWM_PERIPHERAL_STRUCT_XHEADER_PWM_STRUCTREGISTER_BITBANDING_H_
#define XDRIVER_MCU_PWM_PERIPHERAL_STRUCT_XHEADER_PWM_STRUCTREGISTER_BITBANDING_H_

#include <xDriver_MCU/Common/xHeader/MCU_Variables.h>

/**
 *  Global Struct Definitions for PWM Generators
 */

typedef volatile struct
{
    volatile uint32_t GLOBALSYNC0;
    volatile uint32_t GLOBALSYNC1;
    volatile uint32_t GLOBALSYNC2;
    volatile uint32_t GLOBALSYNC3;
    const uint32_t reserved [28UL];
}BITBANDING_PWMCTL_t;

typedef volatile struct
{
    volatile uint32_t SYNC0;
    volatile uint32_t SYNC1;
    volatile uint32_t SYNC2;
    volatile uint32_t SYNC3;
    const uint32_t reserved [28UL];
}BITBANDING_PWMSYNC_t;

typedef volatile struct
{
    volatile uint32_t PWM0EN;
    volatile uint32_t PWM1EN;
    volatile uint32_t PWM2EN;
    volatile uint32_t PWM3EN;
    volatile uint32_t PWM4EN;
    volatile uint32_t PWM5EN;
    volatile uint32_t PWM6EN;
    volatile uint32_t PWM7EN;
    const uint32_t reserved [24UL];
}BITBANDING_PWMENABLE_t;

typedef volatile struct
{
    volatile uint32_t PWM0INV;
    volatile uint32_t PWM1INV;
    volatile uint32_t PWM2INV;
    volatile uint32_t PWM3INV;
    volatile uint32_t PWM4INV;
    volatile uint32_t PWM5INV;
    volatile uint32_t PWM6INV;
    volatile uint32_t PWM7INV;
    const uint32_t reserved [24UL];
}BITBANDING_PWMINVERT_t;

typedef volatile struct
{
    volatile uint32_t FAULT0;
    volatile uint32_t FAULT1;
    volatile uint32_t FAULT2;
    volatile uint32_t FAULT3;
    volatile uint32_t FAULT4;
    volatile uint32_t FAULT5;
    volatile uint32_t FAULT6;
    volatile uint32_t FAULT7;
    const uint32_t reserved [24UL];
}BITBANDING_PWMFAULT_t;

typedef volatile struct
{
    volatile uint32_t INTPWM0;
    volatile uint32_t INTPWM1;
    volatile uint32_t INTPWM2;
    volatile uint32_t INTPWM3;
    const uint32_t reserved [12UL];
    volatile uint32_t INTFAULT0;
    volatile uint32_t INTFAULT1;
    volatile uint32_t INTFAULT2;
    volatile uint32_t INTFAULT3;
    const uint32_t reserved1 [12UL];
}BITBANDING_PWMINTEN_t;

typedef volatile struct
{
    volatile const uint32_t INTPWM0;
    volatile const uint32_t INTPWM1;
    volatile const uint32_t INTPWM2;
    volatile const uint32_t INTPWM3;
    const uint32_t reserved [12UL];
    volatile const uint32_t INTFAULT0;
    volatile const uint32_t INTFAULT1;
    volatile const uint32_t INTFAULT2;
    volatile const uint32_t INTFAULT3;
    const uint32_t reserved1 [12UL];
}BITBANDING_PWMRIS_t;

typedef volatile struct
{
    volatile const uint32_t INTPWM0;
    volatile const uint32_t INTPWM1;
    volatile const uint32_t INTPWM2;
    volatile const uint32_t INTPWM3;
    const uint32_t reserved [12UL];
    volatile uint32_t INTFAULT0;
    volatile uint32_t INTFAULT1;
    volatile uint32_t INTFAULT2;
    volatile uint32_t INTFAULT3;
    const uint32_t reserved1 [12UL];
}BITBANDING_PWMISC_t;

typedef volatile struct
{
    volatile const uint32_t FAULT0;
    volatile const uint32_t FAULT1;
    volatile const uint32_t FAULT2;
    volatile const uint32_t FAULT3;
    const uint32_t reserved1 [28UL];
}BITBANDING_PWMSTATUS_t;

typedef volatile struct
{
    volatile uint32_t PWM0_;
    volatile uint32_t PWM1_;
    volatile uint32_t PWM2_;
    volatile uint32_t PWM3_;
    volatile uint32_t PWM4_;
    volatile uint32_t PWM5_;
    volatile uint32_t PWM6_;
    volatile uint32_t PWM7_;
    const uint32_t reserved [24UL];
}BITBANDING_PWMFAULTVAL_t;

typedef volatile struct
{
    volatile uint32_t ENUPD0 [2UL];
    volatile uint32_t ENUPD1 [2UL];
    volatile uint32_t ENUPD2 [2UL];
    volatile uint32_t ENUPD3 [2UL];
    volatile uint32_t ENUPD4 [2UL];
    volatile uint32_t ENUPD5 [2UL];
    volatile uint32_t ENUPD6 [2UL];
    volatile uint32_t ENUPD7 [2UL];
    const uint32_t reserved [16UL];
}BITBANDING_PWMENUPD_t;

/**
 *  Global Struct Definitions for PWM Properties
 */

typedef volatile struct
{
    volatile const uint32_t GCNT [4UL];
    volatile const uint32_t FCNT [4UL];
    volatile const uint32_t ESYNC;
    volatile const uint32_t EFAULT;
    volatile const uint32_t ONE;
    const uint32_t reserved [21UL];
}BITBANDING_PWMPP_t;

typedef volatile struct
{
    volatile uint32_t PWMDIV [3UL];
    const uint32_t reserved [5UL];
    volatile uint32_t USEPWM;
    const uint32_t reserved1 [23UL];
}BITBANDING_PWMCC_t;


/**
 * PWM Generators configurations
 */

typedef volatile struct
{
    volatile uint32_t ENABLE;
    volatile uint32_t MODE;
    volatile uint32_t DEBUG;
    volatile uint32_t LOADUPD;
    volatile uint32_t CMPAUPD;
    volatile uint32_t CMPBUPD;
    volatile uint32_t GENAUPD [2UL];
    volatile uint32_t GENBUPD [2UL];
    volatile uint32_t DBCTLUPD [2UL];
    volatile uint32_t DBRISEUPD [2UL];
    volatile uint32_t DBFALLUPD [2UL];
    volatile uint32_t FLTSRC;
    volatile uint32_t MINFLTPER;
    volatile uint32_t LATCH;
    const uint32_t reserved [13UL];
}BITBANDING_PWMnCTL_t;

typedef volatile struct
{
    volatile uint32_t INTCNTZERO;
    volatile uint32_t INTCNTLOAD;
    volatile uint32_t INTCMPAU;
    volatile uint32_t INTCMPAD;
    volatile uint32_t INTCMPBU;
    volatile uint32_t INTCMPBD;
    const uint32_t reserved [2UL];
    volatile uint32_t TRCNTZERO;
    volatile uint32_t TRCNTLOAD;
    volatile uint32_t TRCMPAU;
    volatile uint32_t TRCMPAD;
    volatile uint32_t TRCMPBU;
    volatile uint32_t TRCMPBD;
    const uint32_t reserved1 [18UL];
}BITBANDING_PWMnINTEN_t;

typedef volatile struct
{
    volatile const uint32_t INTCNTZERO;
    volatile const uint32_t INTCNTLOAD;
    volatile const uint32_t INTCMPAU;
    volatile const uint32_t INTCMPAD;
    volatile const uint32_t INTCMPBU;
    volatile const uint32_t INTCMPBD;
    const uint32_t reserved [26UL];
}BITBANDING_PWMnRIS_t;

typedef volatile struct
{
    volatile uint32_t INTCNTZERO;
    volatile uint32_t INTCNTLOAD;
    volatile uint32_t INTCMPAU;
    volatile uint32_t INTCMPAD;
    volatile uint32_t INTCMPBU;
    volatile uint32_t INTCMPBD;
    const uint32_t reserved [26UL];
}BITBANDING_PWMnISC_t;

typedef volatile struct
{
    volatile uint32_t LOAD [16UL];
    const uint32_t reserved [16UL];
}BITBANDING_PWMnLOAD_t;

typedef volatile struct
{
    volatile const uint32_t COUNT [16UL];
    const uint32_t reserved [16UL];
}BITBANDING_PWMnCOUNT_t;

typedef volatile struct
{
    volatile uint32_t COMPA [16UL];
    const uint32_t reserved [16UL];
}BITBANDING_PWMnCMPA_t;

typedef volatile struct
{
    volatile uint32_t COMPB [16UL];
    const uint32_t reserved [16UL];
}BITBANDING_PWMnCMPB_t;

typedef volatile struct
{
    volatile uint32_t ACTZERO [2UL];
    volatile uint32_t ACTLOAD [2UL];
    volatile uint32_t ACTCMPAU [2UL];
    volatile uint32_t ACTCMPAD [2UL];
    volatile uint32_t ACTCMPBU [2UL];
    volatile uint32_t ACTCMPBD [2UL];
    const uint32_t reserved [20UL];
}BITBANDING_PWMnGENA_t;

typedef volatile struct
{
    volatile uint32_t ACTZERO [2UL];
    volatile uint32_t ACTLOAD [2UL];
    volatile uint32_t ACTCMPAU [2UL];
    volatile uint32_t ACTCMPAD [2UL];
    volatile uint32_t ACTCMPBU [2UL];
    volatile uint32_t ACTCMPBD [2UL];
    const uint32_t reserved [20UL];
}BITBANDING_PWMnGENB_t;

typedef volatile struct
{
    volatile uint32_t ENABLE;
    const uint32_t reserved [31UL];
}BITBANDING_PWMnDBCTL_t;

typedef volatile struct
{
    volatile uint32_t RISEDELAY [12UL];
    const uint32_t reserved [20UL];
}BITBANDING_PWMnDBRISE_t;

typedef volatile struct
{
    volatile uint32_t FALLDELAY [12UL];
    const uint32_t reserved [20UL];
}BITBANDING_PWMnDBFALL_t;

typedef volatile struct
{
    volatile uint32_t FAULT0;
    volatile uint32_t FAULT1;
    volatile uint32_t FAULT2;
    volatile uint32_t FAULT3;
    const uint32_t reserved [28UL];
}BITBANDING_PWMnFLTSRC0_t;

typedef volatile struct
{
    volatile uint32_t DCMP0;
    volatile uint32_t DCMP1;
    volatile uint32_t DCMP2;
    volatile uint32_t DCMP3;
    volatile uint32_t DCMP4;
    volatile uint32_t DCMP5;
    volatile uint32_t DCMP6;
    volatile uint32_t DCMP7;
    const uint32_t reserved [24UL];
}BITBANDING_PWMnFLTSRC1_t;

typedef volatile struct
{
    volatile uint32_t MFP [16UL];
    const uint32_t reserved [16UL];
}BITBANDING_PWMnMINFLTPER_t;

typedef volatile struct
{
    volatile uint32_t FAULT0;
    volatile uint32_t FAULT1;
    volatile uint32_t FAULT2;
    volatile uint32_t FAULT3;
    const uint32_t reserved [28UL];
}BITBANDING_PWMnFLTSEN_t;

typedef volatile struct
{
    volatile uint32_t FAULT0;
    volatile uint32_t FAULT1;
    volatile uint32_t FAULT2;
    volatile uint32_t FAULT3;
    const uint32_t reserved [28UL];
}BITBANDING_PWMnFLTSTAT0_t;

typedef volatile struct
{
    volatile uint32_t DCMP0;
    volatile uint32_t DCMP1;
    volatile uint32_t DCMP2;
    volatile uint32_t DCMP3;
    volatile uint32_t DCMP4;
    volatile uint32_t DCMP5;
    volatile uint32_t DCMP6;
    volatile uint32_t DCMP7;
    const uint32_t reserved [24UL];
}BITBANDING_PWMnFLTSTAT1_t;

#endif /* XDRIVER_MCU_PWM_PERIPHERAL_STRUCT_XHEADER_PWM_STRUCTREGISTER_BITBANDING_H_ */
