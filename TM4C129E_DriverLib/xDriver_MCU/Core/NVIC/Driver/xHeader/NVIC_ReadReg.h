/**
 *
 * @file NVIC_ReadReg.h
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
 * @verbatim 24 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 24 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_CORE_NVIC_DRIVER_XHEADER_NVIC_READREG_H_
#define XDRIVER_MCU_CORE_NVIC_DRIVER_XHEADER_NVIC_READREG_H_

#include <xDriver_MCU/Core/NVIC/Peripheral/xHeader/NVIC_Enum.h>

uint32_t NVIC__u32ReadRegister(NVIC_nSTIR enIRQ, uint32_t u32RegisterOffset);

#endif /* XDRIVER_MCU_CORE_NVIC_DRIVER_XHEADER_NVIC_READREG_H_ */
