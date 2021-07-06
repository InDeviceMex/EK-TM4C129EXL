/**
 *
 * @file SYSTICK_RegisterAddress.h
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
 * @verbatim 22 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 22 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_SYSTICK_SYSTICK_PERIPHERAL_SYSTICK_REGISTER_SYSTICK_REGISTERADDRESS_H_
#define XDRIVER_MCU_DRIVER_HEADER_SYSTICK_SYSTICK_PERIPHERAL_SYSTICK_REGISTER_SYSTICK_REGISTERADDRESS_H_

#include <xUtils/Standard/Standard.h>

#define SYSTICK_BASE    ((uint32_t) 0xE000E000UL)
#define SYSTICK_VALUEMAX    ((uint32_t) 0x1000000UL)
#define SYSTICK_PIOSC4    ((uint32_t) 4000000UL)
#define SYSTICK_PIOSC    ((uint32_t) 16000000UL)

#define SYSTICK_CSR_OFFSET    ((uint32_t) 0x010UL)
#define SYSTICK_RVR_OFFSET    ((uint32_t) 0x014UL)
#define SYSTICK_CVR_OFFSET    ((uint32_t) 0x018UL)
#define SYSTICK_CR_OFFSET    ((uint32_t) 0x01CUL)

#endif /* XDRIVER_MCU_DRIVER_HEADER_SYSTICK_SYSTICK_PERIPHERAL_SYSTICK_REGISTER_SYSTICK_REGISTERADDRESS_H_ */
