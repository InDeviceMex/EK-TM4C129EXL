/**
 *
 * @file SYSTICK_InterruptRoutine.c
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
 * @verbatim 20 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 20 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xApplication_MCU/Core/SYSTICK/Interrupt/InterruptRoutine/SYSTICK_InterruptRoutine.h>
#include <xApplication_MCU/Core/SYSTICK/Intrinsics/xHeader/SYSTICK_Defines.h>

void (*SYSTICK__pvIRQVectorHandler[1UL]) (void)=
{
  &SYSTICK__vIRQVectorHandler,
};

void (*SYSTICK__pvfGetIRQVectorHandler(void))(void)
{

    return (SYSTICK__pvIRQVectorHandler[0UL]);
}

void (**SYSTICK__pvfGetIRQVectorHandlerPointer(void))(void)
{
    return ((void(**)(void)) &SYSTICK__pvIRQVectorHandler[0UL]);
}
