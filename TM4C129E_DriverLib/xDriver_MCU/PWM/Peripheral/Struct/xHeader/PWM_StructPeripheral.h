/**
 *
 * @file PWM_StructPeripheral.h
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

#ifndef XDRIVER_MCU_PWM_PERIPHERAL_STRUCT_XHEADER_PWM_STRUCTPERIPHERAL_H_
#define XDRIVER_MCU_PWM_PERIPHERAL_STRUCT_XHEADER_PWM_STRUCTPERIPHERAL_H_

#include <xDriver_MCU/PWM/Peripheral/Struct/xHeader/PWM_StructRegister.h>
#include <xDriver_MCU/PWM/Peripheral/xHeader/PWM_Enum.h>

typedef volatile struct
{
    union
    {
        volatile uint32_t CTL;
        PWMnCTL_t CTL_Bit;
    };
    union
    {
        volatile uint32_t INTEN;
        PWMnINTEN_t INTEN_Bit;
    };
    union
    {
        volatile const uint32_t RIS;
        PWMnRIS_t RIS_Bit;
    };
    union
    {
        volatile uint32_t ISC;
        PWMnISC_t ISC_Bit;
    };
    union
    {
        volatile uint32_t LOAD;
        PWMnLOAD_t LOAD_Bit;
    };
    union
    {
        volatile const uint32_t COUNT;
        PWMnCOUNT_t COUNT_Bit;
    };
    union
    {
        volatile uint32_t CMPA;
        PWMnCMPA_t CMPA_Bit;
    };
    union
    {
        volatile uint32_t CMPB;
        PWMnCMPB_t CMPB_Bit;
    };
    union
    {
        volatile uint32_t GENA;
        PWMnGENA_t GENA_Bit;
    };
    union
    {
        volatile uint32_t GENB;
        PWMnGENB_t GENB_Bit;
    };
    union
    {
        volatile uint32_t DBCTL;
        PWMnDBCTL_t DBCTL_Bit;
    };
    union
    {
        volatile uint32_t DBRISE;
        PWMnDBRISE_t DBRISE_Bit;
    };
    union
    {
        volatile uint32_t DBFALL;
        PWMnDBFALL_t DBFALL_Bit;
    };
    union
    {
        volatile uint32_t FLTSRC0;
        PWMnFLTSRC0_t FLTSRC0_Bit;
    };
    union
    {
        volatile uint32_t FLTSRC1;
        PWMnFLTSRC1_t FLTSRC1_Bit;
    };
    union
    {
        volatile uint32_t MINFLTPER;
        PWMnMINFLTPER_t MINFLTPER_Bit;
    };
}PWMGENERATOR_t;

typedef volatile struct
{
    union
    {
        volatile uint32_t FLTSEN;
        PWMnFLTSEN_t FLTSEN_Bit;
    };
    union
    {
        volatile uint32_t FLTSTAT0;
        PWMnFLTSTAT0_t FLTSTAT0_Bit;
    };
    union
    {
        volatile uint32_t FLTSTAT1;
        PWMnFLTSTAT1_t FLTSTAT1_Bit;
    };
    const uint32_t reserved [29UL];
}PWMGENERATOR_EXT_t;

typedef volatile struct
{
    union
    {
        volatile uint32_t CTL;
        PWMCTL_t CTL_Bit;
    };
    union
    {
        volatile uint32_t SYNC;
        PWMSYNC_t SYNC_Bit;
    };
    union
    {
        volatile uint32_t ENABLE;
        PWMENABLE_t ENABLE_Bit;
    };
    union
    {
        volatile uint32_t INVERT;
        PWMINVERT_t INVERT_Bit;
    };
    union
    {
        volatile uint32_t FAULT;
        PWMFAULT_t FAULT_Bit;
    };
    union
    {
        volatile uint32_t INTEN;
        PWMINTEN_t INTEN_Bit;
    };
    union
    {
        volatile const uint32_t RIS;
        PWMRIS_t RIS_Bit;
    };
    union
    {
        volatile uint32_t ISC;
        PWMISC_t ISC_Bit;
    };
    union
    {
        volatile const uint32_t STATUS;
        PWMSTATUS_t STATUS_Bit;
    };
    union
    {
        volatile uint32_t FAULTVAL;
        PWMFAULTVAL_t FAULTVAL_Bit;
    };
    union
    {
        volatile uint32_t ENUPD;
        PWMENUPD_t ENUPD_Bit;
    };
    const uint32_t reserved [5UL];

    PWMGENERATOR_t GENERATOR [4UL];

    const uint32_t reserved1 [432UL];

    PWMGENERATOR_EXT_t GENERATOR_EXT [4UL];

    const uint32_t reserved2 [368UL];
    union
    {
        volatile const uint32_t PP;
        PWMPP_t PP_Bit;
    };
    const uint32_t reserved3 [1UL];
    union
    {
        volatile uint32_t CC;
        PWMCC_t CC_Bit;
    };

    const uint32_t reserved4 [13UL];
}PWM_t;

typedef volatile struct
{
    PWM_t MODULE [(uint32_t) PWM_enMODULE_MAX];
}PWMS_t;

#endif /* XDRIVER_MCU_PWM_PERIPHERAL_STRUCT_XHEADER_PWM_STRUCTPERIPHERAL_H_ */
