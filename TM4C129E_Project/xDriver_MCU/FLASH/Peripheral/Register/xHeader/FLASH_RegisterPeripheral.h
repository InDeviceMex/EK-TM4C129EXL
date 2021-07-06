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

#define FLASH    ((FLASH_TypeDef*) (FLASH_BASE))

/******************************************************************************************
************************************ 1 FMA *********************************************
******************************************************************************************/
#define FLASH_FMA    ((FMA_TypeDef*) (FLASH_BASE + FLASH_FMA_OFFSET))
#define FLASH_FMA_R    (*((volatile uint32_t*) (FLASH_BASE + FLASH_FMA_OFFSET)))

/******************************************************************************************
************************************ 2 FMD *********************************************
******************************************************************************************/
#define FLASH_FMD    ((FMD_TypeDef*) (FLASH_BASE + FLASH_FMD_OFFSET))
#define FLASH_FMD_R    (*((volatile uint32_t*) (FLASH_BASE + FLASH_FMD_OFFSET)))

/******************************************************************************************
************************************ 3 FMC *********************************************
******************************************************************************************/
#define FLASH_FMC    ((FMC_TypeDef*) (FLASH_BASE + FLASH_FMC_OFFSET))
#define FLASH_FMC_R    (*((volatile uint32_t*) (FLASH_BASE + FLASH_FMC_OFFSET)))

/******************************************************************************************
************************************ 4 FCRIS *********************************************
******************************************************************************************/
#define FLASH_FCRIS    ((FCRIS_TypeDef*) (FLASH_BASE + FLASH_FCRIS_OFFSET))
#define FLASH_FCRIS_R    (*((volatile const uint32_t*) (FLASH_BASE + FLASH_FCRIS_OFFSET)))

/******************************************************************************************
************************************ 5 FCIM *********************************************
******************************************************************************************/
#define FLASH_FCIM    ((FCIM_TypeDef*) (FLASH_BASE + FLASH_FCIM_OFFSET))
#define FLASH_FCIM_R    (*((volatile uint32_t*) (FLASH_BASE + FLASH_FCIM_OFFSET)))

/******************************************************************************************
************************************ 6 FCMISC *********************************************
******************************************************************************************/
#define FLASH_FCMISC    ((FCMISC_TypeDef*) (FLASH_BASE + FLASH_FCMISC_OFFSET))
#define FLASH_FCMISC_R    (*((volatile uint32_t*) (FLASH_BASE + FLASH_FCMISC_OFFSET)))

/******************************************************************************************
************************************ 7 FMC2 *********************************************
******************************************************************************************/
#define FLASH_FMC2    ((FMC2_TypeDef*) (FLASH_BASE + FLASH_FMC2_OFFSET))
#define FLASH_FMC2_R    (*((volatile uint32_t*) (FLASH_BASE + FLASH_FMC2_OFFSET)))

/******************************************************************************************
************************************ 8 FWBVAL *********************************************
******************************************************************************************/
#define FLASH_FWBVAL    ((FWBVAL_TypeDef*) (FLASH_BASE + FLASH_FWBVAL_OFFSET))
#define FLASH_FWBVAL_R    (*((volatile uint32_t*) (FLASH_BASE + FLASH_FWBVAL_OFFSET)))

/******************************************************************************************
************************************ 8 FLPEKEY *********************************************
******************************************************************************************/
#define FLASH_FLPEKEY    ((FLPEKEY_TypeDef*) (FLASH_BASE + FLASH_FLPEKEY_OFFSET))
#define FLASH_FLPEKEY_R    (*((volatile uint32_t*) (FLASH_BASE + FLASH_FLPEKEY_OFFSET)))

/******************************************************************************************
************************************ 9-40 FWBn *********************************************
******************************************************************************************/
#define FLASH_FWBn    ((FWBn_TypeDef*) (FLASH_BASE + FLASH_FWBn_OFFSET))

#define FLASH_FWB0    ((FWB_TypeDef*) (FLASH_BASE + FLASH_FWB0_OFFSET))
#define FLASH_FWB0_R    (*((volatile uint32_t*) (FLASH_BASE + FLASH_FWB0_OFFSET)))

#define FLASH_FWB1    ((FWB_TypeDef*) (FLASH_BASE + FLASH_FWB1_OFFSET))
#define FLASH_FWB1_R    (*((volatile uint32_t*) (FLASH_BASE + FLASH_FWB1_OFFSET)))

#define FLASH_FWB2    ((FWB_TypeDef*) (FLASH_BASE + FLASH_FWB2_OFFSET))
#define FLASH_FWB2_R    (*((volatile uint32_t*) (FLASH_BASE + FLASH_FWB2_OFFSET)))

#define FLASH_FWB3    ((FWB_TypeDef*) (FLASH_BASE + FLASH_FWB3_OFFSET))
#define FLASH_FWB3_R    (*((volatile uint32_t*) (FLASH_BASE + FLASH_FWB3_OFFSET)))

#define FLASH_FWB4    ((FWB_TypeDef*) (FLASH_BASE + FLASH_FWB4_OFFSET))
#define FLASH_FWB4_R    (*((volatile uint32_t*) (FLASH_BASE + FLASH_FWB4_OFFSET)))

#define FLASH_FWB5    ((FWB_TypeDef*) (FLASH_BASE + FLASH_FWB5_OFFSET))
#define FLASH_FWB5_R    (*((volatile uint32_t*) (FLASH_BASE + FLASH_FWB5_OFFSET)))

#define FLASH_FWB6    ((FWB_TypeDef*) (FLASH_BASE + FLASH_FWB6_OFFSET))
#define FLASH_FWB6_R    (*((volatile uint32_t*) (FLASH_BASE + FLASH_FWB6_OFFSET)))

#define FLASH_FWB7    ((FWB_TypeDef*) (FLASH_BASE + FLASH_FWB7_OFFSET))
#define FLASH_FWB7_R    (*((volatile uint32_t*) (FLASH_BASE + FLASH_FWB7_OFFSET)))

#define FLASH_FWB8    ((FWB_TypeDef*) (FLASH_BASE + FLASH_FWB8_OFFSET))
#define FLASH_FWB8_R    (*((volatile uint32_t*) (FLASH_BASE + FLASH_FWB8_OFFSET)))

#define FLASH_FWB9    ((FWB_TypeDef*) (FLASH_BASE + FLASH_FWB9_OFFSET))
#define FLASH_FWB9_R    (*((volatile uint32_t*) (FLASH_BASE + FLASH_FWB9_OFFSET)))

#define FLASH_FWB10    ((FWB_TypeDef*) (FLASH_BASE + FLASH_FWB10_OFFSET))
#define FLASH_FWB10_R    (*((volatile uint32_t*) (FLASH_BASE + FLASH_FWB10_OFFSET)))

#define FLASH_FWB11    ((FWB_TypeDef*) (FLASH_BASE + FLASH_FWB11_OFFSET))
#define FLASH_FWB11_R    (*((volatile uint32_t*) (FLASH_BASE + FLASH_FWB11_OFFSET)))

#define FLASH_FWB12    ((FWB_TypeDef*) (FLASH_BASE + FLASH_FWB12_OFFSET))
#define FLASH_FWB12_R    (*((volatile uint32_t*) (FLASH_BASE + FLASH_FWB12_OFFSET)))

#define FLASH_FWB13    ((FWB_TypeDef*) (FLASH_BASE + FLASH_FWB13_OFFSET))
#define FLASH_FWB13_R    (*((volatile uint32_t*) (FLASH_BASE + FLASH_FWB13_OFFSET)))

#define FLASH_FWB14    ((FWB_TypeDef*) (FLASH_BASE + FLASH_FWB14_OFFSET))
#define FLASH_FWB14_R    (*((volatile uint32_t*) (FLASH_BASE + FLASH_FWB14_OFFSET)))

#define FLASH_FWB15    ((FWB_TypeDef*) (FLASH_BASE + FLASH_FWB15_OFFSET))
#define FLASH_FWB15_R    (*((volatile uint32_t*) (FLASH_BASE + FLASH_FWB15_OFFSET)))

#define FLASH_FWB16    ((FWB_TypeDef*) (FLASH_BASE + FLASH_FWB16_OFFSET))
#define FLASH_FWB16_R    (*((volatile uint32_t*) (FLASH_BASE + FLASH_FWB16_OFFSET)))

#define FLASH_FWB17    ((FWB_TypeDef*) (FLASH_BASE + FLASH_FWB17_OFFSET))
#define FLASH_FWB17_R    (*((volatile uint32_t*) (FLASH_BASE + FLASH_FWB17_OFFSET)))

#define FLASH_FWB18    ((FWB_TypeDef*) (FLASH_BASE + FLASH_FWB18_OFFSET))
#define FLASH_FWB18_R    (*((volatile uint32_t*) (FLASH_BASE + FLASH_FWB18_OFFSET)))

#define FLASH_FWB19    ((FWB_TypeDef*) (FLASH_BASE + FLASH_FWB19_OFFSET))
#define FLASH_FWB19_R    (*((volatile uint32_t*) (FLASH_BASE + FLASH_FWB19_OFFSET)))

#define FLASH_FWB20    ((FWB_TypeDef*) (FLASH_BASE + FLASH_FWB20_OFFSET))
#define FLASH_FWB20_R    (*((volatile uint32_t*) (FLASH_BASE + FLASH_FWB20_OFFSET)))

#define FLASH_FWB21    ((FWB_TypeDef*) (FLASH_BASE + FLASH_FWB21_OFFSET))
#define FLASH_FWB21_R    (*((volatile uint32_t*) (FLASH_BASE + FLASH_FWB21_OFFSET)))

#define FLASH_FWB22    ((FWB_TypeDef*) (FLASH_BASE + FLASH_FWB22_OFFSET))
#define FLASH_FWB22_R    (*((volatile uint32_t*) (FLASH_BASE + FLASH_FWB22_OFFSET)))

#define FLASH_FWB23    ((FWB_TypeDef*) (FLASH_BASE + FLASH_FWB23_OFFSET))
#define FLASH_FWB23_R    (*((volatile uint32_t*) (FLASH_BASE + FLASH_FWB23_OFFSET)))

#define FLASH_FWB24    ((FWB_TypeDef*) (FLASH_BASE + FLASH_FWB24_OFFSET))
#define FLASH_FWB24_R    (*((volatile uint32_t*) (FLASH_BASE + FLASH_FWB24_OFFSET)))

#define FLASH_FWB25    ((FWB_TypeDef*) (FLASH_BASE + FLASH_FWB25_OFFSET))
#define FLASH_FWB25_R    (*((volatile uint32_t*) (FLASH_BASE + FLASH_FWB25_OFFSET)))

#define FLASH_FWB26    ((FWB_TypeDef*) (FLASH_BASE + FLASH_FWB26_OFFSET))
#define FLASH_FWB26_R    (*((volatile uint32_t*) (FLASH_BASE + FLASH_FWB26_OFFSET)))

#define FLASH_FWB27    ((FWB_TypeDef*) (FLASH_BASE + FLASH_FWB27_OFFSET))
#define FLASH_FWB27_R    (*((volatile uint32_t*) (FLASH_BASE + FLASH_FWB27_OFFSET)))

#define FLASH_FWB28    ((FWB_TypeDef*) (FLASH_BASE + FLASH_FWB28_OFFSET))
#define FLASH_FWB28_R    (*((volatile uint32_t*) (FLASH_BASE + FLASH_FWB28_OFFSET)))

#define FLASH_FWB29    ((FWB_TypeDef*) (FLASH_BASE + FLASH_FWB29_OFFSET))
#define FLASH_FWB29_R    (*((volatile uint32_t*) (FLASH_BASE + FLASH_FWB29_OFFSET)))

#define FLASH_FWB30    ((FWB_TypeDef*) (FLASH_BASE + FLASH_FWB30_OFFSET))
#define FLASH_FWB30_R    (*((volatile uint32_t*) (FLASH_BASE + FLASH_FWB30_OFFSET)))

#define FLASH_FWB31    ((FWB_TypeDef*) (FLASH_BASE + FLASH_FWB31_OFFSET))
#define FLASH_FWB31_R    (*((volatile uint32_t*) (FLASH_BASE + FLASH_FWB31_OFFSET)))

/******************************************************************************************
************************************ 41 FLASHPP *********************************************
******************************************************************************************/
#define FLASH_FLASHPP    ((FLASHPP_TypeDef*) (FLASH_BASE + FLASH_FLASHPP_OFFSET))
#define FLASH_FLASHPP_R    (*((volatile const uint32_t*) (FLASH_BASE + FLASH_FLASHPP_OFFSET)))

/******************************************************************************************
************************************ 42 SSIZE *********************************************
******************************************************************************************/
#define FLASH_SSIZE    ((SSIZE_TypeDef*) (FLASH_BASE + FLASH_SSIZE_OFFSET))
#define FLASH_SSIZE_R    (*((volatile const uint32_t*) (FLASH_BASE + FLASH_SSIZE_OFFSET)))

/******************************************************************************************
************************************ 42 FLASHCONF *********************************************
******************************************************************************************/
#define FLASH_FLASHCONF    ((FLASHCONF_TypeDef*) (FLASH_BASE + FLASH_FLASHCONF_OFFSET))
#define FLASH_FLASHCONF_R    (*((volatile uint32_t*) (FLASH_BASE + FLASH_FLASHCONF_OFFSET)))

/******************************************************************************************
************************************ 43 ROMSWMAP *********************************************
******************************************************************************************/
#define FLASH_ROMSWMAP    ((ROMSWMAP_TypeDef*) (FLASH_BASE + FLASH_ROMSWMAP_OFFSET))
#define FLASH_ROMSWMAP_R    (*((volatile const uint32_t*) (FLASH_BASE + FLASH_ROMSWMAP_OFFSET)))

/******************************************************************************************
************************************ 43 FLASHDMASZ *********************************************
******************************************************************************************/
#define FLASH_FLASHDMASZ    ((FLASHDMASZ_TypeDef*) (FLASH_BASE + FLASH_FLASHDMASZ_OFFSET))
#define FLASH_FLASHDMASZ_R    (*((volatile uint32_t*) (FLASH_BASE + FLASH_FLASHDMASZ_OFFSET)))

/******************************************************************************************
************************************ 43 FLASHDMAST *********************************************
******************************************************************************************/
#define FLASH_FLASHDMAST    ((FLASHDMAST_TypeDef*) (FLASH_BASE + FLASH_FLASHDMAST_OFFSET))
#define FLASH_FLASHDMAST_R    (*((volatile uint32_t*) (FLASH_BASE + FLASH_FLASHDMAST_OFFSET)))

#endif /* XDRIVER_MCU_DRIVER_HEADER_FLASH_FLASH_PERIPHERAL_FLASH_REGISTER_FLASH_REGISTERPERIPHERAL_H_ */
