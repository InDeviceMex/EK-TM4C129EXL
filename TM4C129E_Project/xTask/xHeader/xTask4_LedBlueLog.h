/**
 *
 * @file xTask4_LedBlueLog.h
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
 * @verbatim 19 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 19 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XTASK_XHEADER_XTASK4_LEDBLUELOG_H_
#define XTASK_XHEADER_XTASK4_LEDBLUELOG_H_

#include <xUtils/Standard/Standard.h>

extern uint32_t u32CountTask;
extern uint64_t u64PWMValue;
extern uint32_t u32ConfigurationDone;

void xTask4_LedBlueLog(void* pvParams);

#endif /* XTASK_XHEADER_XTASK4_LEDBLUELOG_H_ */
