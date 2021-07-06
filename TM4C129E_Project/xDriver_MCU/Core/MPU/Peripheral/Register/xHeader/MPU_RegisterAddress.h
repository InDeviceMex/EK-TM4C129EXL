/**
 *
 * @file MPU_RegisterAddress.h
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
 * @verbatim 21 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 21 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_MPU_PERIPHERAL_REGISTER_MPU_REGISTERADDRESS_H_
#define XDRIVER_MCU_DRIVER_HEADER_MPU_PERIPHERAL_REGISTER_MPU_REGISTERADDRESS_H_

#include <xUtils/Standard/Standard.h>

#define MPU_BASE    ((uint32_t) 0xE000E000UL)
#define MPU_OFFSET    ((uint32_t) 0x00000D90UL)

#define MPU_REGION_NUMBER    (8UL)

#define MPU_TYPER_OFFSET    ((uint32_t) 0x0D90UL)
#define MPU_CTRL_OFFSET    ((uint32_t) 0x0D94UL)
#define MPU_RNR_OFFSET    ((uint32_t) 0x0D98UL)
#define MPU_RBAR_OFFSET    ((uint32_t) 0x0D9CUL)
#define MPU_RASR_OFFSET    ((uint32_t) 0x0DA0UL)
#define MPU_RBAR1_OFFSET    ((uint32_t) 0x0DA4UL)
#define MPU_RASR1_OFFSET    ((uint32_t) 0x0DA8UL)
#define MPU_RBAR2_OFFSET    ((uint32_t) 0x0DACUL)
#define MPU_RASR2_OFFSET    ((uint32_t) 0x0DB0UL)
#define MPU_RBAR3_OFFSET    ((uint32_t) 0x0DB4UL)
#define MPU_RASR3_OFFSET    ((uint32_t) 0x0DB8UL)

#endif /* XDRIVER_MCU_DRIVER_HEADER_MPU_PERIPHERAL_REGISTER_MPU_REGISTERADDRESS_H_ */
