/**
 *
 * @file QEI_Ready.h
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

#ifndef XAPPLICATION_MCU_QEI_INTRINSICS_XHEADER_QEI_READY_H_
#define XAPPLICATION_MCU_QEI_INTRINSICS_XHEADER_QEI_READY_H_

#include <xApplication_MCU/QEI/Intrinsics/xHeader/QEI_Defines.h>

void QEI__vSetReady(QEI_nMODULE enModule);
void QEI__vClearReady(QEI_nMODULE enModule);
QEI_nREADY QEI__enIsReady(QEI_nMODULE enModule);

#endif /* XAPPLICATION_MCU_QEI_INTRINSICS_XHEADER_QEI_READY_H_ */
