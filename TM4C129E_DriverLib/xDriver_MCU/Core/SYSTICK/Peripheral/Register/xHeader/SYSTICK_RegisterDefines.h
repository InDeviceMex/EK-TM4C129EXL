/**
 *
 * @file SYSTICK_RegisterDefines.h
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
 * @verbatim 22 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 22 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_SYSTICK_SYSTICK_PERIPHERAL_SYSTICK_REGISTER_SYSTICK_REGISTERDEFINES_H_
#define XDRIVER_MCU_DRIVER_HEADER_SYSTICK_SYSTICK_PERIPHERAL_SYSTICK_REGISTER_SYSTICK_REGISTERDEFINES_H_

#include <xUtils/Standard/Standard.h>

/*********************************************************************************************
************************************** 1 CSR **********************************************
*********************************************************************************************/
/*--------*/
#define SYSTICK_CSR_R_COUNTFLAG_MASK    ((uint32_t) 0x00010000UL)
#define SYSTICK_CSR_R_COUNTFLAG_BIT    (16UL)
#define SYSTICK_CSR_R_COUNTFLAG_COMPLETE    ((uint32_t) 0x00010000UL)
#define SYSTICK_CSR_R_COUNTFLAG_NOCOMPLETE    ((uint32_t) 0x00000000UL)

#define SYSTICK_CSR_COUNTFLAG_MASK    ((uint32_t) 0x00000001UL)
#define SYSTICK_CSR_COUNTFLAG_COMPLETE    ((uint32_t) 0x00000001UL)
#define SYSTICK_CSR_COUNTFLAG_NOCOMPLETE    ((uint32_t) 0x00000000UL)
/*--------*/

/*--------*/
#define SYSTICK_CSR_R_CLKSOURCE_MASK    ((uint32_t) 0x00000004UL)
#define SYSTICK_CSR_R_CLKSOURCE_BIT    (2UL)
#define SYSTICK_CSR_R_CLKSOURCE_PIOSC4    ((uint32_t) 0x00000000UL)
#define SYSTICK_CSR_R_CLKSOURCE_SYSCLK ((uint32_t) 0x00000004UL)

#define SYSTICK_CSR_CLKSOURCE_MASK    ((uint32_t) 0x00000001UL)
#define SYSTICK_CSR_CLKSOURCE_PIOSC4    ((uint32_t) 0x00000000UL)
#define SYSTICK_CSR_CLKSOURCE_SYSCLK    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSTICK_CSR_R_TICKINT_MASK    ((uint32_t) 0x00000002UL)
#define SYSTICK_CSR_R_TICKINT_BIT    (1UL)
#define SYSTICK_CSR_R_TICKINT_ENA    ((uint32_t) 0x00000002UL)
#define SYSTICK_CSR_R_TICKINT_DIS    ((uint32_t) 0x00000000UL)

#define SYSTICK_CSR_TICKINT_MASK    ((uint32_t) 0x00000001UL)
#define SYSTICK_CSR_TICKINT_ENA    ((uint32_t) 0x00000001UL)
#define SYSTICK_CSR_TICKINT_DIS    ((uint32_t) 0x00000000UL)
/*--------*/

/*--------*/
#define SYSTICK_CSR_R_ENABLE_MASK    ((uint32_t) 0x00000001UL)
#define SYSTICK_CSR_R_ENABLE_BIT    (0UL)
#define SYSTICK_CSR_R_ENABLE_ENA    ((uint32_t) 0x00000001UL)
#define SYSTICK_CSR_R_ENABLE_DIS    ((uint32_t) 0x00000000UL)

#define SYSTICK_CSR_ENABLE_MASK    ((uint32_t) 0x00000001UL)
#define SYSTICK_CSR_ENABLE_ENA    ((uint32_t) 0x00000001UL)
#define SYSTICK_CSR_ENABLE_DIS    ((uint32_t) 0x00000000UL)
/*--------*/

/*********************************************************************************************
************************************** 2 LOAD **********************************************
*********************************************************************************************/
/*--------*/
#define SYSTICK_RVR_R_RELOAD_MASK    ((uint32_t) 0x00FFFFFFUL)
#define SYSTICK_RVR_R_RELOAD_BIT    (0UL)

#define SYSTICK_RVR_RELOAD_MASK    ((uint32_t) 0x00FFFFFFUL)
/*--------*/

/*********************************************************************************************
**************************************** 3 VAL **********************************************
***********************************************************************************************/
/*--------*/
#define SYSTICK_CVR_R_CURRENT_MASK    ((uint32_t) 0x00FFFFFFUL)
#define SYSTICK_CVR_R_CURRENT_BIT    (0UL)

#define SYSTICK_CVR_CURRENT_MASK    ((uint32_t) 0x00FFFFFFUL)
/*--------*/

/*********************************************************************************************
**************************************** 3 CR **********************************************
***********************************************************************************************/
/*--------*/
#define SYSTICK_CR_R_TENMS_MASK    ((uint32_t) 0x00FFFFFFUL)
#define SYSTICK_CR_R_TENMS_BIT    (0UL)

#define SYSTICK_CR_TENMS_MASK    ((uint32_t) 0x00FFFFFFUL)
/*--------*/

/*--------*/
#define SYSTICK_CR_R_SKEW_MASK    ((uint32_t) 0x40000000UL)
#define SYSTICK_CR_R_SKEW_BIT    (30UL)
#define SYSTICK_CR_R_SKEW_EXACT    ((uint32_t) 0x40000000UL)
#define SYSTICK_CR_R_SKEW_INEXACT    ((uint32_t) 0x00000000UL)

#define SYSTICK_CR_SKEW_MASK    ((uint32_t) 0x00000001UL)
#define SYSTICK_CR_SKEW_EXACT    ((uint32_t) 0x00000001UL)
#define SYSTICK_CR_SKEW_INEXACT    ((uint32_t) 0x00000000UL)
/*--------*/

/*--------*/
#define SYSTICK_CR_R_NOREF_MASK    ((uint32_t) 0x80000000UL)
#define SYSTICK_CR_R_NOREF_BIT    (31UL)
#define SYSTICK_CR_R_NOREF_SAME    ((uint32_t) 0x80000000UL)
#define SYSTICK_CR_R_NOREF_OTHER    ((uint32_t) 0x00000000UL)

#define SYSTICK_CR_NOREF_MASK    ((uint32_t) 0x00000001UL)
#define SYSTICK_CR_NOREF_SAME    ((uint32_t) 0x00000001UL)
#define SYSTICK_CR_NOREF_OTHER    ((uint32_t) 0x00000000UL)
/*--------*/

#endif /* XDRIVER_MCU_DRIVER_HEADER_SYSTICK_SYSTICK_PERIPHERAL_SYSTICK_REGISTER_SYSTICK_REGISTERDEFINES_H_ */
