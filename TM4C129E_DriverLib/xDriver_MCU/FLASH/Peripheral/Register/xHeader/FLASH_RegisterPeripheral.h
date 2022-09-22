/**
 *
 * @file FLASH_RegisterPeripheral.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_FLASH_FLASH_PERIPHERAL_FLASH_REGISTER_FLASH_REGISTERPERIPHERAL_H_
#define XDRIVER_MCU_DRIVER_HEADER_FLASH_FLASH_PERIPHERAL_FLASH_REGISTER_FLASH_REGISTERPERIPHERAL_H_

#include <xDriver_MCU/FLASH/Peripheral/Struct/xHeader/FLASH_StructPeripheral.h>
#include <xDriver_MCU/FLASH/Peripheral/Register/xHeader/FLASH_RegisterAddress.h>

#define FLASH    ((FLASH_t*) (FLASH_BASE))

/******************************************************************************************
************************************ 1 ADDRESS *********************************************
******************************************************************************************/
#define FLASH_ADDRESS    ((FLASH_ADDRESS_t*) (FLASH_BASE + FLASH_ADDRESS_OFFSET))
#define FLASH_ADDRESS_R    (*((volatile uint32_t*) (FLASH_BASE + FLASH_ADDRESS_OFFSET)))

/******************************************************************************************
************************************ 2 DATA *********************************************
******************************************************************************************/
#define FLASH_DATA    ((FLASH_DATA_t*) (FLASH_BASE + FLASH_DATA_OFFSET))
#define FLASH_DATA_R    (*((volatile uint32_t*) (FLASH_BASE + FLASH_DATA_OFFSET)))

/******************************************************************************************
************************************ 3 CTL *********************************************
******************************************************************************************/
#define FLASH_CTL    ((FLASH_CTL_t*) (FLASH_BASE + FLASH_CTL_OFFSET))
#define FLASH_CTL_R    (*((volatile uint32_t*) (FLASH_BASE + FLASH_CTL_OFFSET)))

/******************************************************************************************
************************************ 4 RIS *********************************************
******************************************************************************************/
#define FLASH_RIS    ((FLASH_RIS_t*) (FLASH_BASE + FLASH_RIS_OFFSET))
#define FLASH_RIS_R    (*((volatile const uint32_t*) (FLASH_BASE + FLASH_RIS_OFFSET)))

/******************************************************************************************
************************************ 5 IM *********************************************
******************************************************************************************/
#define FLASH_IM    ((FLASH_IM_t*) (FLASH_BASE + FLASH_IM_OFFSET))
#define FLASH_IM_R    (*((volatile uint32_t*) (FLASH_BASE + FLASH_IM_OFFSET)))

/******************************************************************************************
************************************ 6 MISC *********************************************
******************************************************************************************/
#define FLASH_MISC    ((FLASH_MISC_t*) (FLASH_BASE + FLASH_MISC_OFFSET))
#define FLASH_MISC_R    (*((volatile uint32_t*) (FLASH_BASE + FLASH_MISC_OFFSET)))

/******************************************************************************************
************************************ 7 CTL2 *********************************************
******************************************************************************************/
#define FLASH_CTL2    ((FLASH_CTL2_t*) (FLASH_BASE + FLASH_CTL2_OFFSET))
#define FLASH_CTL2_R    (*((volatile uint32_t*) (FLASH_BASE + FLASH_CTL2_OFFSET)))

/******************************************************************************************
************************************ 8 WBVAL *********************************************
******************************************************************************************/
#define FLASH_WBVAL    ((FLASH_WBVAL_t*) (FLASH_BASE + FLASH_WBVAL_OFFSET))
#define FLASH_WBVAL_R    (*((volatile uint32_t*) (FLASH_BASE + FLASH_WBVAL_OFFSET)))

/******************************************************************************************
************************************ 8 PEKEY *********************************************
******************************************************************************************/
#define FLASH_PEKEY    ((FLASH_PEKEY_t*) (FLASH_BASE + FLASH_PEKEY_OFFSET))
#define FLASH_PEKEY_R    (*((volatile uint32_t*) (FLASH_BASE + FLASH_PEKEY_OFFSET)))

/******************************************************************************************
************************************ 9-40 WBn *********************************************
******************************************************************************************/
#define FLASH_WBn    ((FLASH_WBn_t*) (FLASH_BASE + FLASH_WBn_OFFSET))

#define FLASH_WB0    ((FLASH_WB_t*) (FLASH_BASE + FLASH_WB0_OFFSET))
#define FLASH_WB0_R    (*((volatile uint32_t*) (FLASH_BASE + FLASH_WB0_OFFSET)))

#define FLASH_WB1    ((FLASH_WB_t*) (FLASH_BASE + FLASH_WB1_OFFSET))
#define FLASH_WB1_R    (*((volatile uint32_t*) (FLASH_BASE + FLASH_WB1_OFFSET)))

#define FLASH_WB2    ((FLASH_WB_t*) (FLASH_BASE + FLASH_WB2_OFFSET))
#define FLASH_WB2_R    (*((volatile uint32_t*) (FLASH_BASE + FLASH_WB2_OFFSET)))

#define FLASH_WB3    ((FLASH_WB_t*) (FLASH_BASE + FLASH_WB3_OFFSET))
#define FLASH_WB3_R    (*((volatile uint32_t*) (FLASH_BASE + FLASH_WB3_OFFSET)))

#define FLASH_WB4    ((FLASH_WB_t*) (FLASH_BASE + FLASH_WB4_OFFSET))
#define FLASH_WB4_R    (*((volatile uint32_t*) (FLASH_BASE + FLASH_WB4_OFFSET)))

#define FLASH_WB5    ((FLASH_WB_t*) (FLASH_BASE + FLASH_WB5_OFFSET))
#define FLASH_WB5_R    (*((volatile uint32_t*) (FLASH_BASE + FLASH_WB5_OFFSET)))

#define FLASH_WB6    ((FLASH_WB_t*) (FLASH_BASE + FLASH_WB6_OFFSET))
#define FLASH_WB6_R    (*((volatile uint32_t*) (FLASH_BASE + FLASH_WB6_OFFSET)))

#define FLASH_WB7    ((FLASH_WB_t*) (FLASH_BASE + FLASH_WB7_OFFSET))
#define FLASH_WB7_R    (*((volatile uint32_t*) (FLASH_BASE + FLASH_WB7_OFFSET)))

#define FLASH_WB8    ((FLASH_WB_t*) (FLASH_BASE + FLASH_WB8_OFFSET))
#define FLASH_WB8_R    (*((volatile uint32_t*) (FLASH_BASE + FLASH_WB8_OFFSET)))

#define FLASH_WB9    ((FLASH_WB_t*) (FLASH_BASE + FLASH_WB9_OFFSET))
#define FLASH_WB9_R    (*((volatile uint32_t*) (FLASH_BASE + FLASH_WB9_OFFSET)))

#define FLASH_WB10    ((FLASH_WB_t*) (FLASH_BASE + FLASH_WB10_OFFSET))
#define FLASH_WB10_R    (*((volatile uint32_t*) (FLASH_BASE + FLASH_WB10_OFFSET)))

#define FLASH_WB11    ((FLASH_WB_t*) (FLASH_BASE + FLASH_WB11_OFFSET))
#define FLASH_WB11_R    (*((volatile uint32_t*) (FLASH_BASE + FLASH_WB11_OFFSET)))

#define FLASH_WB12    ((FLASH_WB_t*) (FLASH_BASE + FLASH_WB12_OFFSET))
#define FLASH_WB12_R    (*((volatile uint32_t*) (FLASH_BASE + FLASH_WB12_OFFSET)))

#define FLASH_WB13    ((FLASH_WB_t*) (FLASH_BASE + FLASH_WB13_OFFSET))
#define FLASH_WB13_R    (*((volatile uint32_t*) (FLASH_BASE + FLASH_WB13_OFFSET)))

#define FLASH_WB14    ((FLASH_WB_t*) (FLASH_BASE + FLASH_WB14_OFFSET))
#define FLASH_WB14_R    (*((volatile uint32_t*) (FLASH_BASE + FLASH_WB14_OFFSET)))

#define FLASH_WB15    ((FLASH_WB_t*) (FLASH_BASE + FLASH_WB15_OFFSET))
#define FLASH_WB15_R    (*((volatile uint32_t*) (FLASH_BASE + FLASH_WB15_OFFSET)))

#define FLASH_WB16    ((FLASH_WB_t*) (FLASH_BASE + FLASH_WB16_OFFSET))
#define FLASH_WB16_R    (*((volatile uint32_t*) (FLASH_BASE + FLASH_WB16_OFFSET)))

#define FLASH_WB17    ((FLASH_WB_t*) (FLASH_BASE + FLASH_WB17_OFFSET))
#define FLASH_WB17_R    (*((volatile uint32_t*) (FLASH_BASE + FLASH_WB17_OFFSET)))

#define FLASH_WB18    ((FLASH_WB_t*) (FLASH_BASE + FLASH_WB18_OFFSET))
#define FLASH_WB18_R    (*((volatile uint32_t*) (FLASH_BASE + FLASH_WB18_OFFSET)))

#define FLASH_WB19    ((FLASH_WB_t*) (FLASH_BASE + FLASH_WB19_OFFSET))
#define FLASH_WB19_R    (*((volatile uint32_t*) (FLASH_BASE + FLASH_WB19_OFFSET)))

#define FLASH_WB20    ((FLASH_WB_t*) (FLASH_BASE + FLASH_WB20_OFFSET))
#define FLASH_WB20_R    (*((volatile uint32_t*) (FLASH_BASE + FLASH_WB20_OFFSET)))

#define FLASH_WB21    ((FLASH_WB_t*) (FLASH_BASE + FLASH_WB21_OFFSET))
#define FLASH_WB21_R    (*((volatile uint32_t*) (FLASH_BASE + FLASH_WB21_OFFSET)))

#define FLASH_WB22    ((FLASH_WB_t*) (FLASH_BASE + FLASH_WB22_OFFSET))
#define FLASH_WB22_R    (*((volatile uint32_t*) (FLASH_BASE + FLASH_WB22_OFFSET)))

#define FLASH_WB23    ((FLASH_WB_t*) (FLASH_BASE + FLASH_WB23_OFFSET))
#define FLASH_WB23_R    (*((volatile uint32_t*) (FLASH_BASE + FLASH_WB23_OFFSET)))

#define FLASH_WB24    ((FLASH_WB_t*) (FLASH_BASE + FLASH_WB24_OFFSET))
#define FLASH_WB24_R    (*((volatile uint32_t*) (FLASH_BASE + FLASH_WB24_OFFSET)))

#define FLASH_WB25    ((FLASH_WB_t*) (FLASH_BASE + FLASH_WB25_OFFSET))
#define FLASH_WB25_R    (*((volatile uint32_t*) (FLASH_BASE + FLASH_WB25_OFFSET)))

#define FLASH_WB26    ((FLASH_WB_t*) (FLASH_BASE + FLASH_WB26_OFFSET))
#define FLASH_WB26_R    (*((volatile uint32_t*) (FLASH_BASE + FLASH_WB26_OFFSET)))

#define FLASH_WB27    ((FLASH_WB_t*) (FLASH_BASE + FLASH_WB27_OFFSET))
#define FLASH_WB27_R    (*((volatile uint32_t*) (FLASH_BASE + FLASH_WB27_OFFSET)))

#define FLASH_WB28    ((FLASH_WB_t*) (FLASH_BASE + FLASH_WB28_OFFSET))
#define FLASH_WB28_R    (*((volatile uint32_t*) (FLASH_BASE + FLASH_WB28_OFFSET)))

#define FLASH_WB29    ((FLASH_WB_t*) (FLASH_BASE + FLASH_WB29_OFFSET))
#define FLASH_WB29_R    (*((volatile uint32_t*) (FLASH_BASE + FLASH_WB29_OFFSET)))

#define FLASH_WB30    ((FLASH_WB_t*) (FLASH_BASE + FLASH_WB30_OFFSET))
#define FLASH_WB30_R    (*((volatile uint32_t*) (FLASH_BASE + FLASH_WB30_OFFSET)))

#define FLASH_WB31    ((FLASH_WB_t*) (FLASH_BASE + FLASH_WB31_OFFSET))
#define FLASH_WB31_R    (*((volatile uint32_t*) (FLASH_BASE + FLASH_WB31_OFFSET)))

/******************************************************************************************
************************************ 41 PP *********************************************
******************************************************************************************/
#define FLASH_PP    ((FLASH_PP_t*) (FLASH_BASE + FLASH_PP_OFFSET))
#define FLASH_PP_R    (*((volatile const uint32_t*) (FLASH_BASE + FLASH_PP_OFFSET)))

/******************************************************************************************
************************************ 42 SRAM_SIZE *********************************************
******************************************************************************************/
#define SRAM_SIZE    ((SRAM_SIZE_t*) (FLASH_BASE + SRAM_SIZE_OFFSET))
#define SRAM_SIZE_R    (*((volatile const uint32_t*) (FLASH_BASE + SRAM_SIZE_OFFSET)))

/******************************************************************************************
************************************ 42 CONF *********************************************
******************************************************************************************/
#define FLASH_CONF    ((FLASH_CONF_t*) (FLASH_BASE + FLASH_CONF_OFFSET))
#define FLASH_CONF_R    (*((volatile uint32_t*) (FLASH_BASE + FLASH_CONF_OFFSET)))

/******************************************************************************************
************************************ 43 ROM_SWMAP *********************************************
******************************************************************************************/
#define ROM_SWMAP    ((ROM_SWMAP_t*) (FLASH_BASE + ROM_SWMAP_OFFSET))
#define ROM_SWMAP_R    (*((volatile const uint32_t*) (FLASH_BASE + ROM_SWMAP_OFFSET)))

/******************************************************************************************
************************************ 43 DMASZ *********************************************
******************************************************************************************/
#define FLASH_DMASZ    ((FLASH_DMASZ_t*) (FLASH_BASE + FLASH_DMASZ_OFFSET))
#define FLASH_DMASZ_R    (*((volatile uint32_t*) (FLASH_BASE + FLASH_DMASZ_OFFSET)))

/******************************************************************************************
************************************ 43 DMAST *********************************************
******************************************************************************************/
#define FLASH_DMAST    ((FLASH_DMAST_t*) (FLASH_BASE + FLASH_DMAST_OFFSET))
#define FLASH_DMAST_R    (*((volatile uint32_t*) (FLASH_BASE + FLASH_DMAST_OFFSET)))

#if defined (__TI_ARM__ ) || defined (__MSP430__ )

#pragma  CODE_SECTION(FLASH__uptrBlockBaseAddress, ".ramcode")

uintptr_t FLASH__uptrBlockBaseAddress(FLASH_nMODULE enModuleArg);

#elif defined (__GNUC__ )


uintptr_t FLASH__uptrBlockBaseAddress(FLASH_nMODULE enModuleArg) __attribute__((section(".ramcode")));

#endif


#endif /* XDRIVER_MCU_DRIVER_HEADER_FLASH_FLASH_PERIPHERAL_FLASH_REGISTER_FLASH_REGISTERPERIPHERAL_H_ */
