/**
 *
 * @file OS_Adapt_Critical.h
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
 * @verbatim 15 jul. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 15 jul. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XOS_ADAPT_XHEADER_OS_ADAPT_CRITICAL_H_
#define XOS_ADAPT_XHEADER_OS_ADAPT_CRITICAL_H_

#include <xOS/Adapt/xHeader/OS_Adapt_Defines.h>

void OS_Adapt__vExitCritical(void);
void OS_Adapt__vEnterCritical(void);

uint32_t OS_Adapt__u32GetCriticalNesting(void);
void OS_Adapt__vSetCriticalNesting(uint32_t u32NestingValue);
void OS_Adapt__vIncreaseCriticalNesting(void);

#endif /* XOS_ADAPT_XHEADER_OS_ADAPT_CRITICAL_H_ */
