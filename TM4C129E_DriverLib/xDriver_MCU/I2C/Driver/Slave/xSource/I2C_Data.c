/**
 *
 * @file I2C_Data.c
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
#include <xDriver_MCU/I2C/Driver/Slave/xHeader/I2C_Data.h>

#include <xDriver_MCU/I2C/Driver/Intrinsics/Primitives/I2C_Primitives.h>
#include <xDriver_MCU/I2C/Peripheral/I2C_Peripheral.h>

inline void I2C_Slave__vSetData(I2C_nMODULE enModule, uint32_t u32Data)
{
    I2C__vWriteRegister(enModule, I2C_SDR_OFFSET, u32Data, 0xFFFFFFFFUL, 0UL);
}

inline uint32_t I2C_Slave__u32GetData(I2C_nMODULE enModule)
{
    uint32_t u32Reg = 0xFFFFFFFFUL;
    I2C__enReadRegister(enModule, I2C_SDR_OFFSET, &u32Reg, I2C_SDR_DATA_MASK, I2C_SDR_R_DATA_BIT);
    return u32Reg;
}

