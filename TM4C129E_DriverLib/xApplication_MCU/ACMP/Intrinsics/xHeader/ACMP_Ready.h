/**
 *
 * @file ACMP_Ready.h
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

#ifndef XAPPLICATION_MCU_ACMP_INTRINSICS_XHEADER_ACMP_READY_H_
#define XAPPLICATION_MCU_ACMP_INTRINSICS_XHEADER_ACMP_READY_H_

#include <xApplication_MCU/ACMP/Intrinsics/xHeader/ACMP_Defines.h>

void ACMP__vSetReady(ACMP_nMODULE enModule);
void ACMP__vClearReady(ACMP_nMODULE enModule);
ACMP_nSTATUS ACMP__enIsReady(ACMP_nMODULE enModule);

#endif /* XAPPLICATION_MCU_ACMP_INTRINSICS_XHEADER_ACMP_READY_H_ */
