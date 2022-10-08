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

#include <xDriver_MCU/ACMP/Peripheral/xHeader/ACMP_Enum.h>

/******************************************************************************************
************************************ 1 MIS *********************************************
******************************************************************************************/
/*--------*/
#define ACMP_MIS_R_IN_MASK    ((UBase_t) 0x00000007U)
#define ACMP_MIS_R_IN_BIT    ((UBase_t) 0U)
#define ACMP_MIS_R_IN_INACTIVE    ((UBase_t) 0x00000000U)
#define ACMP_MIS_R_IN_ACTIVE    ((UBase_t) 0x00000007U)
#define ACMP_MIS_R_IN_CLEAR    ((UBase_t) 0x00000007U)

#define ACMP_MIS_IN_MASK    ((UBase_t) 0x00000007U)
#define ACMP_MIS_IN_INACTIVE    ((UBase_t) 0x00000000U)
#define ACMP_MIS_IN_ACTIVE    ((UBase_t) 0x00000007U)
#define ACMP_MIS_IN_CLEAR    ((UBase_t) 0x00000007U)
/*--------*/

/*--------*/
#define ACMP_MIS_R_IN0_MASK    ((UBase_t) 0x00000001U)
#define ACMP_MIS_R_IN0_BIT    ((UBase_t) 0U)
#define ACMP_MIS_R_IN0_INACTIVE    ((UBase_t) 0x00000000U)
#define ACMP_MIS_R_IN0_ACTIVE    ((UBase_t) 0x00000001U)
#define ACMP_MIS_R_IN0_CLEAR    ((UBase_t) 0x00000001U)

#define ACMP_MIS_IN0_MASK    ((UBase_t) 0x00000001U)
#define ACMP_MIS_IN0_INACTIVE    ((UBase_t) 0x00000000U)
#define ACMP_MIS_IN0_ACTIVE    ((UBase_t) 0x00000001U)
#define ACMP_MIS_IN0_CLEAR    ((UBase_t) 0x00000001U)
/*--------*/

/*--------*/
#define ACMP_MIS_R_IN1_MASK    ((UBase_t) 0x00000002U)
#define ACMP_MIS_R_IN1_BIT    ((UBase_t) 1U)
#define ACMP_MIS_R_IN1_INACTIVE    ((UBase_t) 0x00000000U)
#define ACMP_MIS_R_IN1_ACTIVE    ((UBase_t) 0x00000002U)
#define ACMP_MIS_R_IN1_CLEAR    ((UBase_t) 0x00000002U)

#define ACMP_MIS_IN1_MASK    ((UBase_t) 0x00000001U)
#define ACMP_MIS_IN1_INACTIVE    ((UBase_t) 0x00000000U)
#define ACMP_MIS_IN1_ACTIVE    ((UBase_t) 0x00000001U)
#define ACMP_MIS_IN1_CLEAR    ((UBase_t) 0x00000001U)
/*--------*/

/*--------*/
#define ACMP_MIS_R_IN2_MASK    ((UBase_t) 0x00000004U)
#define ACMP_MIS_R_IN2_BIT    ((UBase_t) 2U)
#define ACMP_MIS_R_IN2_INACTIVE    ((UBase_t) 0x00000000U)
#define ACMP_MIS_R_IN2_ACTIVE    ((UBase_t) 0x00000004U)
#define ACMP_MIS_R_IN2_CLEAR    ((UBase_t) 0x00000004U)

#define ACMP_MIS_IN2_MASK    ((UBase_t) 0x00000001U)
#define ACMP_MIS_IN2_INACTIVE    ((UBase_t) 0x00000000U)
#define ACMP_MIS_IN2_ACTIVE    ((UBase_t) 0x00000001U)
#define ACMP_MIS_IN2_CLEAR    ((UBase_t) 0x00000001U)
/*--------*/

#endif /* XDRIVER_MCU_ACMP_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ACMP_REGISTERDEFINES_MIS_H_ */
