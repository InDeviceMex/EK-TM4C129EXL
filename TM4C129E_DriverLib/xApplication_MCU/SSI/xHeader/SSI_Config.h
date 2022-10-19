/**
 *
 * @file SSI_Config.h
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
 * @verbatim 11 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 11 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XAPPLICATION_MCU_SSI_XHEADER_SSI_CONFIG_H_
#define XAPPLICATION_MCU_SSI_XHEADER_SSI_CONFIG_H_

#include <xApplication_MCU/SSI/Intrinsics/xHeader/SSI_Defines.h>

SSI_nERROR SSI__enSetConfig(SSI_nMODULE enModuleArg,
                             SSI_nOPERATION enMasterSlaveArg,
                             UBase_t uxClockArg,
                             const SSI_CONTROL_t* const pstControlConfigArg,
                             SSI_FRAME_CONTROL_t* const pstFrameControlConfigArg,
                             const SSI_LINE_t* pstLineConfigArg);

#endif /* XAPPLICATION_MCU_SSI_XHEADER_SSI_CONFIG_H_ */
