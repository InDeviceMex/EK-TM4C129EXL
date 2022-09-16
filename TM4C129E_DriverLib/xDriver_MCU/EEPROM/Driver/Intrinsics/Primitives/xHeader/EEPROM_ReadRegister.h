/**
 *
 * @file EEPROM_ReadRegister.h
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
 * @verbatim 5 feb. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 5 feb. 2021     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_EEPROM_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_EEPROM_READREGISTER_H_
#define XDRIVER_MCU_EEPROM_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_EEPROM_READREGISTER_H_

#include <xDriver_MCU/EEPROM/Peripheral/xHeader/EEPROM_Enum.h>

EEPROM_nERROR EEPROM__enReadRegister(EEPROM_nMODULE enModuleArg, EEPROM_Register_t* pstRegisterDataArg);

#endif /* XDRIVER_MCU_EEPROM_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_EEPROM_READREGISTER_H_ */
