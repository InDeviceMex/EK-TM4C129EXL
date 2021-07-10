/**
 *
 * @file TIMER_RegisterAddress.h
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
 * @verbatim 4 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 4 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERADDRESS_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERADDRESS_H_

#include <xDriver_MCU/TIMER/Peripheral/Register/RegisterAddress/xHeader/TIMER_RegisterAddress_Control_32.h>
#include <xDriver_MCU/TIMER/Peripheral/Register/RegisterAddress/xHeader/TIMER_RegisterAddress_Control_64.h>
#include <xDriver_MCU/TIMER/Peripheral/Register/RegisterAddress/xHeader/TIMER_RegisterAddress_ModuleA_16.h>
#include <xDriver_MCU/TIMER/Peripheral/Register/RegisterAddress/xHeader/TIMER_RegisterAddress_ModuleA_32.h>
#include <xDriver_MCU/TIMER/Peripheral/Register/RegisterAddress/xHeader/TIMER_RegisterAddress_ModuleB_16.h>
#include <xDriver_MCU/TIMER/Peripheral/Register/RegisterAddress/xHeader/TIMER_RegisterAddress_ModuleB_32.h>
#include <xDriver_MCU/TIMER/Peripheral/Register/RegisterAddress/xHeader/TIMER_RegisterAddress_Standard_32.h>
#include <xDriver_MCU/TIMER/Peripheral/Register/RegisterAddress/xHeader/TIMER_RegisterAddress_Standard_64.h>
#include <xDriver_MCU/TIMER/Peripheral/Register/RegisterAddress/xHeader/TIMER_RegisterAddress_ModuleW_32.h>
#include <xDriver_MCU/TIMER/Peripheral/Register/RegisterAddress/xHeader/TIMER_RegisterAddress_ModuleW_64.h>


#define GPTM_BASE    ((uint32_t) 0x40030000UL)
#define GPTM0_BASE    ((uint32_t) 0x40030000UL)
#define GPTM1_BASE    ((uint32_t) 0x40031000UL)
#define GPTM2_BASE    ((uint32_t) 0x40032000UL)
#define GPTM3_BASE    ((uint32_t) 0x40033000UL)
#define GPTM4_BASE    ((uint32_t) 0x40034000UL)
#define GPTM5_BASE    ((uint32_t) 0x40035000UL)

#define GPTM_OFFSET    ((uint32_t) 0x00030000UL)
#define GPTM0_OFFSET    ((uint32_t) 0x00030000UL)
#define GPTM1_OFFSET    ((uint32_t) 0x00031000UL)
#define GPTM2_OFFSET    ((uint32_t) 0x00032000UL)
#define GPTM3_OFFSET    ((uint32_t) 0x00033000UL)
#define GPTM4_OFFSET    ((uint32_t) 0x00034000UL)
#define GPTM5_OFFSET    ((uint32_t) 0x00035000UL)

#define GPWTM_BASE    ((uint32_t) 0x40036000UL)
#define GPWTM0_BASE    ((uint32_t) 0x40036000UL)
#define GPWTM1_BASE    ((uint32_t) 0x40037000UL)
#define GPWTM2_BASE    ((uint32_t) 0x4004C000UL)
#define GPWTM3_BASE    ((uint32_t) 0x4004D000UL)
#define GPWTM4_BASE    ((uint32_t) 0x4004E000UL)
#define GPWTM5_BASE    ((uint32_t) 0x4004F000UL)

#define GPWTM_OFFSET    ((uint32_t) 0x00036000UL)
#define GPWTM0_OFFSET    ((uint32_t) 0x00036000UL)
#define GPWTM1_OFFSET    ((uint32_t) 0x00037000UL)
#define GPWTM2_OFFSET    ((uint32_t) 0x0004C000UL)
#define GPWTM3_OFFSET    ((uint32_t) 0x0004D000UL)
#define GPWTM4_OFFSET    ((uint32_t) 0x0004E000UL)
#define GPWTM5_OFFSET    ((uint32_t) 0x0004F000UL)

#define GPTM_BASE_BITBANDING    ((uint32_t) 0x42000000UL)
#define GPWTM_BASE_BITBANDING    ((uint32_t) 0x42000000UL)

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERADDRESS_H_ */
