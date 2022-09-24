/**
 *
 * @file GPIO_InterruptRoutine_Vector_GPIOJ.c
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
#include <xApplication_MCU/GPIO/Interrupt/InterruptRoutine/xHeader/GPIO_InterruptRoutine_Vector_GPIOJ.h>

#include <xApplication_MCU/GPIO/Intrinsics/xHeader/GPIO_Dependencies.h>

void GPIOJ__vIRQVectorHandler(void)
{
    uint32_t u32Reg;
    uint32_t u32Ready;
    uint32_t u32DMAEnable;
    GPIO_pvfIRQSourceHandler_t pvfCallback;
    u32Ready = SYSCTL_PRGPIO_R;
    if(SYSCTL_PRGPIO_R_GPIOJ_NOREADY == (SYSCTL_PRGPIO_R_GPIOJ_MASK & u32Ready))
    {
        pvfCallback = GPIO_SW__pvfGetIRQSourceHandler(GPIO_enPORT_J);
        pvfCallback(GPIOJ_BASE, (void*) GPIO_enPIN_MAX);
    }
    else
    {
        u32Reg = GPIOJ_MIS_R;

        if(0UL == (((uint32_t) GPIO_enPINMASK_ALL) & u32Reg))
        {
            pvfCallback = GPIO_SW__pvfGetIRQSourceHandler(GPIO_enPORT_J);
            pvfCallback(GPIOJ_BASE, (void*) GPIO_enPIN_MAX);
        }
        else
        {
            if((uint32_t) GPIO_MIS_R_DMAMIS_ACTIVE & u32Reg)
            {
                u32DMAEnable = GPIOJ_DMACTL_R;
                u32DMAEnable &= u32Reg;
                GPIOJ_ICR_R = GPIO_ICR_R_DMAIC_CLEAR;
                if((uint32_t) GPIO_enPINMASK_0 & u32DMAEnable)
                {
                    GPIOJ_ICR_R = (uint32_t) GPIO_enPINMASK_0;
                    pvfCallback = GPIO_DMA__pvfGetIRQSourceHandler(GPIO_enPORT_J, GPIO_enPIN_0);
                    pvfCallback(GPIOJ_BASE, (void*) GPIO_enPIN_0);
                }
                if((uint32_t) GPIO_enPINMASK_1 & u32DMAEnable)
                {
                    GPIOJ_ICR_R = (uint32_t) GPIO_enPINMASK_1;
                    pvfCallback = GPIO_DMA__pvfGetIRQSourceHandler(GPIO_enPORT_J, GPIO_enPIN_1);
                    pvfCallback(GPIOJ_BASE, (void*) GPIO_enPIN_1);
                }
                if((uint32_t) GPIO_enPINMASK_2 & u32DMAEnable)
                {
                    GPIOJ_ICR_R = (uint32_t) GPIO_enPINMASK_2;
                    pvfCallback = GPIO_DMA__pvfGetIRQSourceHandler(GPIO_enPORT_J, GPIO_enPIN_2);
                    pvfCallback(GPIOJ_BASE, (void*) GPIO_enPIN_2);
                }
                if((uint32_t) GPIO_enPINMASK_3 & u32DMAEnable)
                {
                    GPIOJ_ICR_R = (uint32_t) GPIO_enPINMASK_3;
                    pvfCallback = GPIO_DMA__pvfGetIRQSourceHandler(GPIO_enPORT_J, GPIO_enPIN_3);
                    pvfCallback(GPIOJ_BASE, (void*) GPIO_enPIN_3);
                }
                if((uint32_t) GPIO_enPINMASK_4 & u32DMAEnable)
                {
                    GPIOJ_ICR_R = (uint32_t) GPIO_enPINMASK_4;
                    pvfCallback = GPIO_DMA__pvfGetIRQSourceHandler(GPIO_enPORT_J, GPIO_enPIN_4);
                    pvfCallback(GPIOJ_BASE, (void*) GPIO_enPIN_4);
                }
                if((uint32_t) GPIO_enPINMASK_5 & u32DMAEnable)
                {
                    GPIOJ_ICR_R = (uint32_t) GPIO_enPINMASK_5;
                    pvfCallback = GPIO_DMA__pvfGetIRQSourceHandler(GPIO_enPORT_J, GPIO_enPIN_5);
                    pvfCallback(GPIOJ_BASE, (void*) GPIO_enPIN_5);
                }
                if((uint32_t) GPIO_enPINMASK_6 & u32DMAEnable)
                {
                    GPIOJ_ICR_R = (uint32_t) GPIO_enPINMASK_6;
                    pvfCallback = GPIO_DMA__pvfGetIRQSourceHandler(GPIO_enPORT_J, GPIO_enPIN_6);
                    pvfCallback(GPIOJ_BASE, (void*) GPIO_enPIN_6);
                }
                if((uint32_t) GPIO_enPINMASK_7 & u32DMAEnable)
                {
                    GPIOJ_ICR_R = (uint32_t) GPIO_enPINMASK_7;
                    pvfCallback = GPIO_DMA__pvfGetIRQSourceHandler(GPIO_enPORT_J, GPIO_enPIN_7);
                    pvfCallback(GPIOJ_BASE, (void*) GPIO_enPIN_7);
                }
            }
            if((uint32_t) GPIO_enPINMASK_0 & u32Reg)
            {
                GPIOJ_ICR_R = (uint32_t) GPIO_enPINMASK_0;
                pvfCallback = GPIO__pvfGetIRQSourceHandler(GPIO_enPORT_J, GPIO_enPIN_0);
                pvfCallback(GPIOJ_BASE, (void*) GPIO_enPIN_0);
            }
            if((uint32_t) GPIO_enPINMASK_1 & u32Reg)
            {
                GPIOJ_ICR_R = (uint32_t) GPIO_enPINMASK_1;
                pvfCallback = GPIO__pvfGetIRQSourceHandler(GPIO_enPORT_J, GPIO_enPIN_1);
                pvfCallback(GPIOJ_BASE, (void*) GPIO_enPIN_1);
            }
            if((uint32_t) GPIO_enPINMASK_2 & u32Reg)
            {
                GPIOJ_ICR_R = (uint32_t) GPIO_enPINMASK_2;
                pvfCallback = GPIO__pvfGetIRQSourceHandler(GPIO_enPORT_J, GPIO_enPIN_2);
                pvfCallback(GPIOJ_BASE, (void*) GPIO_enPIN_2);
            }
            if((uint32_t) GPIO_enPINMASK_3 & u32Reg)
            {
                GPIOJ_ICR_R = (uint32_t) GPIO_enPINMASK_3;
                pvfCallback = GPIO__pvfGetIRQSourceHandler(GPIO_enPORT_J, GPIO_enPIN_3);
                pvfCallback(GPIOJ_BASE, (void*) GPIO_enPIN_3);
            }
            if((uint32_t) GPIO_enPINMASK_4 & u32Reg)
            {
                GPIOJ_ICR_R = (uint32_t) GPIO_enPINMASK_4;
                pvfCallback = GPIO__pvfGetIRQSourceHandler(GPIO_enPORT_J, GPIO_enPIN_4);
                pvfCallback(GPIOJ_BASE, (void*) GPIO_enPIN_4);
            }
            if((uint32_t) GPIO_enPINMASK_5 & u32Reg)
            {
                GPIOJ_ICR_R = (uint32_t) GPIO_enPINMASK_5;
                pvfCallback = GPIO__pvfGetIRQSourceHandler(GPIO_enPORT_J, GPIO_enPIN_5);
                pvfCallback(GPIOJ_BASE, (void*) GPIO_enPIN_5);
            }
            if((uint32_t) GPIO_enPINMASK_6 & u32Reg)
            {
                GPIOJ_ICR_R = (uint32_t) GPIO_enPINMASK_6;
                pvfCallback = GPIO__pvfGetIRQSourceHandler(GPIO_enPORT_J, GPIO_enPIN_6);
                pvfCallback(GPIOJ_BASE, (void*) GPIO_enPIN_6);
            }
            if((uint32_t) GPIO_enPINMASK_7 & u32Reg)
            {
                GPIOJ_ICR_R = (uint32_t) GPIO_enPINMASK_7;
                pvfCallback = GPIO__pvfGetIRQSourceHandler(GPIO_enPORT_J, GPIO_enPIN_7);
                pvfCallback(GPIOJ_BASE, (void*) GPIO_enPIN_7);
            }
        }
    }
}
