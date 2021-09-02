/**
 *
 * @file I2C_Ready.h
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
 * @verbatim 13 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 13 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XAPPLICATION_MCU_I2C_INTRINSICS_XHEADER_I2C_READY_H_
#define XAPPLICATION_MCU_I2C_INTRINSICS_XHEADER_I2C_READY_H_

#include <xApplication_MCU/I2C/Intrinsics/xHeader/I2C_Defines.h>

void I2C__vSetReady(I2C_nMODULE enModule);
void I2C__vClearReady(I2C_nMODULE enModule);
I2C_nREADY I2C__enIsReady(I2C_nMODULE enModule);

#endif /* XAPPLICATION_MCU_I2C_INTRINSICS_XHEADER_I2C_READY_H_ */
