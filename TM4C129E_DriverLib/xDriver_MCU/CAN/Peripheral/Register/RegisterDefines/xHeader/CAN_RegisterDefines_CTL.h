/**
 *
 * @file CAN_RegisterDefines_CTL.h
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
 * @verbatim Apr 14, 2021 @endverbatim
 *
 * @author
 * @verbatim indevicemex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * Apr 14, 2021        indevicemex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_CAN_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_CAN_REGISTERDEFINES_CTL_H_
#define XDRIVER_MCU_CAN_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_CAN_REGISTERDEFINES_CTL_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 1 CTL *********************************************
******************************************************************************************/
/*--------*/
#define CAN_CTL_R_INIT_MASK    ((uint32_t) 0x00000001UL)
#define CAN_CTL_R_INIT_BIT    ((uint32_t) 0UL)
#define CAN_CTL_R_INIT_NORMAL    ((uint32_t) 0x00000000UL)
#define CAN_CTL_R_INIT_INIT    ((uint32_t) 0x00000001UL)

#define CAN_CTL_INIT_MASK    ((uint32_t) 0x00000001UL)
#define CAN_CTL_INIT_NORMAL    ((uint32_t) 0x00000000UL)
#define CAN_CTL_INIT_INIT    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define CAN_CTL_R_IE_MASK    ((uint32_t) 0x00000002UL)
#define CAN_CTL_R_IE_BIT    ((uint32_t) 1UL)
#define CAN_CTL_R_IE_DIS    ((uint32_t) 0x00000000UL)
#define CAN_CTL_R_IE_ENA   ((uint32_t) 0x00000002UL)

#define CAN_CTL_IE_MASK    ((uint32_t) 0x00000001UL)
#define CAN_CTL_IE_DIS    ((uint32_t) 0x00000000UL)
#define CAN_CTL_IE_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define CAN_CTL_R_SIE_MASK    ((uint32_t) 0x00000004UL)
#define CAN_CTL_R_SIE_BIT    ((uint32_t) 2UL)
#define CAN_CTL_R_SIE_DIS    ((uint32_t) 0x00000000UL)
#define CAN_CTL_R_SIE_ENA    ((uint32_t) 0x00000004UL)

#define CAN_CTL_SIE_MASK    ((uint32_t) 0x00000001UL)
#define CAN_CTL_SIE_DIS    ((uint32_t) 0x00000000UL)
#define CAN_CTL_SIE_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define CAN_CTL_R_EIE_MASK    ((uint32_t) 0x00000008UL)
#define CAN_CTL_R_EIE_BIT    ((uint32_t) 3UL)
#define CAN_CTL_R_EIE_DIS    ((uint32_t) 0x00000000UL)
#define CAN_CTL_R_EIE_ENA   ((uint32_t) 0x00000008UL)

#define CAN_CTL_EIE_MASK    ((uint32_t) 0x00000001UL)
#define CAN_CTL_EIE_DIS    ((uint32_t) 0x00000000UL)
#define CAN_CTL_EIE_ENA   ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define CAN_CTL_R_DAR_MASK    ((uint32_t) 0x00000020UL)
#define CAN_CTL_R_DAR_BIT    ((uint32_t) 5UL)
#define CAN_CTL_R_DAR_ENA    ((uint32_t) 0x00000000UL)
#define CAN_CTL_R_DAR_DIS   ((uint32_t) 0x00000020UL)

#define CAN_CTL_DAR_MASK    ((uint32_t) 0x00000001UL)
#define CAN_CTL_DAR_ENA    ((uint32_t) 0x00000000UL)
#define CAN_CTL_DAR_DIS   ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define CAN_CTL_R_CCE_MASK    ((uint32_t) 0x00000040UL)
#define CAN_CTL_R_CCE_BIT    ((uint32_t) 6UL)
#define CAN_CTL_R_CCE_DIS    ((uint32_t) 0x00000000UL)
#define CAN_CTL_R_CCE_ENA   ((uint32_t) 0x00000040UL)

#define CAN_CTL_CCE_MASK    ((uint32_t) 0x00000001UL)
#define CAN_CTL_CCE_DIS    ((uint32_t) 0x00000000UL)
#define CAN_CTL_CCE_ENA   ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define CAN_CTL_R_TEST_MASK    ((uint32_t) 0x00000080UL)
#define CAN_CTL_R_TEST_BIT    ((uint32_t) 7UL)
#define CAN_CTL_R_TEST_NORMAL    ((uint32_t) 0x00000000UL)
#define CAN_CTL_R_TEST_TEST    ((uint32_t) 0x00000080UL)

#define CAN_CTL_TEST_MASK    ((uint32_t) 0x00000001UL)
#define CAN_CTL_TEST_NORMAL    ((uint32_t) 0x00000000UL)
#define CAN_CTL_TEST_TEST    ((uint32_t) 0x00000001UL)
/*--------*/

#endif /* XDRIVER_MCU_CAN_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_CAN_REGISTERDEFINES_CTL_H_ */
