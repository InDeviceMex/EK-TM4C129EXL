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

/* Other file private variables. --------------------------------*/
static volatile uint32_t OS_Task_u32CurrentNumberOfTasks = 0UL;
static uint32_t OS_Task_u32TaskNumber = 0UL;


uint32_t OS_Task__u32GetTaskNumber(void)
{
    return (OS_Task_u32TaskNumber);
}

void OS_Task__vSetTaskNumber(uint32_t u32ValueArg)
{
    OS_Task_u32TaskNumber = u32ValueArg;
}

void OS_Task__vIncreaseTaskNumber(void)
{
    ++OS_Task_u32TaskNumber;
}

uint32_t OS_Task__u32GetCurrentNumberOfTasks(void)
{
    return (OS_Task_u32CurrentNumberOfTasks);
}

void OS_Task__vIncreaseCurrentNumberOfTasks(void)
{
    ++OS_Task_u32CurrentNumberOfTasks;
}

void OS_Task__vDecreaseCurrentNumberOfTasks(void)
{
    --OS_Task_u32CurrentNumberOfTasks;
}



