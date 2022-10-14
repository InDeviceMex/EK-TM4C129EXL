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
#include <xApplication_MCU/QEI/Intrinsics/xHeader/QEI_Dependencies.h>

QEI_nERROR QEI__enInit(QEI_nMODULE enModuleArg)
{
    QEI_nERROR enErrorReg;
    QEI_pvfIRQVectorHandler_t pfIrqVectorHandlerReg;

    enErrorReg = (QEI_nERROR) MCU__enCheckParams((UBase_t) enModuleArg, (UBase_t) QEI_enMODULE_MAX);
    if(QEI_enERROR_OK == enErrorReg)
    {
        pfIrqVectorHandlerReg = QEI__pvfGetIRQVectorHandler(enModuleArg);
        enErrorReg = QEI__enRegisterIRQVectorHandler(enModuleArg, pfIrqVectorHandlerReg);
    }

    return (enErrorReg);
}
