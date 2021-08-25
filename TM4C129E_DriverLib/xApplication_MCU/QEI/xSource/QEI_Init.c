/**
 *
 * @file QEI_Init.c
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
 * @verbatim 24 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 24 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xApplication_MCU/QEI/xHeader/QEI_Init.h>

#include <xApplication_MCU/QEI/Interrupt/QEI_Interrupt.h>

void QEI__vInit(void)
{
    void (*pfIrqVectorHandler) (void) = (void (*) (void)) 0UL;

    pfIrqVectorHandler = QEI__pvfGetIRQVectorHandler(QEI_enMODULE_0);
    QEI__vRegisterIRQVectorHandler( pfIrqVectorHandler, QEI_enMODULE_0);
}
