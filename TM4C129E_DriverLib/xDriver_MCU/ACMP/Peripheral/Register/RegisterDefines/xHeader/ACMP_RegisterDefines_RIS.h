/**
 *
 * @file ACMP_RegisterDefines_RIS.h
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
#ifndef XDRIVER_MCU_ACMP_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ACMP_REGISTERDEFINES_RIS_H_
#define XDRIVER_MCU_ACMP_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ACMP_REGISTERDEFINES_RIS_H_

#include <xDriver_MCU/ACMP/Peripheral/xHeader/ACMP_Enum.h>

/******************************************************************************************
 ************************************ 2 RIS *********************************************
 ******************************************************************************************/
/*----------*/
#define ACMP_RIS_R_IN_MASK    ((UBase_t) 0x00000007U)
#define ACMP_RIS_R_IN_BIT    ((UBase_t) 0U)
#define ACMP_RIS_R_IN_NOACTIVE    ((UBase_t) 0x00000000U)
#define ACMP_RIS_R_IN_ACTIVE    ((UBase_t) 0x00000007U)

#define ACMP_RIS_IN_MASK    ((UBase_t) 0x00000003U)
#define ACMP_RIS_IN_NOACTIVE    ((UBase_t) 0x00000000U)
#define ACMP_RIS_IN_ACTIVE    ((UBase_t) 0x00000003U)
/*----------*/

/*----------*/
#define ACMP_RIS_R_IN0_MASK    ((UBase_t) 0x00000001U)
#define ACMP_RIS_R_IN0_BIT    ((UBase_t) 0U)
#define ACMP_RIS_R_IN0_NOACTIVE    ((UBase_t) 0x00000000U)
#define ACMP_RIS_R_IN0_ACTIVE    ((UBase_t) 0x00000001U)

#define ACMP_RIS_IN0_MASK    ((UBase_t) 0x00000001U)
#define ACMP_RIS_IN0_NOACTIVE    ((UBase_t) 0x00000000U)
#define ACMP_RIS_IN0_ACTIVE    ((UBase_t) 0x00000001U)
/*----------*/

/*----------*/
#define ACMP_RIS_R_IN1_MASK    ((UBase_t) 0x00000002U)
#define ACMP_RIS_R_IN1_BIT    ((UBase_t) 1U)
#define ACMP_RIS_R_IN1_NOACTIVE    ((UBase_t) 0x00000000U)
#define ACMP_RIS_R_IN1_ACTIVE    ((UBase_t) 0x00000002U)

#define ACMP_RIS_IN1_MASK    ((UBase_t) 0x00000001U)
#define ACMP_RIS_IN1_NOACTIVE    ((UBase_t) 0x00000000U)
#define ACMP_RIS_IN1_ACTIVE    ((UBase_t) 0x00000001U)
/*----------*/

/*----------*/
#define ACMP_RIS_R_IN2_MASK    ((UBase_t) 0x00000004U)
#define ACMP_RIS_R_IN2_BIT    ((UBase_t) 2U)
#define ACMP_RIS_R_IN2_NOACTIVE    ((UBase_t) 0x00000000U)
#define ACMP_RIS_R_IN2_ACTIVE    ((UBase_t) 0x00000004U)

#define ACMP_RIS_IN2_MASK    ((UBase_t) 0x00000001U)
#define ACMP_RIS_IN2_NOACTIVE    ((UBase_t) 0x00000000U)
#define ACMP_RIS_IN2_ACTIVE    ((UBase_t) 0x00000001U)
/*----------*/

#endif /* XDRIVER_MCU_ACMP_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ACMP_REGISTERDEFINES_RIS_H_ */
