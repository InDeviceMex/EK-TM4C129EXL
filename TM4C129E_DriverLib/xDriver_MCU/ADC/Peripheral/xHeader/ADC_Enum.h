/**
 *
 * @file ADC_Enum.h
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
 * @verbatim 26 sep. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 26 sep. 2020     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_ADC_PERIPHERAL_XHEADER_ADC_ENUM_H_
#define XDRIVER_MCU_ADC_PERIPHERAL_XHEADER_ADC_ENUM_H_

#include <xDriver_MCU/GPIO/Peripheral/xHeader/GPIO_Enum.h>
#include <xDriver_MCU/Common/xHeader/MCU_Enum.h>

typedef enum
{
    ADC_enERROR_OK = (uint32_t) MCU_enERROR_OK,
    ADC_enERROR_POINTER = (uint32_t) MCU_enERROR_POINTER,
    ADC_enERROR_VALUE = (uint32_t) MCU_enERROR_VALUE,
    ADC_enERROR_RANGE = (uint32_t) MCU_enERROR_RANGE,
    ADC_enERROR_EMPTY = (uint32_t) MCU_enERROR_EMPTY,
    ADC_enERROR_UNDEF = (uint32_t) MCU_enERROR_UNDEF,
}ADC_nERROR;

typedef enum
{
    ADC_enSTATE_DIS = (uint32_t) MCU_enSTATE_DIS,
    ADC_enSTATE_ENA = (uint32_t) MCU_enSTATE_ENA,
    ADC_enSTATE_UNDEF = (uint32_t) MCU_enSTATE_UNDEF,
} ADC_nSTATE;

typedef enum
{
    ADC_enSTATUS_INACTIVE = (uint32_t) MCU_enSTATUS_INACTIVE,
    ADC_enSTATUS_ACTIVE = (uint32_t) MCU_enSTATUS_ACTIVE,
    ADC_enSTATUS_UNDEF = (uint32_t) MCU_enSTATUS_UNDEF,
} ADC_nSTATUS;

typedef enum
{
    ADC_enPRI0 = (uint32_t) MCU_enPRI0,
    ADC_enPRI1 = (uint32_t) MCU_enPRI1,
    ADC_enPRI2 = (uint32_t) MCU_enPRI2,
    ADC_enPRI3 = (uint32_t) MCU_enPRI3,
    ADC_enPRI4 = (uint32_t) MCU_enPRI4,
    ADC_enPRI5 = (uint32_t) MCU_enPRI5,
    ADC_enPRI6 = (uint32_t) MCU_enPRI6,
    ADC_enPRI7 = (uint32_t) MCU_enPRI7,
    ADC_enPRIMAX = (uint32_t) MCU_enPRIMAX,
    ADC_enDEFAULT = (uint32_t) MCU_enDEFAULT,
}ADC_nPRIORITY;

typedef enum
{
    ADC_enMODULE_0 = 0UL,
    ADC_enMODULE_1 = 1UL,
    ADC_enMODULE_MAX = 2UL,
}ADC_nMODULE;

typedef enum
{
    ADC_enSEQ_0 = 0UL,
    ADC_enSEQ_1 = 1UL,
    ADC_enSEQ_2 = 2UL,
    ADC_enSEQ_3 = 3UL,
    ADC_enSEQ_MAX = 4UL,
    ADC_enSEQ_UNDEF = 0xFFFFFFFFUL,
}ADC_nSEQUENCER;

typedef enum
{
    ADC_enSEQMASK_NONE = 0x0UL,
    ADC_enSEQMASK_0 = 0x1UL,
    ADC_enSEQMASK_1 = 0x2UL,
    ADC_enSEQMASK_2 = 0x4UL,
    ADC_enSEQMASK_3 = 0x8UL,
    ADC_enSEQMASK_ALL = 0xFUL,
    ADC_enSEQMASK_MAX = 0x10UL,
    ADC_enSEQMASK_UNDEF = 0xFFFFFFFFUL,
}ADC_nSEQMASK;

typedef enum
{
    ADC_enINT_TYPE_SAMPLE = 0x0UL,
    ADC_enINT_TYPE_DMA = 0x1UL,
    ADC_enINT_TYPE_COMP = 0x2UL,
    ADC_enINT_TYPE_MAX = 0x3UL,
    ADC_enINT_TYPE_UNDEF = 0xFFFFFFFFUL,
}ADC_nINT_TYPE;

typedef enum
{
    ADC_enTRIGGER_SOFTWARE = 0UL,
    ADC_enTRIGGER_ANALOG_COMP0 = 1UL,
    ADC_enTRIGGER_ANALOG_COMP1 = 2UL,
    ADC_enTRIGGER_ANALOG_COMP2 = 2UL,
    ADC_enTRIGGER_GPIO = 4UL,
    ADC_enTRIGGER_TIMER = 5UL,
    ADC_enTRIGGER_PWM0 = 6UL,
    ADC_enTRIGGER_PWM1 = 7UL,
    ADC_enTRIGGER_PWM2 = 8UL,
    ADC_enTRIGGER_PWM3 = 9UL,
    ADC_enTRIGGER_NEVER = 14UL,
    ADC_enTRIGGER_CONTINUE = 15UL,
    ADC_enTRIGGER_UNDEF = 0xFFFFFFFFUL,
}ADC_nTRIGGER;

typedef enum
{
    ADC_enSEQ_PWM_MODULE0 = 0UL,
    ADC_enSEQ_PWM_UNDEF = 0xFFFFFFFFUL,
}ADC_nSEQ_PWM;

typedef enum
{
    ADC_enSEQ_PRIORITY_HIGH = 0UL,
    ADC_enSEQ_PRIORITY_MEDIUM = 1UL,
    ADC_enSEQ_PRIORITY_LOW = 2UL,
    ADC_enSEQ_PRIORITY_VERY_LOW = 3UL,
    ADC_enSEQ_PRIORITY_UNDEF = 0xFFFFFFFFUL,
}ADC_nSEQ_PRIORITY;

typedef enum
{
    ADC_enGLOBAL_SYNC_NOEFFECT = 0UL,
    ADC_enGLOBAL_SYNC_INIT = 1UL,
    ADC_enGLOBAL_SYNC_UNDEF = 0xFFFFFFFFUL,
}ADC_nGLOBAL_SYNC;

typedef enum
{
    ADC_enPHASE_0 = 0UL,
    ADC_enPHASE_22_5 = 1UL,
    ADC_enPHASE_45 = 2UL,
    ADC_enPHASE_67_5 = 3UL,
    ADC_enPHASE_90 = 4UL,
    ADC_enPHASE_112_5 = 5UL,
    ADC_enPHASE_135 = 6UL,
    ADC_enPHASE_157_5 = 7UL,
    ADC_enPHASE_180 = 8UL,
    ADC_enPHASE_202_5 = 9UL,
    ADC_enPHASE_225 = 10UL,
    ADC_enPHASE_247_5 = 11UL,
    ADC_enPHASE_270 = 12UL,
    ADC_enPHASE_292_5 = 13UL,
    ADC_enPHASE_315 = 14UL,
    ADC_enPHASE_337_5 = 15UL,
    ADC_enPHASE_UNDEF = 0xFFFFFFFFUL,
}ADC_nPHASE;

typedef enum
{
    ADC_enAVERAGE_DIS = 0UL,
    ADC_enAVERAGE_2 = 1UL,
    ADC_enAVERAGE_4 = 2UL,
    ADC_enAVERAGE_8 = 3UL,
    ADC_enAVERAGE_16 = 4UL,
    ADC_enAVERAGE_32 = 5UL,
    ADC_enAVERAGE_64 = 6UL,
    ADC_enAVERAGE_UNDEF = 0xFFFFFFFFUL,
}ADC_nAVERAGE;

typedef enum
{
    ADC_enCONVERSION_RATE_112 = 1UL,
    ADC_enCONVERSION_RATE_48 = 3UL,
    ADC_enCONVERSION_RATE_16 = 5UL,
    ADC_enCONVERSION_RATE_1 = 7UL,
    ADC_enCONVERSION_RATE_UNDEF = 0xFFFFFFFFUL,
}ADC_nCONVERSION_RATE;

typedef enum
{
    ADC_enCLOCK_PLL_VCO = 0UL,
    ADC_enCLOCK_ALTCLK = 1UL,
    ADC_enCLOCK_MOSC = 2UL,
    ADC_enCLOCK_UNDEF = 0xFFFFFFFFUL,
}ADC_nCLOCK;

typedef enum
{
    ADC_enCOMPARATOR_0 = 0UL,
    ADC_enCOMPARATOR_1 = 1UL,
    ADC_enCOMPARATOR_2 = 2UL,
    ADC_enCOMPARATOR_3 = 3UL,
    ADC_enCOMPARATOR_4 = 4UL,
    ADC_enCOMPARATOR_5 = 5UL,
    ADC_enCOMPARATOR_6 = 6UL,
    ADC_enCOMPARATOR_7 = 7UL,
    ADC_enCOMPARATOR_MAX = 8UL,
    ADC_enCOMPARATOR_UNDEF = 0xFFFFFFFFUL,
}ADC_nCOMPARATOR;

typedef enum
{
    ADC_enCOMPMASK_0 = 0x1UL,
    ADC_enCOMPMASK_1 = 0x2UL,
    ADC_enCOMPMASK_2 = 0x4UL,
    ADC_enCOMPMASK_3 = 0x8UL,
    ADC_enCOMPMASK_4 = 0x10UL,
    ADC_enCOMPMASK_5 = 0x20UL,
    ADC_enCOMPMASK_6 = 0x40UL,
    ADC_enCOMPMASK_7 = 0x80UL,
    ADC_enCOMPMASK_ALL = 0xFFUL,
    ADC_enCOMPMASK_MAX = 0x100UL,
    ADC_enCOMPMASK_UNDEF = 0xFFFFFFFFUL,
}ADC_nCOMPMASK;


typedef enum
{
    ADC_enVREF_VDDA = 0UL,
    ADC_enVREF_VREFA = 1UL,
    ADC_enVREF_UNDEF = 0xFFFFFFFFUL,
}ADC_nVREF;

typedef enum
{
    ADC_enSAMPLE_0 = 0UL,
    ADC_enSAMPLE_1 = 1UL,
    ADC_enSAMPLE_2 = 2UL,
    ADC_enSAMPLE_3 = 3UL,
    ADC_enSAMPLE_4 = 4UL,
    ADC_enSAMPLE_5 = 5UL,
    ADC_enSAMPLE_6 = 6UL,
    ADC_enSAMPLE_7 = 7UL,
    ADC_enSAMPLE_MAX = 8UL,
    ADC_enSAMPLE_UNDEF = 0xFFFFFFFFUL,
}ADC_nSAMPLE;

typedef enum
{
    ADC_enSAMPLEMASK_NONE = 0UL,
    ADC_enSAMPLEMASK_0 = 0x0001UL,
    ADC_enSAMPLEMASK_1 = 0x0002UL,
    ADC_enSAMPLEMASK_2 = 0x0004UL,
    ADC_enSAMPLEMASK_3 = 0x0008UL,
    ADC_enSAMPLEMASK_4 = 0x0010UL,
    ADC_enSAMPLEMASK_5 = 0x0020UL,
    ADC_enSAMPLEMASK_6 = 0x0040UL,
    ADC_enSAMPLEMASK_7 = 0x0080UL,
    ADC_enSAMPLEMASK_ALL = 0x00FFUL,
    ADC_enSAMPLEMASK_UNDEF = 0xFFFFFFFFUL,
}ADC_nSAMPLEMASK;

typedef enum
{
    ADC_enSH_4 = 0UL,
    ADC_enSH_8 = 2UL,
    ADC_enSH_16 = 4UL,
    ADC_enSH_32 = 6UL,
    ADC_enSH_64 = 8UL,
    ADC_enSH_128 = 10UL,
    ADC_enSH_256 = 12UL,
    ADC_enSH_UNDEF = 0xFFFFFFFFUL,
}ADC_nSH;

typedef enum
{
    ADC_enINPUT_0 = 0UL,
    ADC_enINPUT_1 = 1UL,
    ADC_enINPUT_2 = 2UL,
    ADC_enINPUT_3 = 3UL,
    ADC_enINPUT_4 = 4UL,
    ADC_enINPUT_5 = 5UL,
    ADC_enINPUT_6 = 6UL,
    ADC_enINPUT_7 = 7UL,
    ADC_enINPUT_8 = 8UL,
    ADC_enINPUT_9 = 9UL,
    ADC_enINPUT_10 = 10UL,
    ADC_enINPUT_11 = 11UL,
    ADC_enINPUT_12 = 12UL,
    ADC_enINPUT_13 = 13UL,
    ADC_enINPUT_14 = 14UL,
    ADC_enINPUT_15 = 15UL,
    ADC_enINPUT_16 = 16UL,
    ADC_enINPUT_17 = 17UL,
    ADC_enINPUT_18 = 18UL,
    ADC_enINPUT_19 = 19UL,
    ADC_enINPUT_MAX = 20UL,
    ADC_enINPUT_UNDEF = 0xFFFFFFFFUL,
}ADC_nINPUT;

typedef enum
{
    ADC_enSAMPLE_MODE_SAMPLE = 0UL,
    ADC_enSAMPLE_MODE_COMP = 1UL,
    ADC_enSAMPLE_MODE_UNDEF = 0xFFFFFFFFUL,
}ADC_nSAMPLE_MODE;

typedef enum
{
    ADC_enINPUT_GPIO_PE3 = (uint32_t) GPIO_enAIN0,
    ADC_enINPUT_GPIO_PE2 = (uint32_t) GPIO_enAIN1,
    ADC_enINPUT_GPIO_PE1 = (uint32_t) GPIO_enAIN2,
    ADC_enINPUT_GPIO_PE0 = (uint32_t) GPIO_enAIN3,
    ADC_enINPUT_GPIO_PD7 = (uint32_t) GPIO_enAIN4,
    ADC_enINPUT_GPIO_PD6 = (uint32_t) GPIO_enAIN5,
    ADC_enINPUT_GPIO_PD5 = (uint32_t) GPIO_enAIN6,
    ADC_enINPUT_GPIO_PD4 = (uint32_t) GPIO_enAIN7,
    ADC_enINPUT_GPIO_PE5 = (uint32_t) GPIO_enAIN8,
    ADC_enINPUT_GPIO_PE4 = (uint32_t) GPIO_enAIN9,
    ADC_enINPUT_GPIO_PB4 = (uint32_t) GPIO_enAIN10,
    ADC_enINPUT_GPIO_PB5 = (uint32_t) GPIO_enAIN11,
    ADC_enINPUT_GPIO_PD3 = (uint32_t) GPIO_enAIN12,
    ADC_enINPUT_GPIO_PD2 = (uint32_t) GPIO_enAIN13,
    ADC_enINPUT_GPIO_PD1 = (uint32_t) GPIO_enAIN14,
    ADC_enINPUT_GPIO_PD0 = (uint32_t) GPIO_enAIN15,
    ADC_enINPUT_GPIO_PK0 = (uint32_t) GPIO_enAIN16,
    ADC_enINPUT_GPIO_PK1 = (uint32_t) GPIO_enAIN17,
    ADC_enINPUT_GPIO_PK2 = (uint32_t) GPIO_enAIN18,
    ADC_enINPUT_GPIO_PK3 = (uint32_t) GPIO_enAIN19,
    ADC_enINPUT_GPIO_EXP_UNDEF = 0xFFFFFFFFUL,
}ADC_nINPUT_GPIO_EXP;

typedef enum
{
    ADC_enINPUT_GPIO_0 = (uint32_t) ADC_enINPUT_GPIO_PE3,
    ADC_enINPUT_GPIO_1 = (uint32_t) ADC_enINPUT_GPIO_PE2,
    ADC_enINPUT_GPIO_2 = (uint32_t) ADC_enINPUT_GPIO_PE1,
    ADC_enINPUT_GPIO_3 = (uint32_t) ADC_enINPUT_GPIO_PE0,
    ADC_enINPUT_GPIO_4 = (uint32_t) ADC_enINPUT_GPIO_PD7,
    ADC_enINPUT_GPIO_5 = (uint32_t) ADC_enINPUT_GPIO_PD6,
    ADC_enINPUT_GPIO_6 = (uint32_t) ADC_enINPUT_GPIO_PD5,
    ADC_enINPUT_GPIO_7 = (uint32_t) ADC_enINPUT_GPIO_PD4,
    ADC_enINPUT_GPIO_8 = (uint32_t) ADC_enINPUT_GPIO_PE5,
    ADC_enINPUT_GPIO_9 = (uint32_t) ADC_enINPUT_GPIO_PE4,
    ADC_enINPUT_GPIO_10 = (uint32_t) ADC_enINPUT_GPIO_PB4,
    ADC_enINPUT_GPIO_11 = (uint32_t) ADC_enINPUT_GPIO_PB5,
    ADC_enINPUT_GPIO_12 = (uint32_t) ADC_enINPUT_GPIO_PD3,
    ADC_enINPUT_GPIO_13 = (uint32_t) ADC_enINPUT_GPIO_PD2,
    ADC_enINPUT_GPIO_14 = (uint32_t) ADC_enINPUT_GPIO_PD1,
    ADC_enINPUT_GPIO_15 = (uint32_t) ADC_enINPUT_GPIO_PD0,
    ADC_enINPUT_GPIO_16 = (uint32_t) ADC_enINPUT_GPIO_PK0,
    ADC_enINPUT_GPIO_17 = (uint32_t) ADC_enINPUT_GPIO_PK1,
    ADC_enINPUT_GPIO_18 = (uint32_t) ADC_enINPUT_GPIO_PK2,
    ADC_enINPUT_GPIO_19 = (uint32_t) ADC_enINPUT_GPIO_PK3,
    ADC_enINPUT_GPIO_UNDEF = 0xFFFFFFFFUL,
}ADC_nINPUT_GPIO;


typedef enum
{
    ADC_enFIFO_EMPTY = 0UL,
    ADC_enFIFO_FULL = 1UL,
    ADC_enFIFO_VALUES = 2UL,
    ADC_enFIFO_INT_UNDEF = 0xFFFFFFFFUL,
}ADC_nFIFO;

typedef enum
{
    ADC_enCOMP_CONDITION_LOW = 0UL,
    ADC_enCOMP_CONDITION_MID = 1UL,
    ADC_enCOMP_CONDITION_HIGH = 3UL,
    ADC_enCOMP_CONDITION_UNDEF = 0xFFFFFFFFUL,
}ADC_nCOMP_CONDITION;

typedef enum
{
    ADC_enCOMP_MODE_ALWAYS = 0UL,
    ADC_enCOMP_MODE_ONCE = 1UL,
    ADC_enCOMP_MODE_HYST_ONCE = 2UL,
    ADC_enCOMP_MODE_HYST_ALWAYS = 3UL,
    ADC_enCOMP_MODE_UNDEF = 0xFFFFFFFFUL,
}ADC_nCOMP_MODE;

typedef struct
{
    ADC_nINPUT enInput;
    ADC_nSTATE enDifferential;
    ADC_nSTATE enEnded;
    ADC_nSTATE enInterrupt;
    ADC_nSTATE enTempSensor;
    ADC_nSAMPLE_MODE enOperation;
    ADC_nSH enSampleHold;
    ADC_nCOMPARATOR enComparator;
}ADC_SAMPLE_CONFIG_t;

typedef MCU_Register_t ADC_Register_t;
typedef MCU_pvfIRQVectorHandler_t ADC_pvfIRQVectorHandler_t;
typedef MCU_pvfIRQSourceHandler_t ADC_pvfIRQSourceHandler_t;

#endif /* XDRIVER_MCU_ADC_PERIPHERAL_XHEADER_ADC_ENUM_H_ */
