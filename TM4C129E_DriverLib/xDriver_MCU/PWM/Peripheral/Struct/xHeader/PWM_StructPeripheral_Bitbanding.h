/**
 *
 * @file PWM_StructPeripheral_Bitbanding.h
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

#ifndef XDRIVER_MCU_PWM_PERIPHERAL_STRUCT_XHEADER_PWM_STRUCTPERIPHERAL_BITBANDING_H_
#define XDRIVER_MCU_PWM_PERIPHERAL_STRUCT_XHEADER_PWM_STRUCTPERIPHERAL_BITBANDING_H_

#include <xDriver_MCU/PWM/Peripheral/Struct/xHeader/PWM_StructRegister_Bitbanding.h>
#include <xDriver_MCU/PWM/Peripheral/xHeader/PWM_Enum.h>

typedef volatile struct
{
    union
    {
        volatile uint32_t CTL [32UL];
        BITBANDING_PWMnCTL_t CTL_Bit;
    };
    union
    {
        volatile uint32_t INTEN [32UL];
        BITBANDING_PWMnINTEN_t INTEN_Bit;
    };
    union
    {
        volatile const uint32_t RIS [32UL];
        BITBANDING_PWMnRIS_t RIS_Bit;
    };
    union
    {
        volatile uint32_t ISC [32UL];
        BITBANDING_PWMnISC_t ISC_Bit;
    };
    union
    {
        volatile uint32_t LOAD [32UL];
        BITBANDING_PWMnLOAD_t LOAD_Bit;
    };
    union
    {
        volatile const uint32_t COUNT [32UL];
        BITBANDING_PWMnCOUNT_t COUNT_Bit;
    };
    union
    {
        volatile uint32_t CMPA [32UL];
        BITBANDING_PWMnCMPA_t CMPA_Bit;
    };
    union
    {
        volatile uint32_t CMPB [32UL];
        BITBANDING_PWMnCMPB_t CMPB_Bit;
    };
    union
    {
        volatile uint32_t GENA [32UL];
        BITBANDING_PWMnGENA_t GENA_Bit;
    };
    union
    {
        volatile uint32_t GENB [32UL];
        BITBANDING_PWMnGENB_t GENB_Bit;
    };
    union
    {
        volatile uint32_t DBCTL [32UL];
        BITBANDING_PWMnDBCTL_t DBCTL_Bit;
    };
    union
    {
        volatile uint32_t DBRISE [32UL];
        BITBANDING_PWMnDBRISE_t DBRISE_Bit;
    };
    union
    {
        volatile uint32_t DBFALL [32UL];
        BITBANDING_PWMnDBFALL_t DBFALL_Bit;
    };
    union
    {
        volatile uint32_t FLTSRC0 [32UL];
        BITBANDING_PWMnFLTSRC0_t FLTSRC0_Bit;
    };
    union
    {
        volatile uint32_t FLTSRC1 [32UL];
        BITBANDING_PWMnFLTSRC1_t FLTSRC1_Bit;
    };
    union
    {
        volatile uint32_t MINFLTPER [32UL];
        BITBANDING_PWMnMINFLTPER_t MINFLTPER_Bit;
    };
}BITBANDING_PWMGENERATOR_t;

typedef volatile struct
{
    union
    {
        volatile uint32_t FLTSEN [32UL];
        BITBANDING_PWMnFLTSEN_t FLTSEN_Bit;
    };
    union
    {
        volatile uint32_t FLTSTAT0 [32UL];
        BITBANDING_PWMnFLTSTAT0_t FLTSTAT0_Bit;
    };
    union
    {
        volatile uint32_t FLTSTAT1 [32UL];
        BITBANDING_PWMnFLTSTAT1_t FLTSTAT1_Bit;
    };
    const uint32_t reserved [29UL * 32UL];
}BITBANDING_PWMGENERATOR_EXT_t;

typedef volatile struct
{
    union
    {
        volatile uint32_t CTL [32UL];
        BITBANDING_PWMCTL_t CTL_Bit;
    };
    union
    {
        volatile uint32_t SYNC [32UL];
        BITBANDING_PWMSYNC_t SYNC_Bit;
    };
    union
    {
        volatile uint32_t ENABLE [32UL];
        BITBANDING_PWMENABLE_t ENABLE_Bit;
    };
    union
    {
        volatile uint32_t INVERT [32UL];
        BITBANDING_PWMINVERT_t INVERT_Bit;
    };
    union
    {
        volatile uint32_t FAULT [32UL];
        BITBANDING_PWMFAULT_t FAULT_Bit;
    };
    union
    {
        volatile uint32_t INTEN [32UL];
        BITBANDING_PWMINTEN_t INTEN_Bit;
    };
    union
    {
        volatile const uint32_t RIS [32UL];
        BITBANDING_PWMRIS_t RIS_Bit;
    };
    union
    {
        volatile uint32_t ISC [32UL];
        BITBANDING_PWMISC_t ISC_Bit;
    };
    union
    {
        volatile const uint32_t STATUS [32UL];
        BITBANDING_PWMSTATUS_t STATUS_Bit;
    };
    union
    {
        volatile uint32_t FAULTVAL [32UL];
        BITBANDING_PWMFAULTVAL_t FAULTVAL_Bit;
    };
    union
    {
        volatile uint32_t ENUPD [32UL];
        BITBANDING_PWMENUPD_t ENUPD_Bit;
    };
    const uint32_t reserved [5UL * 32UL];

    BITBANDING_PWMGENERATOR_t GENERATOR [4UL];

    const uint32_t reserved1 [432UL * 32UL];

    BITBANDING_PWMGENERATOR_EXT_t GENERATOR_EXT [4UL];

    const uint32_t reserved2 [368UL * 32UL];
    union
    {
        volatile const uint32_t PP [32UL];
        BITBANDING_PWMPP_t PP_Bit;
    };
    const uint32_t reserved3 [1UL * 32UL];
    union
    {
        volatile uint32_t CC [32UL];
        BITBANDING_PWMCC_t CC_Bit;
    };

    const uint32_t reserved4 [13UL * 32UL];
}PWM_BITBANDING_t;

typedef volatile struct
{
    PWM_BITBANDING_t MODULE [(uint32_t) PWM_enMODULE_MAX];
}PWMS_BITBANDING_t;

#endif /* XDRIVER_MCU_PWM_PERIPHERAL_STRUCT_XHEADER_PWM_STRUCTPERIPHERAL_BITBANDING_H_ */
