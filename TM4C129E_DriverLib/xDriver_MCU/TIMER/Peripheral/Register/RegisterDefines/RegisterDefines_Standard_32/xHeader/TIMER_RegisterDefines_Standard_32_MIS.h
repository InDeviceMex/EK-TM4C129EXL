/**
 *
 * @file TIMER_RegisterDefines_Standard_32_MIS.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_STANDARD_32_TIMER_REGISTERDEFINES_STANDARD_32_MIS_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_STANDARD_32_TIMER_REGISTERDEFINES_STANDARD_32_MIS_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 8 MIS *********************************************
******************************************************************************************/

/*----------*/
#define GPTM_MIS_R_TATOMIS_MASK    ((uint32_t) 0x00000001UL)
#define GPTM_MIS_R_TATOMIS_BIT    (0UL)
#define GPTM_MIS_R_TATOMIS_NOOCCUR    ((uint32_t) 0x00000000UL)
#define GPTM_MIS_R_TATOMIS_OCCUR    ((uint32_t) 0x00000001UL)

#define GPTM_MIS_TATOMIS_MASK    ((uint32_t) 0x00000001UL)
#define GPTM_MIS_TATOMIS_NOOCCUR    ((uint32_t) 0x00000000UL)
#define GPTM_MIS_TATOMIS_OCCUR    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPTM_MIS_R_CAMMIS_MASK    ((uint32_t) 0x00000002UL)
#define GPTM_MIS_R_CAMMIS_BIT    (1UL)
#define GPTM_MIS_R_CAMMIS_NOOCCUR    ((uint32_t) 0x00000000UL)
#define GPTM_MIS_R_CAMMIS_OCCUR    ((uint32_t) 0x00000002UL)

#define GPTM_MIS_CAMMIS_MASK    ((uint32_t) 0x00000001UL)
#define GPTM_MIS_CAMMIS_NOOCCUR    ((uint32_t) 0x00000000UL)
#define GPTM_MIS_CAMMIS_OCCUR    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPTM_MIS_R_CAEMIS_MASK    ((uint32_t) 0x00000004UL)
#define GPTM_MIS_R_CAEMIS_BIT    (2UL)
#define GPTM_MIS_R_CAEMIS_NOOCCUR    ((uint32_t) 0x00000000UL)
#define GPTM_MIS_R_CAEMIS_OCCUR    ((uint32_t) 0x00000004UL)

#define GPTM_MIS_CAEMIS_MASK    ((uint32_t) 0x00000001UL)
#define GPTM_MIS_CAEMIS_NOOCCUR    ((uint32_t) 0x00000000UL)
#define GPTM_MIS_CAEMIS_OCCUR    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPTM_MIS_R_RTCMIS_MASK    ((uint32_t) 0x00000008UL)
#define GPTM_MIS_R_RTCMIS_BIT    (3UL)
#define GPTM_MIS_R_RTCMIS_NOOCCUR    ((uint32_t) 0x00000000UL)
#define GPTM_MIS_R_RTCMIS_OCCUR    ((uint32_t) 0x00000008UL)

#define GPTM_MIS_RTCMIS_MASK    ((uint32_t) 0x00000001UL)
#define GPTM_MIS_RTCMIS_NOOCCUR    ((uint32_t) 0x00000000UL)
#define GPTM_MIS_RTCMIS_OCCUR    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPTM_MIS_R_TAMMIS_MASK    ((uint32_t) 0x00000010UL)
#define GPTM_MIS_R_TAMMIS_BIT    (4UL)
#define GPTM_MIS_R_TAMMIS_NOOCCUR    ((uint32_t) 0x00000000UL)
#define GPTM_MIS_R_TAMMIS_OCCUR    ((uint32_t) 0x00000010UL)

#define GPTM_MIS_TAMMIS_MASK    ((uint32_t) 0x00000001UL)
#define GPTM_MIS_TAMMIS_NOOCCUR    ((uint32_t) 0x00000000UL)
#define GPTM_MIS_TAMMIS_OCCUR    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPTM_MIS_R_TBTOMIS_MASK    ((uint32_t) 0x00000100UL)
#define GPTM_MIS_R_TBTOMIS_BIT    (8UL)
#define GPTM_MIS_R_TBTOMIS_NOOCCUR    ((uint32_t) 0x00000000UL)
#define GPTM_MIS_R_TBTOMIS_OCCUR    ((uint32_t) 0x00000100UL)

#define GPTM_MIS_TBTOMIS_MASK    ((uint32_t) 0x00000001UL)
#define GPTM_MIS_TBTOMIS_NOOCCUR    ((uint32_t) 0x00000000UL)
#define GPTM_MIS_TBTOMIS_OCCUR    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPTM_MIS_R_CBMMIS_MASK    ((uint32_t) 0x00000200UL)
#define GPTM_MIS_R_CBMMIS_BIT    (9UL)
#define GPTM_MIS_R_CBMMIS_NOOCCUR    ((uint32_t) 0x00000000UL)
#define GPTM_MIS_R_CBMMIS_OCCUR    ((uint32_t) 0x00000200UL)

#define GPTM_MIS_CBMMIS_MASK    ((uint32_t) 0x00000001UL)
#define GPTM_MIS_CBMMIS_NOOCCUR    ((uint32_t) 0x00000000UL)
#define GPTM_MIS_CBMMIS_OCCUR    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPTM_MIS_R_CBEMIS_MASK    ((uint32_t) 0x00000400UL)
#define GPTM_MIS_R_CBEMIS_BIT    (10UL)
#define GPTM_MIS_R_CBEMIS_NOOCCUR    ((uint32_t) 0x00000000UL)
#define GPTM_MIS_R_CBEMIS_OCCUR    ((uint32_t) 0x00000400UL)

#define GPTM_MIS_CBEMIS_MASK    ((uint32_t) 0x00000001UL)
#define GPTM_MIS_CBEMIS_NOOCCUR    ((uint32_t) 0x00000000UL)
#define GPTM_MIS_CBEMIS_OCCUR    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPTM_MIS_R_TBMMIS_MASK    ((uint32_t) 0x00000800UL)
#define GPTM_MIS_R_TBMMIS_BIT    (11UL)
#define GPTM_MIS_R_TBMMIS_NOOCCUR    ((uint32_t) 0x00000000UL)
#define GPTM_MIS_R_TBMMIS_OCCUR    ((uint32_t) 0x00000800UL)

#define GPTM_MIS_TBMMIS_MASK    ((uint32_t) 0x00000001UL)
#define GPTM_MIS_TBMMIS_NOOCCUR    ((uint32_t) 0x00000000UL)
#define GPTM_MIS_TBMMIS_OCCUR    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPTM_MIS_R_WUEMIS_MASK    ((uint32_t) 0x00010000UL)
#define GPTM_MIS_R_WUEMIS_BIT    (16UL)
#define GPTM_MIS_R_WUEMIS_NOOCCUR    ((uint32_t) 0x00000000UL)
#define GPTM_MIS_R_WUEMIS_OCCUR    ((uint32_t) 0x00010000UL)

#define GPTM_MIS_WUEMIS_MASK    ((uint32_t) 0x00000001UL)
#define GPTM_MIS_WUEMIS_NOOCCUR    ((uint32_t) 0x00000000UL)
#define GPTM_MIS_WUEMIS_OCCUR    ((uint32_t) 0x00000001UL)
/*----------*/

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_STANDARD_32_TIMER_REGISTERDEFINES_STANDARD_32_MIS_H_ */
