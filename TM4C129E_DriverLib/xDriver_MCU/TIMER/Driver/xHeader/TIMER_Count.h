/**
 *
 * @file TIMER_Count.h
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
 * @verbatim 27 ago. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 27 ago. 2020     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_TIMER_DRIVER_XHEADER_TIMER_COUNT_H_
#define XDRIVER_MCU_TIMER_DRIVER_XHEADER_TIMER_COUNT_H_

#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/TIMER/Peripheral/xHeader/TIMER_Enum.h>

TIMER_nSTATUS TIMER__enGetCount(TIMER_nMODULE enModule, uint64_t* pu64Count);

#endif /* XDRIVER_MCU_TIMER_DRIVER_XHEADER_TIMER_COUNT_H_ */
