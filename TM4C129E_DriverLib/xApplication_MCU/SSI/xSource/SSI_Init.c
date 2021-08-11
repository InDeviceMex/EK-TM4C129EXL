/**
 *
 * @file SSI_Init.c
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
 * @verbatim 11 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 11 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xApplication_MCU/SSI/xHeader/SSI_Init.h>

#include <xApplication_MCU/SSI/Interrupt/SSI_Interrupt.h>

void SSI__vInit(void)
{
    void (*pfIrqVectorHandler) (void) = (void (*) (void)) 0UL;

    pfIrqVectorHandler = SSI__pvfGetIRQVectorHandler(SSI_enMODULE_0);
    SSI__vRegisterIRQVectorHandler( pfIrqVectorHandler, SSI_enMODULE_0);
    pfIrqVectorHandler = SSI__pvfGetIRQVectorHandler(SSI_enMODULE_1);
    SSI__vRegisterIRQVectorHandler( pfIrqVectorHandler, SSI_enMODULE_1);
    pfIrqVectorHandler = SSI__pvfGetIRQVectorHandler(SSI_enMODULE_2);
    SSI__vRegisterIRQVectorHandler( pfIrqVectorHandler, SSI_enMODULE_2);
    pfIrqVectorHandler = SSI__pvfGetIRQVectorHandler(SSI_enMODULE_3);
    SSI__vRegisterIRQVectorHandler( pfIrqVectorHandler, SSI_enMODULE_3);
}
