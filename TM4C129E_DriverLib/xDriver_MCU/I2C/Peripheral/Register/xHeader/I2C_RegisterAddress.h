/**
 *
 * @file I2C_RegisterAddress.h
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
 * @verbatim 6 mar. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 6 mar. 2021     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_I2C_PERIPHERAL_REGISTER_XHEADER_I2C_REGISTERADDRESS_H_
#define XDRIVER_MCU_I2C_PERIPHERAL_REGISTER_XHEADER_I2C_REGISTERADDRESS_H_

#include <xUtils/Standard/Standard.h>

#define I2C_BASE    ((uint32_t) 0x40020000UL)
#define I2C0_BASE    ((uint32_t) 0x40020000UL)
#define I2C1_BASE    ((uint32_t) 0x40021000UL)
#define I2C2_BASE    ((uint32_t) 0x40022000UL)
#define I2C3_BASE    ((uint32_t) 0x40023000UL)

#define I2C_OFFSET    ((uint32_t) 0x00000000UL)
#define I2C0_OFFSET    ((uint32_t) 0x00020000UL)
#define I2C1_OFFSET    ((uint32_t) 0x00021000UL)
#define I2C2_OFFSET    ((uint32_t) 0x00022000UL)
#define I2C3_OFFSET    ((uint32_t) 0x00023000UL)

#define I2C_BITBANDING_BASE    ((uint32_t) 0x42000000UL)

#define I2C_MSA_OFFSET    ((uint32_t) 0x0000UL)
#define I2C_MCS_OFFSET    ((uint32_t) 0x0004UL)
#define I2C_MDR_OFFSET    ((uint32_t) 0x0008UL)
#define I2C_MTPR_OFFSET    ((uint32_t) 0x000CUL)
#define I2C_MIMR_OFFSET    ((uint32_t) 0x0010UL)
#define I2C_MRIS_OFFSET    ((uint32_t) 0x0014UL)
#define I2C_MMIS_OFFSET    ((uint32_t) 0x0018UL)
#define I2C_MICR_OFFSET    ((uint32_t) 0x001CUL)
#define I2C_MCR_OFFSET    ((uint32_t) 0x0020UL)
#define I2C_MCLKOCNT_OFFSET    ((uint32_t) 0x0024UL)
#define I2C_MBMON_OFFSET    ((uint32_t) 0x002CUL)
#define I2C_MCR2_OFFSET    ((uint32_t) 0x0038UL)

#define I2C_SOAR_OFFSET    ((uint32_t) 0x0800UL)
#define I2C_SCSR_OFFSET    ((uint32_t) 0x0804UL)
#define I2C_SDR_OFFSET    ((uint32_t) 0x0808UL)
#define I2C_SIMR_OFFSET    ((uint32_t) 0x080CUL)
#define I2C_SRIS_OFFSET    ((uint32_t) 0x0810UL)
#define I2C_SMIS_OFFSET    ((uint32_t) 0x0814UL)
#define I2C_SICR_OFFSET    ((uint32_t) 0x0818UL)
#define I2C_SOAR2_OFFSET    ((uint32_t) 0x081CUL)
#define I2C_SACKCTL_OFFSET    ((uint32_t) 0x0820UL)

#define I2C_PP_OFFSET    ((uint32_t) 0x0FC0UL)
#define I2C_PC_OFFSET    ((uint32_t) 0x0FC4UL)

#endif /* XDRIVER_MCU_I2C_PERIPHERAL_REGISTER_XHEADER_I2C_REGISTERADDRESS_H_ */
