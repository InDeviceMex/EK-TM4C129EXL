/**
 *
 * @file TIMER_Init.c
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
 * @verbatim 13 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 13 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xApplication_MCU/TIMER/xHeader/TIMER_Init.h>

#include <xApplication_MCU/TIMER/Interrupt/TIMER_Interrupt.h>

void TIMER__vInit(void)
{
    void (*pfIrqVectorHandler) (void) = (void (*) (void)) 0UL;

    pfIrqVectorHandler = TIMER__pvfGetIRQVectorHandler(TIMER_enSUBMODULE_A, TIMER_enMODULE_NUM_0);
    TIMER__vRegisterIRQVectorHandler( pfIrqVectorHandler, TIMER_enT0A);
    pfIrqVectorHandler = TIMER__pvfGetIRQVectorHandler(TIMER_enSUBMODULE_B, TIMER_enMODULE_NUM_0);
    TIMER__vRegisterIRQVectorHandler( pfIrqVectorHandler, TIMER_enT0B);
    pfIrqVectorHandler = TIMER__pvfGetIRQVectorHandler(TIMER_enSUBMODULE_A, TIMER_enMODULE_NUM_1);
    TIMER__vRegisterIRQVectorHandler( pfIrqVectorHandler, TIMER_enT1A);
    pfIrqVectorHandler = TIMER__pvfGetIRQVectorHandler(TIMER_enSUBMODULE_B, TIMER_enMODULE_NUM_1);
    TIMER__vRegisterIRQVectorHandler( pfIrqVectorHandler, TIMER_enT1B);
    pfIrqVectorHandler = TIMER__pvfGetIRQVectorHandler(TIMER_enSUBMODULE_A, TIMER_enMODULE_NUM_2);
    TIMER__vRegisterIRQVectorHandler( pfIrqVectorHandler, TIMER_enT2A);
    pfIrqVectorHandler = TIMER__pvfGetIRQVectorHandler(TIMER_enSUBMODULE_B, TIMER_enMODULE_NUM_2);
    TIMER__vRegisterIRQVectorHandler( pfIrqVectorHandler, TIMER_enT2B);
    pfIrqVectorHandler = TIMER__pvfGetIRQVectorHandler(TIMER_enSUBMODULE_A, TIMER_enMODULE_NUM_3);
    TIMER__vRegisterIRQVectorHandler( pfIrqVectorHandler, TIMER_enT3A);
    pfIrqVectorHandler = TIMER__pvfGetIRQVectorHandler(TIMER_enSUBMODULE_B, TIMER_enMODULE_NUM_3);
    TIMER__vRegisterIRQVectorHandler( pfIrqVectorHandler, TIMER_enT3B);
    pfIrqVectorHandler = TIMER__pvfGetIRQVectorHandler(TIMER_enSUBMODULE_A, TIMER_enMODULE_NUM_4);
    TIMER__vRegisterIRQVectorHandler( pfIrqVectorHandler, TIMER_enT4A);
    pfIrqVectorHandler = TIMER__pvfGetIRQVectorHandler(TIMER_enSUBMODULE_B, TIMER_enMODULE_NUM_4);
    TIMER__vRegisterIRQVectorHandler( pfIrqVectorHandler, TIMER_enT4B);
    pfIrqVectorHandler = TIMER__pvfGetIRQVectorHandler(TIMER_enSUBMODULE_A, TIMER_enMODULE_NUM_5);
    TIMER__vRegisterIRQVectorHandler( pfIrqVectorHandler, TIMER_enT5A);
    pfIrqVectorHandler = TIMER__pvfGetIRQVectorHandler(TIMER_enSUBMODULE_B, TIMER_enMODULE_NUM_5);
    TIMER__vRegisterIRQVectorHandler( pfIrqVectorHandler, TIMER_enT5B);
    pfIrqVectorHandler = TIMER__pvfGetIRQVectorHandler(TIMER_enSUBMODULE_A, TIMER_enMODULE_NUM_6);
    TIMER__vRegisterIRQVectorHandler( pfIrqVectorHandler, TIMER_enT6A);
    pfIrqVectorHandler = TIMER__pvfGetIRQVectorHandler(TIMER_enSUBMODULE_B, TIMER_enMODULE_NUM_6);
    TIMER__vRegisterIRQVectorHandler( pfIrqVectorHandler, TIMER_enT6B);
    pfIrqVectorHandler = TIMER__pvfGetIRQVectorHandler(TIMER_enSUBMODULE_A, TIMER_enMODULE_NUM_7);
    TIMER__vRegisterIRQVectorHandler( pfIrqVectorHandler, TIMER_enT7A);
    pfIrqVectorHandler = TIMER__pvfGetIRQVectorHandler(TIMER_enSUBMODULE_B, TIMER_enMODULE_NUM_7);
    TIMER__vRegisterIRQVectorHandler( pfIrqVectorHandler, TIMER_enT7B);
}
