/**
 *
 * @file UART_RegisterDefines_PP.h
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
 * @verbatim 23 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 23 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_UART_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_UART_REGISTERDEFINES_PP_H_
#define XDRIVER_MCU_UART_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_UART_REGISTERDEFINES_PP_H_

#include <xDriver_MCU/Common/xHeader/MCU_Variables.h>

/******************************************************************************************
************************************ 17 PP *********************************************
******************************************************************************************/

/*--------*/
#define UART_PP_R_SC_MASK    ((uint32_t) 0x00000001UL)
#define UART_PP_R_SC_BIT    ((uint32_t) 0UL)
#define UART_PP_R_SC_NONOSUPPORT ((uint32_t) 0x00000000UL)
#define UART_PP_R_SC_ENA    ((uint32_t) 0x00000001UL)

#define UART_PP_SC_MASK    ((uint32_t) 0x00000001UL)
#define UART_PP_SC_NONOSUPPORT    ((uint32_t) 0x00000000UL)
#define UART_PP_SC_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_PP_R_NB_MASK    ((uint32_t) 0x00000002UL)
#define UART_PP_R_NB_BIT    ((uint32_t) 1UL)
#define UART_PP_R_NB_NONOSUPPORT    ((uint32_t) 0x00000000UL)
#define UART_PP_R_NB_ENA    ((uint32_t) 0x00000002UL)

#define UART_PP_NB_MASK    ((uint32_t) 0x00000001UL)
#define UART_PP_NB_NONOSUPPORT    ((uint32_t) 0x00000000UL)
#define UART_PP_NB_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_PP_R_MS_MASK    ((uint32_t) 0x00000004UL)
#define UART_PP_R_MS_BIT    ((uint32_t) 2UL)
#define UART_PP_R_MS_NONOSUPPORT    ((uint32_t) 0x00000000UL)
#define UART_PP_R_MS_ENA    ((uint32_t) 0x00000004UL)

#define UART_PP_MS_MASK    ((uint32_t) 0x00000001UL)
#define UART_PP_MS_NONOSUPPORT    ((uint32_t) 0x00000000UL)
#define UART_PP_MS_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_PP_R_MSE_MASK    ((uint32_t) 0x00000008UL)
#define UART_PP_R_MSE_BIT    ((uint32_t) 3UL)
#define UART_PP_R_MSE_NONOSUPPORT    ((uint32_t) 0x00000000UL)
#define UART_PP_R_MSE_ENA    ((uint32_t) 0x00000008UL)

#define UART_PP_MSE_MASK    ((uint32_t) 0x00000001UL)
#define UART_PP_MSE_NONOSUPPORT    ((uint32_t) 0x00000000UL)
#define UART_PP_MSE_ENA    ((uint32_t) 0x00000001UL)
/*--------*/


#endif /* XDRIVER_MCU_UART_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_UART_REGISTERDEFINES_PP_H_ */
