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

#include <xDriver_MCU/PWM/Peripheral/xHeader/PWM_Enum.h>

/**
 *  Global Struct Definitions for PWM Generators
 */

typedef volatile struct
{
    volatile UBase_t GEN0_GLOBALSYNC;
    volatile UBase_t GEN1_GLOBALSYNC;
    volatile UBase_t GEN2_GLOBALSYNC;
    volatile UBase_t GEN3_GLOBALSYNC;
    const UBase_t reserved [28UL];
}PWM_BITBANDING_CTL_t;

typedef volatile struct
{
    volatile UBase_t GEN0_SYNC;
    volatile UBase_t GEN1_SYNC;
    volatile UBase_t GEN2_SYNC;
    volatile UBase_t GEN3_SYNC;
    const UBase_t reserved [28UL];
}PWM_BITBANDING_SYNC_t;

typedef volatile struct
{
    volatile const UBase_t FAULT0;
    volatile const UBase_t FAULT1;
    volatile const UBase_t FAULT2;
    volatile const UBase_t FAULT3;
    const UBase_t reserved1 [28UL];
}PWM_BITBANDING_STATUS_t;

/**
 *  Global Struct Definitions for PWM Properties
 */

typedef volatile struct
{
    volatile const UBase_t GCNT [4UL];
    volatile const UBase_t FCNT [4UL];
    volatile const UBase_t ESYNC;
    volatile const UBase_t EFAULT;
    volatile const UBase_t ONE;
    const UBase_t reserved [21UL];
}PWM_BITBANDING_PP_t;

typedef volatile struct
{
    volatile UBase_t PWMDIV [3UL];
    const UBase_t reserved [5UL];
    volatile UBase_t USEPWM;
    const UBase_t reserved1 [23UL];
}PWM_BITBANDING_CC_t;

typedef volatile struct
{
    volatile UBase_t GEN0_OUTA;
    volatile UBase_t GEN0_OUTB;
    volatile UBase_t GEN1_OUTA;
    volatile UBase_t GEN1_OUTB;
    volatile UBase_t GEN2_OUTA;
    volatile UBase_t GEN2_OUTB;
    volatile UBase_t GEN3_OUTA;
    volatile UBase_t GEN3_OUTB;
    const UBase_t reserved [24UL];
}PWM_OUTPUT_BITBANDING_ENABLE_t;

typedef volatile struct
{
    volatile UBase_t GEN0_OUTA;
    volatile UBase_t GEN0_OUTB;
    volatile UBase_t GEN1_OUTA;
    volatile UBase_t GEN1_OUTB;
    volatile UBase_t GEN2_OUTA;
    volatile UBase_t GEN2_OUTB;
    volatile UBase_t GEN3_OUTA;
    volatile UBase_t GEN3_OUTB;
    const UBase_t reserved [24UL];
}PWM_OUTPUT_BITBANDING_INVERT_t;

typedef volatile struct
{
    volatile UBase_t GEN0_OUTA;
    volatile UBase_t GEN0_OUTB;
    volatile UBase_t GEN1_OUTA;
    volatile UBase_t GEN1_OUTB;
    volatile UBase_t GEN2_OUTA;
    volatile UBase_t GEN2_OUTB;
    volatile UBase_t GEN3_OUTA;
    volatile UBase_t GEN3_OUTB;
    const UBase_t reserved [24UL];
}PWM_OUTPUT_BITBANDING_FAULTVAL_t;

typedef volatile struct
{
    volatile UBase_t GEN0_OUTA [2UL];
    volatile UBase_t GEN0_OUTB [2UL];
    volatile UBase_t GEN1_OUTA [2UL];
    volatile UBase_t GEN1_OUTB [2UL];
    volatile UBase_t GEN2_OUTA [2UL];
    volatile UBase_t GEN2_OUTB [2UL];
    volatile UBase_t GEN3_OUTA [2UL];
    volatile UBase_t GEN3_OUTB [2UL];
    const UBase_t reserved [16UL];
}PWM_OUTPUT_BITBANDING_ENUPD_t;

typedef volatile struct
{
    volatile UBase_t GEN0_OUTA;
    volatile UBase_t GEN0_OUTB;
    volatile UBase_t GEN1_OUTA;
    volatile UBase_t GEN1_OUTB;
    volatile UBase_t GEN2_OUTA;
    volatile UBase_t GEN2_OUTB;
    volatile UBase_t GEN3_OUTA;
    volatile UBase_t GEN3_OUTB;
    const UBase_t reserved [24UL];
}PWM_OUTPUT_BITBANDING_FAULT_t;

typedef volatile struct
{
    volatile UBase_t GEN0;
    volatile UBase_t GEN1;
    volatile UBase_t GEN2;
    volatile UBase_t GEN3;
    const UBase_t reserved [12UL];
    volatile UBase_t GEN0_FAULT;
    volatile UBase_t GEN1_FAULT;
    volatile UBase_t GEN2_FAULT;
    volatile UBase_t GEN3_FAULT;
    const UBase_t reserved1 [12UL];
}PWM_BITBANDING_INTEN_t;

typedef volatile struct
{
    volatile const UBase_t GEN0;
    volatile const UBase_t GEN1;
    volatile const UBase_t GEN2;
    volatile const UBase_t GEN3;
    const UBase_t reserved [12UL];
    volatile const UBase_t GEN0_FAULT;
    volatile const UBase_t GEN1_FAULT;
    volatile const UBase_t GEN2_FAULT;
    volatile const UBase_t GEN3_FAULT;
    const UBase_t reserved1 [12UL];
}PWM_BITBANDING_RIS_t;

typedef volatile struct
{
    volatile const UBase_t GEN0;
    volatile const UBase_t GEN1;
    volatile const UBase_t GEN2;
    volatile const UBase_t GEN3;
    const UBase_t reserved [12UL];
    volatile UBase_t GEN0_FAULT;
    volatile UBase_t GEN1_FAULT;
    volatile UBase_t GEN2_FAULT;
    volatile UBase_t GEN3_FAULT;
    const UBase_t reserved1 [12UL];
}PWM_BITBANDING_ISC_t;

/**
 * PWM Generators configurations
 */

typedef volatile struct
{
    volatile UBase_t ENABLE;
    volatile UBase_t MODE;
    volatile UBase_t DEBUG;
    volatile UBase_t LOAD_UPD;
    volatile UBase_t OUTA_CMP_UPD;
    volatile UBase_t OUTB_CMP_UPD;
    volatile UBase_t OUTA_ACTION_UPD [2UL];
    volatile UBase_t OUTB_ACTION_UPD [2UL];
    volatile UBase_t DB_CTL_UPD [2UL];
    volatile UBase_t DB_RISE_UPD [2UL];
    volatile UBase_t DB_FALL_UPD [2UL];
    volatile UBase_t FAULT_SRC;
    volatile UBase_t FAULT_MIN_PERIOD;
    volatile UBase_t FAULT_LATCH;
    const UBase_t reserved [13UL];
}PWM_GEN_BITBANDING_CTL_t;

typedef volatile struct
{
    volatile UBase_t CNT_ZERO_INT;
    volatile UBase_t CNT_LOAD_INT;
    volatile UBase_t OUTA_CMP_UP_INT;
    volatile UBase_t OUTA_CMP_DOWN_INT;
    volatile UBase_t OUTB_CMP_UP_INT;
    volatile UBase_t OUTB_CMP_DOWN_INT;
    const UBase_t reserved [2UL];
    volatile UBase_t CNT_ZERO_TRG;
    volatile UBase_t CNT_LOAD_TRG;
    volatile UBase_t OUTA_CMP_UP_TRG;
    volatile UBase_t OUTA_CMP_DOWN_TRG;
    volatile UBase_t OUTB_CMP_UP_TRG;
    volatile UBase_t OUTB_CMP_DOWN_TRG;
    const UBase_t reserved1 [18UL];
}PWM_GEN_BITBANDING_INTEN_t;

typedef volatile struct
{
    volatile const UBase_t CNT_ZERO_INT;
    volatile const UBase_t CNT_LOAD_INT;
    volatile const UBase_t OUTA_CMP_UP_INT;
    volatile const UBase_t OUTA_CMP_DOWN_INT;
    volatile const UBase_t OUTB_CMP_UP_INT;
    volatile const UBase_t OUTB_CMP_DOWN_INT;
    const UBase_t reserved [26UL];
}PWM_GEN_BITBANDING_RIS_t;

typedef volatile struct
{
    volatile UBase_t CNT_ZERO_INT;
    volatile UBase_t CNT_LOAD_INT;
    volatile UBase_t OUTA_CMP_UP_INT;
    volatile UBase_t OUTA_CMP_DOWN_INT;
    volatile UBase_t OUTB_CMP_UP_INT;
    volatile UBase_t OUTB_CMP_DOWN_INT;
    const UBase_t reserved [26UL];
}PWM_GEN_BITBANDING_ISC_t;

typedef volatile struct
{
    volatile UBase_t LOAD [16UL];
    const UBase_t reserved [16UL];
}PWM_GEN_BITBANDING_LOAD_t;

typedef volatile struct
{
    volatile const UBase_t COUNT [16UL];
    const UBase_t reserved [16UL];
}PWM_GEN_BITBANDING_COUNT_t;

typedef volatile struct
{
    volatile UBase_t COMP [16UL];
    const UBase_t reserved [16UL];
}PWM_GEN_BITBANDING_OUTA_CMP_t;

typedef volatile struct
{
    volatile UBase_t COMP [16UL];
    const UBase_t reserved [16UL];
}PWM_GEN_BITBANDING_OUTB_CMP_t;

typedef volatile struct
{
    volatile UBase_t ZERO [2UL];
    volatile UBase_t LOAD [2UL];
    volatile UBase_t OUTA_CMP_UP [2UL];
    volatile UBase_t OUTA_CMP_DOWN [2UL];
    volatile UBase_t OUTB_CMP_UP [2UL];
    volatile UBase_t OUTB_CMP_DOWN [2UL];
    const UBase_t reserved [20UL];
}PWM_GEN_BITBANDING_OUTA_ACTION_t;

typedef volatile struct
{
    volatile UBase_t ZERO [2UL];
    volatile UBase_t LOAD [2UL];
    volatile UBase_t OUTA_CMP_UP [2UL];
    volatile UBase_t OUTA_CMP_DOWN [2UL];
    volatile UBase_t OUTB_CMP_UP [2UL];
    volatile UBase_t OUTB_CMP_DOWN [2UL];
    const UBase_t reserved [20UL];
}PWM_GEN_BITBANDING_OUTB_ACTION_t;

typedef volatile struct
{
    volatile UBase_t ENABLE;
    const UBase_t reserved [31UL];
}PWM_GEN_BITBANDING_DB_CTL_t;

typedef volatile struct
{
    volatile UBase_t DELAY [12UL];
    const UBase_t reserved [20UL];
}PWM_GEN_BITBANDING_DB_RISE_t;

typedef volatile struct
{
    volatile UBase_t DELAY [12UL];
    const UBase_t reserved [20UL];
}PWM_GEN_BITBANDING_DB_FALL_t;

typedef volatile struct
{
    volatile UBase_t PIN0;
    volatile UBase_t PIN1;
    volatile UBase_t PIN2;
    volatile UBase_t PIN3;
    const UBase_t reserved [28UL];
}PWM_GEN_BITBANDING_FAULT_PIN_ENABLE_t;

typedef volatile struct
{
    volatile UBase_t DCMP0;
    volatile UBase_t DCMP1;
    volatile UBase_t DCMP2;
    volatile UBase_t DCMP3;
    volatile UBase_t DCMP4;
    volatile UBase_t DCMP5;
    volatile UBase_t DCMP6;
    volatile UBase_t DCMP7;
    const UBase_t reserved [24UL];
}PWM_GEN_BITBANDING_FAULT_DCMP_ENABLE_t;

typedef volatile struct
{
    volatile UBase_t MFP [16UL];
    const UBase_t reserved [16UL];
}PWM_GEN_BITBANDING_FAULT_MIN_PERIOD_t;

typedef volatile struct
{
    volatile UBase_t PIN0;
    volatile UBase_t PIN1;
    volatile UBase_t PIN2;
    volatile UBase_t PIN3;
    const UBase_t reserved [28UL];
}PWM_GEN_BITBANDING_FAULT_PIN_SENSE_t;

typedef volatile struct
{
    volatile UBase_t PIN0;
    volatile UBase_t PIN1;
    volatile UBase_t PIN2;
    volatile UBase_t PIN3;
    const UBase_t reserved [28UL];
}PWM_GEN_BITBANDING_FAULT_PIN_STAT_t;

typedef volatile struct
{
    volatile UBase_t DCMP0;
    volatile UBase_t DCMP1;
    volatile UBase_t DCMP2;
    volatile UBase_t DCMP3;
    volatile UBase_t DCMP4;
    volatile UBase_t DCMP5;
    volatile UBase_t DCMP6;
    volatile UBase_t DCMP7;
    const UBase_t reserved [24UL];
}PWM_GEN_BITBANDING_FAULT_DCMP_STAT_t;

#endif /* XDRIVER_MCU_PWM_PERIPHERAL_STRUCT_XHEADER_PWM_STRUCTREGISTER_BITBANDING_H_ */
