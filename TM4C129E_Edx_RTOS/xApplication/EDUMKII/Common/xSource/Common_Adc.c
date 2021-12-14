/**
 *
 * @file Common_Adc.c
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
 * @verbatim 17 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 17 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */

#include <xApplication/EDUMKII/Common/xHeader/Common_Adc.h>

#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/ADC/ADC.h>



void EDUMKII_Common_vAdcInit(void)
{
    static uint32_t u32Init = 0UL;
    if(0UL == u32Init)
    {
        ADC__vSetConversionRate(ADC_enMODULE_1, ADC_enCONVERSION_RATE_1);
        ADC__vSetVCODivisor(ADC_enMODULE_1, 480UL/32UL);
        ADC__vSetClockSource(ADC_enMODULE_1, ADC_enCLOCK_PLL_VCO);
        ADC__vSetAverage(ADC_enMODULE_1, ADC_enAVERAGE_DIS);
        u32Init = 1UL;
    }
}
