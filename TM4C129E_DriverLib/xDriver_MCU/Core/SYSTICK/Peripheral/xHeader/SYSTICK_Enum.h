/*
 * SYSTICK_Enum.h
 *
 *  Created on: 18 jun. 2020
 *      Author: vyldram
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_SYSTICK_SYSTICK_PERIPHERAL_SYSTICK_ENUM_H_
#define XDRIVER_MCU_DRIVER_HEADER_SYSTICK_SYSTICK_PERIPHERAL_SYSTICK_ENUM_H_

#include <xDriver_MCU/Common/xHeader/MCU_Enum.h>

typedef enum
{
    SYSTICK_enERROR_OK = (uint32_t) MCU_enERROR_OK,
    SYSTICK_enERROR_POINTER = (uint32_t) MCU_enERROR_POINTER,
    SYSTICK_enERROR_VALUE = (uint32_t) MCU_enERROR_VALUE,
    SYSTICK_enERROR_UNDEF = (uint32_t) MCU_enERROR_UNDEF,
}SYSTICK_nERROR;

typedef enum
{
    SYSTICK_enMODULE_0 = 0UL,
    SYSTICK_enMODULE_MAX = 1UL,
}SYSTICK_nMODULE;

typedef enum
{
    SYSTICK_enSTATE_DIS = 0UL,
    SYSTICK_enSTATE_ENA = 1UL,
}SYSTICK_nSTATE;

typedef enum
{
    SYSTICK_enPRI0 = (uint32_t) MCU_enPRI0,
    SYSTICK_enPRI1 = (uint32_t) MCU_enPRI1,
    SYSTICK_enPRI2 = (uint32_t) MCU_enPRI2,
    SYSTICK_enPRI3 = (uint32_t) MCU_enPRI3,
    SYSTICK_enPRI4 = (uint32_t) MCU_enPRI4,
    SYSTICK_enPRI5 = (uint32_t) MCU_enPRI5,
    SYSTICK_enPRI6 = (uint32_t) MCU_enPRI6,
    SYSTICK_enPRI7 = (uint32_t) MCU_enPRI7,
    SYSTICK_enPRIMAX = (uint32_t) MCU_enPRIMAX,
    SYSTICK_enDEFAULT = (uint32_t) MCU_enDEFAULT,
}SYSTICK_nPRIORITY;

typedef enum
{
    SYSTICK_enSTATUS_INACTIVE = 0UL,
    SYSTICK_enSTATUS_ACTIVE = 1UL,
} SYSTICK_nSTATUS;

typedef enum
{
    SYSTICK_enPIOSC4 = 0UL,
    SYSTICK_enSYSCLK = 1UL,
}SYSTICK_nCLKSOURCE;

typedef MCU_Register_t SYSTICK_Register_t;
typedef MCU_pvfIRQSourceHandler_t SYSTICK_pvfIRQSourceHandler_t;

#endif /* XDRIVER_MCU_DRIVER_HEADER_SYSTICK_SYSTICK_PERIPHERAL_SYSTICK_ENUM_H_ */
