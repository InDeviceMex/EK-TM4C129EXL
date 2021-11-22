/**
 *
 * @file OS_Task_Create.c
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
 * @verbatim 21 jul. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 21 jul. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xOS/Task/Intrinsics/xHeader/OS_Task_Create.h>

static volatile OS_UBase_t OS_Task_uxCurrentNumberOfTasks = 0UL;
static OS_UBase_t OS_Task_uxTaskNumber = 0UL;

OS_UBase_t OS_Task__uxGetTaskNumber(void)
{
    return (OS_Task_uxTaskNumber);
}

void OS_Task__vSetTaskNumber(OS_UBase_t uxValueArg)
{
    OS_Task_uxTaskNumber = uxValueArg;
}

void OS_Task__vIncreaseTaskNumber(void)
{
    ++OS_Task_uxTaskNumber;
}

OS_UBase_t OS_Task__uxGetCurrentNumberOfTasks(void)
{
    return (OS_Task_uxCurrentNumberOfTasks);
}

void OS_Task__vIncreaseCurrentNumberOfTasks(void)
{
    ++OS_Task_uxCurrentNumberOfTasks;
}

void OS_Task__vDecreaseCurrentNumberOfTasks(void)
{
    --OS_Task_uxCurrentNumberOfTasks;
}
