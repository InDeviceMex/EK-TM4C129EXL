/**
 *
 * @file I2C_Data.h
 * @copyright
 * @verbatim InDeviceMex 2020 @endverbatim
 *
 * @par Responsibility
 * @verbatim InDeviceMex Developers @endverbatim
 *
 * @version
 * @verbatim 1.0 @endverbatim
 *
 * @date
 * @verbatim 10 mar. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 10 mar. 2021     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_I2C_DRIVER_SLAVE_XHEADER_I2C_DATA_H_
#define XDRIVER_MCU_I2C_DRIVER_SLAVE_XHEADER_I2C_DATA_H_

#include <xDriver_MCU/I2C/Peripheral/xHeader/I2C_Enum.h>

void I2C_Slave__vSetData(I2C_nMODULE enModule, uint32_t u32Data);
uint32_t I2C_Slave__u32GetData(I2C_nMODULE enModule);

#endif /* XDRIVER_MCU_I2C_DRIVER_SLAVE_XHEADER_I2C_DATA_H_ */
