/**
 *
 * @file MCU_ControlReg.h
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
 * @verbatim 17 jun. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 17 jun. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_COMMON_XHEADER_MCU_CONTROLREG_H_
#define XDRIVER_MCU_COMMON_XHEADER_MCU_CONTROLREG_H_

#include <xDriver_MCU/Common/xHeader/MCU_Enum.h>

void MCU__vSetStackValue(MCU_nSTACK enStack, UBase_t uxStackValue);
UBase_t MCU__uxGetStackValue(MCU_nSTACK enStack);

void MCU__vSetFPUContextActive(MCU_nSTATUS enStateCoprocessor);
MCU_nSTATUS MCU__enSetFPUContextActive(MCU_nSTATUS enStateCoprocessor);
MCU_nSTATUS MCU__enGetFPUContextActive(void);

MCU_nSTACK MCU__enSetStackActive(MCU_nSTACK enStack);
MCU_nSTACK MCU__enGetStackActive(void);

void MCU__vSetPSPValue(UBase_t uxStackValue);
UBase_t MCU__uxGetPSPValue(void);

void MCU__vSetMSPValue(UBase_t uxStackValue);
UBase_t MCU__uxGetMSPValue(void);

MCU_nTHREAD_LEVEL MCU__enSetThreadLevel(MCU_nTHREAD_LEVEL enLevel);
MCU_nTHREAD_LEVEL MCU__enGetThreadLevel(void);

#endif /* XDRIVER_MCU_COMMON_XHEADER_MCU_CONTROLREG_H_ */
