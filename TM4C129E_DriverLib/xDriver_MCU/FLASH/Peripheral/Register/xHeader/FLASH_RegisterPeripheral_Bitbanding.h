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
************************************ 1 FMA *********************************************
******************************************************************************************/
#define FLASH_BITBANDING_FMA    ((BITBANDING_FMA_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_FMA_OFFSET) * 32UL)))

/******************************************************************************************
************************************ 2 FMD *********************************************
******************************************************************************************/
#define FLASH_BITBANDING_FMD    ((BITBANDING_FMD_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_FMD_OFFSET) * 32UL)))

/******************************************************************************************
************************************ 3 FMC *********************************************
******************************************************************************************/
#define FLASH_BITBANDING_FMC    ((BITBANDING_FMC_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_FMC_OFFSET) * 32UL)))

#define FLASH_BITBANDING_FMC_WRITE    (*((volatile uint32_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_FMC_OFFSET) * 32UL) + (FLASH_FMC_R_WRITE_BIT * 4UL))))
#define FLASH_BITBANDING_FMC_ERASE    (*((volatile uint32_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_FMC_OFFSET) * 32UL) + (FLASH_FMC_R_ERASE_BIT * 4UL))))
#define FLASH_BITBANDING_FMC_MERASE    (*((volatile uint32_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_FMC_OFFSET) * 32UL) + (FLASH_FMC_R_MERASE_BIT * 4UL))))
#define FLASH_BITBANDING_FMC_COMT    (*((volatile uint32_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_FMC_OFFSET) * 32UL) + (FLASH_FMC_R_COMT_BIT * 4UL))))

/******************************************************************************************
************************************ 4 FCRIS *********************************************
******************************************************************************************/
#define FLASH_BITBANDING_FCRIS    ((BITBANDING_FCRIS_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_FCRIS_OFFSET) * 32UL)))

#define FLASH_BITBANDING_FCRIS_ARIS    (*((volatile const uint32_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_FCRIS_OFFSET) * 32UL) + (FLASH_FCRIS_R_ARIS_BIT * 4UL))))
#define FLASH_BITBANDING_FCRIS_PRIS    (*((volatile const uint32_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_FCRIS_OFFSET) * 32UL) + (FLASH_FCRIS_R_PRIS_BIT * 4UL))))
#define FLASH_BITBANDING_FCRIS_ERIS    (*((volatile const uint32_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_FCRIS_OFFSET) * 32UL) + (FLASH_FCRIS_R_ERIS_BIT * 4UL))))
#define FLASH_BITBANDING_FCRIS_VOLTRIS    (*((volatile const uint32_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_FCRIS_OFFSET) * 32UL) + (FLASH_FCRIS_R_VOLTRIS_BIT * 4UL))))
#define FLASH_BITBANDING_FCRIS_INVDRIS    (*((volatile const uint32_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_FCRIS_OFFSET) * 32UL) + (FLASH_FCRIS_R_INVDRIS_BIT * 4UL))))
#define FLASH_BITBANDING_FCRIS_ERRIS    (*((volatile const uint32_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_FCRIS_OFFSET) * 32UL) + (FLASH_FCRIS_R_ERRIS_BIT * 4UL))))
#define FLASH_BITBANDING_FCRIS_PROGRIS    (*((volatile const uint32_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_FCRIS_OFFSET) * 32UL) + (FLASH_FCRIS_R_PROGRIS_BIT * 4UL))))

/******************************************************************************************
************************************ 5 FCIM *********************************************
******************************************************************************************/
#define FLASH_BITBANDING_FCIM    ((BITBANDING_FCIM_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_FCIM_OFFSET) * 32UL)))

#define FLASH_BITBANDING_FCIM_AMASK    (*((volatile uint32_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_FCIM_OFFSET) * 32UL) + (FLASH_FCIM_R_AMASK_BIT * 4UL))))
#define FLASH_BITBANDING_FCIM_PMASK    (*((volatile uint32_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_FCIM_OFFSET) * 32UL) + (FLASH_FCIM_R_PMASK_BIT * 4UL))))
#define FLASH_BITBANDING_FCIM_EMASK    (*((volatile uint32_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_FCIM_OFFSET) * 32UL) + (FLASH_FCIM_R_EMASK_BIT * 4UL))))
#define FLASH_BITBANDING_FCIM_VOLTMASK    (*((volatile uint32_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_FCIM_OFFSET) * 32UL) + (FLASH_FCIM_R_VOLTMASK_BIT * 4UL))))
#define FLASH_BITBANDING_FCIM_INVDMASK    (*((volatile uint32_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_FCIM_OFFSET) * 32UL) + (FLASH_FCIM_R_INVDMASK_BIT * 4UL))))
#define FLASH_BITBANDING_FCIM_ERMASK    (*((volatile uint32_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_FCIM_OFFSET) * 32UL) + (FLASH_FCIM_R_ERMASK_BIT * 4UL))))
#define FLASH_BITBANDING_FCIM_PROGMASK    (*((volatile uint32_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_FCIM_OFFSET) * 32UL) + (FLASH_FCIM_R_PROGMASK_BIT * 4UL))))

/******************************************************************************************
************************************ 6 FCMISC *********************************************
******************************************************************************************/
#define FLASH_BITBANDING_FCMISC    ((BITBANDING_FCMISC_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_FCMISC_OFFSET) * 32UL)))

#define FLASH_BITBANDING_FCMISC_AMISC    (*((volatile uint32_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_FCMISC_OFFSET) * 32UL) + (FLASH_FCMISC_R_AMISC_BIT * 4UL))))
#define FLASH_BITBANDING_FCMISC_PMISC    (*((volatile uint32_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_FCMISC_OFFSET) * 32UL) + (FLASH_FCMISC_R_PMISC_BIT * 4UL))))
#define FLASH_BITBANDING_FCMISC_EMISC    (*((volatile uint32_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_FCMISC_OFFSET) * 32UL) + (FLASH_FCMISC_R_EMISC_BIT * 4UL))))
#define FLASH_BITBANDING_FCMISC_VOLTMISC    (*((volatile uint32_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_FCMISC_OFFSET) * 32UL) + (FLASH_FCMISC_R_VOLTMISC_BIT * 4UL))))
#define FLASH_BITBANDING_FCMISC_INVDMISC    (*((volatile uint32_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_FCMISC_OFFSET) * 32UL) + (FLASH_FCMISC_R_INVDMISC_BIT * 4UL))))
#define FLASH_BITBANDING_FCMISC_ERMISC    (*((volatile uint32_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_FCMISC_OFFSET) * 32UL) + (FLASH_FCMISC_R_ERMISC_BIT * 4UL))))
#define FLASH_BITBANDING_FCMISC_PROGMISC    (*((volatile uint32_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_FCMISC_OFFSET) * 32UL) + (FLASH_FCMISC_R_PROGMISC_BIT * 4UL))))

/******************************************************************************************
************************************ 7 FMC2 *********************************************
******************************************************************************************/
#define FLASH_BITBANDING_FMC2    ((BITBANDING_FMC2_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_FMC2_OFFSET) * 32UL)))

#define FLASH_BITBANDING_FMC2_WRBUF    (*((volatile uint32_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_FMC2_OFFSET) * 32UL) + (FLASH_FMC2_R_WRBUF_BIT * 4UL))))

/******************************************************************************************
************************************ 8 FWBVAL *********************************************
******************************************************************************************/
#define FLASH_BITBANDING_FWBVAL    ((BITBANDING_FWBVAL_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_FWBVAL_OFFSET) * 32UL)))

#define FLASH_BITBANDING_FWBVAL_FWB0    (*((volatile uint32_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_FWBVAL_OFFSET) * 32UL) + (FLASH_FWBVAL_R_FWB0_BIT * 4UL))))
#define FLASH_BITBANDING_FWBVAL_FWB1    (*((volatile uint32_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_FWBVAL_OFFSET) * 32UL) + (FLASH_FWBVAL_R_FWB1_BIT * 4UL))))
#define FLASH_BITBANDING_FWBVAL_FWB2    (*((volatile uint32_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_FWBVAL_OFFSET) * 32UL) + (FLASH_FWBVAL_R_FWB2_BIT * 4UL))))
#define FLASH_BITBANDING_FWBVAL_FWB3    (*((volatile uint32_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_FWBVAL_OFFSET) * 32UL) + (FLASH_FWBVAL_R_FWB3_BIT * 4UL))))
#define FLASH_BITBANDING_FWBVAL_FWB4    (*((volatile uint32_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_FWBVAL_OFFSET) * 32UL) + (FLASH_FWBVAL_R_FWB4_BIT * 4UL))))
#define FLASH_BITBANDING_FWBVAL_FWB5    (*((volatile uint32_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_FWBVAL_OFFSET) * 32UL) + (FLASH_FWBVAL_R_FWB5_BIT * 4UL))))
#define FLASH_BITBANDING_FWBVAL_FWB6    (*((volatile uint32_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_FWBVAL_OFFSET) * 32UL) + (FLASH_FWBVAL_R_FWB6_BIT * 4UL))))
#define FLASH_BITBANDING_FWBVAL_FWB7    (*((volatile uint32_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_FWBVAL_OFFSET) * 32UL) + (FLASH_FWBVAL_R_FWB7_BIT * 4UL))))
#define FLASH_BITBANDING_FWBVAL_FWB8    (*((volatile uint32_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_FWBVAL_OFFSET) * 32UL) + (FLASH_FWBVAL_R_FWB8_BIT * 4UL))))
#define FLASH_BITBANDING_FWBVAL_FWB9    (*((volatile uint32_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_FWBVAL_OFFSET) * 32UL) + (FLASH_FWBVAL_R_FWB9_BIT * 4UL))))
#define FLASH_BITBANDING_FWBVAL_FWB10    (*((volatile uint32_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_FWBVAL_OFFSET) * 32UL) + (FLASH_FWBVAL_R_FWB10_BIT * 4UL))))
#define FLASH_BITBANDING_FWBVAL_FWB11    (*((volatile uint32_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_FWBVAL_OFFSET) * 32UL) + (FLASH_FWBVAL_R_FWB11_BIT * 4UL))))
#define FLASH_BITBANDING_FWBVAL_FWB12    (*((volatile uint32_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_FWBVAL_OFFSET) * 32UL) + (FLASH_FWBVAL_R_FWB12_BIT * 4UL))))
#define FLASH_BITBANDING_FWBVAL_FWB13    (*((volatile uint32_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_FWBVAL_OFFSET) * 32UL) + (FLASH_FWBVAL_R_FWB13_BIT * 4UL))))
#define FLASH_BITBANDING_FWBVAL_FWB14    (*((volatile uint32_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_FWBVAL_OFFSET) * 32UL) + (FLASH_FWBVAL_R_FWB14_BIT * 4UL))))
#define FLASH_BITBANDING_FWBVAL_FWB15    (*((volatile uint32_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_FWBVAL_OFFSET) * 32UL) + (FLASH_FWBVAL_R_FWB15_BIT * 4UL))))
#define FLASH_BITBANDING_FWBVAL_FWB16    (*((volatile uint32_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_FWBVAL_OFFSET) * 32UL) + (FLASH_FWBVAL_R_FWB16_BIT * 4UL))))
#define FLASH_BITBANDING_FWBVAL_FWB17    (*((volatile uint32_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_FWBVAL_OFFSET) * 32UL) + (FLASH_FWBVAL_R_FWB17_BIT * 4UL))))
#define FLASH_BITBANDING_FWBVAL_FWB18    (*((volatile uint32_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_FWBVAL_OFFSET) * 32UL) + (FLASH_FWBVAL_R_FWB18_BIT * 4UL))))
#define FLASH_BITBANDING_FWBVAL_FWB19    (*((volatile uint32_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_FWBVAL_OFFSET) * 32UL) + (FLASH_FWBVAL_R_FWB19_BIT * 4UL))))
#define FLASH_BITBANDING_FWBVAL_FWB20    (*((volatile uint32_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_FWBVAL_OFFSET) * 32UL) + (FLASH_FWBVAL_R_FWB20_BIT * 4UL))))
#define FLASH_BITBANDING_FWBVAL_FWB21    (*((volatile uint32_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_FWBVAL_OFFSET) * 32UL) + (FLASH_FWBVAL_R_FWB21_BIT * 4UL))))
#define FLASH_BITBANDING_FWBVAL_FWB22    (*((volatile uint32_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_FWBVAL_OFFSET) * 32UL) + (FLASH_FWBVAL_R_FWB22_BIT * 4UL))))
#define FLASH_BITBANDING_FWBVAL_FWB23    (*((volatile uint32_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_FWBVAL_OFFSET) * 32UL) + (FLASH_FWBVAL_R_FWB23_BIT * 4UL))))
#define FLASH_BITBANDING_FWBVAL_FWB24    (*((volatile uint32_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_FWBVAL_OFFSET) * 32UL) + (FLASH_FWBVAL_R_FWB24_BIT * 4UL))))
#define FLASH_BITBANDING_FWBVAL_FWB25    (*((volatile uint32_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_FWBVAL_OFFSET) * 32UL) + (FLASH_FWBVAL_R_FWB25_BIT * 4UL))))
#define FLASH_BITBANDING_FWBVAL_FWB26    (*((volatile uint32_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_FWBVAL_OFFSET) * 32UL) + (FLASH_FWBVAL_R_FWB26_BIT * 4UL))))
#define FLASH_BITBANDING_FWBVAL_FWB27    (*((volatile uint32_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_FWBVAL_OFFSET) * 32UL) + (FLASH_FWBVAL_R_FWB27_BIT * 4UL))))
#define FLASH_BITBANDING_FWBVAL_FWB28    (*((volatile uint32_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_FWBVAL_OFFSET) * 32UL) + (FLASH_FWBVAL_R_FWB28_BIT * 4UL))))
#define FLASH_BITBANDING_FWBVAL_FWB29    (*((volatile uint32_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_FWBVAL_OFFSET) * 32UL) + (FLASH_FWBVAL_R_FWB29_BIT * 4UL))))
#define FLASH_BITBANDING_FWBVAL_FWB30    (*((volatile uint32_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_FWBVAL_OFFSET) * 32UL) + (FLASH_FWBVAL_R_FWB30_BIT * 4UL))))
#define FLASH_BITBANDING_FWBVAL_FWB31    (*((volatile uint32_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_FWBVAL_OFFSET) * 32UL) + (FLASH_FWBVAL_R_FWB31_BIT * 4UL))))

/******************************************************************************************
************************************ 9 FLPEKEY *********************************************
******************************************************************************************/
#define FLASH_BITBANDING_FLPEKEY    ((BITBANDING_FLPEKEY_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_FLPEKEY_OFFSET) * 32UL)))

/******************************************************************************************
************************************ 9-40 FWBn *********************************************
******************************************************************************************/
#define FLASH_BITBANDING_FWBn    ((BITBANDING_FWBn_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_FWBn_OFFSET) * 32UL)))

#define FLASH_BITBANDING_FWB0    ((BITBANDING_FWB_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_FWB0_OFFSET) * 32UL)))

#define FLASH_BITBANDING_FWB1    ((BITBANDING_FWB_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_FWB1_OFFSET) * 32UL)))

#define FLASH_BITBANDING_FWB2    ((BITBANDING_FWB_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_FWB2_OFFSET) * 32UL)))

#define FLASH_BITBANDING_FWB3    ((BITBANDING_FWB_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_FWB3_OFFSET) * 32UL)))

#define FLASH_BITBANDING_FWB4    ((BITBANDING_FWB_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_FWB4_OFFSET) * 32UL)))

#define FLASH_BITBANDING_FWB5    ((BITBANDING_FWB_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_FWB5_OFFSET) * 32UL)))

#define FLASH_BITBANDING_FWB6    ((BITBANDING_FWB_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_FWB6_OFFSET) * 32UL)))

#define FLASH_BITBANDING_FWB7    ((BITBANDING_FWB_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_FWB7_OFFSET) * 32UL)))

#define FLASH_BITBANDING_FWB8    ((BITBANDING_FWB_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_FWB8_OFFSET) * 32UL)))

#define FLASH_BITBANDING_FWB9    ((BITBANDING_FWB_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_FWB9_OFFSET) * 32UL)))

#define FLASH_BITBANDING_FWB10    ((BITBANDING_FWB_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_FWB10_OFFSET) * 32UL)))

#define FLASH_BITBANDING_FWB11    ((BITBANDING_FWB_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_FWB11_OFFSET) * 32UL)))

#define FLASH_BITBANDING_FWB12    ((BITBANDING_FWB_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_FWB12_OFFSET) * 32UL)))

#define FLASH_BITBANDING_FWB13    ((BITBANDING_FWB_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_FWB13_OFFSET) * 32UL)))

#define FLASH_BITBANDING_FWB14    ((BITBANDING_FWB_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_FWB14_OFFSET) * 32UL)))

#define FLASH_BITBANDING_FWB15    ((BITBANDING_FWB_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_FWB15_OFFSET) * 32UL)))

#define FLASH_BITBANDING_FWB16    ((BITBANDING_FWB_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_FWB16_OFFSET) * 32UL)))

#define FLASH_BITBANDING_FWB17    ((BITBANDING_FWB_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_FWB17_OFFSET) * 32UL)))

#define FLASH_BITBANDING_FWB18    ((BITBANDING_FWB_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_FWB18_OFFSET) * 32UL)))

#define FLASH_BITBANDING_FWB19    ((BITBANDING_FWB_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_FWB19_OFFSET) * 32UL)))

#define FLASH_BITBANDING_FWB20    ((BITBANDING_FWB_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_FWB20_OFFSET) * 32UL)))

#define FLASH_BITBANDING_FWB21    ((BITBANDING_FWB_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_FWB21_OFFSET) * 32UL)))

#define FLASH_BITBANDING_FWB22    ((BITBANDING_FWB_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_FWB22_OFFSET) * 32UL)))

#define FLASH_BITBANDING_FWB23    ((BITBANDING_FWB_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_FWB23_OFFSET) * 32UL)))

#define FLASH_BITBANDING_FWB24    ((BITBANDING_FWB_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_FWB24_OFFSET) * 32UL)))

#define FLASH_BITBANDING_FWB25    ((BITBANDING_FWB_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_FWB25_OFFSET) * 32UL)))

#define FLASH_BITBANDING_FWB26    ((BITBANDING_FWB_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_FWB26_OFFSET) * 32UL)))

#define FLASH_BITBANDING_FWB27    ((BITBANDING_FWB_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_FWB27_OFFSET) * 32UL)))

#define FLASH_BITBANDING_FWB28    ((BITBANDING_FWB_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_FWB28_OFFSET) * 32UL)))

#define FLASH_BITBANDING_FWB29    ((BITBANDING_FWB_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_FWB29_OFFSET) * 32UL)))

#define FLASH_BITBANDING_FWB30    ((BITBANDING_FWB_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_FWB30_OFFSET) * 32UL)))

#define FLASH_BITBANDING_FWB31    ((BITBANDING_FWB_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_FWB31_OFFSET) * 32UL)))

/******************************************************************************************
************************************ 41 FLASHPP *********************************************
******************************************************************************************/
#define FLASH_BITBANDING_FLASHPP    ((BITBANDING_FLASHPP_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_FLASHPP_OFFSET) * 32UL)))

#define FLASH_BITBANDING_FLASHPP_DFA    (*((volatile const uint32_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_FLASHPP_OFFSET) * 32UL) + (FLASH_FLASHPP_R_DFA_BIT * 4UL))))
#define FLASH_BITBANDING_FLASHPP_FMM    (*((volatile const uint32_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_FLASHPP_OFFSET) * 32UL) + (FLASH_FLASHPP_R_FMM_BIT * 4UL))))
#define FLASH_BITBANDING_FLASHPP_PFC    (*((volatile const uint32_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_FLASHPP_OFFSET) * 32UL) + (FLASH_FLASHPP_R_PFC_BIT * 4UL))))

/******************************************************************************************
************************************ 42 SSIZE *********************************************
******************************************************************************************/
#define FLASH_BITBANDING_SSIZE    ((BITBANDING_SSIZE_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_SSIZE_OFFSET) * 32UL)))

/******************************************************************************************
************************************ 43 FLASHCONF *********************************************
******************************************************************************************/
#define FLASH_BITBANDING_FLASHCONF    ((BITBANDING_FLASHCONF_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_FLASHCONF_OFFSET) * 32UL)))

#define FLASH_BITBANDING_FLASHCONF_FPFOFF    (*((volatile uint32_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_FLASHCONF_OFFSET) * 32UL) + (FLASH_FLASHCONF_R_FPFOFF_BIT * 4UL))))
#define FLASH_BITBANDING_FLASHCONF_FPFON    (*((volatile uint32_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_FLASHCONF_OFFSET) * 32UL) + (FLASH_FLASHCONF_R_FPFON_BIT * 4UL))))
#define FLASH_BITBANDING_FLASHCONF_CLRTV    (*((volatile uint32_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_FLASHCONF_OFFSET) * 32UL) + (FLASH_FLASHCONF_R_CLRTV_BIT * 4UL))))
#define FLASH_BITBANDING_FLASHCONF_SPFE    (*((volatile uint32_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_FLASHCONF_OFFSET) * 32UL) + (FLASH_FLASHCONF_R_SPFE_BIT * 4UL))))
#define FLASH_BITBANDING_FLASHCONF_FMME    (*((volatile uint32_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_FLASHCONF_OFFSET) * 32UL) + (FLASH_FLASHCONF_R_FMME_BIT * 4UL))))

/******************************************************************************************
************************************ 43 ROMSWMAP *********************************************
******************************************************************************************/
#define FLASH_BITBANDING_ROMSWMAP    ((BITBANDING_ROMSWMAP_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_ROMSWMAP_OFFSET) * 32UL)))

/******************************************************************************************
************************************ 43 FLASHDMASZ *********************************************
******************************************************************************************/
#define FLASH_BITBANDING_FLASHDMASZ    ((BITBANDING_FLASHDMASZ_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_FLASHDMASZ_OFFSET) * 32UL)))

/******************************************************************************************
************************************ 43 FLASHDMAST *********************************************
******************************************************************************************/
#define FLASH_BITBANDING_FLASHDMAST    ((BITBANDING_FLASHDMAST_t*) (FLASH_BITBANDING_BASE + ((FLASH_OFFSET + FLASH_FLASHDMAST_OFFSET) * 32UL)))

#endif /* XDRIVER_MCU_DRIVER_HEADER_FLASH_FLASH_PERIPHERAL_FLASH_REGISTER_FLASH_REGISTERPERIPHERAL_BITBANDING_H_ */
