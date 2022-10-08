/**
 *
 * @file SSI_Clock.h
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

#ifndef XAPPLICATION_MCU_SSI_XHEADER_SSI_CLOCK_H_
#define XAPPLICATION_MCU_SSI_XHEADER_SSI_CLOCK_H_

#include <xApplication_MCU/SSI/Intrinsics/xHeader/SSI_Defines.h>

void SSI__vSetClock(SSI_nMODULE enModule, UBase_t uxClockArg);
UBase_t SSI__uxGetClock(SSI_nMODULE enModule);

#endif /* XAPPLICATION_MCU_SSI_XHEADER_SSI_CLOCK_H_ */
