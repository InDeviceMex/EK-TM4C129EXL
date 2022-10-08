/**
 *
 * @file GPIO_InterruptRoutine_Vector_GPIOB.c
 * @copyright
 * @verbatim InDeviceMex 2020 @endverbatim
 *
 * @par Responsibility
 * @verbatim InDeviceMex Developers @endverbatim
 *
 * @version
 * @verbatim 1.0 @endverbatim
 *
 * @date
 * @verbatim 30 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 30 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xApplication_MCU/GPIO/Interrupt/InterruptRoutine/xHeader/GPIO_InterruptRoutine_Vector_GPIOB.h>

#include <xApplication_MCU/GPIO/Intrinsics/xHeader/GPIO_Dependencies.h>

void GPIOB__vIRQVectorHandler(void)
{
    UBase_t uxReg;
    UBase_t uxReady;
    UBase_t uxDMAEnable;
    GPIO_pvfIRQSourceHandler_t pvfCallback;
    uxReady = SYSCTL_PRGPIO_R;
    if(SYSCTL_PRGPIO_R_GPIOB_NOREADY == (SYSCTL_PRGPIO_R_GPIOB_MASK & uxReady))
    {
        pvfCallback = GPIO_SW__pvfGetIRQSourceHandler(GPIO_enPORT_B);
        pvfCallback(GPIOB_BASE, (void*) GPIO_enPIN_MAX);
    }
    else
    {
        uxReg = GPIOB_MIS_R;

        if(0UL == (((UBase_t) GPIO_enPINMASK_ALL) & uxReg))
        {
            pvfCallback = GPIO_SW__pvfGetIRQSourceHandler(GPIO_enPORT_B);
            pvfCallback(GPIOB_BASE, (void*) GPIO_enPIN_MAX);
        }
        else
        {
            if((UBase_t) GPIO_MIS_R_DMAMIS_ACTIVE & uxReg)
            {
                uxDMAEnable = GPIOB_DMACTL_R;
                uxDMAEnable &= uxReg;
                GPIOB_ICR_R = GPIO_ICR_R_DMAIC_CLEAR;
                if((UBase_t) GPIO_enPINMASK_0 & uxDMAEnable)
                {
                    GPIOB_ICR_R = (UBase_t) GPIO_enPINMASK_0;
                    pvfCallback = GPIO_DMA__pvfGetIRQSourceHandler(GPIO_enPORT_B, GPIO_enPIN_0);
                    pvfCallback(GPIOB_BASE, (void*) GPIO_enPIN_0);
                }
                if((UBase_t) GPIO_enPINMASK_1 & uxDMAEnable)
                {
                    GPIOB_ICR_R = (UBase_t) GPIO_enPINMASK_1;
                    pvfCallback = GPIO_DMA__pvfGetIRQSourceHandler(GPIO_enPORT_B, GPIO_enPIN_1);
                    pvfCallback(GPIOB_BASE, (void*) GPIO_enPIN_1);
                }
                if((UBase_t) GPIO_enPINMASK_2 & uxDMAEnable)
                {
                    GPIOB_ICR_R = (UBase_t) GPIO_enPINMASK_2;
                    pvfCallback = GPIO_DMA__pvfGetIRQSourceHandler(GPIO_enPORT_B, GPIO_enPIN_2);
                    pvfCallback(GPIOB_BASE, (void*) GPIO_enPIN_2);
                }
                if((UBase_t) GPIO_enPINMASK_3 & uxDMAEnable)
                {
                    GPIOB_ICR_R = (UBase_t) GPIO_enPINMASK_3;
                    pvfCallback = GPIO_DMA__pvfGetIRQSourceHandler(GPIO_enPORT_B, GPIO_enPIN_3);
                    pvfCallback(GPIOB_BASE, (void*) GPIO_enPIN_3);
                }
                if((UBase_t) GPIO_enPINMASK_4 & uxDMAEnable)
                {
                    GPIOB_ICR_R = (UBase_t) GPIO_enPINMASK_4;
                    pvfCallback = GPIO_DMA__pvfGetIRQSourceHandler(GPIO_enPORT_B, GPIO_enPIN_4);
                    pvfCallback(GPIOB_BASE, (void*) GPIO_enPIN_4);
                }
                if((UBase_t) GPIO_enPINMASK_5 & uxDMAEnable)
                {
                    GPIOB_ICR_R = (UBase_t) GPIO_enPINMASK_5;
                    pvfCallback = GPIO_DMA__pvfGetIRQSourceHandler(GPIO_enPORT_B, GPIO_enPIN_5);
                    pvfCallback(GPIOB_BASE, (void*) GPIO_enPIN_5);
                }
                if((UBase_t) GPIO_enPINMASK_6 & uxDMAEnable)
                {
                    GPIOB_ICR_R = (UBase_t) GPIO_enPINMASK_6;
                    pvfCallback = GPIO_DMA__pvfGetIRQSourceHandler(GPIO_enPORT_B, GPIO_enPIN_6);
                    pvfCallback(GPIOB_BASE, (void*) GPIO_enPIN_6);
                }
                if((UBase_t) GPIO_enPINMASK_7 & uxDMAEnable)
                {
                    GPIOB_ICR_R = (UBase_t) GPIO_enPINMASK_7;
                    pvfCallback = GPIO_DMA__pvfGetIRQSourceHandler(GPIO_enPORT_B, GPIO_enPIN_7);
                    pvfCallback(GPIOB_BASE, (void*) GPIO_enPIN_7);
                }
            }
            if((UBase_t) GPIO_enPINMASK_0 & uxReg)
            {
                GPIOB_ICR_R = (UBase_t) GPIO_enPINMASK_0;
                pvfCallback = GPIO__pvfGetIRQSourceHandler(GPIO_enPORT_B, GPIO_enPIN_0);
                pvfCallback(GPIOB_BASE, (void*) GPIO_enPIN_0);
            }
            if((UBase_t) GPIO_enPINMASK_1 & uxReg)
            {
                GPIOB_ICR_R = (UBase_t) GPIO_enPINMASK_1;
                pvfCallback = GPIO__pvfGetIRQSourceHandler(GPIO_enPORT_B, GPIO_enPIN_1);
                pvfCallback(GPIOB_BASE, (void*) GPIO_enPIN_1);
            }
            if((UBase_t) GPIO_enPINMASK_2 & uxReg)
            {
                GPIOB_ICR_R = (UBase_t) GPIO_enPINMASK_2;
                pvfCallback = GPIO__pvfGetIRQSourceHandler(GPIO_enPORT_B, GPIO_enPIN_2);
                pvfCallback(GPIOB_BASE, (void*) GPIO_enPIN_2);
            }
            if((UBase_t) GPIO_enPINMASK_3 & uxReg)
            {
                GPIOB_ICR_R = (UBase_t) GPIO_enPINMASK_3;
                pvfCallback = GPIO__pvfGetIRQSourceHandler(GPIO_enPORT_B, GPIO_enPIN_3);
                pvfCallback(GPIOB_BASE, (void*) GPIO_enPIN_3);
            }
            if((UBase_t) GPIO_enPINMASK_4 & uxReg)
            {
                GPIOB_ICR_R = (UBase_t) GPIO_enPINMASK_4;
                pvfCallback = GPIO__pvfGetIRQSourceHandler(GPIO_enPORT_B, GPIO_enPIN_4);
                pvfCallback(GPIOB_BASE, (void*) GPIO_enPIN_4);
            }
            if((UBase_t) GPIO_enPINMASK_5 & uxReg)
            {
                GPIOB_ICR_R = (UBase_t) GPIO_enPINMASK_5;
                pvfCallback = GPIO__pvfGetIRQSourceHandler(GPIO_enPORT_B, GPIO_enPIN_5);
                pvfCallback(GPIOB_BASE, (void*) GPIO_enPIN_5);
            }
            if((UBase_t) GPIO_enPINMASK_6 & uxReg)
            {
                GPIOB_ICR_R = (UBase_t) GPIO_enPINMASK_6;
                pvfCallback = GPIO__pvfGetIRQSourceHandler(GPIO_enPORT_B, GPIO_enPIN_6);
                pvfCallback(GPIOB_BASE, (void*) GPIO_enPIN_6);
            }
            if((UBase_t) GPIO_enPINMASK_7 & uxReg)
            {
                GPIOB_ICR_R = (UBase_t) GPIO_enPINMASK_7;
                pvfCallback = GPIO__pvfGetIRQSourceHandler(GPIO_enPORT_B, GPIO_enPIN_7);
                pvfCallback(GPIOB_BASE, (void*) GPIO_enPIN_7);
            }
        }
    }
}
