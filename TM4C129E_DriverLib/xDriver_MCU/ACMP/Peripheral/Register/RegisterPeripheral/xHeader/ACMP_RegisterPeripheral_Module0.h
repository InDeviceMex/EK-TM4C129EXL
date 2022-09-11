/**
 *
 * @file ACMP_RegisterPeripheral_Module0.h
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

#ifndef XDRIVER_MCU_ACMP_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_XHEADER_ACMP_REGISTERPERIPHERAL_MODULE0_H_
#define XDRIVER_MCU_ACMP_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_XHEADER_ACMP_REGISTERPERIPHERAL_MODULE0_H_

#include <xDriver_MCU/ACMP/Peripheral/Register/xHeader/ACMP_RegisterAddress.h>
#include <xDriver_MCU/ACMP/Peripheral/Register/RegisterDefines/ACMP_RegisterDefines.h>
#include <xDriver_MCU/ACMP/Peripheral/Struct/xHeader/ACMP_StructPeripheral.h>

/******************************************************************************************
************************************ ACMP *********************************************
******************************************************************************************/

#define ACMP0    (((ACMP_t*) (ACMP0_BASE)))

/******************************************************************************************
************************************ 1 MIS *********************************************
******************************************************************************************/
#define ACMP0_MIS    (((ACMP_MIS_t*) (ACMP0_BASE + ACMP_MIS_OFFSET )))
#define ACMP0_MIS_R    (*((volatile uint32_t*) (ACMP0_BASE +ACMP_MIS_OFFSET)))

/******************************************************************************************
************************************ 2 RIS *********************************************
******************************************************************************************/
#define ACMP0_RIS    (((ACMP_RIS_t*) (ACMP0_BASE + ACMP_RIS_OFFSET )))
#define ACMP0_RIS_R    (*((volatile const uint32_t*) (ACMP0_BASE +ACMP_RIS_OFFSET)))

/******************************************************************************************
************************************ 3 INTEN *********************************************
******************************************************************************************/
#define ACMP0_INTEN    (((ACMP_INTEN_t*) (ACMP0_BASE + ACMP_INTEN_OFFSET )))
#define ACMP0_INTEN_R    (*((volatile uint32_t*) (ACMP0_BASE +ACMP_INTEN_OFFSET)))

/******************************************************************************************
************************************ 4 REFCTL *********************************************
******************************************************************************************/
#define ACMP0_REFCTL    (((ACMP_REFCTL_t*) (ACMP0_BASE + ACMP_REFCTL_OFFSET )))
#define ACMP0_REFCTL_R    (*((volatile uint32_t*) (ACMP0_BASE +ACMP_REFCTL_OFFSET)))

/******************************************************************************************
************************************ 5 STAT *********************************************
******************************************************************************************/
#define ACMP0_STAT0    (((ACMP_STAT_t*) (ACMP0_BASE + ACMP_STAT0_OFFSET )))
#define ACMP0_STAT0_R    (*((volatile uint32_t*) (ACMP0_BASE +ACMP_STAT0_OFFSET)))
#define ACMP0_STAT1    (((ACMP_STAT_t*) (ACMP0_BASE + ACMP_STAT1_OFFSET )))
#define ACMP0_STAT1_R    (*((volatile uint32_t*) (ACMP0_BASE +ACMP_STAT1_OFFSET)))
#define ACMP0_STAT2    (((ACMP_STAT_t*) (ACMP0_BASE + ACMP_STAT2_OFFSET )))
#define ACMP0_STAT2_R    (*((volatile uint32_t*) (ACMP0_BASE +ACMP_STAT2_OFFSET)))

/******************************************************************************************
************************************ 6 CTL *********************************************
******************************************************************************************/
#define ACMP0_CTL0    (((ACMP_CTL_t*) (ACMP0_BASE + ACMP_CTL0_OFFSET )))
#define ACMP0_CTL0_R    (*((volatile uint32_t*) (ACMP0_BASE +ACMP_CTL0_OFFSET)))
#define ACMP0_CTL1    (((ACMP_CTL_t*) (ACMP0_BASE + ACMP_CTL1_OFFSET )))
#define ACMP0_CTL1_R    (*((volatile uint32_t*) (ACMP0_BASE +ACMP_CTL1_OFFSET)))
#define ACMP0_CTL2    (((ACMP_CTL_t*) (ACMP0_BASE + ACMP_CTL2_OFFSET )))
#define ACMP0_CTL2_R    (*((volatile uint32_t*) (ACMP0_BASE +ACMP_CTL2_OFFSET)))

/******************************************************************************************
************************************ 7 PP *********************************************
******************************************************************************************/
#define ACMP0_PP    (((ACMP_PP_t*) (ACMP0_BASE + ACMP_PP_OFFSET )))
#define ACMP0_PP_R    (*((volatile uint32_t*) (ACMP0_BASE +ACMP_PP_OFFSET)))


#endif /* XDRIVER_MCU_ACMP_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_XHEADER_ACMP_REGISTERPERIPHERAL_MODULE0_H_ */
