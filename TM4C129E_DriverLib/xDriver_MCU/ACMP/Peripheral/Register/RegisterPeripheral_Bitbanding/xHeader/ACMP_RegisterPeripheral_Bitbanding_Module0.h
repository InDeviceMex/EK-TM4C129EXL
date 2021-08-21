/**
 *
 * @file ACMP_RegisterPeripheral_Bitbanding_Module0.h
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
 * @verbatim Mar 31, 2021 @endverbatim
 *
 * @author
 * @verbatim indevicemex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * Mar 31, 2021        indevicemex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_ACMP_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_BITBANDING_XHEADER_ACMP_REGISTERPERIPHERAL_BITBANDING_MODULE0_H_
#define XDRIVER_MCU_ACMP_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_BITBANDING_XHEADER_ACMP_REGISTERPERIPHERAL_BITBANDING_MODULE0_H_

#include <xDriver_MCU/ACMP/Peripheral/Register/xHeader/ACMP_RegisterAddress.h>
#include <xDriver_MCU/ACMP/Peripheral/Register/RegisterDefines/ACMP_RegisterDefines.h>
#include <xDriver_MCU/ACMP/Peripheral/Struct/xHeader/ACMP_StructPeripheral_Bitbanding.h>

/******************************************************************************************
************************************ ACMP *********************************************
******************************************************************************************/
#define ACMP0_BITBANDING    (((ACMP_BITBANDING_TypeDef*) (ACMP_BITBANDING_BASE+(ACMP0_OFFSET*32U))))


/******************************************************************************************
************************************ 1 MIS *********************************************
******************************************************************************************/
#define ACMP0_BITBANDING_MIS    (((BITBANDING_ACMIS_TypeDef*) (ACMP_BITBANDING_BASE+((ACMP0_OFFSET+ACMP_MIS_OFFSET)*32U))))

#define ACMP0_BITBANDING_MIS_IN0    (*((volatile uint32_t *) (ACMP_BITBANDING_BASE+((ACMP0_OFFSET+ACMP_MIS_OFFSET)*32U)+(ACMP_MIS_R_IN0_BIT*4U))))
#define ACMP0_BITBANDING_MIS_IN1    (*((volatile uint32_t *) (ACMP_BITBANDING_BASE+((ACMP0_OFFSET+ACMP_MIS_OFFSET)*32U)+(ACMP_MIS_R_IN1_BIT*4U))))

/******************************************************************************************
************************************ 2 RIS *********************************************
******************************************************************************************/
#define ACMP0_BITBANDING_RIS    (((BITBANDING_ACRIS_TypeDef*) (ACMP_BITBANDING_BASE+((ACMP0_OFFSET+ACMP_RIS_OFFSET)*32U))))

#define ACMP0_BITBANDING_RIS_IN0    (*((volatile const uint32_t *) (ACMP_BITBANDING_BASE+((ACMP0_OFFSET+ACMP_RIS_OFFSET)*32U)+(ACMP_RIS_R_IN0_BIT*4U))))
#define ACMP0_BITBANDING_RIS_IN1    (*((volatile const uint32_t *) (ACMP_BITBANDING_BASE+((ACMP0_OFFSET+ACMP_RIS_OFFSET)*32U)+(ACMP_RIS_R_IN1_BIT*4U))))

/******************************************************************************************
************************************ 3 INTEN *********************************************
******************************************************************************************/
#define ACMP0_BITBANDING_INTEN    (((BITBANDING_ACINTEN_TypeDef*) (ACMP_BITBANDING_BASE+((ACMP0_OFFSET+ACMP_INTEN_OFFSET)*32U))))

#define ACMP0_BITBANDING_INTEN_IN0    (*((volatile uint32_t *) (ACMP_BITBANDING_BASE+((ACMP0_OFFSET+ACMP_INTEN_OFFSET)*32U)+(ACMP_INTEN_R_IN0_BIT*4U))))
#define ACMP0_BITBANDING_INTEN_IN1    (*((volatile uint32_t *) (ACMP_BITBANDING_BASE+((ACMP0_OFFSET+ACMP_INTEN_OFFSET)*32U)+(ACMP_INTEN_R_IN1_BIT*4U))))

/******************************************************************************************
************************************ 4 REFCTL *********************************************
******************************************************************************************/
#define ACMP0_BITBANDING_REFCTL    (((BITBANDING_ACREFCTL_TypeDef*) (ACMP_BITBANDING_BASE+((ACMP0_OFFSET+ACMP_REFCTL_OFFSET)*32U))))

#define ACMP0_BITBANDING_REFCTL_VREF_0    (*((volatile uint32_t *) (ACMP_BITBANDING_BASE+((ACMP0_OFFSET+ACMP_REFCTL_OFFSET)*32U)+((ACMP_REFCTL_R_VREF_BIT+0)*4U))))
#define ACMP0_BITBANDING_REFCTL_VREF_1    (*((volatile uint32_t *) (ACMP_BITBANDING_BASE+((ACMP0_OFFSET+ACMP_REFCTL_OFFSET)*32U)+((ACMP_REFCTL_R_VREF_BIT+1)*4U))))
#define ACMP0_BITBANDING_REFCTL_VREF_2    (*((volatile uint32_t *) (ACMP_BITBANDING_BASE+((ACMP0_OFFSET+ACMP_REFCTL_OFFSET)*32U)+((ACMP_REFCTL_R_VREF_BIT+2)*4U))))
#define ACMP0_BITBANDING_REFCTL_VREF_3    (*((volatile uint32_t *) (ACMP_BITBANDING_BASE+((ACMP0_OFFSET+ACMP_REFCTL_OFFSET)*32U)+((ACMP_REFCTL_R_VREF_BIT+3)*4U))))
#define ACMP0_BITBANDING_REFCTL_RNG    (*((volatile uint32_t *) (ACMP_BITBANDING_BASE+((ACMP0_OFFSET+ACMP_REFCTL_OFFSET)*32U)+(ACMP_REFCTL_R_RNG_BIT*4U))))
#define ACMP0_BITBANDING_REFCTL_ENA    (*((volatile uint32_t *) (ACMP_BITBANDING_BASE+((ACMP0_OFFSET+ACMP_REFCTL_OFFSET)*32U)+(ACMP_REFCTL_R_EN_BIT*4U))))

/******************************************************************************************
************************************ 5 STAT *********************************************
******************************************************************************************/
#define ACMP0_BITBANDING_STAT0    (((BITBANDING_ACSTAT_TypeDef*) (ACMP_BITBANDING_BASE+((ACMP0_OFFSET+ACMP_STAT0_OFFSET)*32U))))
#define ACMP0_BITBANDING_STAT1    (((BITBANDING_ACSTAT_TypeDef*) (ACMP_BITBANDING_BASE+((ACMP0_OFFSET+ACMP_STAT1_OFFSET)*32U))))

#define ACMP0_BITBANDING_STAT0_OVAL    (*((volatile uint32_t *) (ACMP_BITBANDING_BASE+((ACMP0_OFFSET+ACMP_STAT0_OFFSET)*32U)+(ACMP_STAT_R_OVAL_BIT*4U))))
#define ACMP0_BITBANDING_STAT1_OVAL    (*((volatile uint32_t *) (ACMP_BITBANDING_BASE+((ACMP0_OFFSET+ACMP_STAT1_OFFSET)*32U)+(ACMP_STAT_R_OVAL_BIT*4U))))

/******************************************************************************************
************************************ 6 CTL *********************************************
******************************************************************************************/
#define ACMP0_BITBANDING_CTL0    (((BITBANDING_ACCTL_TypeDef*) (ACMP_BITBANDING_BASE+((ACMP0_OFFSET+ACMP_CTL0_OFFSET)*32U))))
#define ACMP0_BITBANDING_CTL1    (((BITBANDING_ACCTL_TypeDef*) (ACMP_BITBANDING_BASE+((ACMP0_OFFSET+ACMP_CTL1_OFFSET)*32U))))

#define ACMP0_BITBANDING_CTL0_CINV    (*((volatile uint32_t *) (ACMP_BITBANDING_BASE+((ACMP0_OFFSET+ACMP_CTL0_OFFSET)*32U)+(ACMP_CTL_R_CINV_BIT*4U))))
#define ACMP0_BITBANDING_CTL0_ISEN_0    (*((volatile uint32_t *) (ACMP_BITBANDING_BASE+((ACMP0_OFFSET+ACMP_CTL0_OFFSET)*32U)+((ACMP_CTL_R_ISEN_BIT+0U)*4U))))
#define ACMP0_BITBANDING_CTL0_ISEN_1    (*((volatile uint32_t *) (ACMP_BITBANDING_BASE+((ACMP0_OFFSET+ACMP_CTL0_OFFSET)*32U)+((ACMP_CTL_R_ISEN_BIT+1U)*4U))))
#define ACMP0_BITBANDING_CTL0_ISLVAL    (*((volatile uint32_t *) (ACMP_BITBANDING_BASE+((ACMP0_OFFSET+ACMP_CTL0_OFFSET)*32U)+(ACMP_CTL_R_ISLVAL_BIT*4U))))
#define ACMP0_BITBANDING_CTL0_TSEN_0    (*((volatile uint32_t *) (ACMP_BITBANDING_BASE+((ACMP0_OFFSET+ACMP_CTL0_OFFSET)*32U)+((ACMP_CTL_R_TSEN_BIT+0U)*4U))))
#define ACMP0_BITBANDING_CTL0_TSEN_1    (*((volatile uint32_t *) (ACMP_BITBANDING_BASE+((ACMP0_OFFSET+ACMP_CTL0_OFFSET)*32U)+((ACMP_CTL_R_TSEN_BIT+1U)*4U))))
#define ACMP0_BITBANDING_CTL0_TSLVAL    (*((volatile uint32_t *) (ACMP_BITBANDING_BASE+((ACMP0_OFFSET+ACMP_CTL0_OFFSET)*32U)+(ACMP_CTL_R_TSLVAL_BIT*4U))))
#define ACMP0_BITBANDING_CTL0_ASRCP_0    (*((volatile uint32_t *) (ACMP_BITBANDING_BASE+((ACMP0_OFFSET+ACMP_CTL0_OFFSET)*32U)+((ACMP_CTL_R_ASRCP_BIT+0U)*4U))))
#define ACMP0_BITBANDING_CTL0_ASRCP_1    (*((volatile uint32_t *) (ACMP_BITBANDING_BASE+((ACMP0_OFFSET+ACMP_CTL0_OFFSET)*32U)+((ACMP_CTL_R_ASRCP_BIT+1U)*4U))))
#define ACMP0_BITBANDING_CTL0_TOEN    (*((volatile uint32_t *) (ACMP_BITBANDING_BASE+((ACMP0_OFFSET+ACMP_CTL0_OFFSET)*32U)+(ACMP_CTL_R_TOEN_BIT*4U))))

#define ACMP0_BITBANDING_CTL1_CINV    (*((volatile uint32_t *) (ACMP_BITBANDING_BASE+((ACMP0_OFFSET+ACMP_CTL1_OFFSET)*32U)+(ACMP_CTL_R_CINV_BIT*4U))))
#define ACMP0_BITBANDING_CTL1_ISEN_0    (*((volatile uint32_t *) (ACMP_BITBANDING_BASE+((ACMP0_OFFSET+ACMP_CTL1_OFFSET)*32U)+((ACMP_CTL_R_ISEN_BIT+0U)*4U))))
#define ACMP0_BITBANDING_CTL1_ISEN_1    (*((volatile uint32_t *) (ACMP_BITBANDING_BASE+((ACMP0_OFFSET+ACMP_CTL1_OFFSET)*32U)+((ACMP_CTL_R_ISEN_BIT+1U)*4U))))
#define ACMP0_BITBANDING_CTL1_ISLVAL    (*((volatile uint32_t *) (ACMP_BITBANDING_BASE+((ACMP0_OFFSET+ACMP_CTL1_OFFSET)*32U)+(ACMP_CTL_R_ISLVAL_BIT*4U))))
#define ACMP0_BITBANDING_CTL1_TSEN_0    (*((volatile uint32_t *) (ACMP_BITBANDING_BASE+((ACMP0_OFFSET+ACMP_CTL1_OFFSET)*32U)+((ACMP_CTL_R_TSEN_BIT+0U)*4U))))
#define ACMP0_BITBANDING_CTL1_TSEN_1    (*((volatile uint32_t *) (ACMP_BITBANDING_BASE+((ACMP0_OFFSET+ACMP_CTL1_OFFSET)*32U)+((ACMP_CTL_R_TSEN_BIT+1U)*4U))))
#define ACMP0_BITBANDING_CTL1_TSLVAL    (*((volatile uint32_t *) (ACMP_BITBANDING_BASE+((ACMP0_OFFSET+ACMP_CTL1_OFFSET)*32U)+(ACMP_CTL_R_TSLVAL_BIT*4U))))
#define ACMP0_BITBANDING_CTL1_ASRCP_0    (*((volatile uint32_t *) (ACMP_BITBANDING_BASE+((ACMP0_OFFSET+ACMP_CTL1_OFFSET)*32U)+((ACMP_CTL_R_ASRCP_BIT+0U)*4U))))
#define ACMP0_BITBANDING_CTL1_ASRCP_1    (*((volatile uint32_t *) (ACMP_BITBANDING_BASE+((ACMP0_OFFSET+ACMP_CTL1_OFFSET)*32U)+((ACMP_CTL_R_ASRCP_BIT+1U)*4U))))
#define ACMP0_BITBANDING_CTL1_TOEN    (*((volatile uint32_t *) (ACMP_BITBANDING_BASE+((ACMP0_OFFSET+ACMP_CTL1_OFFSET)*32U)+(ACMP_CTL_R_TOEN_BIT*4U))))

/******************************************************************************************
************************************ 3 PP *********************************************
******************************************************************************************/
#define ACMP0_BITBANDING_PP    (((BITBANDING_ACMPPP_TypeDef*) (ACMP_BITBANDING_BASE+((ACMP0_OFFSET+ACMP_PP_OFFSET)*32U))))

#define ACMP0_BITBANDING_PP_CMP0    (*((volatile uint32_t *) (ACMP_BITBANDING_BASE+((ACMP0_OFFSET+ACMP_PP_OFFSET)*32U)+(ACMP_PP_R_CMP0_BIT*4U))))
#define ACMP0_BITBANDING_PP_CMP1    (*((volatile uint32_t *) (ACMP_BITBANDING_BASE+((ACMP0_OFFSET+ACMP_PP_OFFSET)*32U)+(ACMP_PP_R_CMP1_BIT*4U))))
#define ACMP0_BITBANDING_PP_C0O    (*((volatile uint32_t *) (ACMP_BITBANDING_BASE+((ACMP0_OFFSET+ACMP_PP_OFFSET)*32U)+(ACMP_PP_R_C0O_BIT*4U))))
#define ACMP0_BITBANDING_PP_C1O    (*((volatile uint32_t *) (ACMP_BITBANDING_BASE+((ACMP0_OFFSET+ACMP_PP_OFFSET)*32U)+(ACMP_PP_R_C1O_BIT*4U))))

#endif /* XDRIVER_MCU_ACMP_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_BITBANDING_XHEADER_ACMP_REGISTERPERIPHERAL_BITBANDING_MODULE0_H_ */
