/**
 *
 * @file QEI_Config.h
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
 * @verbatim 24 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 24 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XAPPLICATION_MCU_QEI_XHEADER_QEI_CONFIG_H_
#define XAPPLICATION_MCU_QEI_XHEADER_QEI_CONFIG_H_

#include <xApplication_MCU/QEI/Intrinsics/xHeader/QEI_Defines.h>

QEI_nERROR QEI__enSetConfig(QEI_nMODULE enModuleArg,
                             const QEI_CONTROL_t* pstControlConfigArg,
                             const QEI_INPUT_t* pstInputConfigArg,
                             UBase_t uxInitialPosArg,
                             UBase_t uxMaxPositionArg,
                             UBase_t uxTimerLoadArg);

#endif /* XAPPLICATION_MCU_QEI_XHEADER_QEI_CONFIG_H_ */
