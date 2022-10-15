/**
 *
 * @file SSI_InterruptRoutine_Vector_Module0.c
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
#include <xApplication_MCU/SSI/Interrupt/InterruptRoutine/xHeader/SSI_InterruptRoutine_Vector_Module0.h>

#include <xApplication_MCU/SSI/Intrinsics/xHeader/SSI_Dependencies.h>

void SSI0__vIRQVectorHandler(void)
{
    volatile UBase_t uxReg = 0U;
    volatile UBase_t uxReady = 0U;
    void(*pvfCallback)(void)  = (void(*)(void)) 0UL;

    uxReady = SYSCTL_PRSSI_R;
    if(SYSCTL_PRSSI_R_SSI0_NOREADY == (SYSCTL_PRSSI_R_SSI0_MASK & uxReady))
    {
        pvfCallback = SSI__pvfGetIRQSourceHandler(SSI_enMODULE_0,
                                                  SSI_enINT_SW);
        pvfCallback();
    }
    else
    {
        uxReg = (UBase_t) SSI0_MIS_R;

        if(0UL == ((UBase_t) SSI_enINTMASK_ALL & uxReg))
        {
            pvfCallback = SSI__pvfGetIRQSourceHandler(SSI_enMODULE_0,
                                                      SSI_enINT_SW);
            pvfCallback();
        }
        else
        {
            if((UBase_t) SSI_enINTMASK_RECEIVE_OVERRUN & uxReg)
            {
                SSI0_ICR_R = (UBase_t) SSI_enINTMASK_RECEIVE_OVERRUN;
                pvfCallback = SSI__pvfGetIRQSourceHandler(SSI_enMODULE_0,
                                                          SSI_enINT_RECEIVE_OVERRUN);
                pvfCallback();
            }
            if((UBase_t) SSI_enINTMASK_RECEIVE_TIMEOUT & uxReg)
            {
                pvfCallback = SSI__pvfGetIRQSourceHandler(SSI_enMODULE_0,
                                                          SSI_enINT_RECEIVE_TIMEOUT);
                pvfCallback();
                SSI0_ICR_R = (UBase_t) SSI_enINTMASK_RECEIVE_TIMEOUT;
            }
            if((UBase_t) SSI_enINTMASK_RECEIVE & uxReg)
            {
                pvfCallback = SSI__pvfGetIRQSourceHandler(SSI_enMODULE_0,
                                                          SSI_enINT_RECEIVE);
                pvfCallback();
            }
            if((UBase_t) SSI_enINTMASK_TRANSMIT & uxReg)
            {
                pvfCallback = SSI__pvfGetIRQSourceHandler(SSI_enMODULE_0,
                                                          SSI_enINT_TRANSMIT);
                pvfCallback();
            }
            if((UBase_t) SSI_enINTMASK_RECEIVE_DMA & uxReg)
            {
                SSI0_ICR_R = (UBase_t) SSI_enINTMASK_RECEIVE_DMA;
                pvfCallback = SSI__pvfGetIRQSourceHandler(SSI_enMODULE_0,
                                                          SSI_enINT_RECEIVE_DMA);
                pvfCallback();
            }
            if((UBase_t) SSI_enINTMASK_TRANSMIT_DMA & uxReg)
            {
                SSI0_DMACTL_R &= ~SSI_DMACTL_R_TXDMAE_MASK;
                SSI0_ICR_R = (UBase_t) SSI_enINTMASK_TRANSMIT_DMA;
                pvfCallback = SSI__pvfGetIRQSourceHandler(SSI_enMODULE_0,
                                                          SSI_enINT_TRANSMIT_DMA);
                pvfCallback();
            }
            if((UBase_t) SSI_enINTMASK_END_OF_TRANSMIT & uxReg)
            {
                SSI0_ICR_R = (UBase_t) SSI_enINTMASK_END_OF_TRANSMIT;
                pvfCallback = SSI__pvfGetIRQSourceHandler(SSI_enMODULE_0,
                                                          SSI_enINT_END_OF_TRANSMIT);
                pvfCallback();
            }
        }
    }
}
