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

#include <xDriver_MCU/PWM/Peripheral/xHeader/PWM_Enum.h>

/**
 *  Global Struct Definitions for PWM Generators
 */

typedef volatile struct
{
    volatile UBase_t GEN0_GLOBALSYNC: 1;
    volatile UBase_t GEN1_GLOBALSYNC: 1;
    volatile UBase_t GEN2_GLOBALSYNC: 1;
    volatile UBase_t GEN3_GLOBALSYNC: 1;
    const UBase_t reserved: 28;
}PWM_CTL_t;

typedef volatile struct
{
    volatile UBase_t GEN0_SYNC: 1;
    volatile UBase_t GEN1_SYNC: 1;
    volatile UBase_t GEN2_SYNC: 1;
    volatile UBase_t GEN3_SYNC: 1;
    const UBase_t reserved: 28;
}PWM_SYNC_t;

typedef volatile struct
{
    volatile const UBase_t GEN0_FAULT: 1;
    volatile const UBase_t GEN1_FAULT: 1;
    volatile const UBase_t GEN2_FAULT: 1;
    volatile const UBase_t GEN3_FAULT: 1;
    const UBase_t reserved1: 28;
}PWM_STATUS_t;

/**
 *  Global Struct Definitions for PWM Properties
 */

typedef volatile struct
{
    volatile const UBase_t GCNT: 4;
    volatile const UBase_t FCNT: 4;
    volatile const UBase_t ESYNC: 1;
    volatile const UBase_t EFAULT: 1;
    volatile const UBase_t ONE: 1;
    const UBase_t reserved: 21;
}PWM_PP_t;

typedef volatile struct
{
    volatile UBase_t PWMDIV: 3;
    const UBase_t reserved: 5;
    volatile UBase_t USEPWM: 1;
    const UBase_t reserved1: 23;
}PWM_CC_t;


typedef volatile struct
{
    volatile UBase_t GEN0_OUTA: 1;
    volatile UBase_t GEN0_OUTB: 1;
    volatile UBase_t GEN1_OUTA: 1;
    volatile UBase_t GEN1_OUTB: 1;
    volatile UBase_t GEN2_OUTA: 1;
    volatile UBase_t GEN2_OUTB: 1;
    volatile UBase_t GEN3_OUTA: 1;
    volatile UBase_t GEN3_OUTB: 1;
    const UBase_t reserved: 24;
}PWM_OUTPUT_ENABLE_t;

typedef volatile struct
{
    volatile UBase_t GEN0_OUTA: 1;
    volatile UBase_t GEN0_OUTB: 1;
    volatile UBase_t GEN1_OUTA: 1;
    volatile UBase_t GEN1_OUTB: 1;
    volatile UBase_t GEN2_OUTA: 1;
    volatile UBase_t GEN2_OUTB: 1;
    volatile UBase_t GEN3_OUTA: 1;
    volatile UBase_t GEN3_OUTB: 1;
    const UBase_t reserved: 24;
}PWM_OUTPUT_INVERT_t;

typedef volatile struct
{
    volatile UBase_t GEN0_OUTA: 1;
    volatile UBase_t GEN0_OUTB: 1;
    volatile UBase_t GEN1_OUTA: 1;
    volatile UBase_t GEN1_OUTB: 1;
    volatile UBase_t GEN2_OUTA: 1;
    volatile UBase_t GEN2_OUTB: 1;
    volatile UBase_t GEN3_OUTA: 1;
    volatile UBase_t GEN3_OUTB: 1;
    const UBase_t reserved: 24;
}PWM_OUTPUT_FAULTVAL_t;

typedef volatile struct
{
    volatile UBase_t GEN0_OUTA: 2;
    volatile UBase_t GEN0_OUTB: 2;
    volatile UBase_t GEN1_OUTA: 2;
    volatile UBase_t GEN1_OUTB: 2;
    volatile UBase_t GEN2_OUTA: 2;
    volatile UBase_t GEN2_OUTB: 2;
    volatile UBase_t GEN3_OUTA: 2;
    volatile UBase_t GEN3_OUTB: 2;
    const UBase_t reserved: 16;
}PWM_OUTPUT_ENUPD_t;

typedef volatile struct
{
    volatile UBase_t GEN0_OUTA: 1;
    volatile UBase_t GEN0_OUTB: 1;
    volatile UBase_t GEN1_OUTA: 1;
    volatile UBase_t GEN1_OUTB: 1;
    volatile UBase_t GEN2_OUTA: 1;
    volatile UBase_t GEN2_OUTB: 1;
    volatile UBase_t GEN3_OUTA: 1;
    volatile UBase_t GEN3_OUTB: 1;
    const UBase_t reserved: 24;
}PWM_OUTPUT_FAULT_t;


typedef volatile struct
{
    volatile UBase_t GEN0: 1;
    volatile UBase_t GEN1: 1;
    volatile UBase_t GEN2: 1;
    volatile UBase_t GEN3: 1;
    const UBase_t reserved: 12;
    volatile UBase_t GEN0_FAULT: 1;
    volatile UBase_t GEN1_FAULT: 1;
    volatile UBase_t GEN2_FAULT: 1;
    volatile UBase_t GEN3_FAULT: 1;
    const UBase_t reserved1: 12;
}PWM_INTEN_t;

typedef volatile struct
{
    volatile const UBase_t GEN0: 1;
    volatile const UBase_t GEN1: 1;
    volatile const UBase_t GEN2: 1;
    volatile const UBase_t GEN3: 1;
    const UBase_t reserved: 12;
    volatile const UBase_t GEN0_FAULT: 1;
    volatile const UBase_t GEN1_FAULT: 1;
    volatile const UBase_t GEN2_FAULT: 1;
    volatile const UBase_t GEN3_FAULT: 1;
    const UBase_t reserved1: 12;
}PWM_RIS_t;

typedef volatile struct
{
    volatile const UBase_t GEN0: 1;
    volatile const UBase_t GEN1: 1;
    volatile const UBase_t GEN2: 1;
    volatile const UBase_t GEN3: 1;
    const UBase_t reserved: 12;
    volatile UBase_t GEN0_FAULT: 1;
    volatile UBase_t GEN1_FAULT: 1;
    volatile UBase_t GEN2_FAULT: 1;
    volatile UBase_t GEN3_FAULT: 1;
    const UBase_t reserved1: 12;
}PWM_ISC_t;


/**
 * PWM Generators configurations
 */

typedef volatile struct
{
    volatile UBase_t ENABLE: 1;
    volatile UBase_t MODE: 1;
    volatile UBase_t DEBUG: 1;
    volatile UBase_t LOAD_UPD: 1;
    volatile UBase_t OUTA_CMP_UPD: 1;
    volatile UBase_t OUTB_CMP_UPD: 1;
    volatile UBase_t OUTA_ACTION_UPD: 2;
    volatile UBase_t OUTB_ACTION_UPD: 2;
    volatile UBase_t DB_CTL_UPD: 2;
    volatile UBase_t DB_RISE_UPD: 2;
    volatile UBase_t DB_FALL_UPD: 2;
    volatile UBase_t FAULT_SRC: 1;
    volatile UBase_t FAULT_MIN_PERIOD: 1;
    volatile UBase_t FAULT_LATCH: 1;
    const UBase_t reserved: 13;
}PWM_GEN_CTL_t;

typedef volatile struct
{
    volatile UBase_t CNT_ZERO_INT: 1;
    volatile UBase_t CNT_LOAD_INT: 1;
    volatile UBase_t OUTA_CMP_UP_INT: 1;
    volatile UBase_t OUTA_CMP_DOWN_INT: 1;
    volatile UBase_t OUTB_CMP_UP_INT: 1;
    volatile UBase_t OUTB_CMP_DOWN_INT: 1;
    const UBase_t reserved: 2;
    volatile UBase_t CNT_ZERO_TRG: 1;
    volatile UBase_t CNT_LOAD_TRG: 1;
    volatile UBase_t OUTA_CMP_UP_TRG: 1;
    volatile UBase_t OUTA_CMP_DOWN_TRG: 1;
    volatile UBase_t OUTB_CMP_UP_TRG: 1;
    volatile UBase_t OUTB_CMP_DOWN_TRG: 1;
    const UBase_t reserved1: 18;
}PWM_GEN_INTEN_t;

typedef volatile struct
{
    volatile const UBase_t CNT_ZERO_INT: 1;
    volatile const UBase_t CNT_LOAD_INT: 1;
    volatile const UBase_t OUTA_CMP_UP_INT: 1;
    volatile const UBase_t OUTA_CMP_DOWN_INT: 1;
    volatile const UBase_t OUTB_CMP_UP_INT: 1;
    volatile const UBase_t OUTB_CMP_DOWN_INT: 1;
    const UBase_t reserved: 26;
}PWM_GEN_RIS_t;

typedef volatile struct
{
    volatile UBase_t CNT_ZERO_INT: 1;
    volatile UBase_t CNT_LOAD_INT: 1;
    volatile UBase_t OUTA_CMP_UP_INT: 1;
    volatile UBase_t OUTA_CMP_DOWN_INT: 1;
    volatile UBase_t OUTB_CMP_UP_INT: 1;
    volatile UBase_t OUTB_CMP_DOWN_INT: 1;
    const UBase_t reserved: 26;
}PWM_GEN_ISC_t;

typedef volatile struct
{
    volatile UBase_t LOAD: 16;
    const UBase_t reserved: 16;
}PWM_GEN_LOAD_t;

typedef volatile struct
{
    volatile const UBase_t COUNT: 16;
    const UBase_t reserved: 16;
}PWM_GEN_COUNT_t;

typedef volatile struct
{
    volatile UBase_t COMP: 16;
    const UBase_t reserved: 16;
}PWM_GEN_OUTA_CMP_t;

typedef volatile struct
{
    volatile UBase_t COMP: 16;
    const UBase_t reserved: 16;
}PWM_GEN_OUTB_CMP_t;

typedef volatile struct
{
    volatile UBase_t ZERO: 2;
    volatile UBase_t LOAD: 2;
    volatile UBase_t OUTA_CMP_UP: 2;
    volatile UBase_t OUTA_CMP_DOWN: 2;
    volatile UBase_t OUTB_CMP_UP: 2;
    volatile UBase_t OUTB_CMP_DOWN: 2;
    const UBase_t reserved: 20;
}PWM_GEN_OUTA_ACTION_t;

typedef volatile struct
{
    volatile UBase_t ZERO: 2;
    volatile UBase_t LOAD: 2;
    volatile UBase_t OUTA_CMP_UP: 2;
    volatile UBase_t OUTA_CMP_DOWN: 2;
    volatile UBase_t OUTB_CMP_UP: 2;
    volatile UBase_t OUTB_CMP_DOWN: 2;
    const UBase_t reserved: 20;
}PWM_GEN_OUTB_ACTION_t;

typedef volatile struct
{
    volatile UBase_t ENABLE: 1;
    const UBase_t reserved: 31;
}PWM_GEN_DB_CTL_t;

typedef volatile struct
{
    volatile UBase_t DELAY: 12;
    const UBase_t reserved: 20;
}PWM_GEN_DB_RISE_t;

typedef volatile struct
{
    volatile UBase_t DELAY: 12;
    const UBase_t reserved: 20;
}PWM_GEN_DB_FALL_t;

typedef volatile struct
{
    volatile UBase_t PIN0: 1;
    volatile UBase_t PIN1: 1;
    volatile UBase_t PIN2: 1;
    volatile UBase_t PIN3: 1;
    const UBase_t reserved: 28;
}PWM_GEN_FAULT_PIN_ENABLE_t;

typedef volatile struct
{
    volatile UBase_t DCMP0: 1;
    volatile UBase_t DCMP1: 1;
    volatile UBase_t DCMP2: 1;
    volatile UBase_t DCMP3: 1;
    volatile UBase_t DCMP4: 1;
    volatile UBase_t DCMP5: 1;
    volatile UBase_t DCMP6: 1;
    volatile UBase_t DCMP7: 1;
    const UBase_t reserved: 24;
}PWM_GEN_FAULT_DCMP_ENABLE_t;

typedef volatile struct
{
    volatile UBase_t MFP: 16;
    const UBase_t reserved: 16;
}PWM_GEN_FAULT_MIN_PERIOD_t;

typedef volatile struct
{
    volatile UBase_t PIN0: 1;
    volatile UBase_t PIN1: 1;
    volatile UBase_t PIN2: 1;
    volatile UBase_t PIN3: 1;
    const UBase_t reserved: 28;
}PWM_GEN_FAULT_PIN_SENSE_t;

typedef volatile struct
{
    volatile UBase_t PIN0: 1;
    volatile UBase_t PIN1: 1;
    volatile UBase_t PIN2: 1;
    volatile UBase_t PIN3: 1;
    const UBase_t reserved: 28;
}PWM_GEN_FAULT_PIN_STAT_t;

typedef volatile struct
{
    volatile UBase_t DCMP0: 1;
    volatile UBase_t DCMP1: 1;
    volatile UBase_t DCMP2: 1;
    volatile UBase_t DCMP3: 1;
    volatile UBase_t DCMP4: 1;
    volatile UBase_t DCMP5: 1;
    volatile UBase_t DCMP6: 1;
    volatile UBase_t DCMP7: 1;
    const UBase_t reserved: 24;
}PWM_GEN_FAULT_DCMP_STAT_t;

#endif /* XDRIVER_MCU_PWM_PERIPHERAL_STRUCT_XHEADER_PWM_STRUCTREGISTER_H_ */
