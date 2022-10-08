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

#include <xDriver_MCU/UART/Peripheral/xHeader/UART_Enum.h>

/******************************************************************************************
************************************ 17 PP *********************************************
******************************************************************************************/

/*--------*/
#define UART_PP_R_SC_MASK    ((UBase_t) 0x00000001UL)
#define UART_PP_R_SC_BIT    ((UBase_t) 0UL)
#define UART_PP_R_SC_NONOSUPPORT ((UBase_t) 0x00000000UL)
#define UART_PP_R_SC_ENA    ((UBase_t) 0x00000001UL)

#define UART_PP_SC_MASK    ((UBase_t) 0x00000001UL)
#define UART_PP_SC_NONOSUPPORT    ((UBase_t) 0x00000000UL)
#define UART_PP_SC_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_PP_R_NB_MASK    ((UBase_t) 0x00000002UL)
#define UART_PP_R_NB_BIT    ((UBase_t) 1UL)
#define UART_PP_R_NB_NONOSUPPORT    ((UBase_t) 0x00000000UL)
#define UART_PP_R_NB_ENA    ((UBase_t) 0x00000002UL)

#define UART_PP_NB_MASK    ((UBase_t) 0x00000001UL)
#define UART_PP_NB_NONOSUPPORT    ((UBase_t) 0x00000000UL)
#define UART_PP_NB_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_PP_R_MS_MASK    ((UBase_t) 0x00000004UL)
#define UART_PP_R_MS_BIT    ((UBase_t) 2UL)
#define UART_PP_R_MS_NONOSUPPORT    ((UBase_t) 0x00000000UL)
#define UART_PP_R_MS_ENA    ((UBase_t) 0x00000004UL)

#define UART_PP_MS_MASK    ((UBase_t) 0x00000001UL)
#define UART_PP_MS_NONOSUPPORT    ((UBase_t) 0x00000000UL)
#define UART_PP_MS_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_PP_R_MSE_MASK    ((UBase_t) 0x00000008UL)
#define UART_PP_R_MSE_BIT    ((UBase_t) 3UL)
#define UART_PP_R_MSE_NONOSUPPORT    ((UBase_t) 0x00000000UL)
#define UART_PP_R_MSE_ENA    ((UBase_t) 0x00000008UL)

#define UART_PP_MSE_MASK    ((UBase_t) 0x00000001UL)
#define UART_PP_MSE_NONOSUPPORT    ((UBase_t) 0x00000000UL)
#define UART_PP_MSE_ENA    ((UBase_t) 0x00000001UL)
/*--------*/


#endif /* XDRIVER_MCU_UART_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_UART_REGISTERDEFINES_PP_H_ */
