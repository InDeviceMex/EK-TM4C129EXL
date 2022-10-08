/**
 *
 * @file ADC_RegisterDefines_IM.h
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
 * @verbatim 14 nov. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 14 nov. 2020     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ADC_REGISTERDEFINES_IM_H_
#define XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ADC_REGISTERDEFINES_IM_H_

#include <xDriver_MCU/ADC/Peripheral/xHeader/ADC_Enum.h>

/******************************************************************************************
************************************ 3 IM *********************************************
******************************************************************************************/
/*--------*/
#define ADC_IM_R_MASK_MASK    ((UBase_t) 0x0000000FUL)
#define ADC_IM_R_MASK_BIT    ((UBase_t) 0UL)
#define ADC_IM_R_MASK_DIS    ((UBase_t) 0x00000000UL)
#define ADC_IM_R_MASK_ENA    ((UBase_t) 0x0000000FUL)

#define ADC_IM_MASK_MASK    ((UBase_t) 0x0000000FUL)
#define ADC_IM_MASK_DIS    ((UBase_t) 0x00000000UL)
#define ADC_IM_MASK_ENA    ((UBase_t) 0x0000000FUL)
/*--------*/

/*--------*/
#define ADC_IM_R_MASK0_MASK    ((UBase_t) 0x00000001UL)
#define ADC_IM_R_MASK0_BIT    ((UBase_t) 0UL)
#define ADC_IM_R_MASK0_DIS    ((UBase_t) 0x00000000UL)
#define ADC_IM_R_MASK0_ENA    ((UBase_t) 0x00000001UL)

#define ADC_IM_MASK0_MASK    ((UBase_t) 0x00000001UL)
#define ADC_IM_MASK0_DIS    ((UBase_t) 0x00000000UL)
#define ADC_IM_MASK0_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define ADC_IM_R_MASK1_MASK    ((UBase_t) 0x00000002UL)
#define ADC_IM_R_MASK1_BIT    ((UBase_t) 1UL)
#define ADC_IM_R_MASK1_DIS    ((UBase_t) 0x00000000UL)
#define ADC_IM_R_MASK1_ENA    ((UBase_t) 0x00000002UL)

#define ADC_IM_MASK1_MASK    ((UBase_t) 0x00000001UL)
#define ADC_IM_MASK1_DIS    ((UBase_t) 0x00000000UL)
#define ADC_IM_MASK1_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define ADC_IM_R_MASK2_MASK    ((UBase_t) 0x00000004UL)
#define ADC_IM_R_MASK2_BIT    ((UBase_t) 2UL)
#define ADC_IM_R_MASK2_DIS    ((UBase_t) 0x00000000UL)
#define ADC_IM_R_MASK2_ENA    ((UBase_t) 0x00000004UL)

#define ADC_IM_MASK2_MASK    ((UBase_t) 0x00000001UL)
#define ADC_IM_MASK2_DIS    ((UBase_t) 0x00000000UL)
#define ADC_IM_MASK2_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define ADC_IM_R_MASK3_MASK    ((UBase_t) 0x00000008UL)
#define ADC_IM_R_MASK3_BIT    ((UBase_t) 3UL)
#define ADC_IM_R_MASK3_DIS    ((UBase_t) 0x00000000UL)
#define ADC_IM_R_MASK3_ENA    ((UBase_t) 0x00000008UL)

#define ADC_IM_MASK3_MASK    ((UBase_t) 0x00000001UL)
#define ADC_IM_MASK3_DIS    ((UBase_t) 0x00000000UL)
#define ADC_IM_MASK3_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define ADC_IM_R_DMAMASK_DMAMASK    ((UBase_t) 0x00000F00UL)
#define ADC_IM_R_DMAMASK_BIT    ((UBase_t) 8UL)
#define ADC_IM_R_DMAMASK_DIS    ((UBase_t) 0x00000000UL)
#define ADC_IM_R_DMAMASK_ENA    ((UBase_t) 0x00000F00UL)

#define ADC_IM_DMAMASK_DMAMASK    ((UBase_t) 0x0000000FUL)
#define ADC_IM_DMAMASK_DIS    ((UBase_t) 0x00000000UL)
#define ADC_IM_DMAMASK_ENA    ((UBase_t) 0x0000000FUL)
/*--------*/

/*--------*/
#define ADC_IM_R_DMAMASK0_DMAMASK    ((UBase_t) 0x00000100UL)
#define ADC_IM_R_DMAMASK0_BIT    ((UBase_t) 8UL)
#define ADC_IM_R_DMAMASK0_DIS    ((UBase_t) 0x00000000UL)
#define ADC_IM_R_DMAMASK0_ENA    ((UBase_t) 0x00000100UL)

#define ADC_IM_DMAMASK0_DMAMASK    ((UBase_t) 0x00000001UL)
#define ADC_IM_DMAMASK0_DIS    ((UBase_t) 0x00000000UL)
#define ADC_IM_DMAMASK0_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define ADC_IM_R_DMAMASK1_DMAMASK    ((UBase_t) 0x00000200UL)
#define ADC_IM_R_DMAMASK1_BIT    ((UBase_t) 9UL)
#define ADC_IM_R_DMAMASK1_DIS    ((UBase_t) 0x00000000UL)
#define ADC_IM_R_DMAMASK1_ENA    ((UBase_t) 0x00000200UL)

#define ADC_IM_DMAMASK1_DMAMASK    ((UBase_t) 0x00000001UL)
#define ADC_IM_DMAMASK1_DIS    ((UBase_t) 0x00000000UL)
#define ADC_IM_DMAMASK1_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define ADC_IM_R_DMAMASK2_DMAMASK    ((UBase_t) 0x00000400UL)
#define ADC_IM_R_DMAMASK2_BIT    ((UBase_t) 10UL)
#define ADC_IM_R_DMAMASK2_DIS    ((UBase_t) 0x00000000UL)
#define ADC_IM_R_DMAMASK2_ENA    ((UBase_t) 0x00000400UL)

#define ADC_IM_DMAMASK2_DMAMASK    ((UBase_t) 0x00000001UL)
#define ADC_IM_DMAMASK2_DIS    ((UBase_t) 0x00000000UL)
#define ADC_IM_DMAMASK2_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define ADC_IM_R_DMAMASK3_DMAMASK    ((UBase_t) 0x00000800UL)
#define ADC_IM_R_DMAMASK3_BIT    ((UBase_t) 11UL)
#define ADC_IM_R_DMAMASK3_DIS    ((UBase_t) 0x00000000UL)
#define ADC_IM_R_DMAMASK3_ENA    ((UBase_t) 0x00000800UL)

#define ADC_IM_DMAMASK3_DMAMASK    ((UBase_t) 0x00000001UL)
#define ADC_IM_DMAMASK3_DIS    ((UBase_t) 0x00000000UL)
#define ADC_IM_DMAMASK3_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define ADC_IM_R_DCONSS_MASK    ((UBase_t) 0x000F0000UL)
#define ADC_IM_R_DCONSS_BIT    ((UBase_t) 16UL)
#define ADC_IM_R_DCONSS_DIS    ((UBase_t) 0x00000000UL)
#define ADC_IM_R_DCONSS_ENA    ((UBase_t) 0x000F0000UL)

#define ADC_IM_DCONSS_DCONSS    ((UBase_t) 0x0000000FUL)
#define ADC_IM_DCONSS_DIS    ((UBase_t) 0x00000000UL)
#define ADC_IM_DCONSS_ENA    ((UBase_t) 0x0000000FUL)
/*--------*/

/*--------*/
#define ADC_IM_R_DCONSS0_MASK    ((UBase_t) 0x00010000UL)
#define ADC_IM_R_DCONSS0_BIT    ((UBase_t) 16UL)
#define ADC_IM_R_DCONSS0_DIS    ((UBase_t) 0x00000000UL)
#define ADC_IM_R_DCONSS0_ENA    ((UBase_t) 0x00010000UL)

#define ADC_IM_DCONSS0_DCONSS    ((UBase_t) 0x00000001UL)
#define ADC_IM_DCONSS0_DIS    ((UBase_t) 0x00000000UL)
#define ADC_IM_DCONSS0_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define ADC_IM_R_DCONSS1_MASK    ((UBase_t) 0x00020000UL)
#define ADC_IM_R_DCONSS1_BIT    ((UBase_t) 17UL)
#define ADC_IM_R_DCONSS1_DIS    ((UBase_t) 0x00000000UL)
#define ADC_IM_R_DCONSS1_ENA    ((UBase_t) 0x00020000UL)

#define ADC_IM_DCONSS1_DCONSS    ((UBase_t) 0x00000001UL)
#define ADC_IM_DCONSS1_DIS    ((UBase_t) 0x00000000UL)
#define ADC_IM_DCONSS1_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define ADC_IM_R_DCONSS2_MASK    ((UBase_t) 0x00040000UL)
#define ADC_IM_R_DCONSS2_BIT    ((UBase_t) 18UL)
#define ADC_IM_R_DCONSS2_DIS    ((UBase_t) 0x00000000UL)
#define ADC_IM_R_DCONSS2_ENA    ((UBase_t) 0x00040000UL)

#define ADC_IM_DCONSS2_DCONSS    ((UBase_t) 0x00000001UL)
#define ADC_IM_DCONSS2_DIS    ((UBase_t) 0x00000000UL)
#define ADC_IM_DCONSS2_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define ADC_IM_R_DCONSS3_MASK    ((UBase_t) 0x00080000UL)
#define ADC_IM_R_DCONSS3_BIT    ((UBase_t) 19UL)
#define ADC_IM_R_DCONSS3_DIS    ((UBase_t) 0x00000000UL)
#define ADC_IM_R_DCONSS3_ENA    ((UBase_t) 0x00080000UL)

#define ADC_IM_DCONSS3_MASK    ((UBase_t) 0x00000001UL)
#define ADC_IM_DCONSS3_DIS    ((UBase_t) 0x00000000UL)
#define ADC_IM_DCONSS3_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

#endif /* XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ADC_REGISTERDEFINES_IM_H_ */
