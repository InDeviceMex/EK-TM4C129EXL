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

#include <xDriver_MCU/I2C/Peripheral/xHeader/I2C_Enum.h>

#define I2C_BASE    ((UBase_t) 0x40020000UL)
#define I2C0_BASE    ((UBase_t) 0x40020000UL)
#define I2C1_BASE    ((UBase_t) 0x40021000UL)
#define I2C2_BASE    ((UBase_t) 0x40022000UL)
#define I2C3_BASE    ((UBase_t) 0x40023000UL)
#define I2C4_BASE    ((UBase_t) 0x400C0000UL)
#define I2C5_BASE    ((UBase_t) 0x400C1000UL)
#define I2C6_BASE    ((UBase_t) 0x400C2000UL)
#define I2C7_BASE    ((UBase_t) 0x400C3000UL)
#define I2C8_BASE    ((UBase_t) 0x400B8000UL)
#define I2C9_BASE    ((UBase_t) 0x400B9000UL)

#define I2C_OFFSET    ((UBase_t) 0x00000000UL)
#define I2C0_OFFSET    ((UBase_t) 0x00020000UL)
#define I2C1_OFFSET    ((UBase_t) 0x00021000UL)
#define I2C2_OFFSET    ((UBase_t) 0x00022000UL)
#define I2C3_OFFSET    ((UBase_t) 0x00023000UL)
#define I2C4_OFFSET    ((UBase_t) 0x000C0000UL)
#define I2C5_OFFSET    ((UBase_t) 0x000C1000UL)
#define I2C6_OFFSET    ((UBase_t) 0x000C2000UL)
#define I2C7_OFFSET    ((UBase_t) 0x000C3000UL)
#define I2C8_OFFSET    ((UBase_t) 0x000B8000UL)
#define I2C9_OFFSET    ((UBase_t) 0x000B9000UL)

#define I2C_BITBANDING_BASE    ((UBase_t) 0x42000000UL)

#define I2C_MASTER_SA_OFFSET    ((UBase_t) 0x0000UL)
#define I2C_MCS_OFFSET    ((UBase_t) 0x0004UL)
#define I2C_MASTER_STS_OFFSET    ((UBase_t) 0x0004UL)
#define I2C_MASTER_CTL_OFFSET    ((UBase_t) 0x0004UL)
#define I2C_MASTER_DATA_OFFSET    ((UBase_t) 0x0008UL)
#define I2C_MASTER_TPR_OFFSET    ((UBase_t) 0x000CUL)
#define I2C_MASTER_IMR_OFFSET    ((UBase_t) 0x0010UL)
#define I2C_MASTER_RIS_OFFSET    ((UBase_t) 0x0014UL)
#define I2C_MASTER_MIS_OFFSET    ((UBase_t) 0x0018UL)
#define I2C_MASTER_ICR_OFFSET    ((UBase_t) 0x001CUL)
#define I2C_MASTER_CR_OFFSET    ((UBase_t) 0x0020UL)
#define I2C_MASTER_CLKOCNT_OFFSET    ((UBase_t) 0x0024UL)
#define I2C_MASTER_BMON_OFFSET    ((UBase_t) 0x002CUL)
#define I2C_MASTER_BLEN_OFFSET    ((UBase_t) 0x0030UL)
#define I2C_MASTER_BCNT_OFFSET    ((UBase_t) 0x0034UL)

#define I2C_SLAVE_OAR_OFFSET    ((UBase_t) 0x0800UL)
#define I2C_SCSR_OFFSET         ((UBase_t) 0x0804UL)
#define I2C_SLAVE_STS_OFFSET    ((UBase_t) 0x0804UL)
#define I2C_SLAVE_CTL_OFFSET    ((UBase_t) 0x0804UL)
#define I2C_SLAVE_DATA_OFFSET    ((UBase_t) 0x0808UL)
#define I2C_SLAVE_IMR_OFFSET    ((UBase_t) 0x080CUL)
#define I2C_SLAVE_RIS_OFFSET    ((UBase_t) 0x0810UL)
#define I2C_SLAVE_MIS_OFFSET    ((UBase_t) 0x0814UL)
#define I2C_SLAVE_ICR_OFFSET    ((UBase_t) 0x0818UL)
#define I2C_SLAVE_OAR2_OFFSET    ((UBase_t) 0x081CUL)
#define I2C_SLAVE_ACKCTL_OFFSET    ((UBase_t) 0x0820UL)

#define I2C_FIFO_DATA_OFFSET    ((UBase_t) 0x0F00UL)
#define I2C_FIFO_CTL_OFFSET    ((UBase_t) 0x0F04UL)
#define I2C_FIFO_STS_OFFSET    ((UBase_t) 0x0F08UL)

#define I2C_PP_OFFSET    ((UBase_t) 0x0FC0UL)
#define I2C_PC_OFFSET    ((UBase_t) 0x0FC4UL)

#endif /* XDRIVER_MCU_I2C_PERIPHERAL_REGISTER_XHEADER_I2C_REGISTERADDRESS_H_ */
