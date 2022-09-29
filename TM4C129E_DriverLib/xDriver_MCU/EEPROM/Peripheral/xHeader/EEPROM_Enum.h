/**
 *
 * @file EEPROM_Enum.h
 * @ingroup Peripheral Driver
 * @brief This files is part of EEPROM Peripheral Driver.
 * This File contains the enumerations used in the Driver
 *
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
 * @verbatim 2020.06.17 @endverbatim
 *
 * @author
 * @verbatim Vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 2020.06.17     Vyldram    1.0         initial Version@endverbatim
 *
 * @remarks File required to get the enumerations requires in all  EEPROM peripheral files.
 * @remarks Any further enumerations required in any
 * EEPROM functions must to be implemented here
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_EEPROM_EEPROM_ENUM_H_
#define XDRIVER_MCU_DRIVER_HEADER_EEPROM_EEPROM_ENUM_H_

#include <xDriver_MCU/Common/xHeader/MCU_Enum.h>

#define EEPROM_TIMEOUT_MAX (500000UL)

typedef enum
{
    EEPROM_enERROR_OK = (uint32_t) MCU_enERROR_OK,
    EEPROM_enERROR_POINTER = (uint32_t) MCU_enERROR_POINTER,
    EEPROM_enERROR_VALUE = (uint32_t) MCU_enERROR_VALUE,
    EEPROM_enERROR_RANGE = (uint32_t) MCU_enERROR_RANGE,
    EEPROM_enERROR_EMPTY = (uint32_t) MCU_enERROR_EMPTY,
    EEPROM_enERROR_BUSY = (uint32_t) MCU_enERROR_BUSY,
    EEPROM_enERROR_TIMEOUT = (uint32_t) MCU_enERROR_TIMEOUT,
    EEPROM_enERROR_UNDEF = (uint32_t) MCU_enERROR_UNDEF,
}EEPROM_nERROR;

typedef enum
{
    EEPROM_enSTATE_DIS = (uint32_t) MCU_enSTATE_DIS,
    EEPROM_enSTATE_ENA = (uint32_t) MCU_enSTATE_ENA,
    EEPROM_enSTATE_UNDEF = (uint32_t) MCU_enSTATE_UNDEF,
} EEPROM_nSTATE;

typedef enum
{
    EEPROM_enSTATUS_INACTIVE = (uint32_t) MCU_enSTATUS_INACTIVE,
    EEPROM_enSTATUS_ACTIVE = (uint32_t) MCU_enSTATUS_ACTIVE,
    EEPROM_enSTATUS_UNDEF = (uint32_t) MCU_enSTATUS_UNDEF,
} EEPROM_nSTATUS;

typedef enum
{
    EEPROM_enPRI0 = (uint32_t) MCU_enPRI0,
    EEPROM_enPRI1 = (uint32_t) MCU_enPRI1,
    EEPROM_enPRI2 = (uint32_t) MCU_enPRI2,
    EEPROM_enPRI3 = (uint32_t) MCU_enPRI3,
    EEPROM_enPRI4 = (uint32_t) MCU_enPRI4,
    EEPROM_enPRI5 = (uint32_t) MCU_enPRI5,
    EEPROM_enPRI6 = (uint32_t) MCU_enPRI6,
    EEPROM_enPRI7 = (uint32_t) MCU_enPRI7,
    EEPROM_enPRIMAX = (uint32_t) MCU_enPRIMAX,
    EEPROM_enDEFAULT = (uint32_t) MCU_enDEFAULT,
}EEPROM_nPRIORITY;

typedef enum
{
    EEPROM_enMODULE_0 = 0UL,
    EEPROM_enMODULE_MAX = 1UL,
}EEPROM_nMODULE;

typedef enum
{
    EEPROM_enINT_ERASE = 0UL,
    EEPROM_enINT_COPY = 1UL,
    EEPROM_enINT_NOPERMISSION = 2UL,
    EEPROM_enINT_WRITE = 3UL,
    EEPROM_enINT_SW = 4UL,
    EEPROM_enINT_MAX = 5UL,
}EEPROM_nINT;

typedef enum
{
    EEPROM_enINTMASK_ERASE = 0x04UL,
    EEPROM_enINTMASK_COPY = 0x08UL,
    EEPROM_enINTMASK_NOPERMISSION = 0x10UL,

    EEPROM_enINTMASK_WRITE = 0x20UL,
    EEPROM_enINTMASK_ALL = 0x003CUL,
    EEPROM_enINTMASK_UNDEF = 0xFFFFFUL,
}EEPROM_nINTMASK;

typedef enum
{
    EEPROM_enVARIABLE_BYTE = 0UL,
    EEPROM_enVARIABLE_HALFWORD = 1UL,
    EEPROM_enVARIABLE_WORD = 2UL,
}EEPROM_nVARIABLE;

typedef enum
{
    EEPROM_enCONSTANT_OFF = 0UL,
    EEPROM_enCONSTANT_ON = 1UL,
}EEPROM_nCONSTANT;

typedef MCU_Register_t EEPROM_Register_t;
typedef MCU_pvfIRQSourceHandler_t EEPROM_pvfIRQSourceHandler_t;

#endif /* XDRIVER_MCU_DRIVER_HEADER_EEPROM_EEPROM_ENUM_H_ */
