/**
 *
 * @file SYSCTL_InterruptRoutine.c
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
 * @verbatim 16 jun. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 16 jun. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/SYSCTL/Driver/Interrupt/InterruptRoutine/SYSCTL_InterruptRoutine.h>


static void (*SYSCTL__pvIRQVectorHandler[1UL]) (void) =
{
    &SYSCTL__vIRQVectorHandler
};

void (*SYSCTL__pvfGetIRQVectorHandler(void))(void)
{

    return (SYSCTL__pvIRQVectorHandler[0UL]);
}

void (**SYSCTL__pvfGetIRQVectorHandlerPointer(void))(void)
{
    return ((void(**)(void)) &SYSCTL__pvIRQVectorHandler[0UL]);
}
