/**
 *
 * @file ADC_RegisterDefines_PP.h
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
 * @verbatim 15 nov. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 15 nov. 2020     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ADC_REGISTERDEFINES_PP_H_
#define XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ADC_REGISTERDEFINES_PP_H_

#include <xDriver_MCU/ADC/Peripheral/xHeader/ADC_Enum.h>

/******************************************************************************************
************************************ 24 PP *********************************************
******************************************************************************************/
/*--------*/
#define ADC_PP_R_MCR_MASK    ((UBase_t) 0x0000000FUL)
#define ADC_PP_R_MCR_BIT    ((UBase_t) 0UL)
#define ADC_PP_R_MCR_FULL    ((UBase_t) 0x00000007UL)

#define ADC_PP_MCR_MASK    ((UBase_t) 0x0000000FUL)
#define ADC_PP_MCR_FULL    ((UBase_t) 0x00000007UL)
/*--------*/

/*--------*/
#define ADC_PP_R_CH_MASK    ((UBase_t) 0x000003F0UL)
#define ADC_PP_R_CH_BIT    ((UBase_t) 4UL)

#define ADC_PP_CH_MASK    ((UBase_t) 0x0000003FUL)
/*--------*/

/*--------*/
#define ADC_PP_R_DC_MASK    ((UBase_t) 0x0000FC00UL)
#define ADC_PP_R_DC_BIT    ((UBase_t) 10UL)

#define ADC_PP_DC_MASK    ((UBase_t) 0x0000003FUL)
/*--------*/

/*--------*/
#define ADC_PP_R_TYPE_MASK    ((UBase_t) 0x00030000UL)
#define ADC_PP_R_TYPE_BIT    ((UBase_t) 16UL)
#define ADC_PP_R_TYPE_SAR    ((UBase_t) 0x00000000UL)

#define ADC_PP_TYPE_MASK    ((UBase_t) 0x00000003UL)
#define ADC_PP_TYPE_SAR    ((UBase_t) 0x00000000UL)
/*--------*/

/*--------*/
#define ADC_PP_R_RSL_MASK    ((UBase_t) 0x007C0000UL)
#define ADC_PP_R_RSL_BIT    ((UBase_t) 18UL)

#define ADC_PP_RSL_MASK    ((UBase_t) 0x0000001FUL)
/*--------*/

/*--------*/
#define ADC_PP_R_TS_MASK    ((UBase_t) 0x00800000UL)
#define ADC_PP_R_TS_BIT    ((UBase_t) 23UL)
#define ADC_PP_R_TS_NOTEMP    ((UBase_t) 0x00000000UL)
#define ADC_PP_R_TS_TEMP    ((UBase_t) 0x00800000UL)

#define ADC_PP_TS_MASK    ((UBase_t) 0x00000001UL)
#define ADC_PP_TS_NOTEMP    ((UBase_t) 0x00000000UL)
#define ADC_PP_TS_TEMP    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define ADC_PP_R_APSHT_MASK    ((UBase_t) 0x01000000UL)
#define ADC_PP_R_APSHT_BIT    ((UBase_t) 24UL)
#define ADC_PP_R_APSHT_NOCAPABLE    ((UBase_t) 0x00000000UL)
#define ADC_PP_R_APSHT_CAPABLE    ((UBase_t) 0x01000000UL)

#define ADC_PP_APSHT_MASK    ((UBase_t) 0x00000001UL)
#define ADC_PP_APSHT_NOCAPABLE    ((UBase_t) 0x00000000UL)
#define ADC_PP_APSHT_CAPABLE    ((UBase_t) 0x00000001UL)
/*--------*/

#endif /* XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ADC_REGISTERDEFINES_PP_H_ */
