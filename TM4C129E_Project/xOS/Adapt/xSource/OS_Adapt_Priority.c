/**
 *
 * @file OS_Adapt_Priority.c
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
#include <xOS/Adapt/xHeader/OS_Adapt_Priority.h>

void OS_Adapt__vEndSwitchingISR( uint32_t u32SwitchRequired)
{
    if( u32SwitchRequired != 0UL )
    {
        OS_ADAPT_YIELD();
    }
}

