/**
 *
 * @file ACMP_Config.h
 * @copyright
 * @verbatim InDeviceMex 2021 @endverbatim
 *
 * @par Responsibility
 * @verbatim InDeviceMex Developers @endverbatim
 *
 * @version
 * @verbatim 1.0 @endverbatim
 *
 * @date
 * @verbatim 21 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 21 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XAPPLICATION_MCU_ACMP_XHEADER_ACMP_CONFIG_H_
#define XAPPLICATION_MCU_ACMP_XHEADER_ACMP_CONFIG_H_

#include <xApplication_MCU/ACMP/Intrinsics/xHeader/ACMP_Defines.h>

ACMP_nSTATUS ACMP__enSetConfig(ACMP_nMODULE enModule,
                               ACMP_nCOMP enCompArg ,
                               ACMP_nLINE_OUT_SELECT enLineOutSelectArg,
                               const ACMP_CONTROL_TypeDef* pstControlConfig);

#endif /* XAPPLICATION_MCU_ACMP_XHEADER_ACMP_CONFIG_H_ */
