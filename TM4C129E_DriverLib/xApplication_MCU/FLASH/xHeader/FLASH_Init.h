/**
 *
 * @file FLASH_Init.h
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

#ifndef XAPPLICATION_MCU_FLASH_XHEADER_FLASH_INIT_H_
#define XAPPLICATION_MCU_FLASH_XHEADER_FLASH_INIT_H_

#include <xApplication_MCU/FLASH/Intrinsics/xHeader/FLASH_Defines.h>

FLASH_nERROR FLASH__enInit (FLASH_nMODULE enModuleArg);
FLASH_nERROR FLASH__enDeInit (FLASH_nMODULE enModuleArg);

#endif /* XAPPLICATION_MCU_FLASH_XHEADER_FLASH_INIT_H_ */
