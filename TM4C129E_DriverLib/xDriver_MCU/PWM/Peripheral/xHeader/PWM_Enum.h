/**
 *
 * @file PWM_Enum.h
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

#ifndef XDRIVER_MCU_PWM_PERIPHERAL_XHEADER_PWM_ENUM_H_
#define XDRIVER_MCU_PWM_PERIPHERAL_XHEADER_PWM_ENUM_H_

#include <xDriver_MCU/Common/xHeader/MCU_Enum.h>

typedef enum
{
    PWM_enERROR_OK = (UBase_t) MCU_enERROR_OK,
    PWM_enERROR_POINTER = (UBase_t) MCU_enERROR_POINTER,
    PWM_enERROR_VALUE = (UBase_t) MCU_enERROR_VALUE,
    PWM_enERROR_RANGE = (UBase_t) MCU_enERROR_RANGE,
    PWM_enERROR_EMPTY = (UBase_t) MCU_enERROR_EMPTY,
    PWM_enERROR_TIMEOUT = (UBase_t) MCU_enERROR_TIMEOUT,
    PWM_enERROR_UNDEF = (UBase_t) MCU_enERROR_UNDEF,
}PWM_nERROR;

typedef enum
{
    PWM_enSTATE_DIS = (UBase_t) MCU_enSTATE_DIS,
    PWM_enSTATE_ENA = (UBase_t) MCU_enSTATE_ENA,
    PWM_enSTATE_UNDEF = (UBase_t) MCU_enSTATE_UNDEF,
} PWM_nSTATE;

typedef enum
{
    PWM_enSTATUS_INACTIVE = (UBase_t) MCU_enSTATUS_INACTIVE,
    PWM_enSTATUS_ACTIVE = (UBase_t) MCU_enSTATUS_ACTIVE,
    PWM_enSTATUS_UNDEF = (UBase_t) MCU_enSTATUS_UNDEF,
} PWM_nSTATUS;

typedef enum
{
    PWM_enFALSE = (UBase_t) FALSE,
    PWM_enTRUE = (UBase_t) TRUE,
    PWM_enPENDSTATE_UNDEF = UNDEF_VALUE,
}PWM_nBOOLEAN;

typedef enum
{
    PWM_enPRI0 = (UBase_t) MCU_enPRI0,
    PWM_enPRI1 = (UBase_t) MCU_enPRI1,
    PWM_enPRI2 = (UBase_t) MCU_enPRI2,
    PWM_enPRI3 = (UBase_t) MCU_enPRI3,
    PWM_enPRI4 = (UBase_t) MCU_enPRI4,
    PWM_enPRI5 = (UBase_t) MCU_enPRI5,
    PWM_enPRI6 = (UBase_t) MCU_enPRI6,
    PWM_enPRI7 = (UBase_t) MCU_enPRI7,
    PWM_enPRIMAX = (UBase_t) MCU_enPRIMAX,
    PWM_enDEFAULT = (UBase_t) MCU_enDEFAULT,
}PWM_nPRIORITY;

typedef enum
{
    PWM_enMODULE_0 = 0UL,
    PWM_enMODULE_MAX = 1UL,
    PWM_enMODULE_UNDEF = UNDEF_VALUE,
}PWM_nMODULE;

typedef enum
{
    PWM_enGEN_0 = 0UL,
    PWM_enGEN_1 = 1UL,
    PWM_enGEN_2 = 2UL,
    PWM_enGEN_3 = 3UL,
    PWM_enGEN_MAX = 4UL,
    PWM_enGEN_UNDEF = UNDEF_VALUE,
}PWM_nGENERATOR;

typedef enum
{
    PWM_enGENMASK_NONE = 0x0UL,
    PWM_enGENMASK_0 = 0x1UL,
    PWM_enGENMASK_1 = 0x2UL,
    PWM_enGENMASK_2 = 0x4UL,
    PWM_enGENMASK_3 = 0x8UL,
    PWM_enGENMASK_ALL = 0xFUL,
    PWM_enGENMASK_MAX = 0x10UL,
    PWM_enGENMASK_UNDEF = UNDEF_VALUE,
}PWM_nGENMASK;

/**
 * PWM interrupts
 */
typedef enum
{
    PWM_enINT_TYPE_GEN = 0UL,
    PWM_enINT_TYPE_FAULT = 1UL,
    PWM_enINT_TYPE_MAX = 2UL,
    PWM_enINT_TYPE_UNDEF = UNDEF_VALUE,
}PWM_nINT_TYPE;

/**
 * PWM Gen interrupts
 */
typedef enum
{
    PWM_enEVENT_ZERO = 0UL,
    PWM_enEVENT_LOAD = 1UL,
    PWM_enEVENT_CMPA_UP = 2UL,
    PWM_enEVENT_CMPA_DOWN = 3UL,
    PWM_enEVENT_CMPB_UP = 4UL,
    PWM_enEVENT_CMPB_DOWN = 5UL,
    PWM_enEVENT_SW = 6UL,
    PWM_enEVENT_MAX = 7UL,
    PWM_enEVENT_UNDEF = UNDEF_VALUE,
}PWM_nEVENT;

typedef enum
{
    PWM_enEVENTMASK_NONE = 0x0UL,
    PWM_enEVENTMASK_ZERO = 0x1UL,
    PWM_enEVENTMASK_LOAD = 0x2UL,
    PWM_enEVENTMASK_CMPA_UP = 0x4UL,
    PWM_enEVENTMASK_CMPA_DOWN = 0x8UL,
    PWM_enEVENTMASK_CMPB_UP = 0x10UL,
    PWM_enEVENTMASK_CMPB_DOWN = 0x20UL,
    PWM_enEVENTMASK_ALL = 0x3FUL,
    PWM_enEVENTMASK_MAX = 0x40UL,
    PWM_enEVENTMASK_UNDEF = UNDEF_VALUE,
}PWM_nEVENTMASK;

/**
 * PWM Gen interrupts
 */

typedef enum
{
    PWM_enFAULT_INPUTMASK_NONE = 0x0UL,
    PWM_enFAULT_INPUTMASK_0 = 0x1UL,
    PWM_enFAULT_INPUTMASK_1 = 0x2UL,
    PWM_enFAULT_INPUTMASK_2 = 0x4UL,
    PWM_enFAULT_INPUTMASK_3 = 0x8UL,
    PWM_enFAULT_INPUTMASK_ALL = 0xFUL,
    PWM_enFAULT_INPUTMASK_MAX = 0x10UL,
    PWM_enFAULT_INPUTMASK_UNDEF = UNDEF_VALUE,
}PWM_nFAULT_INPUTMASK;

typedef enum
{
    PWM_enFAULT_DCOMPMASK_NONE = 0x0UL,
    PWM_enFAULT_DCOMPMASK_0 = 0x1UL,
    PWM_enFAULT_DCOMPMASK_1 = 0x2UL,
    PWM_enFAULT_DCOMPMASK_2 = 0x4UL,
    PWM_enFAULT_DCOMPMASK_3 = 0x8UL,
    PWM_enFAULT_DCOMPMASK_4 = 0x10UL,
    PWM_enFAULT_DCOMPMASK_5 = 0x20UL,
    PWM_enFAULT_DCOMPMASK_6 = 0x40UL,
    PWM_enFAULT_DCOMPMASK_7 = 0x80UL,
    PWM_enFAULT_DCOMPMASK_ALL = 0xFFUL,
    PWM_enFAULT_DCOMPMASK_MAX = 0x100UL,
    PWM_enFAULT_DCOMPMASK_UNDEF = UNDEF_VALUE,
}PWM_nFAULT_DCOMPMASK;

typedef enum
{
    PWM_enFAULT_INPUT_0 = 0UL,
    PWM_enFAULT_INPUT_1 = 1UL,
    PWM_enFAULT_INPUT_2 = 2UL,
    PWM_enFAULT_INPUT_3 = 3UL,
    PWM_enFAULT_INPUT_MAX = 4UL,
    PWM_enFAULT_INPUT_UNDEF = UNDEF_VALUE,
}PWM_nFAULT_INPUT;

typedef enum
{
    PWM_enFAULT_DCOMP_0 = 0UL,
    PWM_enFAULT_DCOMP_1 = 1UL,
    PWM_enFAULT_DCOMP_2 = 2UL,
    PWM_enFAULT_DCOMP_3 = 3UL,
    PWM_enFAULT_DCOMP_4 = 4UL,
    PWM_enFAULT_DCOMP_5 = 5UL,
    PWM_enFAULT_DCOMP_6 = 6UL,
    PWM_enFAULT_DCOMP_7 = 7UL,
    PWM_enFAULT_DCOMP_MAX = 8UL,
    PWM_enFAULT_DCOMP_UNDEF = UNDEF_VALUE,
}PWM_nFAULT_DCOMP;

typedef enum
{
    PWM_enUPDATE_IMMEDIATE = 0x0UL,
    PWM_enUPDATE_LOCAL = 0x2UL,
    PWM_enUPDATE_GLOBAL = 0x3UL,
    PWM_enUPDATE_MAX = 0x4UL,
    PWM_enUPDATE_UNDEF = UNDEF_VALUE,
}PWM_nUPDATE;

typedef enum
{
    PWM_enLEVEL_HIGH = 0x0UL,
    PWM_enLEVEL_LOW = 0x1UL,
    PWM_enLEVEL_UNDEF = UNDEF_VALUE,
}PWM_nLEVEL;


typedef enum
{
    PWM_enOUTPUT_NONE = 0x0UL,
    PWM_enOUTPUT_A = 0x1UL,
    PWM_enOUTPUT_B = 0x2UL,
    PWM_enOUTPUT_BOTH = 0x3UL,
    PWM_enOUTPUT_MAX = 0x4UL,
    PWM_enOUTPUT_UNDEF = UNDEF_VALUE,
}PWM_nOUTPUT;


typedef enum
{
    PWM_enOUTPUT_FAULT_LOW = 0x0UL,
    PWM_enOUTPUT_FAULT_HIGH = 0x1UL,
    PWM_enOUTPUT_FAULT_UNDEF = UNDEF_VALUE,
}PWM_nOUTPUT_FAULT;

typedef enum
{
    PWM_enACTION_NOTHING = 0x0UL,
    PWM_enACTION_INVERT = 0x1UL,
    PWM_enACTION_LOW = 0x2UL,
    PWM_enACTION_HIGH = 0x3UL,
    PWM_enACTION_UNDEF = UNDEF_VALUE,
}PWM_nACTION;

typedef enum
{
    PWM_enDIRECTION_DOWN = 0x0UL,
    PWM_enDIRECTION_UP_DOWN = 0x1UL,
    PWM_enDIRECTION_UNDEF = UNDEF_VALUE,
}PWM_nDIRECTION;


typedef enum
{
    PWM_enSTALL_FREEZE = 0UL,
    PWM_enSTALL_CONTINUE = 1UL,
    PWM_enSTALL_UNDEF = UNDEF_VALUE,
}PWM_nSTALL;

typedef enum
{
    PWM_enCLOCK_SYSCLK = 0x0UL,
    PWM_enCLOCK_DIVIDER = 0x1UL,
    PWM_enCLOCK_UNDEF = UNDEF_VALUE,
}PWM_nCLOCK;

typedef enum
{
    PWM_enCLOCK_DIV_2 = 0x0UL,
    PWM_enCLOCK_DIV_4 = 0x1UL,
    PWM_enCLOCK_DIV_8 = 0x2UL,
    PWM_enCLOCK_DIV_16 = 0x3UL,
    PWM_enCLOCK_DIV_32 = 0x4UL,
    PWM_enCLOCK_DIV_64 = 0x5UL,
    PWM_enCLOCK_DIV_MAX = 0x6UL,
    PWM_enCLOCK_DIV_UNDEF = UNDEF_VALUE,
}PWM_nCLOCK_DIV;

typedef enum
{
    PWM_enCLOCK_DIV_NUM_2 = 0x2UL,
    PWM_enCLOCK_DIV_NUM_4 = 0x4UL,
    PWM_enCLOCK_DIV_NUM_8 = 0x8UL,
    PWM_enCLOCK_DIV_NUM_16 = 16UL,
    PWM_enCLOCK_DIV_NUM_32 = 32UL,
    PWM_enCLOCK_DIV_NUM_64 = 64UL,
    PWM_enCLOCK_DIV_NUM_MASK = 0x7FUL,
    PWM_enCLOCK_DIV_NUM_UNDEF = UNDEF_VALUE,
}PWM_nCLOCK_DIV_NUM;

typedef MCU_Register_t PWM_Register_t;
typedef MCU_pvfIRQVectorHandler_t PWM_pvfIRQVectorHandler_t;
typedef MCU_pvfIRQSourceHandler_t PWM_pvfIRQSourceHandler_t;

#endif /* XDRIVER_MCU_PWM_PERIPHERAL_XHEADER_PWM_ENUM_H_ */
