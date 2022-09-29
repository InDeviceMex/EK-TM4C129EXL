/**
 *
 * @file PWM_Ready.h
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
 * @verbatim 9 ene. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 9 ene. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XAPPLICATION_MCU_PWM_INTRINSICS_XHEADER_PWM_READY_H_
#define XAPPLICATION_MCU_PWM_INTRINSICS_XHEADER_PWM_READY_H_

#include <xApplication_MCU/PWM/Intrinsics/xHeader/PWM_Defines.h>

void PWM__vSetReady(PWM_nMODULE enModule);
void PWM__vClearReady(PWM_nMODULE enModule);
PWM_nSTATUS PWM__enIsReady(PWM_nMODULE enModule);

#endif /* XAPPLICATION_MCU_PWM_INTRINSICS_XHEADER_PWM_READY_H_ */
