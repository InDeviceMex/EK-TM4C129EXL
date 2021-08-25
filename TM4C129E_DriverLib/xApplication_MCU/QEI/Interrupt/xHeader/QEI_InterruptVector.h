/**
 *
 * @file QEI_InterruptVector.h
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

#ifndef XAPPLICATION_MCU_QEI_INTERRUPT_XHEADER_QEI_INTERRUPTVECTOR_H_
#define XAPPLICATION_MCU_QEI_INTERRUPT_XHEADER_QEI_INTERRUPTVECTOR_H_

#include <xApplication_MCU/QEI/Intrinsics/xHeader/QEI_Defines.h>

void QEI__vEnInterruptVector(QEI_nMODULE enModule, QEI_nPRIORITY enQEIPriority);
void QEI__vDisInterruptVector(QEI_nMODULE enModule);

#endif /* XAPPLICATION_MCU_QEI_INTERRUPT_XHEADER_QEI_INTERRUPTVECTOR_H_ */
