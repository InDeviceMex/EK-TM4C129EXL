/**
 *
 * @file WDT_InterruptRoutine_Source.c
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
 * @verbatim 22 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 22 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */

#include <xDriver_MCU/WDT/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/WDT_InterruptRoutine_Source.h>

static void WDT_vIRQSourceHandler_Dummy(void);
static void WDT_vIRQSourceHandler_Dummy_Blocking(void);

void (*WDT__vIRQSourceHandler[(uint32_t) WDT_enMODULE_MAX]
                             [(uint32_t) WDT_enINTERRUPT_MAX]) (void) =
{
    { &WDT_vIRQSourceHandler_Dummy, &WDT_vIRQSourceHandler_Dummy_Blocking},
    { &WDT_vIRQSourceHandler_Dummy, &WDT_vIRQSourceHandler_Dummy_Blocking}
 };

static void WDT_vIRQSourceHandler_Dummy_Blocking(void)
{
    while(1U)
    {
    }
}
static void WDT_vIRQSourceHandler_Dummy(void)
{
}

void (*WDT__pvfGetIRQSourceHandler(WDT_nMODULE enWDTSubmodule,
                                    WDT_nINTERRUPT enWDTInterruptNum))(void)
{
    void(*pvfFunctionReg)(void) = (void(*)(void)) 0UL;
    pvfFunctionReg = WDT__vIRQSourceHandler[(uint32_t) enWDTSubmodule]
                                            [(uint32_t)enWDTInterruptNum];
    return (pvfFunctionReg);
}

void (**WDT__pvfGetIRQSourceHandlerPointer(WDT_nMODULE enWDTSubmodule,
                                            WDT_nINTERRUPT enWDTInterruptNum))(void)
{
    void(**pvfFunctionReg)(void) = (void(**)(void)) 0UL;
    pvfFunctionReg = (void(**)(void)) &WDT__vIRQSourceHandler[(uint32_t) enWDTSubmodule]
                                                              [(uint32_t)enWDTInterruptNum];
    return (pvfFunctionReg);
}

