/**
 *
 * @file ACMP_RegisterDefines_INTEN.h
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
#ifndef XDRIVER_MCU_ACMP_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ACMP_REGISTERDEFINES_INTEN_H_
#define XDRIVER_MCU_ACMP_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ACMP_REGISTERDEFINES_INTEN_H_

#include <xDriver_MCU/ACMP/Peripheral/xHeader/ACMP_Enum.h>

/******************************************************************************************
 ************************************ 3 INTEN *********************************************
 ******************************************************************************************/
/*----------*/
#define ACMP_INTEN_R_IN_MASK    ((UBase_t) 0x00000007U)
#define ACMP_INTEN_R_IN_BIT    ((UBase_t) 0U)
#define ACMP_INTEN_R_IN_DIS    ((UBase_t) 0x00000000U)
#define ACMP_INTEN_R_IN_ENA    ((UBase_t) 0x00000007U)

#define ACMP_INTEN_IN_MASK    ((UBase_t) 0x00000007U)
#define ACMP_INTEN_IN_DIS    ((UBase_t) 0x00000000U)
#define ACMP_INTEN_IN_ENA    ((UBase_t) 0x00000007U)
/*----------*/

/*----------*/
#define ACMP_INTEN_R_IN0_MASK    ((UBase_t) 0x00000001U)
#define ACMP_INTEN_R_IN0_BIT    ((UBase_t) 0U)
#define ACMP_INTEN_R_IN0_DIS    ((UBase_t) 0x00000000U)
#define ACMP_INTEN_R_IN0_ENA    ((UBase_t) 0x00000001U)

#define ACMP_INTEN_IN0_MASK    ((UBase_t) 0x00000001U)
#define ACMP_INTEN_IN0_DIS    ((UBase_t) 0x00000000U)
#define ACMP_INTEN_IN0_ENA    ((UBase_t) 0x00000001U)
/*----------*/

/*----------*/
#define ACMP_INTEN_R_IN1_MASK    ((UBase_t) 0x00000002U)
#define ACMP_INTEN_R_IN1_BIT    ((UBase_t) 1U)
#define ACMP_INTEN_R_IN1_DIS    ((UBase_t) 0x00000000U)
#define ACMP_INTEN_R_IN1_ENA    ((UBase_t) 0x00000002U)

#define ACMP_INTEN_IN1_MASK    ((UBase_t) 0x00000001U)
#define ACMP_INTEN_IN1_DIS    ((UBase_t) 0x00000000U)
#define ACMP_INTEN_IN1_ENA    ((UBase_t) 0x00000001U)
/*----------*/

/*----------*/
#define ACMP_INTEN_R_IN2_MASK    ((UBase_t) 0x00000004U)
#define ACMP_INTEN_R_IN2_BIT    ((UBase_t) 2U)
#define ACMP_INTEN_R_IN2_DIS    ((UBase_t) 0x00000000U)
#define ACMP_INTEN_R_IN2_ENA    ((UBase_t) 0x00000004U)

#define ACMP_INTEN_IN2_MASK    ((UBase_t) 0x00000001U)
#define ACMP_INTEN_IN2_DIS    ((UBase_t) 0x00000000U)
#define ACMP_INTEN_IN2_ENA    ((UBase_t) 0x00000001U)
/*----------*/

#endif /* XDRIVER_MCU_ACMP_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ACMP_REGISTERDEFINES_INTEN_H_ */
