/**
 *
 * @file QEI_InterruptRoutine.c
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
#include <xApplication_MCU/QEI/Interrupt/InterruptRoutine/QEI_InterruptRoutine.h>

void (*QEI__pvIRQVectorHandler[(uint32_t) QEI_enMODULE_MAX]) (void)=
{
    &QEI0__vIRQVectorHandler
};

void (*QEI__pvfGetIRQVectorHandler(QEI_nMODULE enQEIModule))(void)
{
    return (QEI__pvIRQVectorHandler[(uint32_t) enQEIModule]);
}

void (**QEI__pvfGetIRQVectorHandlerPointer(QEI_nMODULE enQEIModule))(void)
{
    return ((void(**)(void)) &QEI__pvIRQVectorHandler[(uint32_t) enQEIModule]);
}
