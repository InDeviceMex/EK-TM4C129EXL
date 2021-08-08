/**
 *
 * @file SSI_InterruptRoutine_Vector_Module3.c
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
#include <xDriver_MCU/SSI/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/SSI_InterruptRoutine_Vector_Module3.h>

#include <xDriver_MCU/SSI/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/SSI_InterruptRoutine_Source.h>
#include <xDriver_MCU/SSI/Peripheral/SSI_Peripheral.h>

void SSI3__vIRQVectorHandler(void)
{
    volatile uint32_t u32Reg = 0U;
    void(*pfvCallback)(void)  = (void(*)(void)) 0UL;

    u32Reg = (uint32_t) SSI3_MIS_R;

    if((uint32_t) SSI_enINT_SOURCE_RECEIVE_OVERRUN & u32Reg)
    {
        SSI3_ICR_R = (uint32_t) SSI_enINT_SOURCE_RECEIVE_OVERRUN;
        pfvCallback = SSI__pvfGetIRQSourceHandler(SSI_enMODULE_3, SSI_enINTERRUPT_RECEIVE_OVERRUN);
        pfvCallback();
    }
    if((uint32_t) SSI_enINT_SOURCE_RECEIVE_TIMEOUT & u32Reg)
    {
        pfvCallback = SSI__pvfGetIRQSourceHandler(SSI_enMODULE_3, SSI_enINTERRUPT_RECEIVE_TIMEOUT);
        pfvCallback();
        SSI3_ICR_R = (uint32_t) SSI_enINT_SOURCE_RECEIVE_TIMEOUT;
    }
    if((uint32_t) SSI_enINT_SOURCE_RECEIVE & u32Reg)
    {
        pfvCallback = SSI__pvfGetIRQSourceHandler(SSI_enMODULE_3, SSI_enINTERRUPT_RECEIVE);
        pfvCallback();
    }
    if((uint32_t) SSI_enINT_SOURCE_TRANSMIT & u32Reg)
    {
        pfvCallback = SSI__pvfGetIRQSourceHandler(SSI_enMODULE_3, SSI_enINTERRUPT_TRANSMIT);
        pfvCallback();
    }
    if((uint32_t) SSI_enINT_SOURCE_RECEIVE_DMA & u32Reg)
    {
        SSI3_ICR_R = (uint32_t) SSI_enINT_SOURCE_RECEIVE_DMA;
        pfvCallback = SSI__pvfGetIRQSourceHandler(SSI_enMODULE_3, SSI_enINTERRUPT_RECEIVE_DMA);
        pfvCallback();
    }
    if((uint32_t) SSI_enINT_SOURCE_TRANSMIT_DMA & u32Reg)
    {
        SSI3_DMACTL_R &= ~SSI_DMACTL_R_TXDMAE_MASK;
        SSI3_ICR_R = (uint32_t) SSI_enINT_SOURCE_TRANSMIT_DMA;
        SSI3_DMACTL_R |= SSI_DMACTL_R_TXDMAE_MASK;
        pfvCallback = SSI__pvfGetIRQSourceHandler(SSI_enMODULE_3, SSI_enINTERRUPT_TRANSMIT_DMA);
        pfvCallback();
    }
    if((uint32_t) SSI_enINT_SOURCE_END_OF_TRANSMIT & u32Reg)
    {
        SSI3_ICR_R = (uint32_t) SSI_enINT_SOURCE_END_OF_TRANSMIT;
        pfvCallback = SSI__pvfGetIRQSourceHandler(SSI_enMODULE_3, SSI_enINTERRUPT_END_OF_TRANSMIT);
        pfvCallback();
    }
}
