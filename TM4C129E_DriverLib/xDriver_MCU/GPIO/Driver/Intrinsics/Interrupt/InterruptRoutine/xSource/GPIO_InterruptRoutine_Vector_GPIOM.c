/**
 *
 * @file GPIO_InterruptRoutine_Vector_GPIOM.c
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
 * @verbatim 9 jul. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 9 jul. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/GPIO/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/GPIO_InterruptRoutine_Vector_GPIOM.h>

#include <xDriver_MCU/GPIO/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/GPIO_InterruptRoutine_Source.h>
#include <xDriver_MCU/GPIO/Peripheral/GPIO_Peripheral.h>


void GPIOM__vIRQVectorHandler(void)
{
    volatile uint32_t u32Reg = 0UL;
    void(*pfvCallback)(void)  = (void(*)(void)) 0UL;

    u32Reg = GPIOM_MIS_R;

    if((uint32_t) GPIO_MIS_R_DMAMIS_OCCUR & u32Reg)
    {
        GPIOM_ICR_R = GPIO_ICR_R_DMAIC_CLEAR;
        pfvCallback = GPIO__pvfGetIRQSourceDMAHandler(GPIO_enPORT_M);
        pfvCallback();
    }
    if((uint32_t) GPIO_enPIN_0 & u32Reg)
    {
        GPIOM_ICR_R = (uint32_t) GPIO_enPIN_0;
        pfvCallback = GPIO__pvfGetIRQSourceHandler(GPIO_enPORT_M, GPIO_enPIN_NUMBER0);
        pfvCallback();
    }
    if((uint32_t) GPIO_enPIN_1 & u32Reg)
    {
        GPIOM_ICR_R = (uint32_t) GPIO_enPIN_1;
        pfvCallback = GPIO__pvfGetIRQSourceHandler(GPIO_enPORT_M, GPIO_enPIN_NUMBER1);
        pfvCallback();
    }
    if((uint32_t) GPIO_enPIN_2 & u32Reg)
    {
        GPIOM_ICR_R = (uint32_t) GPIO_enPIN_2;
        pfvCallback = GPIO__pvfGetIRQSourceHandler(GPIO_enPORT_M, GPIO_enPIN_NUMBER2);
        pfvCallback();
    }
    if((uint32_t) GPIO_enPIN_3 & u32Reg)
    {
        GPIOM_ICR_R = (uint32_t) GPIO_enPIN_3;
        pfvCallback = GPIO__pvfGetIRQSourceHandler(GPIO_enPORT_M, GPIO_enPIN_NUMBER3);
        pfvCallback();
    }
    if((uint32_t) GPIO_enPIN_4 & u32Reg)
    {
        GPIOM_ICR_R = (uint32_t) GPIO_enPIN_4;
        pfvCallback = GPIO__pvfGetIRQSourceHandler(GPIO_enPORT_M, GPIO_enPIN_NUMBER4);
        pfvCallback();
    }
    if((uint32_t) GPIO_enPIN_5 & u32Reg)
    {
        GPIOM_ICR_R = (uint32_t) GPIO_enPIN_5;
        pfvCallback = GPIO__pvfGetIRQSourceHandler(GPIO_enPORT_M, GPIO_enPIN_NUMBER5);
        pfvCallback();
    }
    if((uint32_t) GPIO_enPIN_6 & u32Reg)
    {
        GPIOM_ICR_R = (uint32_t) GPIO_enPIN_6;
        pfvCallback = GPIO__pvfGetIRQSourceHandler(GPIO_enPORT_M, GPIO_enPIN_NUMBER6);
        pfvCallback();
    }
    if((uint32_t) GPIO_enPIN_7 & u32Reg)
    {
        GPIOM_ICR_R = (uint32_t) GPIO_enPIN_7;
        pfvCallback = GPIO__pvfGetIRQSourceHandler(GPIO_enPORT_M, GPIO_enPIN_NUMBER7);
        pfvCallback();
    }
}
