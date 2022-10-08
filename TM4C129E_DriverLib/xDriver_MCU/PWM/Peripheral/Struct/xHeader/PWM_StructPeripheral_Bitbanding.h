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
        volatile UBase_t CTL [32UL];
        PWM_GEN_BITBANDING_CTL_t CTL_Bit;
    };
    union
    {
        volatile UBase_t INTEN [32UL];
        PWM_GEN_BITBANDING_INTEN_t INTEN_Bit;
    };
    union
    {
        volatile const UBase_t RIS [32UL];
        PWM_GEN_BITBANDING_RIS_t RIS_Bit;
    };
    union
    {
        volatile UBase_t ISC [32UL];
        PWM_GEN_BITBANDING_ISC_t ISC_Bit;
    };
    union
    {
        volatile UBase_t LOAD [32UL];
        PWM_GEN_BITBANDING_LOAD_t LOAD_Bit;
    };
    union
    {
        volatile const UBase_t COUNT [32UL];
        PWM_GEN_BITBANDING_COUNT_t COUNT_Bit;
    };
    union
    {
        volatile UBase_t OUTA_CMP [32UL];
        PWM_GEN_BITBANDING_OUTA_CMP_t OUTA_CMP_Bit;
    };
    union
    {
        volatile UBase_t OUTB_CMP [32UL];
        PWM_GEN_BITBANDING_OUTB_CMP_t OUTB_CMP_Bit;
    };
    union
    {
        volatile UBase_t OUTA_ACTION [32UL];
        PWM_GEN_BITBANDING_OUTA_ACTION_t OUTA_ACTION_Bit;
    };
    union
    {
        volatile UBase_t OUTB_ACTION [32UL];
        PWM_GEN_BITBANDING_OUTB_ACTION_t OUTB_ACTION_Bit;
    };
    union
    {
        volatile UBase_t DB_CTL [32UL];
        PWM_GEN_BITBANDING_DB_CTL_t DB_CTL_Bit;
    };
    union
    {
        volatile UBase_t DB_RISE [32UL];
        PWM_GEN_BITBANDING_DB_RISE_t DB_RISE_Bit;
    };
    union
    {
        volatile UBase_t DB_FALL [32UL];
        PWM_GEN_BITBANDING_DB_FALL_t DB_FALL_Bit;
    };
    union
    {
        volatile UBase_t FAULT_PIN_ENABLE [32UL];
        PWM_GEN_BITBANDING_FAULT_PIN_ENABLE_t FAULT_PIN_ENABLE_Bit;
    };
    union
    {
        volatile UBase_t FAULT_DCMP_ENABLE [32UL];
        PWM_GEN_BITBANDING_FAULT_DCMP_ENABLE_t FAULT_DCMP_ENABLE_Bit;
    };
    union
    {
        volatile UBase_t FAULT_MIN_PERIOD [32UL];
        PWM_GEN_BITBANDING_FAULT_MIN_PERIOD_t FAULT_MIN_PERIOD_Bit;
    };
}PWM_GEN_BITBANDING_t;

typedef volatile struct
{
    union
    {
        volatile UBase_t FAULT_PIN_SENSE [32UL];
        PWM_GEN_BITBANDING_FAULT_PIN_SENSE_t FAULT_PIN_SENSE_Bit;
    };
    union
    {
        volatile UBase_t FAULT_PIN_STAT [32UL];
        PWM_GEN_BITBANDING_FAULT_PIN_STAT_t FAULT_PIN_STAT_Bit;
    };
    union
    {
        volatile UBase_t FAULT_DCMP_STAT [32UL];
        PWM_GEN_BITBANDING_FAULT_DCMP_STAT_t FAULT_DCMP_STAT_Bit;
    };
    const UBase_t reserved [29UL * 32UL];
}PWM_GEN_BITBANDING_EXT_t;

typedef volatile struct
{
    union
    {
        volatile UBase_t CTL [32UL];
        PWM_BITBANDING_CTL_t CTL_Bit;
    };
    union
    {
        volatile UBase_t SYNC [32UL];
        PWM_BITBANDING_SYNC_t SYNC_Bit;
    };
    union
    {
        volatile UBase_t OUTPUT_ENABLE [32UL];
        PWM_OUTPUT_BITBANDING_ENABLE_t OUTPUT_ENABLE_Bit;
    };
    union
    {
        volatile UBase_t OUTPUT_INVERT [32UL];
        PWM_OUTPUT_BITBANDING_INVERT_t OUTPUT_INVERT_Bit;
    };
    union
    {
        volatile UBase_t OUTPUT_FAULT [32UL];
        PWM_OUTPUT_BITBANDING_FAULT_t OUTPUT_FAULT_Bit;
    };
    union
    {
        volatile UBase_t INTEN [32UL];
        PWM_BITBANDING_INTEN_t INTEN_Bit;
    };
    union
    {
        volatile const UBase_t RIS [32UL];
        PWM_BITBANDING_RIS_t RIS_Bit;
    };
    union
    {
        volatile UBase_t ISC [32UL];
        PWM_BITBANDING_ISC_t ISC_Bit;
    };
    union
    {
        volatile const UBase_t STATUS [32UL];
        PWM_BITBANDING_STATUS_t STATUS_Bit;
    };
    union
    {
        volatile UBase_t OUTPUT_FAULTVAL [32UL];
        PWM_OUTPUT_BITBANDING_FAULTVAL_t OUTPUT_FAULTVAL_Bit;
    };
    union
    {
        volatile UBase_t OUTPUT_ENUPD [32UL];
        PWM_OUTPUT_BITBANDING_ENUPD_t OUTPUT_ENUPD_Bit;
    };
    const UBase_t reserved [5UL * 32UL];

    PWM_GEN_BITBANDING_t GENERATOR [4UL];

    const UBase_t reserved1 [432UL * 32UL];

    PWM_GEN_BITBANDING_EXT_t GENERATOR_EXT [4UL];

    const UBase_t reserved2 [368UL * 32UL];
    union
    {
        volatile const UBase_t PP [32UL];
        PWM_BITBANDING_PP_t PP_Bit;
    };
    const UBase_t reserved3 [1UL * 32UL];
    union
    {
        volatile UBase_t CC [32UL];
        PWM_BITBANDING_CC_t CC_Bit;
    };

    const UBase_t reserved4 [13UL * 32UL];
}PWM_BITBANDING_t;

typedef volatile struct
{
    PWM_BITBANDING_t MODULE [(UBase_t) PWM_enMODULE_MAX];
}PWMS_BITBANDING_t;

#endif /* XDRIVER_MCU_PWM_PERIPHERAL_STRUCT_XHEADER_PWM_STRUCTPERIPHERAL_BITBANDING_H_ */
