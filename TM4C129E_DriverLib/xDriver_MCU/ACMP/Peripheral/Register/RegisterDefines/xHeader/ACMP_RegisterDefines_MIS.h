/**
 *
 * @file ACMP_RegisterDefines_MIS.h
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
 * @verbatim 28 nov. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 28 nov. 2020     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_ACMP_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ACMP_REGISTERDEFINES_MIS_H_
#define XDRIVER_MCU_ACMP_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ACMP_REGISTERDEFINES_MIS_H_
#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 1 MIS *********************************************
******************************************************************************************/
/*--------*/
#define ACMP_MIS_R_IN_MASK    ((uint32_t) 0x00000003U)
#define ACMP_MIS_R_IN_BIT    ((uint32_t) 0U)
#define ACMP_MIS_R_IN_NOOCCUR    ((uint32_t) 0x00000000U)
#define ACMP_MIS_R_IN_OCCUR    ((uint32_t) 0x00000003U)
#define ACMP_MIS_R_IN_CLEAR    ((uint32_t) 0x00000003U)

#define ACMP_MIS_IN_MASK    ((uint32_t) 0x00000003U)
#define ACMP_MIS_IN_NOOCCUR    ((uint32_t) 0x00000000U)
#define ACMP_MIS_IN_OCCUR    ((uint32_t) 0x00000003U)
#define ACMP_MIS_IN_CLEAR    ((uint32_t) 0x00000003U)
/*--------*/

/*--------*/
#define ACMP_MIS_R_IN0_MASK    ((uint32_t) 0x00000001U)
#define ACMP_MIS_R_IN0_BIT    ((uint32_t) 0U)
#define ACMP_MIS_R_IN0_NOOCCUR    ((uint32_t) 0x00000000U)
#define ACMP_MIS_R_IN0_OCCUR    ((uint32_t) 0x00000001U)
#define ACMP_MIS_R_IN0_CLEAR    ((uint32_t) 0x00000001U)

#define ACMP_MIS_IN0_MASK    ((uint32_t) 0x00000001U)
#define ACMP_MIS_IN0_NOOCCUR    ((uint32_t) 0x00000000U)
#define ACMP_MIS_IN0_OCCUR    ((uint32_t) 0x00000001U)
#define ACMP_MIS_IN0_CLEAR    ((uint32_t) 0x00000001U)
/*--------*/

/*--------*/
#define ACMP_MIS_R_IN1_MASK    ((uint32_t) 0x00000002U)
#define ACMP_MIS_R_IN1_BIT    ((uint32_t) 1U)
#define ACMP_MIS_R_IN1_NOOCCUR    ((uint32_t) 0x00000000U)
#define ACMP_MIS_R_IN1_OCCUR    ((uint32_t) 0x00000002U)
#define ACMP_MIS_R_IN1_CLEAR    ((uint32_t) 0x00000002U)

#define ACMP_MIS_IN1_MASK    ((uint32_t) 0x00000001U)
#define ACMP_MIS_IN1_NOOCCUR    ((uint32_t) 0x00000000U)
#define ACMP_MIS_IN1_OCCUR    ((uint32_t) 0x00000001U)
#define ACMP_MIS_IN1_CLEAR    ((uint32_t) 0x00000001U)
/*--------*/

#endif /* XDRIVER_MCU_ACMP_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ACMP_REGISTERDEFINES_MIS_H_ */
