/**
 *
 * @file SSI_InterruptRoutine_Vector_Module2.c
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
#include <xApplication_MCU/SSI/Interrupt/InterruptRoutine/xHeader/SSI_InterruptRoutine_Vector_Module2.h>

#include <xApplication_MCU/SSI/Intrinsics/xHeader/SSI_Dependencies.h>

void SSI2__vIRQVectorHandler(void)
{
    volatile UBase_t uxReg = 0U;
    volatile UBase_t uxReady = 0U;
    void(*pvfCallback)(void)  = (void(*)(void)) 0UL;

    uxReady = SYSCTL_PRSSI_R;
    if(SYSCTL_PRSSI_R_SSI2_NOREADY == (SYSCTL_PRSSI_R_SSI2_MASK & uxReady))
    {
        pvfCallback = SSI__pvfGetIRQSourceHandler(SSI_enMODULE_2,
                                                  SSI_enINTERRUPT_SW);
        pvfCallback();
    }
    else
    {
        uxReg = (UBase_t) SSI2_MIS_R;

        if(0UL == ((UBase_t) SSI_enINT_SOURCE_ALL & uxReg))
        {
            pvfCallback = SSI__pvfGetIRQSourceHandler(SSI_enMODULE_2,
                                                      SSI_enINTERRUPT_SW);
            pvfCallback();
        }
        else
        {
            if((UBase_t) SSI_enINT_SOURCE_RECEIVE_OVERRUN & uxReg)
            {
                SSI2_ICR_R = (UBase_t) SSI_enINT_SOURCE_RECEIVE_OVERRUN;
                pvfCallback = SSI__pvfGetIRQSourceHandler(SSI_enMODULE_2,
                                                          SSI_enINTERRUPT_RECEIVE_OVERRUN);
                pvfCallback();
            }
            if((UBase_t) SSI_enINT_SOURCE_RECEIVE_TIMEOUT & uxReg)
            {
                pvfCallback = SSI__pvfGetIRQSourceHandler(SSI_enMODULE_2,
                                                          SSI_enINTERRUPT_RECEIVE_TIMEOUT);
                pvfCallback();
                SSI2_ICR_R = (UBase_t) SSI_enINT_SOURCE_RECEIVE_TIMEOUT;
            }
            if((UBase_t) SSI_enINT_SOURCE_RECEIVE & uxReg)
            {
                pvfCallback = SSI__pvfGetIRQSourceHandler(SSI_enMODULE_2,
                                                          SSI_enINTERRUPT_RECEIVE);
                pvfCallback();
            }
            if((UBase_t) SSI_enINT_SOURCE_TRANSMIT & uxReg)
            {
                pvfCallback = SSI__pvfGetIRQSourceHandler(SSI_enMODULE_2,
                                                          SSI_enINTERRUPT_TRANSMIT);
                pvfCallback();
            }
            if((UBase_t) SSI_enINT_SOURCE_RECEIVE_DMA & uxReg)
            {
                SSI2_ICR_R = (UBase_t) SSI_enINT_SOURCE_RECEIVE_DMA;
                pvfCallback = SSI__pvfGetIRQSourceHandler(SSI_enMODULE_2,
                                                          SSI_enINTERRUPT_RECEIVE_DMA);
                pvfCallback();
            }
            if((UBase_t) SSI_enINT_SOURCE_TRANSMIT_DMA & uxReg)
            {
                SSI2_DMACTL_R &= ~SSI_DMACTL_R_TXDMAE_MASK;
                SSI2_ICR_R = (UBase_t) SSI_enINT_SOURCE_TRANSMIT_DMA;
                pvfCallback = SSI__pvfGetIRQSourceHandler(SSI_enMODULE_2,
                                                          SSI_enINTERRUPT_TRANSMIT_DMA);
                pvfCallback();
            }
            if((UBase_t) SSI_enINT_SOURCE_END_OF_TRANSMIT & uxReg)
            {
                SSI2_ICR_R = (UBase_t) SSI_enINT_SOURCE_END_OF_TRANSMIT;
                pvfCallback = SSI__pvfGetIRQSourceHandler(SSI_enMODULE_2,
                                                          SSI_enINTERRUPT_END_OF_TRANSMIT);
                pvfCallback();
            }
        }
    }
}
