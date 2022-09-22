/**
 *
 * @file FLASH_RegisterPeripheral_Bitbanding.h
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
 * @verbatim * Date           Author     Version     Description * 21 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_FLASH_FLASH_PERIPHERAL_FLASH_REGISTER_FLASH_REGISTERPERIPHERAL_BITBANDING_H_
#define XDRIVER_MCU_DRIVER_HEADER_FLASH_FLASH_PERIPHERAL_FLASH_REGISTER_FLASH_REGISTERPERIPHERAL_BITBANDING_H_

#include <xDriver_MCU/FLASH/Peripheral/Struct/xHeader/FLASH_StructPeripheral_Bitbanding.h>
#include <xDriver_MCU/FLASH/Peripheral/Register/xHeader/FLASH_RegisterAddress.h>
#include <xDriver_MCU/FLASH/Peripheral/Register/xHeader/FLASH_RegisterDefines.h>

#define FLASH_BITBANDING    ((FLASH_BITBANDING_t*) (FLASH_BITBANDING_BASE + (FLASH_OFFSET * 32UL)))

/******************************************************************************************
************************************ 1 ADDRESS *********************************************
******************************************************************************************/
#define FLASH_BITBANDING_ADDRESS    ((FLASH_BITBANDING_ADDRESS_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_ADDRESS_OFFSET) * 32UL)))

/******************************************************************************************
************************************ 2 DATA *********************************************
******************************************************************************************/
#define FLASH_BITBANDING_DATA    ((FLASH_BITBANDING_DATA_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_DATA_OFFSET) * 32UL)))

/******************************************************************************************
************************************ 3 CTL *********************************************
******************************************************************************************/
#define FLASH_BITBANDING_CTL    ((FLASH_BITBANDING_CTL_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_CTL_OFFSET) * 32UL)))

#define FLASH_BITBANDING_CTL_WRITE    (*((volatile uint32_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_CTL_OFFSET) * 32UL) + (FLASH_CTL_R_WRITE_BIT * 4UL))))
#define FLASH_BITBANDING_CTL_ERASE    (*((volatile uint32_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_CTL_OFFSET) * 32UL) + (FLASH_CTL_R_ERASE_BIT * 4UL))))
#define FLASH_BITBANDING_CTL_MERASE    (*((volatile uint32_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_CTL_OFFSET) * 32UL) + (FLASH_CTL_R_MERASE_BIT * 4UL))))
#define FLASH_BITBANDING_CTL_COMT    (*((volatile uint32_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_CTL_OFFSET) * 32UL) + (FLASH_CTL_R_COMT_BIT * 4UL))))

/******************************************************************************************
************************************ 4 RIS *********************************************
******************************************************************************************/
#define FLASH_BITBANDING_RIS    ((FLASH_BITBANDING_RIS_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_RIS_OFFSET) * 32UL)))

#define FLASH_BITBANDING_RIS_ARIS    (*((volatile const uint32_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_RIS_OFFSET) * 32UL) + (FLASH_RIS_R_ARIS_BIT * 4UL))))
#define FLASH_BITBANDING_RIS_PRIS    (*((volatile const uint32_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_RIS_OFFSET) * 32UL) + (FLASH_RIS_R_PRIS_BIT * 4UL))))
#define FLASH_BITBANDING_RIS_ERIS    (*((volatile const uint32_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_RIS_OFFSET) * 32UL) + (FLASH_RIS_R_ERIS_BIT * 4UL))))
#define FLASH_BITBANDING_RIS_VOLTRIS    (*((volatile const uint32_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_RIS_OFFSET) * 32UL) + (FLASH_RIS_R_VOLTRIS_BIT * 4UL))))
#define FLASH_BITBANDING_RIS_INVDRIS    (*((volatile const uint32_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_RIS_OFFSET) * 32UL) + (FLASH_RIS_R_INVDRIS_BIT * 4UL))))
#define FLASH_BITBANDING_RIS_ERRIS    (*((volatile const uint32_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_RIS_OFFSET) * 32UL) + (FLASH_RIS_R_ERRIS_BIT * 4UL))))
#define FLASH_BITBANDING_RIS_PROGRIS    (*((volatile const uint32_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_RIS_OFFSET) * 32UL) + (FLASH_RIS_R_PROGRIS_BIT * 4UL))))

/******************************************************************************************
************************************ 5 IM *********************************************
******************************************************************************************/
#define FLASH_BITBANDING_IM    ((FLASH_BITBANDING_IM_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_IM_OFFSET) * 32UL)))

#define FLASH_BITBANDING_IM_AMASK    (*((volatile uint32_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_IM_OFFSET) * 32UL) + (FLASH_IM_R_AMASK_BIT * 4UL))))
#define FLASH_BITBANDING_IM_PMASK    (*((volatile uint32_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_IM_OFFSET) * 32UL) + (FLASH_IM_R_PMASK_BIT * 4UL))))
#define FLASH_BITBANDING_IM_EMASK    (*((volatile uint32_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_IM_OFFSET) * 32UL) + (FLASH_IM_R_EMASK_BIT * 4UL))))
#define FLASH_BITBANDING_IM_VOLTMASK    (*((volatile uint32_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_IM_OFFSET) * 32UL) + (FLASH_IM_R_VOLTMASK_BIT * 4UL))))
#define FLASH_BITBANDING_IM_INVDMASK    (*((volatile uint32_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_IM_OFFSET) * 32UL) + (FLASH_IM_R_INVDMASK_BIT * 4UL))))
#define FLASH_BITBANDING_IM_ERMASK    (*((volatile uint32_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_IM_OFFSET) * 32UL) + (FLASH_IM_R_ERMASK_BIT * 4UL))))
#define FLASH_BITBANDING_IM_PROGMASK    (*((volatile uint32_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_IM_OFFSET) * 32UL) + (FLASH_IM_R_PROGMASK_BIT * 4UL))))

/******************************************************************************************
************************************ 6 MISC *********************************************
******************************************************************************************/
#define FLASH_BITBANDING_MISC    ((FLASH_BITBANDING_MISC_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_MISC_OFFSET) * 32UL)))

#define FLASH_BITBANDING_MISC_AMISC    (*((volatile uint32_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_MISC_OFFSET) * 32UL) + (FLASH_MISC_R_AMISC_BIT * 4UL))))
#define FLASH_BITBANDING_MISC_PMISC    (*((volatile uint32_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_MISC_OFFSET) * 32UL) + (FLASH_MISC_R_PMISC_BIT * 4UL))))
#define FLASH_BITBANDING_MISC_EMISC    (*((volatile uint32_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_MISC_OFFSET) * 32UL) + (FLASH_MISC_R_EMISC_BIT * 4UL))))
#define FLASH_BITBANDING_MISC_VOLTMISC    (*((volatile uint32_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_MISC_OFFSET) * 32UL) + (FLASH_MISC_R_VOLTMISC_BIT * 4UL))))
#define FLASH_BITBANDING_MISC_INVDMISC    (*((volatile uint32_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_MISC_OFFSET) * 32UL) + (FLASH_MISC_R_INVDMISC_BIT * 4UL))))
#define FLASH_BITBANDING_MISC_ERMISC    (*((volatile uint32_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_MISC_OFFSET) * 32UL) + (FLASH_MISC_R_ERMISC_BIT * 4UL))))
#define FLASH_BITBANDING_MISC_PROGMISC    (*((volatile uint32_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_MISC_OFFSET) * 32UL) + (FLASH_MISC_R_PROGMISC_BIT * 4UL))))

/******************************************************************************************
************************************ 7 CTL2 *********************************************
******************************************************************************************/
#define FLASH_BITBANDING_CTL2    ((FLASH_BITBANDING_CTL2_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_CTL2_OFFSET) * 32UL)))

#define FLASH_BITBANDING_CTL2_WRBUF    (*((volatile uint32_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_CTL2_OFFSET) * 32UL) + (FLASH_CTL2_R_WRBUF_BIT * 4UL))))

/******************************************************************************************
************************************ 8 WBVAL *********************************************
******************************************************************************************/
#define FLASH_BITBANDING_WBVAL    ((FLASH_BITBANDING_WBVAL_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_WBVAL_OFFSET) * 32UL)))

#define FLASH_BITBANDING_WBVAL_WB0    (*((volatile uint32_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_WBVAL_OFFSET) * 32UL) + (FLASH_WBVAL_R_WB0_BIT * 4UL))))
#define FLASH_BITBANDING_WBVAL_WB1    (*((volatile uint32_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_WBVAL_OFFSET) * 32UL) + (FLASH_WBVAL_R_WB1_BIT * 4UL))))
#define FLASH_BITBANDING_WBVAL_WB2    (*((volatile uint32_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_WBVAL_OFFSET) * 32UL) + (FLASH_WBVAL_R_WB2_BIT * 4UL))))
#define FLASH_BITBANDING_WBVAL_WB3    (*((volatile uint32_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_WBVAL_OFFSET) * 32UL) + (FLASH_WBVAL_R_WB3_BIT * 4UL))))
#define FLASH_BITBANDING_WBVAL_WB4    (*((volatile uint32_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_WBVAL_OFFSET) * 32UL) + (FLASH_WBVAL_R_WB4_BIT * 4UL))))
#define FLASH_BITBANDING_WBVAL_WB5    (*((volatile uint32_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_WBVAL_OFFSET) * 32UL) + (FLASH_WBVAL_R_WB5_BIT * 4UL))))
#define FLASH_BITBANDING_WBVAL_WB6    (*((volatile uint32_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_WBVAL_OFFSET) * 32UL) + (FLASH_WBVAL_R_WB6_BIT * 4UL))))
#define FLASH_BITBANDING_WBVAL_WB7    (*((volatile uint32_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_WBVAL_OFFSET) * 32UL) + (FLASH_WBVAL_R_WB7_BIT * 4UL))))
#define FLASH_BITBANDING_WBVAL_WB8    (*((volatile uint32_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_WBVAL_OFFSET) * 32UL) + (FLASH_WBVAL_R_WB8_BIT * 4UL))))
#define FLASH_BITBANDING_WBVAL_WB9    (*((volatile uint32_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_WBVAL_OFFSET) * 32UL) + (FLASH_WBVAL_R_WB9_BIT * 4UL))))
#define FLASH_BITBANDING_WBVAL_WB10    (*((volatile uint32_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_WBVAL_OFFSET) * 32UL) + (FLASH_WBVAL_R_WB10_BIT * 4UL))))
#define FLASH_BITBANDING_WBVAL_WB11    (*((volatile uint32_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_WBVAL_OFFSET) * 32UL) + (FLASH_WBVAL_R_WB11_BIT * 4UL))))
#define FLASH_BITBANDING_WBVAL_WB12    (*((volatile uint32_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_WBVAL_OFFSET) * 32UL) + (FLASH_WBVAL_R_WB12_BIT * 4UL))))
#define FLASH_BITBANDING_WBVAL_WB13    (*((volatile uint32_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_WBVAL_OFFSET) * 32UL) + (FLASH_WBVAL_R_WB13_BIT * 4UL))))
#define FLASH_BITBANDING_WBVAL_WB14    (*((volatile uint32_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_WBVAL_OFFSET) * 32UL) + (FLASH_WBVAL_R_WB14_BIT * 4UL))))
#define FLASH_BITBANDING_WBVAL_WB15    (*((volatile uint32_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_WBVAL_OFFSET) * 32UL) + (FLASH_WBVAL_R_WB15_BIT * 4UL))))
#define FLASH_BITBANDING_WBVAL_WB16    (*((volatile uint32_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_WBVAL_OFFSET) * 32UL) + (FLASH_WBVAL_R_WB16_BIT * 4UL))))
#define FLASH_BITBANDING_WBVAL_WB17    (*((volatile uint32_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_WBVAL_OFFSET) * 32UL) + (FLASH_WBVAL_R_WB17_BIT * 4UL))))
#define FLASH_BITBANDING_WBVAL_WB18    (*((volatile uint32_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_WBVAL_OFFSET) * 32UL) + (FLASH_WBVAL_R_WB18_BIT * 4UL))))
#define FLASH_BITBANDING_WBVAL_WB19    (*((volatile uint32_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_WBVAL_OFFSET) * 32UL) + (FLASH_WBVAL_R_WB19_BIT * 4UL))))
#define FLASH_BITBANDING_WBVAL_WB20    (*((volatile uint32_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_WBVAL_OFFSET) * 32UL) + (FLASH_WBVAL_R_WB20_BIT * 4UL))))
#define FLASH_BITBANDING_WBVAL_WB21    (*((volatile uint32_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_WBVAL_OFFSET) * 32UL) + (FLASH_WBVAL_R_WB21_BIT * 4UL))))
#define FLASH_BITBANDING_WBVAL_WB22    (*((volatile uint32_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_WBVAL_OFFSET) * 32UL) + (FLASH_WBVAL_R_WB22_BIT * 4UL))))
#define FLASH_BITBANDING_WBVAL_WB23    (*((volatile uint32_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_WBVAL_OFFSET) * 32UL) + (FLASH_WBVAL_R_WB23_BIT * 4UL))))
#define FLASH_BITBANDING_WBVAL_WB24    (*((volatile uint32_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_WBVAL_OFFSET) * 32UL) + (FLASH_WBVAL_R_WB24_BIT * 4UL))))
#define FLASH_BITBANDING_WBVAL_WB25    (*((volatile uint32_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_WBVAL_OFFSET) * 32UL) + (FLASH_WBVAL_R_WB25_BIT * 4UL))))
#define FLASH_BITBANDING_WBVAL_WB26    (*((volatile uint32_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_WBVAL_OFFSET) * 32UL) + (FLASH_WBVAL_R_WB26_BIT * 4UL))))
#define FLASH_BITBANDING_WBVAL_WB27    (*((volatile uint32_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_WBVAL_OFFSET) * 32UL) + (FLASH_WBVAL_R_WB27_BIT * 4UL))))
#define FLASH_BITBANDING_WBVAL_WB28    (*((volatile uint32_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_WBVAL_OFFSET) * 32UL) + (FLASH_WBVAL_R_WB28_BIT * 4UL))))
#define FLASH_BITBANDING_WBVAL_WB29    (*((volatile uint32_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_WBVAL_OFFSET) * 32UL) + (FLASH_WBVAL_R_WB29_BIT * 4UL))))
#define FLASH_BITBANDING_WBVAL_WB30    (*((volatile uint32_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_WBVAL_OFFSET) * 32UL) + (FLASH_WBVAL_R_WB30_BIT * 4UL))))
#define FLASH_BITBANDING_WBVAL_WB31    (*((volatile uint32_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_WBVAL_OFFSET) * 32UL) + (FLASH_WBVAL_R_WB31_BIT * 4UL))))

/******************************************************************************************
************************************ 9 PEKEY *********************************************
******************************************************************************************/
#define FLASH_BITBANDING_PEKEY    ((FLASH_BITBANDING_PEKEY_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_PEKEY_OFFSET) * 32UL)))

/******************************************************************************************
************************************ 9-40 WBn *********************************************
******************************************************************************************/
#define FLASH_BITBANDING_WBn    ((FLASH_BITBANDING_WBn_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_WBn_OFFSET) * 32UL)))

#define FLASH_BITBANDING_WB0    ((FLASH_BITBANDING_WB_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_WB0_OFFSET) * 32UL)))

#define FLASH_BITBANDING_WB1    ((FLASH_BITBANDING_WB_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_WB1_OFFSET) * 32UL)))

#define FLASH_BITBANDING_WB2    ((FLASH_BITBANDING_WB_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_WB2_OFFSET) * 32UL)))

#define FLASH_BITBANDING_WB3    ((FLASH_BITBANDING_WB_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_WB3_OFFSET) * 32UL)))

#define FLASH_BITBANDING_WB4    ((FLASH_BITBANDING_WB_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_WB4_OFFSET) * 32UL)))

#define FLASH_BITBANDING_WB5    ((FLASH_BITBANDING_WB_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_WB5_OFFSET) * 32UL)))

#define FLASH_BITBANDING_WB6    ((FLASH_BITBANDING_WB_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_WB6_OFFSET) * 32UL)))

#define FLASH_BITBANDING_WB7    ((FLASH_BITBANDING_WB_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_WB7_OFFSET) * 32UL)))

#define FLASH_BITBANDING_WB8    ((FLASH_BITBANDING_WB_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_WB8_OFFSET) * 32UL)))

#define FLASH_BITBANDING_WB9    ((FLASH_BITBANDING_WB_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_WB9_OFFSET) * 32UL)))

#define FLASH_BITBANDING_WB10    ((FLASH_BITBANDING_WB_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_WB10_OFFSET) * 32UL)))

#define FLASH_BITBANDING_WB11    ((FLASH_BITBANDING_WB_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_WB11_OFFSET) * 32UL)))

#define FLASH_BITBANDING_WB12    ((FLASH_BITBANDING_WB_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_WB12_OFFSET) * 32UL)))

#define FLASH_BITBANDING_WB13    ((FLASH_BITBANDING_WB_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_WB13_OFFSET) * 32UL)))

#define FLASH_BITBANDING_WB14    ((FLASH_BITBANDING_WB_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_WB14_OFFSET) * 32UL)))

#define FLASH_BITBANDING_WB15    ((FLASH_BITBANDING_WB_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_WB15_OFFSET) * 32UL)))

#define FLASH_BITBANDING_WB16    ((FLASH_BITBANDING_WB_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_WB16_OFFSET) * 32UL)))

#define FLASH_BITBANDING_WB17    ((FLASH_BITBANDING_WB_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_WB17_OFFSET) * 32UL)))

#define FLASH_BITBANDING_WB18    ((FLASH_BITBANDING_WB_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_WB18_OFFSET) * 32UL)))

#define FLASH_BITBANDING_WB19    ((FLASH_BITBANDING_WB_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_WB19_OFFSET) * 32UL)))

#define FLASH_BITBANDING_WB20    ((FLASH_BITBANDING_WB_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_WB20_OFFSET) * 32UL)))

#define FLASH_BITBANDING_WB21    ((FLASH_BITBANDING_WB_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_WB21_OFFSET) * 32UL)))

#define FLASH_BITBANDING_WB22    ((FLASH_BITBANDING_WB_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_WB22_OFFSET) * 32UL)))

#define FLASH_BITBANDING_WB23    ((FLASH_BITBANDING_WB_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_WB23_OFFSET) * 32UL)))

#define FLASH_BITBANDING_WB24    ((FLASH_BITBANDING_WB_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_WB24_OFFSET) * 32UL)))

#define FLASH_BITBANDING_WB25    ((FLASH_BITBANDING_WB_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_WB25_OFFSET) * 32UL)))

#define FLASH_BITBANDING_WB26    ((FLASH_BITBANDING_WB_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_WB26_OFFSET) * 32UL)))

#define FLASH_BITBANDING_WB27    ((FLASH_BITBANDING_WB_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_WB27_OFFSET) * 32UL)))

#define FLASH_BITBANDING_WB28    ((FLASH_BITBANDING_WB_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_WB28_OFFSET) * 32UL)))

#define FLASH_BITBANDING_WB29    ((FLASH_BITBANDING_WB_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_WB29_OFFSET) * 32UL)))

#define FLASH_BITBANDING_WB30    ((FLASH_BITBANDING_WB_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_WB30_OFFSET) * 32UL)))

#define FLASH_BITBANDING_WB31    ((FLASH_BITBANDING_WB_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_WB31_OFFSET) * 32UL)))

/******************************************************************************************
************************************ 41 PP *********************************************
******************************************************************************************/
#define FLASH_BITBANDING_PP    ((FLASH_BITBANDING_PP_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_PP_OFFSET) * 32UL)))

#define FLASH_BITBANDING_PP_DFA    (*((volatile const uint32_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_PP_OFFSET) * 32UL) + (FLASH_PP_R_DFA_BIT * 4UL))))
#define FLASH_BITBANDING_PP_FMM    (*((volatile const uint32_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_PP_OFFSET) * 32UL) + (FLASH_PP_R_FMM_BIT * 4UL))))
#define FLASH_BITBANDING_PP_PFC    (*((volatile const uint32_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_PP_OFFSET) * 32UL) + (FLASH_PP_R_PFC_BIT * 4UL))))

/******************************************************************************************
************************************ 42 SRAM_SIZE *********************************************
******************************************************************************************/
#define SRAM_BITBANDING_SIZE    ((SRAM_BITBANDING_SIZE_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + SRAM_SIZE_OFFSET) * 32UL)))

/******************************************************************************************
************************************ 43 CONF *********************************************
******************************************************************************************/
#define FLASH_BITBANDING_CONF    ((FLASH_BITBANDING_CONF_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_CONF_OFFSET) * 32UL)))

#define FLASH_BITBANDING_CONF_FPFOFF    (*((volatile uint32_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_CONF_OFFSET) * 32UL) + (FLASH_CONF_R_FPFOFF_BIT * 4UL))))
#define FLASH_BITBANDING_CONF_FPFON    (*((volatile uint32_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_CONF_OFFSET) * 32UL) + (FLASH_CONF_R_FPFON_BIT * 4UL))))
#define FLASH_BITBANDING_CONF_CLRTV    (*((volatile uint32_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_CONF_OFFSET) * 32UL) + (FLASH_CONF_R_CLRTV_BIT * 4UL))))
#define FLASH_BITBANDING_CONF_SPFE    (*((volatile uint32_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_CONF_OFFSET) * 32UL) + (FLASH_CONF_R_SPFE_BIT * 4UL))))
#define FLASH_BITBANDING_CONF_FMME    (*((volatile uint32_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_CONF_OFFSET) * 32UL) + (FLASH_CONF_R_FMME_BIT * 4UL))))

/******************************************************************************************
************************************ 43 ROM_SWMAP *********************************************
******************************************************************************************/
#define ROM_BITBANDING_SWMAP    ((ROM_BITBANDING_SWMAP_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + ROM_SWMAP_OFFSET) * 32UL)))

/******************************************************************************************
************************************ 43 DMASZ *********************************************
******************************************************************************************/
#define FLASH_BITBANDING_DMASZ    ((FLASH_BITBANDING_DMASZ_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_DMASZ_OFFSET) * 32UL)))

/******************************************************************************************
************************************ 43 DMAST *********************************************
******************************************************************************************/
#define FLASH_BITBANDING_DMAST    ((FLASH_BITBANDING_DMAST_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_DMAST_OFFSET) * 32UL)))

#endif /* XDRIVER_MCU_DRIVER_HEADER_FLASH_FLASH_PERIPHERAL_FLASH_REGISTER_FLASH_REGISTERPERIPHERAL_BITBANDING_H_ */
