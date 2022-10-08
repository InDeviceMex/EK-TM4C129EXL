/**
 *
 * @file PWM_RegisterDefines_GEN_INTEN.h
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
 * @verbatim 24 dic. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 24 dic. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_PWM_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_PWM_REGISTERDEFINES_GEN_INTEN_H_
#define XDRIVER_MCU_PWM_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_PWM_REGISTERDEFINES_GEN_INTEN_H_

#include <xDriver_MCU/PWM/Peripheral/xHeader/PWM_Enum.h>

/******************************************************************************************
************************************ 13 GEN_INTEN *********************************************
******************************************************************************************/
/*--------*/
#define PWM_GEN_INTEN_R_CNT_ZERO_INT_MASK    ((UBase_t) 0x00000001UL)
#define PWM_GEN_INTEN_R_CNT_ZERO_INT_BIT    ((UBase_t) 0UL)
#define PWM_GEN_INTEN_R_CNT_ZERO_INT_DIS    ((UBase_t) 0x00000000UL)
#define PWM_GEN_INTEN_R_CNT_ZERO_INT_ENA    ((UBase_t) 0x00000001UL)

#define PWM_GEN_INTEN_CNT_ZERO_INT_MASK    ((UBase_t) 0x00000001UL)
#define PWM_GEN_INTEN_CNT_ZERO_INT_DIS    ((UBase_t) 0x00000000UL)
#define PWM_GEN_INTEN_CNT_ZERO_INT_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define PWM_GEN_INTEN_R_CNT_LOAD_INT_MASK    ((UBase_t) 0x00000002UL)
#define PWM_GEN_INTEN_R_CNT_LOAD_INT_BIT    ((UBase_t) 1UL)
#define PWM_GEN_INTEN_R_CNT_LOAD_INT_DIS    ((UBase_t) 0x00000000UL)
#define PWM_GEN_INTEN_R_CNT_LOAD_INT_ENA    ((UBase_t) 0x00000002UL)

#define PWM_GEN_INTEN_CNT_LOAD_INT_MASK    ((UBase_t) 0x00000001UL)
#define PWM_GEN_INTEN_CNT_LOAD_INT_DIS    ((UBase_t) 0x00000000UL)
#define PWM_GEN_INTEN_CNT_LOAD_INT_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define PWM_GEN_INTEN_R_OUTA_CMP_UP_INT_MASK    ((UBase_t) 0x00000004UL)
#define PWM_GEN_INTEN_R_OUTA_CMP_UP_INT_BIT    ((UBase_t) 2UL)
#define PWM_GEN_INTEN_R_OUTA_CMP_UP_INT_DIS    ((UBase_t) 0x00000000UL)
#define PWM_GEN_INTEN_R_OUTA_CMP_UP_INT_ENA    ((UBase_t) 0x00000004UL)

#define PWM_GEN_INTEN_OUTA_CMP_UP_INT_MASK    ((UBase_t) 0x00000001UL)
#define PWM_GEN_INTEN_OUTA_CMP_UP_INT_DIS    ((UBase_t) 0x00000000UL)
#define PWM_GEN_INTEN_OUTA_CMP_UP_INT_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define PWM_GEN_INTEN_R_OUTA_CMP_DOWN_INT_MASK    ((UBase_t) 0x00000008UL)
#define PWM_GEN_INTEN_R_OUTA_CMP_DOWN_INT_BIT    ((UBase_t) 3UL)
#define PWM_GEN_INTEN_R_OUTA_CMP_DOWN_INT_DIS    ((UBase_t) 0x00000000UL)
#define PWM_GEN_INTEN_R_OUTA_CMP_DOWN_INT_ENA    ((UBase_t) 0x00000008UL)

#define PWM_GEN_INTEN_OUTA_CMP_DOWN_INT_MASK    ((UBase_t) 0x00000001UL)
#define PWM_GEN_INTEN_OUTA_CMP_DOWN_INT_DIS    ((UBase_t) 0x00000000UL)
#define PWM_GEN_INTEN_OUTA_CMP_DOWN_INT_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define PWM_GEN_INTEN_R_OUTB_CMP_UP_INT_MASK    ((UBase_t) 0x00000010UL)
#define PWM_GEN_INTEN_R_OUTB_CMP_UP_INT_BIT    ((UBase_t) 4UL)
#define PWM_GEN_INTEN_R_OUTB_CMP_UP_INT_DIS    ((UBase_t) 0x00000000UL)
#define PWM_GEN_INTEN_R_OUTB_CMP_UP_INT_ENA    ((UBase_t) 0x00000010UL)

#define PWM_GEN_INTEN_OUTB_CMP_UP_INT_MASK    ((UBase_t) 0x00000001UL)
#define PWM_GEN_INTEN_OUTB_CMP_UP_INT_DIS    ((UBase_t) 0x00000000UL)
#define PWM_GEN_INTEN_OUTB_CMP_UP_INT_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define PWM_GEN_INTEN_R_OUTB_CMP_DOWN_INT_MASK    ((UBase_t) 0x00000020UL)
#define PWM_GEN_INTEN_R_OUTB_CMP_DOWN_INT_BIT    ((UBase_t) 5UL)
#define PWM_GEN_INTEN_R_OUTB_CMP_DOWN_INT_DIS    ((UBase_t) 0x00000000UL)
#define PWM_GEN_INTEN_R_OUTB_CMP_DOWN_INT_ENA    ((UBase_t) 0x00000020UL)

#define PWM_GEN_INTEN_OUTB_CMP_DOWN_INT_MASK    ((UBase_t) 0x00000001UL)
#define PWM_GEN_INTEN_OUTB_CMP_DOWN_INT_DIS    ((UBase_t) 0x00000000UL)
#define PWM_GEN_INTEN_OUTB_CMP_DOWN_INT_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define PWM_GEN_INTEN_R_CNT_ZERO_TRG_MASK    ((UBase_t) 0x00000100UL)
#define PWM_GEN_INTEN_R_CNT_ZERO_TRG_BIT    ((UBase_t) 8UL)
#define PWM_GEN_INTEN_R_CNT_ZERO_TRG_DIS    ((UBase_t) 0x00000000UL)
#define PWM_GEN_INTEN_R_CNT_ZERO_TRG_ENA    ((UBase_t) 0x00000100UL)

#define PWM_GEN_INTEN_CNT_ZERO_TRG_MASK    ((UBase_t) 0x00000001UL)
#define PWM_GEN_INTEN_CNT_ZERO_TRG_DIS    ((UBase_t) 0x00000000UL)
#define PWM_GEN_INTEN_CNT_ZERO_TRG_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define PWM_GEN_INTEN_R_CNT_LOAD_TRG_MASK    ((UBase_t) 0x00000200UL)
#define PWM_GEN_INTEN_R_CNT_LOAD_TRG_BIT    ((UBase_t) 9UL)
#define PWM_GEN_INTEN_R_CNT_LOAD_TRG_DIS    ((UBase_t) 0x00000000UL)
#define PWM_GEN_INTEN_R_CNT_LOAD_TRG_ENA    ((UBase_t) 0x00000200UL)

#define PWM_GEN_INTEN_CNT_LOAD_TRG_MASK    ((UBase_t) 0x00000001UL)
#define PWM_GEN_INTEN_CNT_LOAD_TRG_DIS    ((UBase_t) 0x00000000UL)
#define PWM_GEN_INTEN_CNT_LOAD_TRG_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define PWM_GEN_INTEN_R_OUTA_CMP_UP_TRG_MASK    ((UBase_t) 0x00000400UL)
#define PWM_GEN_INTEN_R_OUTA_CMP_UP_TRG_BIT    ((UBase_t) 10UL)
#define PWM_GEN_INTEN_R_OUTA_CMP_UP_TRG_DIS    ((UBase_t) 0x00000000UL)
#define PWM_GEN_INTEN_R_OUTA_CMP_UP_TRG_ENA    ((UBase_t) 0x00000400UL)

#define PWM_GEN_INTEN_OUTA_CMP_UP_TRG_MASK    ((UBase_t) 0x00000001UL)
#define PWM_GEN_INTEN_OUTA_CMP_UP_TRG_DIS    ((UBase_t) 0x00000000UL)
#define PWM_GEN_INTEN_OUTA_CMP_UP_TRG_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define PWM_GEN_INTEN_R_OUTA_CMP_DOWN_TRG_MASK    ((UBase_t) 0x00000800UL)
#define PWM_GEN_INTEN_R_OUTA_CMP_DOWN_TRG_BIT    ((UBase_t) 11UL)
#define PWM_GEN_INTEN_R_OUTA_CMP_DOWN_TRG_DIS    ((UBase_t) 0x00000000UL)
#define PWM_GEN_INTEN_R_OUTA_CMP_DOWN_TRG_ENA    ((UBase_t) 0x00000800UL)

#define PWM_GEN_INTEN_OUTA_CMP_DOWN_TRG_MASK    ((UBase_t) 0x00000001UL)
#define PWM_GEN_INTEN_OUTA_CMP_DOWN_TRG_DIS    ((UBase_t) 0x00000000UL)
#define PWM_GEN_INTEN_OUTA_CMP_DOWN_TRG_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define PWM_GEN_INTEN_R_OUTB_CMP_UP_TRG_MASK    ((UBase_t) 0x00001000UL)
#define PWM_GEN_INTEN_R_OUTB_CMP_UP_TRG_BIT    ((UBase_t) 12UL)
#define PWM_GEN_INTEN_R_OUTB_CMP_UP_TRG_DIS    ((UBase_t) 0x00000000UL)
#define PWM_GEN_INTEN_R_OUTB_CMP_UP_TRG_ENA    ((UBase_t) 0x00001000UL)

#define PWM_GEN_INTEN_OUTB_CMP_UP_TRG_MASK    ((UBase_t) 0x00000001UL)
#define PWM_GEN_INTEN_OUTB_CMP_UP_TRG_DIS    ((UBase_t) 0x00000000UL)
#define PWM_GEN_INTEN_OUTB_CMP_UP_TRG_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define PWM_GEN_INTEN_R_OUTB_CMP_DOWN_TRG_MASK    ((UBase_t) 0x00002000UL)
#define PWM_GEN_INTEN_R_OUTB_CMP_DOWN_TRG_BIT    ((UBase_t) 13UL)
#define PWM_GEN_INTEN_R_OUTB_CMP_DOWN_TRG_DIS    ((UBase_t) 0x00000000UL)
#define PWM_GEN_INTEN_R_OUTB_CMP_DOWN_TRG_ENA    ((UBase_t) 0x00002000UL)

#define PWM_GEN_INTEN_OUTB_CMP_DOWN_TRG_MASK    ((UBase_t) 0x00000001UL)
#define PWM_GEN_INTEN_OUTB_CMP_DOWN_TRG_DIS    ((UBase_t) 0x00000000UL)
#define PWM_GEN_INTEN_OUTB_CMP_DOWN_TRG_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

#endif /* XDRIVER_MCU_PWM_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_PWM_REGISTERDEFINES_GEN_INTEN_H_ */
