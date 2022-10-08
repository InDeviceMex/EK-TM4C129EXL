/**
 *
 * @file ADC_RegisterDefines_DCCTL.h
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

#ifndef XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ADC_REGISTERDEFINES_DCCTL_H_
#define XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ADC_REGISTERDEFINES_DCCTL_H_

#include <xDriver_MCU/ADC/Peripheral/xHeader/ADC_Enum.h>

/******************************************************************************************
************************************ 22 DC_CTL *********************************************
******************************************************************************************/

/*--------*/
#define ADC_DC_CTL_R_CIM_MASK    ((UBase_t) 0x00000003UL)
#define ADC_DC_CTL_R_CIM_BIT    ((UBase_t) 0UL)
#define ADC_DC_CTL_R_CIM_ALWAYS    ((UBase_t) 0x00000000UL)
#define ADC_DC_CTL_R_CIM_ONCE    ((UBase_t) 0x00000001UL)
#define ADC_DC_CTL_R_CIM_HYSALWAYS    ((UBase_t) 0x00000002UL)
#define ADC_DC_CTL_R_CIM_HYSONCE    ((UBase_t) 0x00000003UL)

#define ADC_DC_CTL_CIM_MASK    ((UBase_t) 0x00000003UL)
#define ADC_DC_CTL_CIM_ALWAYS    ((UBase_t) 0x00000000UL)
#define ADC_DC_CTL_CIM_ONCE    ((UBase_t) 0x00000001UL)
#define ADC_DC_CTL_CIM_HYSALWAYS    ((UBase_t) 0x00000002UL)
#define ADC_DC_CTL_CIM_HYSONCE    ((UBase_t) 0x00000003UL)
/*--------*/

/*--------*/
#define ADC_DC_CTL_R_CIC_MASK    ((UBase_t) 0x0000000CUL)
#define ADC_DC_CTL_R_CIC_BIT    ((UBase_t) 2UL)
#define ADC_DC_CTL_R_CIC_LOW    ((UBase_t) 0x00000000UL)
#define ADC_DC_CTL_R_CIC_MID    ((UBase_t) 0x00000004UL)
#define ADC_DC_CTL_R_CIC_HIGH    ((UBase_t) 0x0000000CUL)

#define ADC_DC_CTL_CIC_MASK    ((UBase_t) 0x00000003UL)
#define ADC_DC_CTL_CIC_LOW    ((UBase_t) 0x00000000UL)
#define ADC_DC_CTL_CIC_MID    ((UBase_t) 0x00000001UL)
#define ADC_DC_CTL_CIC_HIGH    ((UBase_t) 0x00000003UL)
/*--------*/

/*--------*/
#define ADC_DC_CTL_R_CIE_MASK    ((UBase_t) 0x00000010UL)
#define ADC_DC_CTL_R_CIE_BIT    ((UBase_t) 4UL)
#define ADC_DC_CTL_R_CIE_DIS    ((UBase_t) 0x00000000UL)
#define ADC_DC_CTL_R_CIE_ENA    ((UBase_t) 0x00000010UL)

#define ADC_DC_CTL_CIE_MASK    ((UBase_t) 0x00000001UL)
#define ADC_DC_CTL_CIE_DIS    ((UBase_t) 0x00000000UL)
#define ADC_DC_CTL_CIE_ENA    ((UBase_t) 0x00000001UL)
/*--------*/


/*--------*/
#define ADC_DC_CTL_R_CTM_MASK    ((UBase_t) 0x00000300UL)
#define ADC_DC_CTL_R_CTM_BIT    ((UBase_t) 8UL)
#define ADC_DC_CTL_R_CTM_ALWAYS    ((UBase_t) 0x00000000UL)
#define ADC_DC_CTL_R_CTM_ONCE    ((UBase_t) 0x00000100UL)
#define ADC_DC_CTL_R_CTM_HYSALWAYS    ((UBase_t) 0x00000200UL)
#define ADC_DC_CTL_R_CTM_HYSONCE    ((UBase_t) 0x00000300UL)

#define ADC_DC_CTL_CTM_MASK    ((UBase_t) 0x00000003UL)
#define ADC_DC_CTL_CTM_ALWAYS    ((UBase_t) 0x00000000UL)
#define ADC_DC_CTL_CTM_ONCE    ((UBase_t) 0x00000001UL)
#define ADC_DC_CTL_CTM_HYSALWAYS    ((UBase_t) 0x00000002UL)
#define ADC_DC_CTL_CTM_HYSONCE    ((UBase_t) 0x00000003UL)
/*--------*/

/*--------*/
#define ADC_DC_CTL_R_CTC_MASK    ((UBase_t) 0x00000C00UL)
#define ADC_DC_CTL_R_CTC_BIT    ((UBase_t) 10UL)
#define ADC_DC_CTL_R_CTC_LOW    ((UBase_t) 0x00000000UL)
#define ADC_DC_CTL_R_CTC_MID    ((UBase_t) 0x00000400UL)
#define ADC_DC_CTL_R_CTC_HIGH    ((UBase_t) 0x00000C00UL)

#define ADC_DC_CTL_CTC_MASK    ((UBase_t) 0x00000003UL)
#define ADC_DC_CTL_CTC_LOW    ((UBase_t) 0x00000000UL)
#define ADC_DC_CTL_CTC_MID    ((UBase_t) 0x00000001UL)
#define ADC_DC_CTL_CTC_HIGH    ((UBase_t) 0x00000003UL)
/*--------*/

/*--------*/
#define ADC_DC_CTL_R_CTE_MASK    ((UBase_t) 0x00001000UL)
#define ADC_DC_CTL_R_CTE_BIT    ((UBase_t) 12UL)
#define ADC_DC_CTL_R_CTE_DIS    ((UBase_t) 0x00000000UL)
#define ADC_DC_CTL_R_CTE_ENA    ((UBase_t) 0x00001000UL)

#define ADC_DC_CTL_CTE_MASK    ((UBase_t) 0x00000001UL)
#define ADC_DC_CTL_CTE_DIS    ((UBase_t) 0x00000000UL)
#define ADC_DC_CTL_CTE_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

#endif /* XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ADC_REGISTERDEFINES_DCCTL_H_ */
