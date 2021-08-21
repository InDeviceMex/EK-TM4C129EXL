/**
 *
 * @file ACMP_InterruptVector.h
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
 * @verbatim 20 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 20 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XAPPLICATION_MCU_ACMP_INTERRUPT_XHEADER_ACMP_INTERRUPTVECTOR_H_
#define XAPPLICATION_MCU_ACMP_INTERRUPT_XHEADER_ACMP_INTERRUPTVECTOR_H_

#include <xApplication_MCU/ACMP/Intrinsics/xHeader/ACMP_Defines.h>

void ACMP__vEnInterruptVector(ACMP_nMODULE enModule, ACMP_nCOMP enComparatorArg, ACMP_nPRIORITY enACMPPriority);
void ACMP__vDisInterruptVector(ACMP_nMODULE enModule, ACMP_nCOMP enComparatorArg);

#endif /* XAPPLICATION_MCU_ACMP_INTERRUPT_XHEADER_ACMP_INTERRUPTVECTOR_H_ */
