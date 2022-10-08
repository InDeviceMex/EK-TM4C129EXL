/**
 *
 * @file ACMP_RegisterDefines_CTL.h
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
#ifndef XDRIVER_MCU_ACMP_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ACMP_REGISTERDEFINES_CTL_H_
#define XDRIVER_MCU_ACMP_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ACMP_REGISTERDEFINES_CTL_H_

#include <xDriver_MCU/ACMP/Peripheral/xHeader/ACMP_Enum.h>

/******************************************************************************************
************************************ 6 CTL *********************************************
******************************************************************************************/
/*--------*/
#define ACMP_CTL_R_CINV_MASK    ((UBase_t) 0x00000002U)
#define ACMP_CTL_R_CINV_BIT    ((UBase_t) 1U)
#define ACMP_CTL_R_CINV_NORMAL    ((UBase_t) 0x00000000U)
#define ACMP_CTL_R_CINV_INVERTED    ((UBase_t) 0x00000002U)

#define ACMP_CTL_CINV_MASK    ((UBase_t) 0x00000001U)
#define ACMP_CTL_CINV_NORMAL    ((UBase_t) 0x00000000U)
#define ACMP_CTL_CINV_INVERTED    ((UBase_t) 0x00000001U)
/*--------*/

/*--------*/
#define ACMP_CTL_R_ISEN_MASK    ((UBase_t) 0x0000000CU)
#define ACMP_CTL_R_ISEN_BIT    ((UBase_t) 2U)
#define ACMP_CTL_R_ISEN_LEVEL    ((UBase_t) 0x00000000U)
#define ACMP_CTL_R_ISEN_FALLING    ((UBase_t) 0x00000004U)
#define ACMP_CTL_R_ISEN_RISING    ((UBase_t) 0x00000008U)
#define ACMP_CTL_R_ISEN_EITHER    ((UBase_t) 0x0000000CU)

#define ACMP_CTL_ISEN_MASK    ((UBase_t) 0x00000003U)
#define ACMP_CTL_ISEN_LEVEL    ((UBase_t) 0x00000000U)
#define ACMP_CTL_ISEN_FALLING    ((UBase_t) 0x00000001U)
#define ACMP_CTL_ISEN_RISING    ((UBase_t) 0x00000002U)
#define ACMP_CTL_ISEN_EITHER    ((UBase_t) 0x00000003U)
/*--------*/
/*--------*/
#define ACMP_CTL_R_ISLVAL_MASK    ((UBase_t) 0x00000010U)
#define ACMP_CTL_R_ISLVAL_BIT    ((UBase_t) 4U)
#define ACMP_CTL_R_ISLVAL_LOW    ((UBase_t) 0x00000000U)
#define ACMP_CTL_R_ISLVAL_HIGH    ((UBase_t) 0x00000010U)

#define ACMP_CTL_ISLVAL_MASK    ((UBase_t) 0x00000001U)
#define ACMP_CTL_ISLVAL_LOW    ((UBase_t) 0x00000000U)
#define ACMP_CTL_ISLVAL_HIGH    ((UBase_t) 0x00000001U)
/*--------*/

/*--------*/
#define ACMP_CTL_R_TSEN_MASK    ((UBase_t) 0x00000060U)
#define ACMP_CTL_R_TSEN_BIT    ((UBase_t) 5U)
#define ACMP_CTL_R_TSEN_LEVEL    ((UBase_t) 0x00000000U)
#define ACMP_CTL_R_TSEN_FALLING    ((UBase_t) 0x00000020U)
#define ACMP_CTL_R_TSEN_RISING    ((UBase_t) 0x00000040U)
#define ACMP_CTL_R_TSEN_EITHER    ((UBase_t) 0x00000060U)

#define ACMP_CTL_TSEN_MASK    ((UBase_t) 0x00000003U)
#define ACMP_CTL_TSEN_LEVEL    ((UBase_t) 0x00000000U)
#define ACMP_CTL_TSEN_FALLING    ((UBase_t) 0x00000001U)
#define ACMP_CTL_TSEN_RISING    ((UBase_t) 0x00000002U)
#define ACMP_CTL_TSEN_EITHER    ((UBase_t) 0x00000003U)
/*--------*/

/*--------*/
#define ACMP_CTL_R_TSLVAL_MASK    ((UBase_t) 0x00000080U)
#define ACMP_CTL_R_TSLVAL_BIT    ((UBase_t) 7U)
#define ACMP_CTL_R_TSLVAL_LOW    ((UBase_t) 0x00000000U)
#define ACMP_CTL_R_TSLVAL_HIGH    ((UBase_t) 0x00000080U)

#define ACMP_CTL_TSLVAL_MASK    ((UBase_t) 0x00000001U)
#define ACMP_CTL_TSLVAL_LOW    ((UBase_t) 0x00000000U)
#define ACMP_CTL_TSLVAL_HIGH    ((UBase_t) 0x00000001U)
/*--------*/

/*--------*/
#define ACMP_CTL_R_ASRCP_MASK    ((UBase_t) 0x00000600U)
#define ACMP_CTL_R_ASRCP_BIT    ((UBase_t) 9U)
#define ACMP_CTL_R_ASRCP_CN    ((UBase_t) 0x00000000U)
#define ACMP_CTL_R_ASRCP_C0    ((UBase_t) 0x00000200U)
#define ACMP_CTL_R_ASRCP_VREF    ((UBase_t) 0x00000400U)

#define ACMP_CTL_ASRCP_MASK    ((UBase_t) 0x00000003U)
#define ACMP_CTL_ASRCP_CN    ((UBase_t) 0x00000000U)
#define ACMP_CTL_ASRCP_C0    ((UBase_t) 0x00000001U)
#define ACMP_CTL_ASRCP_VREF    ((UBase_t) 0x00000002U)
/*--------*/

/*--------*/
#define ACMP_CTL_R_TOEN_MASK    ((UBase_t) 0x00000800U)
#define ACMP_CTL_R_TOEN_BIT    ((UBase_t) 11U)
#define ACMP_CTL_R_TOEN_DIS    ((UBase_t) 0x00000000U)
#define ACMP_CTL_R_TOEN_ENA    ((UBase_t) 0x00000800U)

#define ACMP_CTL_TOEN_MASK    ((UBase_t) 0x00000001U)
#define ACMP_CTL_TOEN_DIS    ((UBase_t) 0x00000000U)
#define ACMP_CTL_TOEN_ENA    ((UBase_t) 0x00000001U)
/*--------*/

#endif /* XDRIVER_MCU_ACMP_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ACMP_REGISTERDEFINES_CTL_H_ */
