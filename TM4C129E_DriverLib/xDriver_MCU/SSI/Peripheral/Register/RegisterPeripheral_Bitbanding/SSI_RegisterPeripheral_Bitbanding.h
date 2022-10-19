/**
 *
 * @file SSI_RegisterPeripheral_Bitbanding.h
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
 * @verbatim 17 feb. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 17 feb. 2021     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_SSI_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_SSI_BITBANDING_REGISTERPERIPHERAL_BITBANDING_H_
#define XDRIVER_MCU_SSI_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_SSI_BITBANDING_REGISTERPERIPHERAL_BITBANDING_H_

#include <xDriver_MCU/SSI/Peripheral/Register/RegisterPeripheral_Bitbanding/xHeader/SSI_RegisterPeripheral_Bitbanding_Module0.h>
#include <xDriver_MCU/SSI/Peripheral/Register/RegisterPeripheral_Bitbanding/xHeader/SSI_RegisterPeripheral_Bitbanding_Module1.h>
#include <xDriver_MCU/SSI/Peripheral/Register/RegisterPeripheral_Bitbanding/xHeader/SSI_RegisterPeripheral_Bitbanding_Module2.h>
#include <xDriver_MCU/SSI/Peripheral/Register/RegisterPeripheral_Bitbanding/xHeader/SSI_RegisterPeripheral_Bitbanding_Module3.h>

#define SSI_BITBANDING    ((SSIS_BITBANDING_t*) (SSI_BITBANDING_BASE + (SSI_OFFSET * 32UL)))

#endif /* XDRIVER_MCU_SSI_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_SSI_BITBANDING_REGISTERPERIPHERAL_BITBANDING_H_ */
