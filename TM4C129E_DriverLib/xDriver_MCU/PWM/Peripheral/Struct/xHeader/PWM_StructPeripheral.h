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
        volatile UBase_t CTL;
        PWM_GEN_CTL_t CTL_Bit;
    };
    union
    {
        volatile UBase_t INTEN;
        PWM_GEN_INTEN_t INTEN_Bit;
    };
    union
    {
        volatile const UBase_t RIS;
        PWM_GEN_RIS_t RIS_Bit;
    };
    union
    {
        volatile UBase_t ISC;
        PWM_GEN_ISC_t ISC_Bit;
    };
    union
    {
        volatile UBase_t LOAD;
        PWM_GEN_LOAD_t LOAD_Bit;
    };
    union
    {
        volatile const UBase_t COUNT;
        PWM_GEN_COUNT_t COUNT_Bit;
    };
    union
    {
        volatile UBase_t OUTA_CMP;
        PWM_GEN_OUTA_CMP_t OUTA_CMP_Bit;
    };
    union
    {
        volatile UBase_t OUTB_CMP;
        PWM_GEN_OUTB_CMP_t OUTB_CMP_Bit;
    };
    union
    {
        volatile UBase_t OUTA_ACTION;
        PWM_GEN_OUTA_ACTION_t OUTA_ACTION_Bit;
    };
    union
    {
        volatile UBase_t OUTB_ACTION;
        PWM_GEN_OUTB_ACTION_t OUTB_ACTION_Bit;
    };
    union
    {
        volatile UBase_t DB_CTL;
        PWM_GEN_DB_CTL_t DB_CTL_Bit;
    };
    union
    {
        volatile UBase_t DB_RISE;
        PWM_GEN_DB_RISE_t DB_RISE_Bit;
    };
    union
    {
        volatile UBase_t DB_FALL;
        PWM_GEN_DB_FALL_t DB_FALL_Bit;
    };
    union
    {
        volatile UBase_t FAULT_PIN_ENABLE;
        PWM_GEN_FAULT_PIN_ENABLE_t FAULT_PIN_ENABLE_Bit;
    };
    union
    {
        volatile UBase_t FAULT_DCMP_ENABLE;
        PWM_GEN_FAULT_DCMP_ENABLE_t FAULT_DCMP_ENABLE_Bit;
    };
    union
    {
        volatile UBase_t FAULT_MIN_PERIOD;
        PWM_GEN_FAULT_MIN_PERIOD_t FAULT_MIN_PERIOD_Bit;
    };
}PWM_GEN_t;

typedef volatile struct
{
    union
    {
        volatile UBase_t FAULT_PIN_SENSE;
        PWM_GEN_FAULT_PIN_SENSE_t FAULT_PIN_SENSE_Bit;
    };
    union
    {
        volatile UBase_t FAULT_PIN_STAT;
        PWM_GEN_FAULT_PIN_STAT_t FAULT_PIN_STAT_Bit;
    };
    union
    {
        volatile UBase_t FAULT_DCMP_STAT;
        PWM_GEN_FAULT_DCMP_STAT_t FAULT_DCMP_STAT_Bit;
    };
    const UBase_t reserved [29UL];
}PWM_GEN_EXT_t;

typedef volatile struct
{
    union
    {
        volatile UBase_t CTL;
        PWM_CTL_t CTL_Bit;
    };
    union
    {
        volatile UBase_t SYNC;
        PWM_SYNC_t SYNC_Bit;
    };
    union
    {
        volatile UBase_t OUTPUT_ENABLE;
        PWM_OUTPUT_ENABLE_t OUTPUT_ENABLE_Bit;
    };
    union
    {
        volatile UBase_t OUTPUT_INVERT;
        PWM_OUTPUT_INVERT_t OUTPUT_INVERT_Bit;
    };
    union
    {
        volatile UBase_t OUTPUT_FAULT;
        PWM_OUTPUT_FAULT_t OUTPUT_FAULT_Bit;
    };
    union
    {
        volatile UBase_t INTEN;
        PWM_INTEN_t INTEN_Bit;
    };
    union
    {
        volatile const UBase_t RIS;
        PWM_RIS_t RIS_Bit;
    };
    union
    {
        volatile UBase_t ISC;
        PWM_ISC_t ISC_Bit;
    };
    union
    {
        volatile const UBase_t STATUS;
        PWM_STATUS_t STATUS_Bit;
    };
    union
    {
        volatile UBase_t OUTPUT_FAULTVAL;
        PWM_OUTPUT_FAULTVAL_t OUTPUT_FAULTVAL_Bit;
    };
    union
    {
        volatile UBase_t OUTPUT_ENUPD;
        PWM_OUTPUT_ENUPD_t OUTPUT_ENUPD_Bit;
    };
    const UBase_t reserved [5UL];

    PWM_GEN_t GENERATOR [4UL];

    const UBase_t reserved1 [432UL];

    PWM_GEN_EXT_t GENERATOR_EXT [4UL];

    const UBase_t reserved2 [368UL];
    union
    {
        volatile const UBase_t PP;
        PWM_PP_t PP_Bit;
    };
    const UBase_t reserved3 [1UL];
    union
    {
        volatile UBase_t CC;
        PWM_CC_t CC_Bit;
    };

    const UBase_t reserved4 [13UL];
}PWM_t;

typedef volatile struct
{
    PWM_t MODULE [(UBase_t) PWM_enMODULE_MAX];
}PWMS_t;

#endif /* XDRIVER_MCU_PWM_PERIPHERAL_STRUCT_XHEADER_PWM_STRUCTPERIPHERAL_H_ */
