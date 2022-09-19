/**
 *
 * @file GPIO_InterruptRoutine_Vector_GPIOG.c
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
#include <xApplication_MCU/GPIO/Interrupt/InterruptRoutine/xHeader/GPIO_InterruptRoutine_Vector_GPIOG.h>

#include <xApplication_MCU/GPIO/Intrinsics/xHeader/GPIO_Dependencies.h>

void GPIOG__vIRQVectorHandler(void)
{
    uint32_t u32Reg;
    uint32_t u32Ready;
    GPIO_pvfIRQSourceHandler_t pvfCallback;

    u32Ready = SYSCTL_PRGPIO_R;
    if(SYSCTL_PRGPIO_R_GPIOG_NOREADY == (SYSCTL_PRGPIO_R_GPIOG_MASK & u32Ready))
    {
        pvfCallback = GPIO_SW__pvfGetIRQSourceHandler(GPIO_enPORT_G);
        pvfCallback(GPIOG_BASE, (void*) 0UL);
    }
    else
    {
        u32Reg = GPIOG_MIS_R;

        if(0UL == (((uint32_t) GPIO_enPINMASK_ALL | GPIO_MIS_R_DMAMIS_ACTIVE) & u32Reg))
        {
            pvfCallback = GPIO_SW__pvfGetIRQSourceHandler(GPIO_enPORT_G);
            pvfCallback(GPIOG_BASE, (void*) 0UL);
        }
        else
        {
            if((uint32_t) GPIO_MIS_R_DMAMIS_ACTIVE & u32Reg)
            {
                GPIOG_ICR_R = GPIO_ICR_R_DMAIC_CLEAR;
                pvfCallback = GPIO_DMA__pvfGetIRQSourceHandler(GPIO_enPORT_G);
                pvfCallback(GPIOG_BASE, (void*) 0UL);
            }
            if((uint32_t) GPIO_enPINMASK_0 & u32Reg)
            {
                GPIOG_ICR_R = (uint32_t) GPIO_enPINMASK_0;
                pvfCallback = GPIO__pvfGetIRQSourceHandler(GPIO_enPORT_G, GPIO_enPIN_0);
                pvfCallback(GPIOG_BASE, (void*) GPIO_enPIN_0);
            }
            if((uint32_t) GPIO_enPINMASK_1 & u32Reg)
            {
                GPIOG_ICR_R = (uint32_t) GPIO_enPINMASK_1;
                pvfCallback = GPIO__pvfGetIRQSourceHandler(GPIO_enPORT_G, GPIO_enPIN_1);
                pvfCallback(GPIOG_BASE, (void*) GPIO_enPIN_1);
            }
            if((uint32_t) GPIO_enPINMASK_2 & u32Reg)
            {
                GPIOG_ICR_R = (uint32_t) GPIO_enPINMASK_2;
                pvfCallback = GPIO__pvfGetIRQSourceHandler(GPIO_enPORT_G, GPIO_enPIN_2);
                pvfCallback(GPIOG_BASE, (void*) GPIO_enPIN_2);
            }
            if((uint32_t) GPIO_enPINMASK_3 & u32Reg)
            {
                GPIOG_ICR_R = (uint32_t) GPIO_enPINMASK_3;
                pvfCallback = GPIO__pvfGetIRQSourceHandler(GPIO_enPORT_G, GPIO_enPIN_3);
                pvfCallback(GPIOG_BASE, (void*) GPIO_enPIN_3);
            }
            if((uint32_t) GPIO_enPINMASK_4 & u32Reg)
            {
                GPIOG_ICR_R = (uint32_t) GPIO_enPINMASK_4;
                pvfCallback = GPIO__pvfGetIRQSourceHandler(GPIO_enPORT_G, GPIO_enPIN_4);
                pvfCallback(GPIOG_BASE, (void*) GPIO_enPIN_4);
            }
            if((uint32_t) GPIO_enPINMASK_5 & u32Reg)
            {
                GPIOG_ICR_R = (uint32_t) GPIO_enPINMASK_5;
                pvfCallback = GPIO__pvfGetIRQSourceHandler(GPIO_enPORT_G, GPIO_enPIN_5);
                pvfCallback(GPIOG_BASE, (void*) GPIO_enPIN_5);
            }
            if((uint32_t) GPIO_enPINMASK_6 & u32Reg)
            {
                GPIOG_ICR_R = (uint32_t) GPIO_enPINMASK_6;
                pvfCallback = GPIO__pvfGetIRQSourceHandler(GPIO_enPORT_G, GPIO_enPIN_6);
                pvfCallback(GPIOG_BASE, (void*) GPIO_enPIN_6);
            }
            if((uint32_t) GPIO_enPINMASK_7 & u32Reg)
            {
                GPIOG_ICR_R = (uint32_t) GPIO_enPINMASK_7;
                pvfCallback = GPIO__pvfGetIRQSourceHandler(GPIO_enPORT_G, GPIO_enPIN_7);
                pvfCallback(GPIOG_BASE, (void*) GPIO_enPIN_7);
            }
        }
    }
}
