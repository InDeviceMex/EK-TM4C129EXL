/**
 *
 * @file TIMER_RegisterDefines_Standard_64_IMR.h
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
 * @verbatim 6 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 6 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_STANDARD_64_TIMER_REGISTERDEFINES_STANDARD_64_IMR_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_STANDARD_64_TIMER_REGISTERDEFINES_STANDARD_64_IMR_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 6 IMR *********************************************
******************************************************************************************/

/*----------*/
#define GPWTM_IMR_R_TATOIM_MASK    ((uint32_t) 0x00000001UL)
#define GPWTM_IMR_R_TATOIM_BIT    (0UL)
#define GPWTM_IMR_R_TATOIM_DIS    ((uint32_t) 0x00000000UL)
#define GPWTM_IMR_R_TATOIM_ENA    ((uint32_t) 0x00000001UL)

#define GPWTM_IMR_TATOIM_MASK    ((uint32_t) 0x00000001UL)
#define GPWTM_IMR_TATOIM_DIS    ((uint32_t) 0x00000000UL)
#define GPWTM_IMR_TATOIM_ENA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPWTM_IMR_R_CAMIM_MASK    ((uint32_t) 0x00000002UL)
#define GPWTM_IMR_R_CAMIM_BIT    (1UL)
#define GPWTM_IMR_R_CAMIM_DIS    ((uint32_t) 0x00000000UL)
#define GPWTM_IMR_R_CAMIM_ENA    ((uint32_t) 0x00000002UL)

#define GPWTM_IMR_CAMIM_MASK    ((uint32_t) 0x00000001UL)
#define GPWTM_IMR_CAMIM_DIS    ((uint32_t) 0x00000000UL)
#define GPWTM_IMR_CAMIM_ENA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPWTM_IMR_R_CAEIM_MASK    ((uint32_t) 0x00000004UL)
#define GPWTM_IMR_R_CAEIM_BIT    (2UL)
#define GPWTM_IMR_R_CAEIM_DIS    ((uint32_t) 0x00000000UL)
#define GPWTM_IMR_R_CAEIM_ENA    ((uint32_t) 0x00000004UL)

#define GPWTM_IMR_CAEIM_MASK    ((uint32_t) 0x00000001UL)
#define GPWTM_IMR_CAEIM_DIS    ((uint32_t) 0x00000000UL)
#define GPWTM_IMR_CAEIM_ENA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPWTM_IMR_R_RTCIM_MASK    ((uint32_t) 0x00000008UL)
#define GPWTM_IMR_R_RTCIM_BIT    (3UL)
#define GPWTM_IMR_R_RTCIM_DIS    ((uint32_t) 0x00000000UL)
#define GPWTM_IMR_R_RTCIM_ENA    ((uint32_t) 0x00000008UL)

#define GPWTM_IMR_RTCIM_MASK    ((uint32_t) 0x00000001UL)
#define GPWTM_IMR_RTCIM_DIS    ((uint32_t) 0x00000000UL)
#define GPWTM_IMR_RTCIM_ENA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPWTM_IMR_R_TAMIM_MASK    ((uint32_t) 0x00000010UL)
#define GPWTM_IMR_R_TAMIM_BIT    (4UL)
#define GPWTM_IMR_R_TAMIM_DIS    ((uint32_t) 0x00000000UL)
#define GPWTM_IMR_R_TAMIM_ENA    ((uint32_t) 0x00000010UL)

#define GPWTM_IMR_TAMIM_MASK    ((uint32_t) 0x00000001UL)
#define GPWTM_IMR_TAMIM_DIS    ((uint32_t) 0x00000000UL)
#define GPWTM_IMR_TAMIM_ENA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPWTM_IMR_R_TBTOIM_MASK    ((uint32_t) 0x00000100UL)
#define GPWTM_IMR_R_TBTOIM_BIT    (8UL)
#define GPWTM_IMR_R_TBTOIM_DIS    ((uint32_t) 0x00000000UL)
#define GPWTM_IMR_R_TBTOIM_ENA    ((uint32_t) 0x00000100UL)

#define GPWTM_IMR_TBTOIM_MASK    ((uint32_t) 0x00000001UL)
#define GPWTM_IMR_TBTOIM_DIS    ((uint32_t) 0x00000000UL)
#define GPWTM_IMR_TBTOIM_ENA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPWTM_IMR_R_CBMIM_MASK    ((uint32_t) 0x00000200UL)
#define GPWTM_IMR_R_CBMIM_BIT    (9UL)
#define GPWTM_IMR_R_CBMIM_DIS    ((uint32_t) 0x00000000UL)
#define GPWTM_IMR_R_CBMIM_ENA    ((uint32_t) 0x00000200UL)

#define GPWTM_IMR_CBMIM_MASK    ((uint32_t) 0x00000001UL)
#define GPWTM_IMR_CBMIM_DIS    ((uint32_t) 0x00000000UL)
#define GPWTM_IMR_CBMIM_ENA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPWTM_IMR_R_CBEIM_MASK    ((uint32_t) 0x00000400UL)
#define GPWTM_IMR_R_CBEIM_BIT    (10UL)
#define GPWTM_IMR_R_CBEIM_DIS    ((uint32_t) 0x00000000UL)
#define GPWTM_IMR_R_CBEIM_ENA    ((uint32_t) 0x00000400UL)

#define GPWTM_IMR_CBEIM_MASK    ((uint32_t) 0x00000001UL)
#define GPWTM_IMR_CBEIM_DIS    ((uint32_t) 0x00000000UL)
#define GPWTM_IMR_CBEIM_ENA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPWTM_IMR_R_TBMIM_MASK    ((uint32_t) 0x00000800UL)
#define GPWTM_IMR_R_TBMIM_BIT    (11UL)
#define GPWTM_IMR_R_TBMIM_DIS    ((uint32_t) 0x00000000UL)
#define GPWTM_IMR_R_TBMIM_ENA    ((uint32_t) 0x00000800UL)

#define GPWTM_IMR_TBMIM_MASK    ((uint32_t) 0x00000001UL)
#define GPWTM_IMR_TBMIM_DIS    ((uint32_t) 0x00000000UL)
#define GPWTM_IMR_TBMIM_ENA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPWTM_IMR_R_WUEIM_MASK    ((uint32_t) 0x00010000UL)
#define GPWTM_IMR_R_WUEIM_BIT    (16UL)
#define GPWTM_IMR_R_WUEIM_DIS    ((uint32_t) 0x00000000UL)
#define GPWTM_IMR_R_WUEIM_ENA    ((uint32_t) 0x00010000UL)

#define GPWTM_IMR_WUEIM_MASK    ((uint32_t) 0x00000001UL)
#define GPWTM_IMR_WUEIM_DIS    ((uint32_t) 0x00000000UL)
#define GPWTM_IMR_WUEIM_ENA    ((uint32_t) 0x00000001UL)
/*----------*/

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_STANDARD_64_TIMER_REGISTERDEFINES_STANDARD_64_IMR_H_ */
