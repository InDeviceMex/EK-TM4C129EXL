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
#include <xApplication_MCU/GPIO/Interrupt/InterruptRoutine/xHeader/GPIO_InterruptRoutine_Vector_GPIOM.h>

#include <xApplication_MCU/GPIO/Intrinsics/xHeader/GPIO_Dependencies.h>

void GPIOM__vIRQVectorHandler(void)
{
    volatile uint32_t u32Reg = 0UL;
    volatile uint32_t u32Ready = 0U;
    void(*pvfCallback)(void)  = (void(*)(void)) 0UL;

    u32Ready = SYSCTL_PRGPIO_R;
    if(SYSCTL_PRGPIO_R_GPIOM_NOREADY == (SYSCTL_PRGPIO_R_GPIOM_MASK & u32Ready))
    {
        pvfCallback = GPIO_SW__pvfGetIRQSourceHandler(GPIO_enPORT_M);
        pvfCallback();
    }
    else
    {
        u32Reg = GPIOM_MIS_R;

        if(0UL == (((uint32_t) GPIO_enPINMASK_ALL | GPIO_MIS_R_DMAMIS_ACTIVE) & u32Reg))
        {
            pvfCallback = GPIO_SW__pvfGetIRQSourceHandler(GPIO_enPORT_M);
            pvfCallback();
        }
        else
        {
            if((uint32_t) GPIO_MIS_R_DMAMIS_ACTIVE & u32Reg)
            {
                GPIOM_ICR_R = GPIO_ICR_R_DMAIC_CLEAR;
                pvfCallback = GPIO_DMA__pvfGetIRQSourceHandler(GPIO_enPORT_M);
                pvfCallback();
            }
            if((uint32_t) GPIO_enPINMASK_0 & u32Reg)
            {
                GPIOM_ICR_R = (uint32_t) GPIO_enPINMASK_0;
                pvfCallback = GPIO__pvfGetIRQSourceHandler(GPIO_enPORT_M, GPIO_enPIN_0);
                pvfCallback();
            }
            if((uint32_t) GPIO_enPINMASK_1 & u32Reg)
            {
                GPIOM_ICR_R = (uint32_t) GPIO_enPINMASK_1;
                pvfCallback = GPIO__pvfGetIRQSourceHandler(GPIO_enPORT_M, GPIO_enPIN_1);
                pvfCallback();
            }
            if((uint32_t) GPIO_enPINMASK_2 & u32Reg)
            {
                GPIOM_ICR_R = (uint32_t) GPIO_enPINMASK_2;
                pvfCallback = GPIO__pvfGetIRQSourceHandler(GPIO_enPORT_M, GPIO_enPIN_2);
                pvfCallback();
            }
            if((uint32_t) GPIO_enPINMASK_3 & u32Reg)
            {
                GPIOM_ICR_R = (uint32_t) GPIO_enPINMASK_3;
                pvfCallback = GPIO__pvfGetIRQSourceHandler(GPIO_enPORT_M, GPIO_enPIN_3);
                pvfCallback();
            }
            if((uint32_t) GPIO_enPINMASK_4 & u32Reg)
            {
                GPIOM_ICR_R = (uint32_t) GPIO_enPINMASK_4;
                pvfCallback = GPIO__pvfGetIRQSourceHandler(GPIO_enPORT_M, GPIO_enPIN_4);
                pvfCallback();
            }
            if((uint32_t) GPIO_enPINMASK_5 & u32Reg)
            {
                GPIOM_ICR_R = (uint32_t) GPIO_enPINMASK_5;
                pvfCallback = GPIO__pvfGetIRQSourceHandler(GPIO_enPORT_M, GPIO_enPIN_5);
                pvfCallback();
            }
            if((uint32_t) GPIO_enPINMASK_6 & u32Reg)
            {
                GPIOM_ICR_R = (uint32_t) GPIO_enPINMASK_6;
                pvfCallback = GPIO__pvfGetIRQSourceHandler(GPIO_enPORT_M, GPIO_enPIN_6);
                pvfCallback();
            }
            if((uint32_t) GPIO_enPINMASK_7 & u32Reg)
            {
                GPIOM_ICR_R = (uint32_t) GPIO_enPINMASK_7;
                pvfCallback = GPIO__pvfGetIRQSourceHandler(GPIO_enPORT_M, GPIO_enPIN_7);
                pvfCallback();
            }
        }
    }
}
