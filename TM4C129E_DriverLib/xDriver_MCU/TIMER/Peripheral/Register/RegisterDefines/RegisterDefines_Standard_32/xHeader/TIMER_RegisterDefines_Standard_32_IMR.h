/**
 *
 * @file TIMER_RegisterDefines_Standard_32_IMR.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_STANDARD_32_TIMER_REGISTERDEFINES_STANDARD_32_IMR_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_STANDARD_32_TIMER_REGISTERDEFINES_STANDARD_32_IMR_H_

#include <xDriver_MCU/TIMER/Peripheral/xHeader/TIMER_Enum.h>

/******************************************************************************************
************************************ 6 IMR *********************************************
******************************************************************************************/

/*----------*/
#define GPTM_IMR_R_TATOIM_MASK    ((UBase_t) 0x00000001UL)
#define GPTM_IMR_R_TATOIM_BIT    (0UL)
#define GPTM_IMR_R_TATOIM_DIS    ((UBase_t) 0x00000000UL)
#define GPTM_IMR_R_TATOIM_ENA    ((UBase_t) 0x00000001UL)

#define GPTM_IMR_TATOIM_MASK    ((UBase_t) 0x00000001UL)
#define GPTM_IMR_TATOIM_DIS    ((UBase_t) 0x00000000UL)
#define GPTM_IMR_TATOIM_ENA    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPTM_IMR_R_CAMIM_MASK    ((UBase_t) 0x00000002UL)
#define GPTM_IMR_R_CAMIM_BIT    (1UL)
#define GPTM_IMR_R_CAMIM_DIS    ((UBase_t) 0x00000000UL)
#define GPTM_IMR_R_CAMIM_ENA    ((UBase_t) 0x00000002UL)

#define GPTM_IMR_CAMIM_MASK    ((UBase_t) 0x00000001UL)
#define GPTM_IMR_CAMIM_DIS    ((UBase_t) 0x00000000UL)
#define GPTM_IMR_CAMIM_ENA    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPTM_IMR_R_CAEIM_MASK    ((UBase_t) 0x00000004UL)
#define GPTM_IMR_R_CAEIM_BIT    (2UL)
#define GPTM_IMR_R_CAEIM_DIS    ((UBase_t) 0x00000000UL)
#define GPTM_IMR_R_CAEIM_ENA    ((UBase_t) 0x00000004UL)

#define GPTM_IMR_CAEIM_MASK    ((UBase_t) 0x00000001UL)
#define GPTM_IMR_CAEIM_DIS    ((UBase_t) 0x00000000UL)
#define GPTM_IMR_CAEIM_ENA    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPTM_IMR_R_RTCIM_MASK    ((UBase_t) 0x00000008UL)
#define GPTM_IMR_R_RTCIM_BIT    (3UL)
#define GPTM_IMR_R_RTCIM_DIS    ((UBase_t) 0x00000000UL)
#define GPTM_IMR_R_RTCIM_ENA    ((UBase_t) 0x00000008UL)

#define GPTM_IMR_RTCIM_MASK    ((UBase_t) 0x00000001UL)
#define GPTM_IMR_RTCIM_DIS    ((UBase_t) 0x00000000UL)
#define GPTM_IMR_RTCIM_ENA    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPTM_IMR_R_TAMIM_MASK    ((UBase_t) 0x00000010UL)
#define GPTM_IMR_R_TAMIM_BIT    (4UL)
#define GPTM_IMR_R_TAMIM_DIS    ((UBase_t) 0x00000000UL)
#define GPTM_IMR_R_TAMIM_ENA    ((UBase_t) 0x00000010UL)

#define GPTM_IMR_TAMIM_MASK    ((UBase_t) 0x00000001UL)
#define GPTM_IMR_TAMIM_DIS    ((UBase_t) 0x00000000UL)
#define GPTM_IMR_TAMIM_ENA    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPTM_IMR_R_DMAAIM_MASK    ((UBase_t) 0x00000020UL)
#define GPTM_IMR_R_DMAAIM_BIT    (5UL)
#define GPTM_IMR_R_DMAAIM_DIS    ((UBase_t) 0x00000000UL)
#define GPTM_IMR_R_DMAAIM_ENA    ((UBase_t) 0x00000020UL)

#define GPTM_IMR_DMAAIM_MASK    ((UBase_t) 0x00000001UL)
#define GPTM_IMR_DMAAIM_DIS    ((UBase_t) 0x00000000UL)
#define GPTM_IMR_DMAAIM_ENA    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPTM_IMR_R_TBTOIM_MASK    ((UBase_t) 0x00000100UL)
#define GPTM_IMR_R_TBTOIM_BIT    (8UL)
#define GPTM_IMR_R_TBTOIM_DIS    ((UBase_t) 0x00000000UL)
#define GPTM_IMR_R_TBTOIM_ENA    ((UBase_t) 0x00000100UL)

#define GPTM_IMR_TBTOIM_MASK    ((UBase_t) 0x00000001UL)
#define GPTM_IMR_TBTOIM_DIS    ((UBase_t) 0x00000000UL)
#define GPTM_IMR_TBTOIM_ENA    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPTM_IMR_R_CBMIM_MASK    ((UBase_t) 0x00000200UL)
#define GPTM_IMR_R_CBMIM_BIT    (9UL)
#define GPTM_IMR_R_CBMIM_DIS    ((UBase_t) 0x00000000UL)
#define GPTM_IMR_R_CBMIM_ENA    ((UBase_t) 0x00000200UL)

#define GPTM_IMR_CBMIM_MASK    ((UBase_t) 0x00000001UL)
#define GPTM_IMR_CBMIM_DIS    ((UBase_t) 0x00000000UL)
#define GPTM_IMR_CBMIM_ENA    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPTM_IMR_R_CBEIM_MASK    ((UBase_t) 0x00000400UL)
#define GPTM_IMR_R_CBEIM_BIT    (10UL)
#define GPTM_IMR_R_CBEIM_DIS    ((UBase_t) 0x00000000UL)
#define GPTM_IMR_R_CBEIM_ENA    ((UBase_t) 0x00000400UL)

#define GPTM_IMR_CBEIM_MASK    ((UBase_t) 0x00000001UL)
#define GPTM_IMR_CBEIM_DIS    ((UBase_t) 0x00000000UL)
#define GPTM_IMR_CBEIM_ENA    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPTM_IMR_R_TBMIM_MASK    ((UBase_t) 0x00000800UL)
#define GPTM_IMR_R_TBMIM_BIT    (11UL)
#define GPTM_IMR_R_TBMIM_DIS    ((UBase_t) 0x00000000UL)
#define GPTM_IMR_R_TBMIM_ENA    ((UBase_t) 0x00000800UL)

#define GPTM_IMR_TBMIM_MASK    ((UBase_t) 0x00000001UL)
#define GPTM_IMR_TBMIM_DIS    ((UBase_t) 0x00000000UL)
#define GPTM_IMR_TBMIM_ENA    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPTM_IMR_R_DMABIM_MASK    ((UBase_t) 0x00002000UL)
#define GPTM_IMR_R_DMABIM_BIT    (13UL)
#define GPTM_IMR_R_DMABIM_DIS    ((UBase_t) 0x00000000UL)
#define GPTM_IMR_R_DMABIM_ENA    ((UBase_t) 0x00002000UL)

#define GPTM_IMR_DMABIM_MASK    ((UBase_t) 0x00000001UL)
#define GPTM_IMR_DMABIM_DIS    ((UBase_t) 0x00000000UL)
#define GPTM_IMR_DMABIM_ENA    ((UBase_t) 0x00000001UL)
/*----------*/

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_STANDARD_32_TIMER_REGISTERDEFINES_STANDARD_32_IMR_H_ */
