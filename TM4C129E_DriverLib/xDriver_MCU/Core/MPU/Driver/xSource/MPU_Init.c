/**
 *
 * @file MPU_Init.c
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
 * @verbatim 19 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 19 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/Core/MPU/Driver/xHeader/MPU_Init.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/Core/MPU/Peripheral/MPU_Peripheral.h>

#define MPU_FLASH_CODE_ADDR    (0x00000000UL)
#define MPU_FLASH_CODE_SIZE    (20UL-1UL)

/**
 * TODO: Move this feature to xApplication_MCU level, this is application specific
 * create the functionality to enable, and set the memory parameters
 */
void MPU__vInit(void)
{
    UBase_t uxAddressBit = 0UL;
    MCU__vBlocking();

    MCU__vWriteRegister(MPU_BASE, MPU_CTRL_OFFSET, 0UL, MPU_CTRL_ENABLE_MASK,
                        MPU_CTRL_R_ENABLE_BIT);

    /*all mode only Read  1MB*/
    /*could be executed*/
    /*no shareable, no cacheable, no bufeable*/
    /*normal memory*/
    /*512KB size*/
    /*enable region*/
    MCU__vWriteRegister(MPU_BASE, MPU_RNR_OFFSET, 0UL, MPU_RNR_REGION_MASK,
                        MPU_RNR_R_REGION_BIT);
    /*FLASH_CODE (size 0x00040000UL)*/
    MCU__vWriteRegister(MPU_BASE, MPU_RBAR_OFFSET,
    0x00000000UL | MPU_RBAR_R_VALID_ENA | MPU_RBAR_R_REGION_REG0,
    MPU_RBAR_R_ADDR_MASK | MPU_RBAR_R_VALID_MASK | MPU_RBAR_R_REGION_MASK, 0UL);

    uxAddressBit = MPU_FLASH_CODE_SIZE;
    uxAddressBit <<= 1U;
    MCU__vWriteRegister(MPU_BASE, MPU_RASR_OFFSET,
    MPU_RASR_R_XN_DIS | MPU_RASR_R_AP_RORO | MPU_RASR_R_S_DIS |
    MPU_RASR_R_C_DIS | MPU_RASR_R_B_DIS | MPU_RASR_R_TEX_WB_WRA |
    MPU_RASR_R_ENABLE_ENA | uxAddressBit | MPU_RASR_R_SRD_ENA,
    MPU_RASR_R_XN_MASK | MPU_RASR_R_AP_MASK | MPU_RASR_R_S_MASK |
    MPU_RASR_R_C_MASK | MPU_RASR_R_B_MASK | MPU_RASR_R_TEX_MASK |
    MPU_RASR_R_ENABLE_MASK | MPU_RASR_R_SIZE_MASK | MPU_RASR_R_SRD_MASK,
    0UL);


    /*all mode only Read Only 512KB*/
    /*could be not executed*/
    /*no shareable, no cacheable, no bufeable*/
    /*normal memory*/
    /*512KB size*/
    /*enable region*/
    /*FLASH_CONSTANT (size 0x00080000UL)*/
    MCU__vWriteRegister(MPU_BASE, MPU_RNR_OFFSET, 1UL, MPU_RNR_REGION_MASK,
                        MPU_RNR_R_REGION_BIT);
    /*FLASH_CODE (size 0x00030000UL)*/
    MCU__vWriteRegister(MPU_BASE, MPU_RBAR_OFFSET,
    0x00020000UL | MPU_RBAR_R_VALID_ENA | MPU_RBAR_R_REGION_REG1,
    MPU_RBAR_R_ADDR_MASK | MPU_RBAR_R_VALID_MASK | MPU_RBAR_R_REGION_MASK, 0UL);

    uxAddressBit = 19UL - 1UL; /*2Â¹â�¹ = 512KB*/
    uxAddressBit <<= 1U;
    MCU__vWriteRegister(MPU_BASE, MPU_RASR_OFFSET,
    MPU_RASR_R_XN_ENA | MPU_RASR_R_AP_RWRW | MPU_RASR_R_S_DIS | MPU_RASR_R_C_DIS |
    MPU_RASR_R_B_DIS | MPU_RASR_R_TEX_WB_WRA | MPU_RASR_R_ENABLE_ENA | uxAddressBit |
    MPU_RASR_R_SRD_ENA,
    MPU_RASR_R_XN_MASK | MPU_RASR_R_AP_MASK | MPU_RASR_R_S_MASK | MPU_RASR_R_C_MASK |
    MPU_RASR_R_B_MASK | MPU_RASR_R_TEX_MASK | MPU_RASR_R_ENABLE_MASK | MPU_RASR_R_SIZE_MASK |
    MPU_RASR_R_SRD_MASK, 0UL);

    /*all mode read and write*/
    /*could be not executed*/
    /*no shareable, no cacheable, no bufeable*/
    /*normal memory*/
    /*256Kb size*/
    /*enable region*/
    MCU__vWriteRegister(MPU_BASE, MPU_RNR_OFFSET, 2UL, MPU_RNR_REGION_MASK,
                        MPU_RNR_R_REGION_BIT);
    /*SRAM_VARIABLE (size 0x00007000UL)*/
    MCU__vWriteRegister(MPU_BASE, MPU_RBAR_OFFSET,
    0x20000000UL | MPU_RBAR_R_VALID_ENA | MPU_RBAR_R_REGION_REG2,
    MPU_RBAR_R_ADDR_MASK | MPU_RBAR_R_VALID_MASK | MPU_RBAR_R_REGION_MASK, 0UL);

    uxAddressBit = 18UL - 1UL;
    uxAddressBit <<= 1U;
    MCU__vWriteRegister(MPU_BASE, MPU_RASR_OFFSET,
    MPU_RASR_R_XN_ENA | MPU_RASR_R_AP_RWRW | MPU_RASR_R_S_DIS | MPU_RASR_R_C_DIS |
    MPU_RASR_R_B_DIS | MPU_RASR_R_TEX_WB_WRA | MPU_RASR_R_ENABLE_ENA | uxAddressBit |
    MPU_RASR_R_SRD_ENA,
    MPU_RASR_R_XN_MASK | MPU_RASR_R_AP_MASK | MPU_RASR_R_S_MASK | MPU_RASR_R_C_MASK |
    MPU_RASR_R_B_MASK | MPU_RASR_R_TEX_MASK | MPU_RASR_R_ENABLE_MASK | MPU_RASR_R_SIZE_MASK |
    MPU_RASR_R_SRD_MASK, 0UL);

    /*all mode read and write*/
    /*could be executed*/
    /*no shareable, no cacheable, no bufeable*/
    /*normal memory*/
    /*5Kb size*/
    /*enable region*/
    MCU__vWriteRegister(MPU_BASE, MPU_RNR_OFFSET, 3UL, MPU_RNR_REGION_MASK,
                        MPU_RNR_R_REGION_BIT);
    /*SRAM_CODE (size 0x00001400UL)*/
    MCU__vWriteRegister(MPU_BASE, MPU_RBAR_OFFSET,
    0x20000000UL | MPU_RBAR_R_VALID_ENA | MPU_RBAR_R_REGION_REG3,
    MPU_RBAR_R_ADDR_MASK | MPU_RBAR_R_VALID_MASK | MPU_RBAR_R_REGION_MASK, 0UL);

    uxAddressBit = 13UL - 1UL;
    uxAddressBit <<= 1U;
    MCU__vWriteRegister(MPU_BASE, MPU_RASR_OFFSET,
    MPU_RASR_R_XN_DIS | MPU_RASR_R_AP_RWRW | MPU_RASR_R_S_DIS | MPU_RASR_R_C_DIS |
    MPU_RASR_R_B_DIS | MPU_RASR_R_TEX_WB_WRA | MPU_RASR_R_ENABLE_ENA | uxAddressBit |
    MPU_RASR_R_SRD0_DIS | MPU_RASR_R_SRD6_DIS | MPU_RASR_R_SRD7_DIS,
    MPU_RASR_R_XN_MASK | MPU_RASR_R_AP_MASK | MPU_RASR_R_S_MASK | MPU_RASR_R_C_MASK |
    MPU_RASR_R_B_MASK | MPU_RASR_R_TEX_MASK | MPU_RASR_R_ENABLE_MASK | MPU_RASR_R_SIZE_MASK |
    MPU_RASR_R_SRD_MASK, 0UL);

    MCU__vWriteRegister(MPU_BASE, MPU_CTRL_OFFSET, MPU_CTRL_R_ENABLE_ENA |
                        MPU_CTRL_R_PRIVDEFENA_ENA , MPU_CTRL_ENABLE_MASK |
                        MPU_CTRL_R_PRIVDEFENA_MASK, 0UL);

    MCU__vBlocking();
}
