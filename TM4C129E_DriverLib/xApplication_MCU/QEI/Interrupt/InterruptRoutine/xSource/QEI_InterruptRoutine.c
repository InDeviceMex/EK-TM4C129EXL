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

static QEI_pvfIRQVectorHandler_t QEI_pvIRQVectorHandler[(UBase_t) QEI_enMODULE_MAX] =
{
 &QEI0__vIRQVectorHandler
};

QEI_pvfIRQVectorHandler_t QEI__pvfGetIRQVectorHandler(QEI_nMODULE enModuleArg)
{
    QEI_pvfIRQVectorHandler_t pvfVectorReg;
    pvfVectorReg = QEI_pvIRQVectorHandler[(UBase_t) enModuleArg];
    return (pvfVectorReg);
}

QEI_pvfIRQVectorHandler_t* QEI__pvfGetIRQVectorHandlerPointer(QEI_nMODULE enModuleArg)
{
    QEI_pvfIRQVectorHandler_t* pvfVectorReg;
    pvfVectorReg = &QEI_pvIRQVectorHandler[(UBase_t) enModuleArg];
    return (pvfVectorReg);
}
