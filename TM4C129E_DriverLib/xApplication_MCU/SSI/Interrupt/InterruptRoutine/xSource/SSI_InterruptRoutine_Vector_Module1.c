/**
 *
 * @file SSI_InterruptRoutine_Vector_Module1.c
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
 * @verbatim 17 feb. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 17 feb. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xApplication_MCU/SSI/Interrupt/InterruptRoutine/xHeader/SSI_InterruptRoutine_Vector_Module1.h>

#include <xApplication_MCU/SSI/Intrinsics/xHeader/SSI_Dependencies.h>

void SSI1__vIRQVectorHandler(void)
{
    UBase_t uxReady;
    UBase_t uxReg;
    SSI_pvfIRQSourceHandler_t pvfCallback;

    uxReady = SYSCTL_PRSSI_R;
    if(SYSCTL_PRSSI_R_SSI1_NOREADY == (SYSCTL_PRSSI_R_SSI1_MASK & uxReady))
    {
        pvfCallback = SSI__pvfGetIRQSourceHandler(SSI_enMODULE_1, SSI_enINT_SW);
        pvfCallback(SSI1_BASE, (void*) SSI_enINT_SW);
    }
    else
    {
        uxReg = (UBase_t) SSI1_MIS_R;

        if(0UL == ((UBase_t) SSI_enINTMASK_ALL & uxReg))
        {
            pvfCallback = SSI__pvfGetIRQSourceHandler(SSI_enMODULE_1, SSI_enINT_SW);
            pvfCallback(SSI1_BASE, (void*) SSI_enINT_SW);
        }
        else
        {
            if((UBase_t) SSI_enINTMASK_RECEIVE_OVERRUN & uxReg)
            {
                SSI1_ICR_R = (UBase_t) SSI_enINTMASK_RECEIVE_OVERRUN;
                pvfCallback = SSI__pvfGetIRQSourceHandler(SSI_enMODULE_1, SSI_enINT_RECEIVE_OVERRUN);
                pvfCallback(SSI1_BASE, (void*) SSI_enINT_RECEIVE_OVERRUN);
            }
            if((UBase_t) SSI_enINTMASK_RECEIVE_TIMEOUT & uxReg)
            {
                pvfCallback = SSI__pvfGetIRQSourceHandler(SSI_enMODULE_1, SSI_enINT_RECEIVE_TIMEOUT);
                pvfCallback(SSI1_BASE, (void*) SSI_enINT_RECEIVE_TIMEOUT);
                SSI1_ICR_R = (UBase_t) SSI_enINTMASK_RECEIVE_TIMEOUT;
            }
            if((UBase_t) SSI_enINTMASK_RECEIVE & uxReg)
            {
                pvfCallback = SSI__pvfGetIRQSourceHandler(SSI_enMODULE_1, SSI_enINT_RECEIVE);
                pvfCallback(SSI1_BASE, (void*) SSI_enINT_RECEIVE);
            }
            if((UBase_t) SSI_enINTMASK_TRANSMIT & uxReg)
            {
                pvfCallback = SSI__pvfGetIRQSourceHandler(SSI_enMODULE_1, SSI_enINT_TRANSMIT);
                pvfCallback(SSI1_BASE, (void*) SSI_enINT_TRANSMIT);
            }
            if((UBase_t) SSI_enINTMASK_RECEIVE_DMA & uxReg)
            {
                SSI1_ICR_R = (UBase_t) SSI_enINTMASK_RECEIVE_DMA;
                pvfCallback = SSI__pvfGetIRQSourceHandler(SSI_enMODULE_1, SSI_enINT_RECEIVE_DMA);
                pvfCallback(SSI1_BASE, (void*) SSI_enINT_RECEIVE_DMA);
            }
            if((UBase_t) SSI_enINTMASK_TRANSMIT_DMA & uxReg)
            {
                SSI1_DMACTL_R &= ~SSI_DMACTL_R_TXDMAE_MASK;
                SSI1_ICR_R = (UBase_t) SSI_enINTMASK_TRANSMIT_DMA;
                pvfCallback = SSI__pvfGetIRQSourceHandler(SSI_enMODULE_1, SSI_enINT_TRANSMIT_DMA);
                pvfCallback(SSI1_BASE, (void*) SSI_enINT_TRANSMIT_DMA);
            }
            if((UBase_t) SSI_enINTMASK_END_OF_TRANSMIT & uxReg)
            {
                SSI1_ICR_R = (UBase_t) SSI_enINTMASK_END_OF_TRANSMIT;
                pvfCallback = SSI__pvfGetIRQSourceHandler(SSI_enMODULE_1, SSI_enINT_END_OF_TRANSMIT);
                pvfCallback(SSI1_BASE, (void*) SSI_enINT_END_OF_TRANSMIT);
            }
        }
    }
}
