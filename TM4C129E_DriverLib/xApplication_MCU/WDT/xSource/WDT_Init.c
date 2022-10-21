/**
 *
 * @file WDT_Init.c
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
 * @verbatim 26 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 26 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xApplication_MCU/WDT/xHeader/WDT_Init.h>

#include <xApplication_MCU/WDT/Interrupt/WDT_Interrupt.h>

WDT_nERROR WDT__enInit(void)
{
    WDT_nERROR enErrorReg;
    WDT_pvfIRQVectorHandler_t pfIrqVectorHandlerReg;

    pfIrqVectorHandlerReg = WDT__pvfGetIRQVectorHandler(WDT_enMODULE_0);
    enErrorReg = WDT__enRegisterIRQVectorHandler(WDT_enMODULE_0, pfIrqVectorHandlerReg);

    return (enErrorReg);
}

