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

QEI_nSTATUS QEI__enSetConfig(QEI_nMODULE enModule,
                             const QEI_CONTROL_TypeDef* pstControlConfig,
                             const QEI_SIGNAL_TypeDef* pstSignalConfig,
                             uint32_t u32InitialPosArg,
                             uint32_t u32MaxPositionArg,
                             uint32_t u32TimerLoad);

#endif /* XAPPLICATION_MCU_QEI_XHEADER_QEI_CONFIG_H_ */
