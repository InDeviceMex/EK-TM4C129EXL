/**
 *
 * @file GPIO_Enum.h
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
 * @verbatim 24 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 24 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_ENUM_H_
#define XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_ENUM_H_

#include <xDriver_MCU/Common/xHeader/MCU_Enum.h>

typedef enum
{
    GPIO_enERROR_OK = (UBase_t) MCU_enERROR_OK,
    GPIO_enERROR_POINTER = (UBase_t) MCU_enERROR_POINTER,
    GPIO_enERROR_VALUE = (UBase_t) MCU_enERROR_VALUE,
    GPIO_enERROR_RANGE = (UBase_t) MCU_enERROR_RANGE,
    GPIO_enERROR_EMPTY = (UBase_t) MCU_enERROR_EMPTY,
    GPIO_enERROR_UNDEF = (UBase_t) MCU_enERROR_UNDEF,
}GPIO_nERROR;

typedef enum
{
    GPIO_enSTATE_DIS = (UBase_t) MCU_enSTATE_DIS,
    GPIO_enSTATE_ENA = (UBase_t) MCU_enSTATE_ENA,
    GPIO_enSTATE_UNDEF = (UBase_t) MCU_enSTATE_UNDEF,
} GPIO_nSTATE;

typedef enum
{
    GPIO_enSTATUS_INACTIVE = (UBase_t) MCU_enSTATUS_INACTIVE,
    GPIO_enSTATUS_ACTIVE = (UBase_t) MCU_enSTATUS_ACTIVE,
    GPIO_enSTATUS_UNDEF = (UBase_t) MCU_enSTATUS_UNDEF,
} GPIO_nSTATUS;

typedef enum
{
    GPIO_enPRI0 = (UBase_t) MCU_enPRI0,
    GPIO_enPRI1 = (UBase_t) MCU_enPRI1,
    GPIO_enPRI2 = (UBase_t) MCU_enPRI2,
    GPIO_enPRI3 = (UBase_t) MCU_enPRI3,
    GPIO_enPRI4 = (UBase_t) MCU_enPRI4,
    GPIO_enPRI5 = (UBase_t) MCU_enPRI5,
    GPIO_enPRI6 = (UBase_t) MCU_enPRI6,
    GPIO_enPRI7 = (UBase_t) MCU_enPRI7,
    GPIO_enPRIMAX = (UBase_t) MCU_enPRIMAX,
    GPIO_enDEFAULT = (UBase_t) MCU_enDEFAULT,
}GPIO_nPRIORITY;

typedef enum
{
    GPIO_enFALSE = (UBase_t) FALSE,
    GPIO_enTRUE = (UBase_t) TRUE,
    GPIO_enPENDSTATE_UNDEF = (UBase_t) BOOLEAN_UNDEF,
}GPIO_nBOOLEAN;

typedef enum
{
    GPIO_enPORT_A = 0UL,
    GPIO_enPORT_B = 1UL,
    GPIO_enPORT_C = 2UL,
    GPIO_enPORT_D = 3UL,
    GPIO_enPORT_E = 4UL,
    GPIO_enPORT_F = 5UL,
    GPIO_enPORT_G = 6UL,
    GPIO_enPORT_H = 7UL,
    GPIO_enPORT_J = 8UL,
    GPIO_enPORT_K = 9UL,
    GPIO_enPORT_L = 10UL,
    GPIO_enPORT_M = 11UL,
    GPIO_enPORT_N = 12UL,
    GPIO_enPORT_P = 13UL,
    GPIO_enPORT_Q = 14UL,
    GPIO_enPORT_MAX = 15UL,
    GPIO_enPORT_UNDEF = UNDEF_VALUE,
} GPIO_nPORT;

typedef enum
{
    GPIO_enPINMASK_NONE = 0x0UL,
    GPIO_enPINMASK_0 = 0x1UL,
    GPIO_enPINMASK_1 = 0x2UL,
    GPIO_enPINMASK_2 = 0x4UL,
    GPIO_enPINMASK_3 = 0x8UL,
    GPIO_enPINMASK_4 = 0x10UL,
    GPIO_enPINMASK_5 = 0x20UL,
    GPIO_enPINMASK_6 = 0x40UL,
    GPIO_enPINMASK_7 = 0x80UL,
    GPIO_enPINMASK_ALL = 0xFFUL,
    GPIO_enPINMASK_MAX = 0x100UL,
    GPIO_enPINMASK_UNDEF = UNDEF_VALUE,
} GPIO_nPINMASK;

typedef enum
{
    GPIO_enPIN_0 = 0x0UL,
    GPIO_enPIN_1 = 0x1UL,
    GPIO_enPIN_2 = 0x2UL,
    GPIO_enPIN_3 = 0x3UL,
    GPIO_enPIN_4 = 0x4UL,
    GPIO_enPIN_5 = 0x5UL,
    GPIO_enPIN_6 = 0x6UL,
    GPIO_enPIN_7 = 0x7UL,
    GPIO_enPIN_MAX = 0x8UL,
    GPIO_enPIN_UNDEF = UNDEF_VALUE,
} GPIO_nPIN;

typedef enum
{
    GPIO_enDIR_INPUT = 0UL,
    GPIO_enDIR_OUTPUT = 1UL,
    GPIO_enDIR_UNDEF = UNDEF_VALUE,
} GPIO_nDIR;

typedef enum
{
    GPIO_enSENSE_EDGE = 0UL,
    GPIO_enSENSE_LEVEL = 1UL,
    GPIO_enSENSE_UNDEF = UNDEF_VALUE,
} GPIO_nSENSE;

typedef enum
{
    GPIO_enINTTYPE_SINGLE = 0UL,
    GPIO_enINTTYPE_SEPARATE = 1UL,
    GPIO_enINTTYPE_UNDEF = UNDEF_VALUE,
} GPIO_nINTTYPE;

typedef enum
{
    GPIO_enEDGE_FALLING = 0UL,
    GPIO_enEDGE_RISING = 1UL,
    GPIO_enEDGE_BOTH = 2UL,
    GPIO_enEDGE_UNDEF = UNDEF_VALUE,
} GPIO_nEDGE;

typedef enum
{
    GPIO_enLEVEL_LOW = 0UL,
    GPIO_enLEVEL_HIGH = 1UL,
    GPIO_enLEVEL_UNDEF = UNDEF_VALUE,
} GPIO_nLEVEL;

typedef enum
{
    GPIO_enWAKE_STATUS_IDLE = 0UL,
    GPIO_enWAKE_STATUS_ASSERT = 1UL,
    GPIO_enWAKE_STATUS_UNDEF = UNDEF_VALUE,
} GPIO_nWAKE_STATUS;

typedef enum
{
    GPIO_enNORMAL_DRIVE_2mA = 0UL,
    GPIO_enNORMAL_DRIVE_4mA = 1UL,
    GPIO_enNORMAL_DRIVE_8mA = 2UL,
    GPIO_enNORMAL_DRIVE_MAX = 3UL,
    GPIO_enNORMAL_DRIVE_UNDEF = UNDEF_VALUE,
} GPIO_nNORMAL_DRIVE;

typedef enum
{
    GPIO_enDRIVE_MODE_LOW = 0UL,
    GPIO_enDRIVE_MODE_MID = 1UL,
    GPIO_enDRIVE_MODE_HIGH = 2UL,
    GPIO_enDRIVE_MODE_MAX = 3UL,
    GPIO_enDRIVE_MODE_UNDEF = UNDEF_VALUE,
} GPIO_nDRIVE_MODE;


typedef enum
{                         /*ModeDriver(2bit)            SlewRate(1bit)                  ExtendedDrive(1bit)                NormalDrive(3bits)*/
    GPIO_enDRIVE_2mA      = (UBase_t) (((UBase_t) 0UL << 12UL) | ((UBase_t) GPIO_enSTATE_DIS << 8UL) |  ((UBase_t) GPIO_enSTATE_DIS << 4UL) | (UBase_t) 0x1UL),
    GPIO_enDRIVE_4mA      = (UBase_t) (((UBase_t) 0UL << 12UL) | ((UBase_t) GPIO_enSTATE_DIS << 8UL) |  ((UBase_t) GPIO_enSTATE_DIS << 4UL) | (UBase_t) 0x2UL),
    GPIO_enDRIVE_8mA      = (UBase_t) (((UBase_t) 0UL << 12UL) | ((UBase_t) GPIO_enSTATE_DIS << 8UL) |  ((UBase_t) GPIO_enSTATE_DIS << 4UL) | (UBase_t) 0x4UL),
    GPIO_enDRIVE_8mA_SLR  = (UBase_t) (((UBase_t) 0UL << 12UL) | ((UBase_t) GPIO_enSTATE_ENA << 8UL) |  ((UBase_t) GPIO_enSTATE_DIS << 4UL) | (UBase_t) 0x4UL),
    GPIO_enDRIVE_6mA      = (UBase_t) (((UBase_t) 1UL << 12UL) | ((UBase_t) GPIO_enSTATE_DIS << 8UL) |  ((UBase_t) GPIO_enSTATE_DIS << 4UL) | (UBase_t) 0x4UL),
    GPIO_enDRIVE_10mA     = (UBase_t) (((UBase_t) 3UL << 12UL) | ((UBase_t) GPIO_enSTATE_DIS << 8UL) |  ((UBase_t) GPIO_enSTATE_ENA << 4UL) | (UBase_t) 0x4UL),
    GPIO_enDRIVE_10mA_SLR = (UBase_t) (((UBase_t) 3UL << 12UL) | ((UBase_t) GPIO_enSTATE_ENA << 8UL) |  ((UBase_t) GPIO_enSTATE_ENA << 4UL) | (UBase_t) 0x4UL),
    GPIO_enDRIVE_12mA     = (UBase_t) (((UBase_t) 3UL << 12UL) | ((UBase_t) GPIO_enSTATE_DIS << 8UL) |  ((UBase_t) GPIO_enSTATE_ENA << 4UL) | (UBase_t) 0x6UL),
    GPIO_enDRIVE_12mA_SLR = (UBase_t) (((UBase_t) 3UL << 12UL) | ((UBase_t) GPIO_enSTATE_ENA << 8UL) |  ((UBase_t) GPIO_enSTATE_ENA << 4UL) | (UBase_t) 0x6UL),
    GPIO_enDRIVE_UNDEF = UNDEF_VALUE,
} GPIO_nDRIVE;

typedef enum
{
    GPIO_enFUNCTION_GPIO = 0UL,
    GPIO_enFUNCTION_PERIPHERAL = 1UL,
    GPIO_enFUNCTION_UNDEF = UNDEF_VALUE,
} GPIO_nFUNCTION;

typedef enum
{
    GPIO_enLOCK_UNLOCKED = 0UL,
    GPIO_enLOCK_LOCKED = 1UL,
    GPIO_enLOCK_UNDEF = UNDEF_VALUE,
} GPIO_nLOCK;

typedef enum
{
    GPIO_enDRIVE_CAPABILITY_NORMAL = 0UL,
    GPIO_enDRIVE_CAPABILITY_EXTENDED = 1UL,
    GPIO_enDRIVE_CAPABILITY_UNDEF = UNDEF_VALUE,
} GPIO_nDRIVE_CAPABILITY;

typedef enum
{
    GPIO_enOUTMODE_PUSHPULL = 0UL,
    GPIO_enOUTMODE_OPENDRAIN = 1UL,
    GPIO_enOUTMODE_UNDEF = UNDEF_VALUE,
} GPIO_nOUTMODE;
typedef enum
{
    GPIO_enRESMODE_INACTIVE = 0UL,
    GPIO_enRESMODE_PULLUP = 1UL,
    GPIO_enRESMODE_PULLDOWN = 2UL,
    GPIO_enRESMODE_UNDEF = UNDEF_VALUE,
} GPIO_nRESMODE;

/*PORT PIN VALUE*/
typedef enum
{
    /*GPIOA*/
    GPIO_enGPIOA0 = (UBase_t) (((UBase_t) GPIO_enPORT_A << 16UL) | ((UBase_t) GPIO_enPIN_0 << 8UL) | (0UL)),
    GPIO_enU0Rx_A0 = (UBase_t) (((UBase_t) GPIO_enPORT_A << 16UL) | ((UBase_t) GPIO_enPIN_0 << 8UL) | (1UL)),
    GPIO_enI2C9SCL_A0 = (UBase_t) (((UBase_t) GPIO_enPORT_A << 16UL) | ((UBase_t) GPIO_enPIN_0 << 8UL) | (2UL)),
    GPIO_enT0CCP0_A0 = (UBase_t) (((UBase_t) GPIO_enPORT_A << 16UL) | ((UBase_t) GPIO_enPIN_0 << 8UL) | (3UL)),
    GPIO_enCAN0Rx_A0 = (UBase_t) (((UBase_t) GPIO_enPORT_A << 16UL) | ((UBase_t) GPIO_enPIN_0 << 8UL) | (7UL)),

    GPIO_enGPIOA1 = (UBase_t) (((UBase_t) GPIO_enPORT_A << 16UL) | ((UBase_t) GPIO_enPIN_1 << 8UL) | (0UL)),
    GPIO_enU0Tx_A1 = (UBase_t) (((UBase_t) GPIO_enPORT_A << 16UL) | ((UBase_t) GPIO_enPIN_1 << 8UL) | (1UL)),
    GPIO_enI2C9SDA_A1 = (UBase_t) (((UBase_t) GPIO_enPORT_A << 16UL) | ((UBase_t) GPIO_enPIN_1 << 8UL) | (2UL)),
    GPIO_enT0CCP1_A1 = (UBase_t) (((UBase_t) GPIO_enPORT_A << 16UL) | ((UBase_t) GPIO_enPIN_1 << 8UL) | (3UL)),
    GPIO_enCAN0Tx_A1 = (UBase_t) (((UBase_t) GPIO_enPORT_A << 16UL) | ((UBase_t) GPIO_enPIN_1 << 8UL) | (7UL)),

    GPIO_enGPIOA2 = (UBase_t) (((UBase_t) GPIO_enPORT_A << 16UL) | ((UBase_t) GPIO_enPIN_2 << 8UL) | (0UL)),
    GPIO_enU4Rx_A2 = (UBase_t) (((UBase_t) GPIO_enPORT_A << 16UL) | ((UBase_t) GPIO_enPIN_2 << 8UL) | (1UL)),
    GPIO_enI2C8SCL_A2 = (UBase_t) (((UBase_t) GPIO_enPORT_A << 16UL) | ((UBase_t) GPIO_enPIN_2 << 8UL) | (2UL)),
    GPIO_enT1CCP0_A2 = (UBase_t) (((UBase_t) GPIO_enPORT_A << 16UL) | ((UBase_t) GPIO_enPIN_2 << 8UL) | (3UL)),
    GPIO_enSSI0Clk_A2 = (UBase_t) (((UBase_t) GPIO_enPORT_A << 16UL) | ((UBase_t) GPIO_enPIN_2 << 8UL) | (15UL)),

    GPIO_enGPIOA3 = (UBase_t) (((UBase_t) GPIO_enPORT_A << 16UL) | ((UBase_t) GPIO_enPIN_3 << 8UL) | (0UL)),
    GPIO_enU4Tx_A3 = (UBase_t) (((UBase_t) GPIO_enPORT_A << 16UL) | ((UBase_t) GPIO_enPIN_3 << 8UL) | (1UL)),
    GPIO_enI2C8SDA_A3 = (UBase_t) (((UBase_t) GPIO_enPORT_A << 16UL) | ((UBase_t) GPIO_enPIN_3 << 8UL) | (2UL)),
    GPIO_enT1CCP1_A3 = (UBase_t) (((UBase_t) GPIO_enPORT_A << 16UL) | ((UBase_t) GPIO_enPIN_3 << 8UL) | (3UL)),
    GPIO_enSSI0Fss_A3 = (UBase_t) (((UBase_t) GPIO_enPORT_A << 16UL) | ((UBase_t) GPIO_enPIN_3 << 8UL) | (15UL)),

    GPIO_enGPIOA4 = (UBase_t) (((UBase_t) GPIO_enPORT_A << 16UL) | ((UBase_t) GPIO_enPIN_4 << 8UL) | (0UL)),
    GPIO_enU3Rx_A4 = (UBase_t) (((UBase_t) GPIO_enPORT_A << 16UL) | ((UBase_t) GPIO_enPIN_4 << 8UL) | (1UL)),
    GPIO_enI2C7SCL_A4 = (UBase_t) (((UBase_t) GPIO_enPORT_A << 16UL) | ((UBase_t) GPIO_enPIN_4 << 8UL) | (2UL)),
    GPIO_enT2CCP0_A4 = (UBase_t) (((UBase_t) GPIO_enPORT_A << 16UL) | ((UBase_t) GPIO_enPIN_4 << 8UL) | (3UL)),
    GPIO_enSSI0Tx_A4 = (UBase_t) (((UBase_t) GPIO_enPORT_A << 16UL) | ((UBase_t) GPIO_enPIN_4 << 8UL) | (15UL)),
    GPIO_enSSI0XDAT0_A4 = (UBase_t) (((UBase_t) GPIO_enPORT_A << 16UL) | ((UBase_t) GPIO_enPIN_4 << 8UL) | (15UL)),

    GPIO_enGPIOA5 = (UBase_t) (((UBase_t) GPIO_enPORT_A << 16UL) | ((UBase_t) GPIO_enPIN_5 << 8UL) | (0UL)),
    GPIO_enU3Tx_A5 = (UBase_t) (((UBase_t) GPIO_enPORT_A << 16UL) | ((UBase_t) GPIO_enPIN_5 << 8UL) | (1UL)),
    GPIO_enI2C7SDA_A5 = (UBase_t) (((UBase_t) GPIO_enPORT_A << 16UL) | ((UBase_t) GPIO_enPIN_5 << 8UL) | (2UL)),
    GPIO_enT2CCP1_A5 = (UBase_t) (((UBase_t) GPIO_enPORT_A << 16UL) | ((UBase_t) GPIO_enPIN_5 << 8UL) | (3UL)),
    GPIO_enSSI0Rx_A5 = (UBase_t) (((UBase_t) GPIO_enPORT_A << 16UL) | ((UBase_t) GPIO_enPIN_5 << 8UL) | (15UL)),
    GPIO_enSSI0XDAT1_A5 = (UBase_t) (((UBase_t) GPIO_enPORT_A << 16UL) | ((UBase_t) GPIO_enPIN_5 << 8UL) | (15UL)),

    GPIO_enGPIOA6 = (UBase_t) (((UBase_t) GPIO_enPORT_A << 16UL) | ((UBase_t) GPIO_enPIN_6 << 8UL) | (0UL)),
    GPIO_enU2Rx_A6 = (UBase_t) (((UBase_t) GPIO_enPORT_A << 16UL) | ((UBase_t) GPIO_enPIN_6 << 8UL) | (1UL)),
    GPIO_enI2C6SCL_A6 = (UBase_t) (((UBase_t) GPIO_enPORT_A << 16UL) | ((UBase_t) GPIO_enPIN_6 << 8UL) | (2UL)),
    GPIO_enT3CCP0_A6 = (UBase_t) (((UBase_t) GPIO_enPORT_A << 16UL) | ((UBase_t) GPIO_enPIN_6 << 8UL) | (3UL)),
    GPIO_enUSB0EPEN_A6 = (UBase_t) (((UBase_t) GPIO_enPORT_A << 16UL) | ((UBase_t) GPIO_enPIN_6 << 8UL) | (5UL)),
    GPIO_enSSI0XDAT2_A6 = (UBase_t) (((UBase_t) GPIO_enPORT_A << 16UL) | ((UBase_t) GPIO_enPIN_6 << 8UL) | (13UL)),
    GPIO_enEPI0S8_A6 = (UBase_t) (((UBase_t) GPIO_enPORT_A << 16UL) | ((UBase_t) GPIO_enPIN_6 << 8UL) | (15UL)),

    GPIO_enGPIOA7 = (UBase_t) (((UBase_t) GPIO_enPORT_A << 16UL) | ((UBase_t) GPIO_enPIN_7 << 8UL) | (0UL)),
    GPIO_enU2Tx_A7 = (UBase_t) (((UBase_t) GPIO_enPORT_A << 16UL) | ((UBase_t) GPIO_enPIN_7 << 8UL) | (1UL)),
    GPIO_enI2C6SDA_A7 = (UBase_t) (((UBase_t) GPIO_enPORT_A << 16UL) | ((UBase_t) GPIO_enPIN_7 << 8UL) | (2UL)),
    GPIO_enT3CCP1_A7 = (UBase_t) (((UBase_t) GPIO_enPORT_A << 16UL) | ((UBase_t) GPIO_enPIN_7 << 8UL) | (3UL)),
    GPIO_enUSB0PFLT_A7 = (UBase_t) (((UBase_t) GPIO_enPORT_A << 16UL) | ((UBase_t) GPIO_enPIN_7 << 8UL) | (5UL)),
    GPIO_enUSB0EPEN_A7 = (UBase_t) (((UBase_t) GPIO_enPORT_A << 16UL) | ((UBase_t) GPIO_enPIN_7 << 8UL) | (11UL)),
    GPIO_enSSI0XDAT3_A7 = (UBase_t) (((UBase_t) GPIO_enPORT_A << 16UL) | ((UBase_t) GPIO_enPIN_7 << 8UL) | (13UL)),
    GPIO_enEPI0S9_A7 = (UBase_t) (((UBase_t) GPIO_enPORT_A << 16UL) | ((UBase_t) GPIO_enPIN_7 << 8UL) | (15UL)),

    /*GPIOB*/
    GPIO_enGPIOB0 = (UBase_t) (((UBase_t) GPIO_enPORT_B << 16UL) | ((UBase_t) GPIO_enPIN_0 << 8UL) | (0UL)),
    GPIO_enU1Rx_B0 = (UBase_t) (((UBase_t) GPIO_enPORT_B << 16UL) | ((UBase_t) GPIO_enPIN_0 << 8UL) | (1UL)),
    GPIO_enI2C5SCL_B0 = (UBase_t) (((UBase_t) GPIO_enPORT_B << 16UL) | ((UBase_t) GPIO_enPIN_0 << 8UL) | (2UL)),
    GPIO_enT4CCP0_B0 = (UBase_t) (((UBase_t) GPIO_enPORT_B << 16UL) | ((UBase_t) GPIO_enPIN_0 << 8UL) | (3UL)),
    GPIO_enCAN1Rx_B0 = (UBase_t) (((UBase_t) GPIO_enPORT_B << 16UL) | ((UBase_t) GPIO_enPIN_0 << 8UL) | (7UL)),

    GPIO_enGPIOB1 = (UBase_t) (((UBase_t) GPIO_enPORT_B << 16UL) | ((UBase_t) GPIO_enPIN_1 << 8UL) | (0UL)),
    GPIO_enU1Tx_B1 = (UBase_t) (((UBase_t) GPIO_enPORT_B << 16UL) | ((UBase_t) GPIO_enPIN_1 << 8UL) | (1UL)),
    GPIO_enI2C5SDA_B1 = (UBase_t) (((UBase_t) GPIO_enPORT_B << 16UL) | ((UBase_t) GPIO_enPIN_1 << 8UL) | (2UL)),
    GPIO_enT4CCP1_B1 = (UBase_t) (((UBase_t) GPIO_enPORT_B << 16UL) | ((UBase_t) GPIO_enPIN_1 << 8UL) | (3UL)),
    GPIO_enCAN1Tx_B1 = (UBase_t) (((UBase_t) GPIO_enPORT_B << 16UL) | ((UBase_t) GPIO_enPIN_1 << 8UL) | (7UL)),

    GPIO_enGPIOB2 = (UBase_t) (((UBase_t) GPIO_enPORT_B << 16UL) | ((UBase_t) GPIO_enPIN_2 << 8UL) | (0UL)),
    GPIO_enI2C0SCL_B2 = (UBase_t) (((UBase_t) GPIO_enPORT_B << 16UL) | ((UBase_t) GPIO_enPIN_2 << 8UL) | (2UL)),
    GPIO_enT5CCP0_B2 = (UBase_t) (((UBase_t) GPIO_enPORT_B << 16UL) | ((UBase_t) GPIO_enPIN_2 << 8UL) | (3UL)),
    GPIO_enUSB0STP_B2 = (UBase_t) (((UBase_t) GPIO_enPORT_B << 16UL) | ((UBase_t) GPIO_enPIN_2 << 8UL) | (14UL)),
    GPIO_enEPI0S27_B2 = (UBase_t) (((UBase_t) GPIO_enPORT_B << 16UL) | ((UBase_t) GPIO_enPIN_2 << 8UL) | (15UL)),

    GPIO_enGPIOB3 = (UBase_t) (((UBase_t) GPIO_enPORT_B << 16UL) | ((UBase_t) GPIO_enPIN_3 << 8UL) | (0UL)),
    GPIO_enI2C0SDA_B3 = (UBase_t) (((UBase_t) GPIO_enPORT_B << 16UL) | ((UBase_t) GPIO_enPIN_3 << 8UL) | (2UL)),
    GPIO_enT5CCP1_B3 = (UBase_t) (((UBase_t) GPIO_enPORT_B << 16UL) | ((UBase_t) GPIO_enPIN_3 << 8UL) | (3UL)),
    GPIO_enUSB0CLK_B3 = (UBase_t) (((UBase_t) GPIO_enPORT_B << 16UL) | ((UBase_t) GPIO_enPIN_3 << 8UL) | (14UL)),
    GPIO_enEPI0S28_B3 = (UBase_t) (((UBase_t) GPIO_enPORT_B << 16UL) | ((UBase_t) GPIO_enPIN_3 << 8UL) | (15UL)),

    GPIO_enGPIOB4 = (UBase_t) (((UBase_t) GPIO_enPORT_B << 16UL) | ((UBase_t) GPIO_enPIN_4 << 8UL) | (0UL)),
    GPIO_enU0CTS_B4 = (UBase_t) (((UBase_t) GPIO_enPORT_B << 16UL) | ((UBase_t) GPIO_enPIN_4 << 8UL) | (1UL)),
    GPIO_enI2C5SCL_B4 = (UBase_t) (((UBase_t) GPIO_enPORT_B << 16UL) | ((UBase_t) GPIO_enPIN_4 << 8UL) | (2UL)),
    GPIO_enSSI1Fss_B4 = (UBase_t) (((UBase_t) GPIO_enPORT_B << 16UL) | ((UBase_t) GPIO_enPIN_4 << 8UL) | (15UL)),

    GPIO_enGPIOB5 = (UBase_t) (((UBase_t) GPIO_enPORT_B << 16UL) | ((UBase_t) GPIO_enPIN_5 << 8UL) | (0UL)),
    GPIO_enU0RTS_B5 = (UBase_t) (((UBase_t) GPIO_enPORT_B << 16UL) | ((UBase_t) GPIO_enPIN_5 << 8UL) | (1UL)),
    GPIO_enI2C5SDA_B5 = (UBase_t) (((UBase_t) GPIO_enPORT_B << 16UL) | ((UBase_t) GPIO_enPIN_5 << 8UL) | (2UL)),
    GPIO_enSSI1Clk_B5 = (UBase_t) (((UBase_t) GPIO_enPORT_B << 16UL) | ((UBase_t) GPIO_enPIN_5 << 8UL) | (15UL)),

    GPIO_enGPIOB6 = (UBase_t) (((UBase_t) GPIO_enPORT_B << 16UL) | ((UBase_t) GPIO_enPIN_6 << 8UL) | (0UL)),

    GPIO_enGPIOB7 = (UBase_t) (((UBase_t) GPIO_enPORT_B << 16UL) | ((UBase_t) GPIO_enPIN_7 << 8UL) | (0UL)),

    /*GPIOC*/
    GPIO_enGPIOC0 = (UBase_t) (((UBase_t) GPIO_enPORT_C << 16UL) | ((UBase_t) GPIO_enPIN_0 << 8UL) | (0UL)),
    GPIO_enTCK_C0 = (UBase_t) (((UBase_t) GPIO_enPORT_C << 16UL) | ((UBase_t) GPIO_enPIN_0 << 8UL) | (1UL)),
    GPIO_enSWCLK_C0 = (UBase_t) (((UBase_t) GPIO_enPORT_C << 16UL) | ((UBase_t) GPIO_enPIN_0 << 8UL) | (1UL)),

    GPIO_enGPIOC1 = (UBase_t) (((UBase_t) GPIO_enPORT_C << 16UL) | ((UBase_t) GPIO_enPIN_1 << 8UL) | (0UL)),
    GPIO_enTMS_C1 = (UBase_t) (((UBase_t) GPIO_enPORT_C << 16UL) | ((UBase_t) GPIO_enPIN_1 << 8UL) | (1UL)),
    GPIO_enSWDIO_C1 = (UBase_t) (((UBase_t) GPIO_enPORT_C << 16UL) | ((UBase_t) GPIO_enPIN_1 << 8UL) | (1UL)),

    GPIO_enGPIOC2 = (UBase_t) (((UBase_t) GPIO_enPORT_C << 16UL) | ((UBase_t) GPIO_enPIN_2 << 8UL) | (0UL)),
    GPIO_enTDI_C2 = (UBase_t) (((UBase_t) GPIO_enPORT_C << 16UL) | ((UBase_t) GPIO_enPIN_2 << 8UL) | (1UL)),

    GPIO_enGPIOC3 = (UBase_t) (((UBase_t) GPIO_enPORT_C << 16UL) | ((UBase_t) GPIO_enPIN_3 << 8UL) | (0UL)),
    GPIO_enTDO_C3 = (UBase_t) (((UBase_t) GPIO_enPORT_C << 16UL) | ((UBase_t) GPIO_enPIN_3 << 8UL) | (1UL)),
    GPIO_enSWO_C3 = (UBase_t) (((UBase_t) GPIO_enPORT_C << 16UL) | ((UBase_t) GPIO_enPIN_3 << 8UL) | (1UL)),

    GPIO_enGPIOC4 = (UBase_t) (((UBase_t) GPIO_enPORT_C << 16UL) | ((UBase_t) GPIO_enPIN_4 << 8UL) | (0UL)),
    GPIO_enU7Rx_C4 = (UBase_t) (((UBase_t) GPIO_enPORT_C << 16UL) | ((UBase_t) GPIO_enPIN_4 << 8UL) | (1UL)),
    GPIO_enEPI0S7_C4 = (UBase_t) (((UBase_t) GPIO_enPORT_C << 16UL) | ((UBase_t) GPIO_enPIN_4 << 8UL) | (15UL)),

    GPIO_enGPIOC5 = (UBase_t) (((UBase_t) GPIO_enPORT_C << 16UL) | ((UBase_t) GPIO_enPIN_5 << 8UL) | (0UL)),
    GPIO_enU7Tx_C5 = (UBase_t) (((UBase_t) GPIO_enPORT_C << 16UL) | ((UBase_t) GPIO_enPIN_5 << 8UL) | (1UL)),
    GPIO_enRTCCLK_C5 = (UBase_t) (((UBase_t) GPIO_enPORT_C << 16UL) | ((UBase_t) GPIO_enPIN_5 << 8UL) | (7UL)),
    GPIO_enEPI0S6_C5 = (UBase_t) (((UBase_t) GPIO_enPORT_C << 16UL) | ((UBase_t) GPIO_enPIN_5 << 8UL) | (15UL)),

    GPIO_enGPIOC6 = (UBase_t) (((UBase_t) GPIO_enPORT_C << 16UL) | ((UBase_t) GPIO_enPIN_6 << 8UL) | (0UL)),
    GPIO_enU5Rx_C6 = (UBase_t) (((UBase_t) GPIO_enPORT_C << 16UL) | ((UBase_t) GPIO_enPIN_6 << 8UL) | (1UL)),
    GPIO_enEPI0S5_C6 = (UBase_t) (((UBase_t) GPIO_enPORT_C << 16UL) | ((UBase_t) GPIO_enPIN_6 << 8UL) | (15UL)),

    GPIO_enGPIOC7 = (UBase_t) (((UBase_t) GPIO_enPORT_C << 16UL) | ((UBase_t) GPIO_enPIN_7 << 8UL) | (0UL)),
    GPIO_enU5Tx_C7 = (UBase_t) (((UBase_t) GPIO_enPORT_C << 16UL) | ((UBase_t) GPIO_enPIN_6 << 8UL) | (1UL)),
    GPIO_enEPI0S4_C7 = (UBase_t) (((UBase_t) GPIO_enPORT_C << 16UL) | ((UBase_t) GPIO_enPIN_6 << 8UL) | (15UL)),

    /*GPIOD*/
    GPIO_enGPIOD0 = (UBase_t) (((UBase_t) GPIO_enPORT_D << 16UL) | ((UBase_t) GPIO_enPIN_0 << 8UL) | (0UL)),
    GPIO_enI2C7SCL_D0 = (UBase_t) (((UBase_t) GPIO_enPORT_D << 16UL) | ((UBase_t) GPIO_enPIN_0 << 8UL) | (1UL)),
    GPIO_enT0CCP0_D0 = (UBase_t) (((UBase_t) GPIO_enPORT_D << 16UL) | ((UBase_t) GPIO_enPIN_0 << 8UL) | (2UL)),
    GPIO_enC0O_D0 = (UBase_t) (((UBase_t) GPIO_enPORT_D << 16UL) | ((UBase_t) GPIO_enPIN_0 << 8UL) | (4UL)),
    GPIO_enSSI2Rx_D0 = (UBase_t) (((UBase_t) GPIO_enPORT_D << 16UL) | ((UBase_t) GPIO_enPIN_0 << 8UL) | (15UL)),
    GPIO_enSSI2XDAT1_D0 = (UBase_t) (((UBase_t) GPIO_enPORT_D << 16UL) | ((UBase_t) GPIO_enPIN_0 << 8UL) | (15UL)),

    GPIO_enGPIOD1 = (UBase_t) (((UBase_t) GPIO_enPORT_D << 16UL) | ((UBase_t) GPIO_enPIN_1 << 8UL) | (0UL)),
    GPIO_enI2C7SDA_D1 = (UBase_t) (((UBase_t) GPIO_enPORT_D << 16UL) | ((UBase_t) GPIO_enPIN_1 << 8UL) | (1UL)),
    GPIO_enT0CCP1_D1 = (UBase_t) (((UBase_t) GPIO_enPORT_D << 16UL) | ((UBase_t) GPIO_enPIN_1 << 8UL) | (2UL)),
    GPIO_enC1O_D1 = (UBase_t) (((UBase_t) GPIO_enPORT_D << 16UL) | ((UBase_t) GPIO_enPIN_1 << 8UL) | (4UL)),
    GPIO_enSSI2Tx_D1 = (UBase_t) (((UBase_t) GPIO_enPORT_D << 16UL) | ((UBase_t) GPIO_enPIN_1 << 8UL) | (15UL)),
    GPIO_enSSI2XDAT0_D1 = (UBase_t) (((UBase_t) GPIO_enPORT_D << 16UL) | ((UBase_t) GPIO_enPIN_1 << 8UL) | (15UL)),

    GPIO_enGPIOD2 = (UBase_t) (((UBase_t) GPIO_enPORT_D << 16UL) | ((UBase_t) GPIO_enPIN_2 << 8UL) | (0UL)),
    GPIO_enI2C8SCL_D2 = (UBase_t) (((UBase_t) GPIO_enPORT_D << 16UL) | ((UBase_t) GPIO_enPIN_2 << 8UL) | (1UL)),
    GPIO_enT1CCP0_D2 = (UBase_t) (((UBase_t) GPIO_enPORT_D << 16UL) | ((UBase_t) GPIO_enPIN_2 << 8UL) | (2UL)),
    GPIO_enC2O_D2 = (UBase_t) (((UBase_t) GPIO_enPORT_D << 16UL) | ((UBase_t) GPIO_enPIN_2 << 8UL) | (4UL)),
    GPIO_enSSI2Fss_D2 = (UBase_t) (((UBase_t) GPIO_enPORT_D << 16UL) | ((UBase_t) GPIO_enPIN_2 << 8UL) | (15UL)),

    GPIO_enGPIOD3 = (UBase_t) (((UBase_t) GPIO_enPORT_D << 16UL) | ((UBase_t) GPIO_enPIN_3 << 8UL) | (0UL)),
    GPIO_enI2C8SDA_D3 = (UBase_t) (((UBase_t) GPIO_enPORT_D << 16UL) | ((UBase_t) GPIO_enPIN_3 << 8UL) | (1UL)),
    GPIO_enT1CCP1_D3 = (UBase_t) (((UBase_t) GPIO_enPORT_D << 16UL) | ((UBase_t) GPIO_enPIN_3 << 8UL) | (2UL)),
    GPIO_enSSI2Clk_D3 = (UBase_t) (((UBase_t) GPIO_enPORT_D << 16UL) | ((UBase_t) GPIO_enPIN_3 << 8UL) | (15UL)),

    GPIO_enGPIOD4 = (UBase_t) (((UBase_t) GPIO_enPORT_D << 16UL) | ((UBase_t) GPIO_enPIN_4 << 8UL) | (0UL)),
    GPIO_enU2Rx_D4 = (UBase_t) (((UBase_t) GPIO_enPORT_D << 16UL) | ((UBase_t) GPIO_enPIN_4 << 8UL) | (1UL)),
    GPIO_enT3CCP0_D4 = (UBase_t) (((UBase_t) GPIO_enPORT_D << 16UL) | ((UBase_t) GPIO_enPIN_4 << 8UL) | (3UL)),
    GPIO_enSSI1XDAT2_D4 = (UBase_t) (((UBase_t) GPIO_enPORT_D << 16UL) | ((UBase_t) GPIO_enPIN_4 << 8UL) | (15UL)),

    GPIO_enGPIOD5 = (UBase_t) (((UBase_t) GPIO_enPORT_D << 16UL) | ((UBase_t) GPIO_enPIN_5 << 8UL) | (0UL)),
    GPIO_enU2Tx_D5 = (UBase_t) (((UBase_t) GPIO_enPORT_D << 16UL) | ((UBase_t) GPIO_enPIN_5 << 8UL) | (1UL)),
    GPIO_enT3CCP1_D5 = (UBase_t) (((UBase_t) GPIO_enPORT_D << 16UL) | ((UBase_t) GPIO_enPIN_5 << 8UL) | (3UL)),
    GPIO_enSSI1XDAT3_D5 = (UBase_t) (((UBase_t) GPIO_enPORT_D << 16UL) | ((UBase_t) GPIO_enPIN_5 << 8UL) | (15UL)),

    GPIO_enGPIOD6 = (UBase_t) (((UBase_t) GPIO_enPORT_D << 16UL) | ((UBase_t) GPIO_enPIN_6 << 8UL) | (0UL)),
    GPIO_enU2RTS_D6 = (UBase_t) (((UBase_t) GPIO_enPORT_D << 16UL) | ((UBase_t) GPIO_enPIN_6 << 8UL) | (1UL)),
    GPIO_enT4CCP0_D6 = (UBase_t) (((UBase_t) GPIO_enPORT_D << 16UL) | ((UBase_t) GPIO_enPIN_6 << 8UL) | (3UL)),
    GPIO_enUSB0EPEN_D6 = (UBase_t) (((UBase_t) GPIO_enPORT_D << 16UL) | ((UBase_t) GPIO_enPIN_6 << 8UL) | (5UL)),
    GPIO_enSSI2XDAT3_D6 = (UBase_t) (((UBase_t) GPIO_enPORT_D << 16UL) | ((UBase_t) GPIO_enPIN_6 << 8UL) | (15UL)),

    GPIO_enGPIOD7 = (UBase_t) (((UBase_t) GPIO_enPORT_D << 16UL) | ((UBase_t) GPIO_enPIN_7 << 8UL) | (0UL)),
    GPIO_enU2CTS_D7 = (UBase_t) (((UBase_t) GPIO_enPORT_D << 16UL) | ((UBase_t) GPIO_enPIN_7 << 8UL) | (1UL)),
    GPIO_enT4CCP1_D7 = (UBase_t) (((UBase_t) GPIO_enPORT_D << 16UL) | ((UBase_t) GPIO_enPIN_7 << 8UL) | (3UL)),
    GPIO_enUSB0PFLT_D7 = (UBase_t) (((UBase_t) GPIO_enPORT_D << 16UL) | ((UBase_t) GPIO_enPIN_7 << 8UL) | (5UL)),
    GPIO_enNMI_D7 = (UBase_t) (((UBase_t) GPIO_enPORT_D << 16UL) | ((UBase_t) GPIO_enPIN_7 << 8UL) | (8UL)),
    GPIO_enSSI2XDAT2_D7 = (UBase_t) (((UBase_t) GPIO_enPORT_D << 16UL) | ((UBase_t) GPIO_enPIN_7 << 8UL) | (15UL)),

    /*GPIOE*/
    GPIO_enGPIOE0 = (UBase_t) (((UBase_t) GPIO_enPORT_E << 16UL) | ((UBase_t) GPIO_enPIN_0 << 8UL) | (0UL)),
    GPIO_enU1RTS_E0 = (UBase_t) (((UBase_t) GPIO_enPORT_E << 16UL) | ((UBase_t) GPIO_enPIN_0 << 8UL) | (1UL)),

    GPIO_enGPIOE1 = (UBase_t) (((UBase_t) GPIO_enPORT_E << 16UL) | ((UBase_t) GPIO_enPIN_1 << 8UL) | (0UL)),
    GPIO_enU1DSR_E1 = (UBase_t) (((UBase_t) GPIO_enPORT_E << 16UL) | ((UBase_t) GPIO_enPIN_1 << 8UL) | (1UL)),

    GPIO_enGPIOE2 = (UBase_t) (((UBase_t) GPIO_enPORT_E << 16UL) | ((UBase_t) GPIO_enPIN_2 << 8UL) | (0UL)),
    GPIO_enU1DCD_E2 = (UBase_t) (((UBase_t) GPIO_enPORT_E << 16UL) | ((UBase_t) GPIO_enPIN_2 << 8UL) | (0UL)),

    GPIO_enGPIOE3 = (UBase_t) (((UBase_t) GPIO_enPORT_E << 16UL) | ((UBase_t) GPIO_enPIN_3 << 8UL) | (0UL)),
    GPIO_enU1DTR_E3 = (UBase_t) (((UBase_t) GPIO_enPORT_E << 16UL) | ((UBase_t) GPIO_enPIN_2 << 8UL) | (0UL)),

    GPIO_enGPIOE4 = (UBase_t) (((UBase_t) GPIO_enPORT_E << 16UL) | ((UBase_t) GPIO_enPIN_4 << 8UL) | (0UL)),
    GPIO_enU1RI_E4 = (UBase_t) (((UBase_t) GPIO_enPORT_E << 16UL) | ((UBase_t) GPIO_enPIN_4 << 8UL) | (1UL)),
    GPIO_enSSI1Tx_E4 = (UBase_t) (((UBase_t) GPIO_enPORT_E << 16UL) | ((UBase_t) GPIO_enPIN_4 << 8UL) | (15UL)),
    GPIO_enSSI1XDAT0_E4 = (UBase_t) (((UBase_t) GPIO_enPORT_E << 16UL) | ((UBase_t) GPIO_enPIN_4 << 8UL) | (15UL)),

    GPIO_enGPIOE5 = (UBase_t) (((UBase_t) GPIO_enPORT_E << 16UL) | ((UBase_t) GPIO_enPIN_5 << 8UL) | (0UL)),
    GPIO_enSSI1Rx_E5 = (UBase_t) (((UBase_t) GPIO_enPORT_E << 16UL) | ((UBase_t) GPIO_enPIN_5 << 8UL) | (15UL)),
    GPIO_enSSI1XDAT1_E5 = (UBase_t) (((UBase_t) GPIO_enPORT_E << 16UL) | ((UBase_t) GPIO_enPIN_5 << 8UL) | (15UL)),

    GPIO_enGPIOE6 = (UBase_t) (((UBase_t) GPIO_enPORT_E << 16UL) | ((UBase_t) GPIO_enPIN_6 << 8UL) | (0UL)),

    GPIO_enGPIOE7 = (UBase_t) (((UBase_t) GPIO_enPORT_E << 16UL) | ((UBase_t) GPIO_enPIN_7 << 8UL) | (0UL)),

    /*GPIOF*/
    GPIO_enGPIOF0 = (UBase_t) (((UBase_t) GPIO_enPORT_F << 16UL) | ((UBase_t) GPIO_enPIN_0 << 8UL) | (0UL)),
    GPIO_enEN0LED0_F0 = (UBase_t) (((UBase_t) GPIO_enPORT_F << 16UL) | ((UBase_t) GPIO_enPIN_0 << 8UL) | (5UL)),
    GPIO_enM0PWM0_F0 = (UBase_t) (((UBase_t) GPIO_enPORT_F << 16UL) | ((UBase_t) GPIO_enPIN_0 << 8UL) | (6UL)),
    GPIO_enSSI3Rx_F0 = (UBase_t) (((UBase_t) GPIO_enPORT_F << 16UL) | ((UBase_t) GPIO_enPIN_0 << 8UL) | (14UL)),
    GPIO_enSSI3XDAT1_F0 = (UBase_t) (((UBase_t) GPIO_enPORT_F << 16UL) | ((UBase_t) GPIO_enPIN_0 << 8UL) | (14UL)),
    GPIO_enTRD2_F0 = (UBase_t) (((UBase_t) GPIO_enPORT_F << 16UL) | ((UBase_t) GPIO_enPIN_0 << 8UL) | (15UL)),

    GPIO_enGPIOF1 = (UBase_t) (((UBase_t) GPIO_enPORT_F << 16UL) | ((UBase_t) GPIO_enPIN_1 << 8UL) | (0UL)),
    GPIO_enEN0LED2_F1 = (UBase_t) (((UBase_t) GPIO_enPORT_F << 16UL) | ((UBase_t) GPIO_enPIN_1 << 8UL) | (5UL)),
    GPIO_enM0PWM1_F1 = (UBase_t) (((UBase_t) GPIO_enPORT_F << 16UL) | ((UBase_t) GPIO_enPIN_1 << 8UL) | (6UL)),
    GPIO_enSSI3Tx_F1 = (UBase_t) (((UBase_t) GPIO_enPORT_F << 16UL) | ((UBase_t) GPIO_enPIN_1 << 8UL) | (14UL)),
    GPIO_enSSI3XDAT0_F1 = (UBase_t) (((UBase_t) GPIO_enPORT_F << 16UL) | ((UBase_t) GPIO_enPIN_1 << 8UL) | (14UL)),
    GPIO_enTRD1_F1 = (UBase_t) (((UBase_t) GPIO_enPORT_F << 16UL) | ((UBase_t) GPIO_enPIN_1 << 8UL) | (15UL)),

    GPIO_enGPIOF2 = (UBase_t) (((UBase_t) GPIO_enPORT_F << 16UL) | ((UBase_t) GPIO_enPIN_2 << 8UL) | (0UL)),
    GPIO_enM0PWM2_F2 = (UBase_t) (((UBase_t) GPIO_enPORT_F << 16UL) | ((UBase_t) GPIO_enPIN_2 << 8UL) | (6UL)),
    GPIO_enSSI3Fss_F2 = (UBase_t) (((UBase_t) GPIO_enPORT_F << 16UL) | ((UBase_t) GPIO_enPIN_2 << 8UL) | (14UL)),
    GPIO_enTRD0_F2 = (UBase_t) (((UBase_t) GPIO_enPORT_F << 16UL) | ((UBase_t) GPIO_enPIN_2 << 8UL) | (15UL)),

    GPIO_enGPIOF3 = (UBase_t) (((UBase_t) GPIO_enPORT_F << 16UL) | ((UBase_t) GPIO_enPIN_3 << 8UL) | (0UL)),
    GPIO_enM0PWM3_F3 = (UBase_t) (((UBase_t) GPIO_enPORT_F << 16UL) | ((UBase_t) GPIO_enPIN_3 << 8UL) | (6UL)),
    GPIO_enSSI3Clk_F3 = (UBase_t) (((UBase_t) GPIO_enPORT_F << 16UL) | ((UBase_t) GPIO_enPIN_3 << 8UL) | (14UL)),
    GPIO_enTRCLK_F3 = (UBase_t) (((UBase_t) GPIO_enPORT_F << 16UL) | ((UBase_t) GPIO_enPIN_3 << 8UL) | (15UL)),

    GPIO_enGPIOF4 = (UBase_t) (((UBase_t) GPIO_enPORT_F << 16UL) | ((UBase_t) GPIO_enPIN_4 << 8UL) | (0UL)),
    GPIO_enEN0LED1_F4 = (UBase_t) (((UBase_t) GPIO_enPORT_F << 16UL) | ((UBase_t) GPIO_enPIN_4 << 8UL) | (5UL)),
    GPIO_enM0FAULT0_F4 = (UBase_t) (((UBase_t) GPIO_enPORT_F << 16UL) | ((UBase_t) GPIO_enPIN_4 << 8UL) | (6UL)),
    GPIO_enSSI3XDAT2_F4 = (UBase_t) (((UBase_t) GPIO_enPORT_F << 16UL) | ((UBase_t) GPIO_enPIN_4 << 8UL) | (14UL)),
    GPIO_enTRD3_F4 = (UBase_t) (((UBase_t) GPIO_enPORT_F << 16UL) | ((UBase_t) GPIO_enPIN_4 << 8UL) | (15UL)),

    GPIO_enGPIOF5 = (UBase_t) (((UBase_t) GPIO_enPORT_F << 16UL) | ((UBase_t) GPIO_enPIN_5 << 8UL) | (0UL)),

    GPIO_enGPIOF6 = (UBase_t) (((UBase_t) GPIO_enPORT_F << 16UL) | ((UBase_t) GPIO_enPIN_6 << 8UL) | (0UL)),

    GPIO_enGPIOF7 = (UBase_t) (((UBase_t) GPIO_enPORT_F << 16UL) | ((UBase_t) GPIO_enPIN_7 << 8UL) | (0UL)),

    /*GPIOG*/
    GPIO_enGPIOG0 = (UBase_t) (((UBase_t) GPIO_enPORT_G << 16UL) | ((UBase_t) GPIO_enPIN_0 << 8UL) | (0UL)),
    GPIO_enI2C1SCL_G0 = (UBase_t) (((UBase_t) GPIO_enPORT_G << 16UL) | ((UBase_t) GPIO_enPIN_0 << 8UL) | (2UL)),
    GPIO_enEN0PPS_G0 = (UBase_t) (((UBase_t) GPIO_enPORT_G << 16UL) | ((UBase_t) GPIO_enPIN_0 << 8UL) | (5UL)),
    GPIO_enM0PWM4_G0 = (UBase_t) (((UBase_t) GPIO_enPORT_G << 16UL) | ((UBase_t) GPIO_enPIN_0 << 8UL) | (6UL)),
    GPIO_enEPI0S11_G0 = (UBase_t) (((UBase_t) GPIO_enPORT_G << 16UL) | ((UBase_t) GPIO_enPIN_0 << 8UL) | (15UL)),

    GPIO_enGPIOG1 = (UBase_t) (((UBase_t) GPIO_enPORT_G << 16UL) | ((UBase_t) GPIO_enPIN_1 << 8UL) | (0UL)),
    GPIO_enI2C1SDA_G1 = (UBase_t) (((UBase_t) GPIO_enPORT_G << 16UL) | ((UBase_t) GPIO_enPIN_1 << 8UL) | (2UL)),
    GPIO_enM0PWM5_G1 = (UBase_t) (((UBase_t) GPIO_enPORT_G << 16UL) | ((UBase_t) GPIO_enPIN_1 << 8UL) | (6UL)),
    GPIO_enEPI0S10_G1 = (UBase_t) (((UBase_t) GPIO_enPORT_G << 16UL) | ((UBase_t) GPIO_enPIN_1 << 8UL) | (15UL)),

    GPIO_enGPIOG2 = (UBase_t) (((UBase_t) GPIO_enPORT_G << 16UL) | ((UBase_t) GPIO_enPIN_2 << 8UL) | (0UL)),

    GPIO_enGPIOG3 = (UBase_t) (((UBase_t) GPIO_enPORT_G << 16UL) | ((UBase_t) GPIO_enPIN_3 << 8UL) | (0UL)),

    GPIO_enGPIOG4 = (UBase_t) (((UBase_t) GPIO_enPORT_G << 16UL) | ((UBase_t) GPIO_enPIN_4 << 8UL) | (0UL)),

    GPIO_enGPIOG5 = (UBase_t) (((UBase_t) GPIO_enPORT_G << 16UL) | ((UBase_t) GPIO_enPIN_5 << 8UL) | (0UL)),

    GPIO_enGPIOG6 = (UBase_t) (((UBase_t) GPIO_enPORT_G << 16UL) | ((UBase_t) GPIO_enPIN_6 << 8UL) | (0UL)),

    GPIO_enGPIOG7 = (UBase_t) (((UBase_t) GPIO_enPORT_G << 16UL) | ((UBase_t) GPIO_enPIN_7 << 8UL) | (0UL)),

    /*GPIOH*/
    GPIO_enGPIOH0 = (UBase_t) (((UBase_t) GPIO_enPORT_H << 16UL) | ((UBase_t) GPIO_enPIN_0 << 8UL) | (0UL)),
    GPIO_enU0RTS_H0 = (UBase_t) (((UBase_t) GPIO_enPORT_H << 16UL) | ((UBase_t) GPIO_enPIN_0 << 8UL) | (1UL)),
    GPIO_enEPI0S0_H0 = (UBase_t) (((UBase_t) GPIO_enPORT_H << 16UL) | ((UBase_t) GPIO_enPIN_0 << 8UL) | (15UL)),

    GPIO_enGPIOH1 = (UBase_t) (((UBase_t) GPIO_enPORT_H << 16UL) | ((UBase_t) GPIO_enPIN_1 << 8UL) | (0UL)),
    GPIO_enU0CTS_H1 = (UBase_t) (((UBase_t) GPIO_enPORT_H << 16UL) | ((UBase_t) GPIO_enPIN_1 << 8UL) | (1UL)),
    GPIO_enEPI0S1_H1 = (UBase_t) (((UBase_t) GPIO_enPORT_H << 16UL) | ((UBase_t) GPIO_enPIN_1 << 8UL) | (15UL)),

    GPIO_enGPIOH2 = (UBase_t) (((UBase_t) GPIO_enPORT_H << 16UL) | ((UBase_t) GPIO_enPIN_2 << 8UL) | (0UL)),
    GPIO_enU0DCD_H2 = (UBase_t) (((UBase_t) GPIO_enPORT_H << 16UL) | ((UBase_t) GPIO_enPIN_2 << 8UL) | (1UL)),
    GPIO_enEPI0S2_H2 = (UBase_t) (((UBase_t) GPIO_enPORT_H << 16UL) | ((UBase_t) GPIO_enPIN_2 << 8UL) | (15UL)),

    GPIO_enGPIOH3 = (UBase_t) (((UBase_t) GPIO_enPORT_H << 16UL) | ((UBase_t) GPIO_enPIN_3 << 8UL) | (0UL)),
    GPIO_enU0DSR_H3 = (UBase_t) (((UBase_t) GPIO_enPORT_H << 16UL) | ((UBase_t) GPIO_enPIN_3 << 8UL) | (1UL)),
    GPIO_enEPI0S3_H3 = (UBase_t) (((UBase_t) GPIO_enPORT_H << 16UL) | ((UBase_t) GPIO_enPIN_3 << 8UL) | (15UL)),

    GPIO_enGPIOH4 = (UBase_t) (((UBase_t) GPIO_enPORT_H << 16UL) | ((UBase_t) GPIO_enPIN_4 << 8UL) | (0UL)),

    GPIO_enGPIOH5 = (UBase_t) (((UBase_t) GPIO_enPORT_H << 16UL) | ((UBase_t) GPIO_enPIN_5 << 8UL) | (0UL)),

    GPIO_enGPIOH6 = (UBase_t) (((UBase_t) GPIO_enPORT_H << 16UL) | ((UBase_t) GPIO_enPIN_6 << 8UL) | (0UL)),

    GPIO_enGPIOH7 = (UBase_t) (((UBase_t) GPIO_enPORT_H << 16UL) | ((UBase_t) GPIO_enPIN_7 << 8UL) | (0UL)),

    /*GPIOJ*/
    GPIO_enGPIOJ0 = (UBase_t) (((UBase_t) GPIO_enPORT_J << 16UL) | ((UBase_t) GPIO_enPIN_0 << 8UL) | (0UL)),
    GPIO_enU3Rx_J0 = (UBase_t) (((UBase_t) GPIO_enPORT_J << 16UL) | ((UBase_t) GPIO_enPIN_0 << 8UL) | (1UL)),
    GPIO_enEN0PPS_J0 = (UBase_t) (((UBase_t) GPIO_enPORT_J << 16UL) | ((UBase_t) GPIO_enPIN_0 << 8UL) | (5UL)),

    GPIO_enGPIOJ1 = (UBase_t) (((UBase_t) GPIO_enPORT_J << 16UL) | ((UBase_t) GPIO_enPIN_1 << 8UL) | (0UL)),
    GPIO_enU3Tx_J1 = (UBase_t) (((UBase_t) GPIO_enPORT_J << 16UL) | ((UBase_t) GPIO_enPIN_1 << 8UL) | (1UL)),

    GPIO_enGPIOJ2 = (UBase_t) (((UBase_t) GPIO_enPORT_J << 16UL) | ((UBase_t) GPIO_enPIN_2 << 8UL) | (0UL)),

    GPIO_enGPIOJ3 = (UBase_t) (((UBase_t) GPIO_enPORT_J << 16UL) | ((UBase_t) GPIO_enPIN_3 << 8UL) | (0UL)),

    GPIO_enGPIOJ4 = (UBase_t) (((UBase_t) GPIO_enPORT_J << 16UL) | ((UBase_t) GPIO_enPIN_4 << 8UL) | (0UL)),

    GPIO_enGPIOJ5 = (UBase_t) (((UBase_t) GPIO_enPORT_J << 16UL) | ((UBase_t) GPIO_enPIN_5 << 8UL) | (0UL)),

    GPIO_enGPIOJ6 = (UBase_t) (((UBase_t) GPIO_enPORT_J << 16UL) | ((UBase_t) GPIO_enPIN_6 << 8UL) | (0UL)),

    GPIO_enGPIOJ7 = (UBase_t) (((UBase_t) GPIO_enPORT_J << 16UL) | ((UBase_t) GPIO_enPIN_7 << 8UL) | (0UL)),

    /*GPIOK*/
    GPIO_enGPIOK0 = (UBase_t) (((UBase_t) GPIO_enPORT_K << 16UL) | ((UBase_t) GPIO_enPIN_0 << 8UL) | (0UL)),
    GPIO_enU4Rx_K0 = (UBase_t) (((UBase_t) GPIO_enPORT_K << 16UL) | ((UBase_t) GPIO_enPIN_0 << 8UL) | (1UL)),
    GPIO_enEPI0S0_K0 = (UBase_t) (((UBase_t) GPIO_enPORT_K << 16UL) | ((UBase_t) GPIO_enPIN_0 << 8UL) | (15UL)),

    GPIO_enGPIOK1 = (UBase_t) (((UBase_t) GPIO_enPORT_K << 16UL) | ((UBase_t) GPIO_enPIN_1 << 8UL) | (0UL)),
    GPIO_enU4Tx_K1 = (UBase_t) (((UBase_t) GPIO_enPORT_K << 16UL) | ((UBase_t) GPIO_enPIN_1 << 8UL) | (1UL)),
    GPIO_enEPI0S1_K1 = (UBase_t) (((UBase_t) GPIO_enPORT_K << 16UL) | ((UBase_t) GPIO_enPIN_1 << 8UL) | (15UL)),

    GPIO_enGPIOK2 = (UBase_t) (((UBase_t) GPIO_enPORT_K << 16UL) | ((UBase_t) GPIO_enPIN_2 << 8UL) | (0UL)),
    GPIO_enU4RTS_K2 = (UBase_t) (((UBase_t) GPIO_enPORT_K << 16UL) | ((UBase_t) GPIO_enPIN_2 << 8UL) | (1UL)),
    GPIO_enEPI0S2_K2 = (UBase_t) (((UBase_t) GPIO_enPORT_K << 16UL) | ((UBase_t) GPIO_enPIN_2 << 8UL) | (15UL)),

    GPIO_enGPIOK3 = (UBase_t) (((UBase_t) GPIO_enPORT_K << 16UL) | ((UBase_t) GPIO_enPIN_3 << 8UL) | (0UL)),
    GPIO_enU4CTS_K3 = (UBase_t) (((UBase_t) GPIO_enPORT_K << 16UL) | ((UBase_t) GPIO_enPIN_3 << 8UL) | (1UL)),
    GPIO_enEPI0S3_K3 = (UBase_t) (((UBase_t) GPIO_enPORT_K << 16UL) | ((UBase_t) GPIO_enPIN_3 << 8UL) | (15UL)),

    GPIO_enGPIOK4 = (UBase_t) (((UBase_t) GPIO_enPORT_K << 16UL) | ((UBase_t) GPIO_enPIN_4 << 8UL) | (0UL)),
    GPIO_enI2C3SCL_K4 = (UBase_t) (((UBase_t) GPIO_enPORT_K << 16UL) | ((UBase_t) GPIO_enPIN_4 << 8UL) | (2UL)),
    GPIO_enEN0LED0_K4 = (UBase_t) (((UBase_t) GPIO_enPORT_K << 16UL) | ((UBase_t) GPIO_enPIN_4 << 8UL) | (5UL)),
    GPIO_enM0PWM6_K4 = (UBase_t) (((UBase_t) GPIO_enPORT_K << 16UL) | ((UBase_t) GPIO_enPIN_4 << 8UL) | (6UL)),
    GPIO_enEPI0S32_K4 = (UBase_t) (((UBase_t) GPIO_enPORT_K << 16UL) | ((UBase_t) GPIO_enPIN_4 << 8UL) | (15UL)),

    GPIO_enGPIOK5 = (UBase_t) (((UBase_t) GPIO_enPORT_K << 16UL) | ((UBase_t) GPIO_enPIN_5 << 8UL) | (0UL)),
    GPIO_enI2C3SDA_K5 = (UBase_t) (((UBase_t) GPIO_enPORT_K << 16UL) | ((UBase_t) GPIO_enPIN_5 << 8UL) | (2UL)),
    GPIO_enEN0LED2_K5 = (UBase_t) (((UBase_t) GPIO_enPORT_K << 16UL) | ((UBase_t) GPIO_enPIN_5 << 8UL) | (5UL)),
    GPIO_enM0PWM7_K5 = (UBase_t) (((UBase_t) GPIO_enPORT_K << 16UL) | ((UBase_t) GPIO_enPIN_5 << 8UL) | (6UL)),
    GPIO_enEPI0S31_K5 = (UBase_t) (((UBase_t) GPIO_enPORT_K << 16UL) | ((UBase_t) GPIO_enPIN_5 << 8UL) | (15UL)),

    GPIO_enGPIOK6 = (UBase_t) (((UBase_t) GPIO_enPORT_K << 16UL) | ((UBase_t) GPIO_enPIN_6 << 8UL) | (0UL)),
    GPIO_enI2C4SCL_K6 = (UBase_t) (((UBase_t) GPIO_enPORT_K << 16UL) | ((UBase_t) GPIO_enPIN_6 << 8UL) | (2UL)),
    GPIO_enEN0LED1_K6 = (UBase_t) (((UBase_t) GPIO_enPORT_K << 16UL) | ((UBase_t) GPIO_enPIN_6 << 8UL) | (5UL)),
    GPIO_enM0FAULT1_K6 = (UBase_t) (((UBase_t) GPIO_enPORT_K << 16UL) | ((UBase_t) GPIO_enPIN_6 << 8UL) | (6UL)),
    GPIO_enEPI0S25_K6 = (UBase_t) (((UBase_t) GPIO_enPORT_K << 16UL) | ((UBase_t) GPIO_enPIN_6 << 8UL) | (15UL)),

    GPIO_enGPIOK7 = (UBase_t) (((UBase_t) GPIO_enPORT_K << 16UL) | ((UBase_t) GPIO_enPIN_7 << 8UL) | (0UL)),
    GPIO_enU0RI_K7 = (UBase_t) (((UBase_t) GPIO_enPORT_K << 16UL) | ((UBase_t) GPIO_enPIN_7 << 8UL) | (1UL)),
    GPIO_enI2C4SDA_K7 = (UBase_t) (((UBase_t) GPIO_enPORT_K << 16UL) | ((UBase_t) GPIO_enPIN_7 << 8UL) | (2UL)),
    GPIO_enRTCCLK_K7 = (UBase_t) (((UBase_t) GPIO_enPORT_K << 16UL) | ((UBase_t) GPIO_enPIN_7 << 8UL) | (5UL)),
    GPIO_enM0FAULT2_K7 = (UBase_t) (((UBase_t) GPIO_enPORT_K << 16UL) | ((UBase_t) GPIO_enPIN_7 << 8UL) | (6UL)),
    GPIO_enEPI0S24_K7 = (UBase_t) (((UBase_t) GPIO_enPORT_K << 16UL) | ((UBase_t) GPIO_enPIN_7 << 8UL) | (15UL)),

    /*GPIOL*/
    GPIO_enGPIOL0 = (UBase_t) (((UBase_t) GPIO_enPORT_L << 16UL) | ((UBase_t) GPIO_enPIN_0 << 8UL) | (0UL)),
    GPIO_enI2C2SDA_L0 = (UBase_t) (((UBase_t) GPIO_enPORT_L << 16UL) | ((UBase_t) GPIO_enPIN_0 << 8UL) | (2UL)),
    GPIO_enM0FAULT3_L0 = (UBase_t) (((UBase_t) GPIO_enPORT_L << 16UL) | ((UBase_t) GPIO_enPIN_0 << 8UL) | (6UL)),
    GPIO_enUSB0D0_L0 = (UBase_t) (((UBase_t) GPIO_enPORT_L << 16UL) | ((UBase_t) GPIO_enPIN_0 << 8UL) | (14UL)),
    GPIO_enEPI0S16_L0 = (UBase_t) (((UBase_t) GPIO_enPORT_L << 16UL) | ((UBase_t) GPIO_enPIN_0 << 8UL) | (15UL)),

    GPIO_enGPIOL1 = (UBase_t) (((UBase_t) GPIO_enPORT_L << 16UL) | ((UBase_t) GPIO_enPIN_1 << 8UL) | (0UL)),
    GPIO_enI2C2SCL_L1 = (UBase_t) (((UBase_t) GPIO_enPORT_L << 16UL) | ((UBase_t) GPIO_enPIN_1 << 8UL) | (2UL)),
    GPIO_enPhA0_L1 = (UBase_t) (((UBase_t) GPIO_enPORT_L << 16UL) | ((UBase_t) GPIO_enPIN_1 << 8UL) | (6UL)),
    GPIO_enUSB0D1_L1 = (UBase_t) (((UBase_t) GPIO_enPORT_L << 16UL) | ((UBase_t) GPIO_enPIN_1 << 8UL) | (14UL)),
    GPIO_enEPI0S17_L1 = (UBase_t) (((UBase_t) GPIO_enPORT_L << 16UL) | ((UBase_t) GPIO_enPIN_1 << 8UL) | (15UL)),

    GPIO_enGPIOL2 = (UBase_t) (((UBase_t) GPIO_enPORT_L << 16UL) | ((UBase_t) GPIO_enPIN_2 << 8UL) | (0UL)),
    GPIO_enC0O_L2 = (UBase_t) (((UBase_t) GPIO_enPORT_L << 16UL) | ((UBase_t) GPIO_enPIN_2 << 8UL) | (5UL)),
    GPIO_enPhB0_L2 = (UBase_t) (((UBase_t) GPIO_enPORT_L << 16UL) | ((UBase_t) GPIO_enPIN_2 << 8UL) | (6UL)),
    GPIO_enUSB0D2_L2 = (UBase_t) (((UBase_t) GPIO_enPORT_L << 16UL) | ((UBase_t) GPIO_enPIN_2 << 8UL) | (14UL)),
    GPIO_enEPI0S18_L2 = (UBase_t) (((UBase_t) GPIO_enPORT_L << 16UL) | ((UBase_t) GPIO_enPIN_2 << 8UL) | (15UL)),

    GPIO_enGPIOL3 = (UBase_t) (((UBase_t) GPIO_enPORT_L << 16UL) | ((UBase_t) GPIO_enPIN_3 << 8UL) | (0UL)),
    GPIO_enC1O_L3 = (UBase_t) (((UBase_t) GPIO_enPORT_L << 16UL) | ((UBase_t) GPIO_enPIN_3 << 8UL) | (5UL)),
    GPIO_enIDX0_L3 = (UBase_t) (((UBase_t) GPIO_enPORT_L << 16UL) | ((UBase_t) GPIO_enPIN_3 << 8UL) | (6UL)),
    GPIO_enUSB0D3_L3 = (UBase_t) (((UBase_t) GPIO_enPORT_L << 16UL) | ((UBase_t) GPIO_enPIN_3 << 8UL) | (14UL)),
    GPIO_enEPI0S19_L3 = (UBase_t) (((UBase_t) GPIO_enPORT_L << 16UL) | ((UBase_t) GPIO_enPIN_3 << 8UL) | (15UL)),

    GPIO_enGPIOL4 = (UBase_t) (((UBase_t) GPIO_enPORT_L << 16UL) | ((UBase_t) GPIO_enPIN_4 << 8UL) | (0UL)),
    GPIO_enT0CCP0_L4 = (UBase_t) (((UBase_t) GPIO_enPORT_L << 16UL) | ((UBase_t) GPIO_enPIN_4 << 8UL) | (3UL)),
    GPIO_enUSB0D4_L4 = (UBase_t) (((UBase_t) GPIO_enPORT_L << 16UL) | ((UBase_t) GPIO_enPIN_4 << 8UL) | (14UL)),
    GPIO_enEPI0S26_L4 = (UBase_t) (((UBase_t) GPIO_enPORT_L << 16UL) | ((UBase_t) GPIO_enPIN_4 << 8UL) | (15UL)),

    GPIO_enGPIOL5 = (UBase_t) (((UBase_t) GPIO_enPORT_L << 16UL) | ((UBase_t) GPIO_enPIN_5 << 8UL) | (0UL)),
    GPIO_enT0CCP1_L5 = (UBase_t) (((UBase_t) GPIO_enPORT_L << 16UL) | ((UBase_t) GPIO_enPIN_5 << 8UL) | (3UL)),
    GPIO_enUSB0D5_L5 = (UBase_t) (((UBase_t) GPIO_enPORT_L << 16UL) | ((UBase_t) GPIO_enPIN_5 << 8UL) | (14UL)),
    GPIO_enEPI0S33_L5 = (UBase_t) (((UBase_t) GPIO_enPORT_L << 16UL) | ((UBase_t) GPIO_enPIN_5 << 8UL) | (15UL)),

    GPIO_enGPIOL6 = (UBase_t) (((UBase_t) GPIO_enPORT_L << 16UL) | ((UBase_t) GPIO_enPIN_6 << 8UL) | (0UL)),
    GPIO_enT1CCP0_L6 = (UBase_t) (((UBase_t) GPIO_enPORT_L << 16UL) | ((UBase_t) GPIO_enPIN_6 << 8UL) | (3UL)),

    GPIO_enGPIOL7 = (UBase_t) (((UBase_t) GPIO_enPORT_L << 16UL) | ((UBase_t) GPIO_enPIN_7 << 8UL) | (0UL)),
    GPIO_enT1CCP1_L7 = (UBase_t) (((UBase_t) GPIO_enPORT_L << 16UL) | ((UBase_t) GPIO_enPIN_7 << 8UL) | (3UL)),

    /*GPIOM*/
    GPIO_enGPIOM0 = (UBase_t) (((UBase_t) GPIO_enPORT_M << 16UL) | ((UBase_t) GPIO_enPIN_0 << 8UL) | (0UL)),
    GPIO_enT2CCP0_M0 = (UBase_t) (((UBase_t) GPIO_enPORT_M << 16UL) | ((UBase_t) GPIO_enPIN_0 << 8UL) | (3UL)),
    GPIO_enEPI0S15_M0 = (UBase_t) (((UBase_t) GPIO_enPORT_M << 16UL) | ((UBase_t) GPIO_enPIN_0 << 8UL) | (15UL)),

    GPIO_enGPIOM1 = (UBase_t) (((UBase_t) GPIO_enPORT_M << 16UL) | ((UBase_t) GPIO_enPIN_1 << 8UL) | (0UL)),
    GPIO_enT2CCP1_M1 = (UBase_t) (((UBase_t) GPIO_enPORT_M << 16UL) | ((UBase_t) GPIO_enPIN_1 << 8UL) | (3UL)),
    GPIO_enEPI0S14_M1 = (UBase_t) (((UBase_t) GPIO_enPORT_M << 16UL) | ((UBase_t) GPIO_enPIN_1 << 8UL) | (15UL)),

    GPIO_enGPIOM2 = (UBase_t) (((UBase_t) GPIO_enPORT_M << 16UL) | ((UBase_t) GPIO_enPIN_2 << 8UL) | (0UL)),
    GPIO_enT3CCP0_M2 = (UBase_t) (((UBase_t) GPIO_enPORT_M << 16UL) | ((UBase_t) GPIO_enPIN_2 << 8UL) | (3UL)),
    GPIO_enEPI0S13_M2 = (UBase_t) (((UBase_t) GPIO_enPORT_M << 16UL) | ((UBase_t) GPIO_enPIN_2 << 8UL) | (15UL)),

    GPIO_enGPIOM3 = (UBase_t) (((UBase_t) GPIO_enPORT_M << 16UL) | ((UBase_t) GPIO_enPIN_3 << 8UL) | (0UL)),
    GPIO_enT3CCP1_M3 = (UBase_t) (((UBase_t) GPIO_enPORT_M << 16UL) | ((UBase_t) GPIO_enPIN_3 << 8UL) | (3UL)),
    GPIO_enEPI0S12_M3 = (UBase_t) (((UBase_t) GPIO_enPORT_M << 16UL) | ((UBase_t) GPIO_enPIN_3 << 8UL) | (15UL)),

    GPIO_enGPIOM4 = (UBase_t) (((UBase_t) GPIO_enPORT_M << 16UL) | ((UBase_t) GPIO_enPIN_4 << 8UL) | (0UL)),
    GPIO_enU0CTS_M4 = (UBase_t) (((UBase_t) GPIO_enPORT_M << 16UL) | ((UBase_t) GPIO_enPIN_4 << 8UL) | (1UL)),
    GPIO_enT4CCP0_M4 = (UBase_t) (((UBase_t) GPIO_enPORT_M << 16UL) | ((UBase_t) GPIO_enPIN_4 << 8UL) | (3UL)),

    GPIO_enGPIOM5 = (UBase_t) (((UBase_t) GPIO_enPORT_M << 16UL) | ((UBase_t) GPIO_enPIN_5 << 8UL) | (0UL)),
    GPIO_enU0DCD_M5 = (UBase_t) (((UBase_t) GPIO_enPORT_M << 16UL) | ((UBase_t) GPIO_enPIN_5 << 8UL) | (1UL)),
    GPIO_enT4CCP1_M5 = (UBase_t) (((UBase_t) GPIO_enPORT_M << 16UL) | ((UBase_t) GPIO_enPIN_5 << 8UL) | (3UL)),

    GPIO_enGPIOM6 = (UBase_t) (((UBase_t) GPIO_enPORT_M << 16UL) | ((UBase_t) GPIO_enPIN_6 << 8UL) | (0UL)),
    GPIO_enU0DSR_M6 = (UBase_t) (((UBase_t) GPIO_enPORT_M << 16UL) | ((UBase_t) GPIO_enPIN_6 << 8UL) | (1UL)),
    GPIO_enT5CCP0_M6 = (UBase_t) (((UBase_t) GPIO_enPORT_M << 16UL) | ((UBase_t) GPIO_enPIN_6 << 8UL) | (3UL)),

    GPIO_enGPIOM7 = (UBase_t) (((UBase_t) GPIO_enPORT_M << 16UL) | ((UBase_t) GPIO_enPIN_7 << 8UL) | (0UL)),
    GPIO_enU0RI_M7 = (UBase_t) (((UBase_t) GPIO_enPORT_M << 16UL) | ((UBase_t) GPIO_enPIN_7 << 8UL) | (1UL)),
    GPIO_enT5CCP1_M7 = (UBase_t) (((UBase_t) GPIO_enPORT_M << 16UL) | ((UBase_t) GPIO_enPIN_7 << 8UL) | (3UL)),

    /*GPION*/
    GPIO_enGPION0 = (UBase_t) (((UBase_t) GPIO_enPORT_N << 16UL) | ((UBase_t) GPIO_enPIN_0 << 8UL) | (0UL)),
    GPIO_enU1RTS_N0 = (UBase_t) (((UBase_t) GPIO_enPORT_N << 16UL) | ((UBase_t) GPIO_enPIN_0 << 8UL) | (1UL)),

    GPIO_enGPION1 = (UBase_t) (((UBase_t) GPIO_enPORT_N << 16UL) | ((UBase_t) GPIO_enPIN_1 << 8UL) | (0UL)),
    GPIO_enU1CTS_N1 = (UBase_t) (((UBase_t) GPIO_enPORT_N << 16UL) | ((UBase_t) GPIO_enPIN_1 << 8UL) | (1UL)),

    GPIO_enGPION2 = (UBase_t) (((UBase_t) GPIO_enPORT_N << 16UL) | ((UBase_t) GPIO_enPIN_2 << 8UL) | (0UL)),
    GPIO_enU1DCD_N2 = (UBase_t) (((UBase_t) GPIO_enPORT_N << 16UL) | ((UBase_t) GPIO_enPIN_2 << 8UL) | (1UL)),
    GPIO_enU2RTS_N2 = (UBase_t) (((UBase_t) GPIO_enPORT_N << 16UL) | ((UBase_t) GPIO_enPIN_2 << 8UL) | (2UL)),
    GPIO_enEPI0S29_N2 = (UBase_t) (((UBase_t) GPIO_enPORT_N << 16UL) | ((UBase_t) GPIO_enPIN_2 << 8UL) | (15UL)),

    GPIO_enGPION3 = (UBase_t) (((UBase_t) GPIO_enPORT_N << 16UL) | ((UBase_t) GPIO_enPIN_3 << 8UL) | (0UL)),
    GPIO_enU1DSR_N3 = (UBase_t) (((UBase_t) GPIO_enPORT_N << 16UL) | ((UBase_t) GPIO_enPIN_3 << 8UL) | (1UL)),
    GPIO_enU2CTS_N3 = (UBase_t) (((UBase_t) GPIO_enPORT_N << 16UL) | ((UBase_t) GPIO_enPIN_3 << 8UL) | (2UL)),
    GPIO_enEPI0S30_N3 = (UBase_t) (((UBase_t) GPIO_enPORT_N << 16UL) | ((UBase_t) GPIO_enPIN_3 << 8UL) | (15UL)),

    GPIO_enGPION4 = (UBase_t) (((UBase_t) GPIO_enPORT_N << 16UL) | ((UBase_t) GPIO_enPIN_4 << 8UL) | (0UL)),
    GPIO_enU1DTR_N4 = (UBase_t) (((UBase_t) GPIO_enPORT_N << 16UL) | ((UBase_t) GPIO_enPIN_4 << 8UL) | (1UL)),
    GPIO_enU3RTS_N4 = (UBase_t) (((UBase_t) GPIO_enPORT_N << 16UL) | ((UBase_t) GPIO_enPIN_4 << 8UL) | (2UL)),
    GPIO_enI2C2SDA_N4 = (UBase_t) (((UBase_t) GPIO_enPORT_N << 16UL) | ((UBase_t) GPIO_enPIN_4 << 8UL) | (3UL)),
    GPIO_enEPI0S34_N4 = (UBase_t) (((UBase_t) GPIO_enPORT_N << 16UL) | ((UBase_t) GPIO_enPIN_4 << 8UL) | (15UL)),

    GPIO_enGPION5 = (UBase_t) (((UBase_t) GPIO_enPORT_N << 16UL) | ((UBase_t) GPIO_enPIN_5 << 8UL) | (0UL)),
    GPIO_enU1RI_N5 = (UBase_t) (((UBase_t) GPIO_enPORT_N << 16UL) | ((UBase_t) GPIO_enPIN_5 << 8UL) | (1UL)),
    GPIO_enU3CTS_N5 = (UBase_t) (((UBase_t) GPIO_enPORT_N << 16UL) | ((UBase_t) GPIO_enPIN_5 << 8UL) | (2UL)),
    GPIO_enI2C2SCL_N5 = (UBase_t) (((UBase_t) GPIO_enPORT_N << 16UL) | ((UBase_t) GPIO_enPIN_5 << 8UL) | (3UL)),
    GPIO_enEPI0S35_N5 = (UBase_t) (((UBase_t) GPIO_enPORT_N << 16UL) | ((UBase_t) GPIO_enPIN_5 << 8UL) | (15UL)),

    GPIO_enGPION6 = (UBase_t) (((UBase_t) GPIO_enPORT_N << 16UL) | ((UBase_t) GPIO_enPIN_6 << 8UL) | (0UL)),

    GPIO_enGPION7 = (UBase_t) (((UBase_t) GPIO_enPORT_N << 16UL) | ((UBase_t) GPIO_enPIN_7 << 8UL) | (0UL)),

    /*GPIOP*/
    GPIO_enGPIOP0 = (UBase_t) (((UBase_t) GPIO_enPORT_P << 16UL) | ((UBase_t) GPIO_enPIN_0 << 8UL) | (0UL)),
    GPIO_enU6Rx_P0 = (UBase_t) (((UBase_t) GPIO_enPORT_P << 16UL) | ((UBase_t) GPIO_enPIN_0 << 8UL) | (1UL)),
    GPIO_enSSI3XDAT2_P0 = (UBase_t) (((UBase_t) GPIO_enPORT_P << 16UL) | ((UBase_t) GPIO_enPIN_0 << 8UL) | (15UL)),

    GPIO_enGPIOP1 = (UBase_t) (((UBase_t) GPIO_enPORT_P << 16UL) | ((UBase_t) GPIO_enPIN_1 << 8UL) | (0UL)),
    GPIO_enU6Tx_P1 = (UBase_t) (((UBase_t) GPIO_enPORT_P << 16UL) | ((UBase_t) GPIO_enPIN_1 << 8UL) | (1UL)),
    GPIO_enSSI3XDAT3_P1 = (UBase_t) (((UBase_t) GPIO_enPORT_P << 16UL) | ((UBase_t) GPIO_enPIN_1 << 8UL) | (15UL)),

    GPIO_enGPIOP2 = (UBase_t) (((UBase_t) GPIO_enPORT_P << 16UL) | ((UBase_t) GPIO_enPIN_2 << 8UL) | (0UL)),
    GPIO_enU0DTR_P2 = (UBase_t) (((UBase_t) GPIO_enPORT_P << 16UL) | ((UBase_t) GPIO_enPIN_2 << 8UL) | (1UL)),
    GPIO_enUSB0NXT_P2 = (UBase_t) (((UBase_t) GPIO_enPORT_P << 16UL) | ((UBase_t) GPIO_enPIN_2 << 8UL) | (14UL)),
    GPIO_enEPI0S29_P2 = (UBase_t) (((UBase_t) GPIO_enPORT_P << 16UL) | ((UBase_t) GPIO_enPIN_2 << 8UL) | (15UL)),

    GPIO_enGPIOP3 = (UBase_t) (((UBase_t) GPIO_enPORT_P << 16UL) | ((UBase_t) GPIO_enPIN_3 << 8UL) | (0UL)),
    GPIO_enU1CTS_P3 = (UBase_t) (((UBase_t) GPIO_enPORT_P << 16UL) | ((UBase_t) GPIO_enPIN_3 << 8UL) | (1UL)),
    GPIO_enU0DCD_P3 = (UBase_t) (((UBase_t) GPIO_enPORT_P << 16UL) | ((UBase_t) GPIO_enPIN_3 << 8UL) | (2UL)),
    GPIO_enRTCCLK_P3 = (UBase_t) (((UBase_t) GPIO_enPORT_P << 16UL) | ((UBase_t) GPIO_enPIN_3 << 8UL) | (7UL)),
    GPIO_enUSB0DIR_P3 = (UBase_t) (((UBase_t) GPIO_enPORT_P << 16UL) | ((UBase_t) GPIO_enPIN_3 << 8UL) | (14UL)),
    GPIO_enEPI0S30_P3 = (UBase_t) (((UBase_t) GPIO_enPORT_P << 16UL) | ((UBase_t) GPIO_enPIN_3 << 8UL) | (15UL)),

    GPIO_enGPIOP4 = (UBase_t) (((UBase_t) GPIO_enPORT_P << 16UL) | ((UBase_t) GPIO_enPIN_4 << 8UL) | (0UL)),
    GPIO_enU3RTS_P4 = (UBase_t) (((UBase_t) GPIO_enPORT_P << 16UL) | ((UBase_t) GPIO_enPIN_4 << 8UL) | (1UL)),
    GPIO_enU0DSR_P4 = (UBase_t) (((UBase_t) GPIO_enPORT_P << 16UL) | ((UBase_t) GPIO_enPIN_4 << 8UL) | (2UL)),
    GPIO_enUSB0D7_P4 = (UBase_t) (((UBase_t) GPIO_enPORT_P << 16UL) | ((UBase_t) GPIO_enPIN_4 << 8UL) | (14UL)),

    GPIO_enGPIOP5 = (UBase_t) (((UBase_t) GPIO_enPORT_P << 16UL) | ((UBase_t) GPIO_enPIN_5 << 8UL) | (0UL)),
    GPIO_enU3CTS_P5 = (UBase_t) (((UBase_t) GPIO_enPORT_P << 16UL) | ((UBase_t) GPIO_enPIN_5 << 8UL) | (1UL)),
    GPIO_enI2C2SCL_P5 = (UBase_t) (((UBase_t) GPIO_enPORT_P << 16UL) | ((UBase_t) GPIO_enPIN_5 << 8UL) | (2UL)),
    GPIO_enUSB0D6_P5 = (UBase_t) (((UBase_t) GPIO_enPORT_P << 16UL) | ((UBase_t) GPIO_enPIN_5 << 8UL) | (14UL)),

    GPIO_enGPIOP6 = (UBase_t) (((UBase_t) GPIO_enPORT_P << 16UL) | ((UBase_t) GPIO_enPIN_6 << 8UL) | (0UL)),

    GPIO_enGPIOP7 = (UBase_t) (((UBase_t) GPIO_enPORT_P << 16UL) | ((UBase_t) GPIO_enPIN_7 << 8UL) | (0UL)),

    /*GPIOQ*/
    GPIO_enGPIOQ0 = (UBase_t) (((UBase_t) GPIO_enPORT_Q << 16UL) | ((UBase_t) GPIO_enPIN_0 << 8UL) | (0UL)),
    GPIO_enSSI3Clk_Q0 = (UBase_t) (((UBase_t) GPIO_enPORT_Q << 16UL) | ((UBase_t) GPIO_enPIN_0 << 8UL) | (14UL)),
    GPIO_enEPI0S20_Q0 = (UBase_t) (((UBase_t) GPIO_enPORT_Q << 16UL) | ((UBase_t) GPIO_enPIN_0 << 8UL) | (15UL)),

    GPIO_enGPIOQ1 = (UBase_t) (((UBase_t) GPIO_enPORT_Q << 16UL) | ((UBase_t) GPIO_enPIN_1 << 8UL) | (0UL)),
    GPIO_enSSI3Fss_Q1 = (UBase_t) (((UBase_t) GPIO_enPORT_Q << 16UL) | ((UBase_t) GPIO_enPIN_1 << 8UL) | (14UL)),
    GPIO_enEPI0S21_Q1 = (UBase_t) (((UBase_t) GPIO_enPORT_Q << 16UL) | ((UBase_t) GPIO_enPIN_1 << 8UL) | (15UL)),

    GPIO_enGPIOQ2 = (UBase_t) (((UBase_t) GPIO_enPORT_Q << 16UL) | ((UBase_t) GPIO_enPIN_2 << 8UL) | (0UL)),
    GPIO_enSSI3Tx_Q2 = (UBase_t) (((UBase_t) GPIO_enPORT_Q << 16UL) | ((UBase_t) GPIO_enPIN_2 << 8UL) | (14UL)),
    GPIO_enSSI3XDAT0_Q2 = (UBase_t) (((UBase_t) GPIO_enPORT_Q << 16UL) | ((UBase_t) GPIO_enPIN_2 << 8UL) | (14UL)),
    GPIO_enEPI0S22_Q2 = (UBase_t) (((UBase_t) GPIO_enPORT_Q << 16UL) | ((UBase_t) GPIO_enPIN_2 << 8UL) | (15UL)),

    GPIO_enGPIOQ3 = (UBase_t) (((UBase_t) GPIO_enPORT_Q << 16UL) | ((UBase_t) GPIO_enPIN_3 << 8UL) | (0UL)),
    GPIO_enSSI3Rx_Q3 = (UBase_t) (((UBase_t) GPIO_enPORT_Q << 16UL) | ((UBase_t) GPIO_enPIN_3 << 8UL) | (14UL)),
    GPIO_enSSI3XDAT1_Q3 = (UBase_t) (((UBase_t) GPIO_enPORT_Q << 16UL) | ((UBase_t) GPIO_enPIN_3 << 8UL) | (14UL)),
    GPIO_enEPI0S23_Q3 = (UBase_t) (((UBase_t) GPIO_enPORT_Q << 16UL) | ((UBase_t) GPIO_enPIN_3 << 8UL) | (15UL)),

    GPIO_enGPIOQ4 = (UBase_t) (((UBase_t) GPIO_enPORT_Q << 16UL) | ((UBase_t) GPIO_enPIN_4 << 8UL) | (0UL)),
    GPIO_enU1Rx_Q4 = (UBase_t) (((UBase_t) GPIO_enPORT_Q << 16UL) | ((UBase_t) GPIO_enPIN_4 << 8UL) | (1UL)),
    GPIO_enDIVSCLK_Q4 = (UBase_t) (((UBase_t) GPIO_enPORT_Q << 16UL) | ((UBase_t) GPIO_enPIN_4 << 8UL) | (7UL)),

    GPIO_enGPIOQ5 = (UBase_t) (((UBase_t) GPIO_enPORT_Q << 16UL) | ((UBase_t) GPIO_enPIN_5 << 8UL) | (0UL)),

    GPIO_enGPIOQ6 = (UBase_t) (((UBase_t) GPIO_enPORT_Q << 16UL) | ((UBase_t) GPIO_enPIN_6 << 8UL) | (0UL)),

    GPIO_enGPIOQ7 = (UBase_t) (((UBase_t) GPIO_enPORT_Q << 16UL) | ((UBase_t) GPIO_enPIN_7 << 8UL) | (0UL)),


    GPIO_enGPIO_UNDEF = UNDEF_VALUE,
} GPIO_nDIGITAL_FUNCTION;

/*PORT PIN*/
typedef enum
{
    GPIO_enUSB0ID = (UBase_t) (((UBase_t) GPIO_enPORT_B << 8UL) | ((UBase_t) GPIO_enPIN_0)),
    GPIO_enUSB0VBUS = (UBase_t) (((UBase_t) GPIO_enPORT_B << 8UL) | ((UBase_t) GPIO_enPIN_1)),
    GPIO_enAIN10 = (UBase_t) (((UBase_t) GPIO_enPORT_B << 8UL) | ((UBase_t) GPIO_enPIN_4)),
    GPIO_enAIN11 = (UBase_t) (((UBase_t) GPIO_enPORT_B << 8UL) | ((UBase_t) GPIO_enPIN_5)),

    GPIO_enC1M = (UBase_t) (((UBase_t) GPIO_enPORT_C << 8UL) | ((UBase_t) GPIO_enPIN_4)),
    GPIO_enC1P = (UBase_t) (((UBase_t) GPIO_enPORT_C << 8UL) | ((UBase_t) GPIO_enPIN_5)),
    GPIO_enC0P = (UBase_t) (((UBase_t) GPIO_enPORT_C << 8UL) | ((UBase_t) GPIO_enPIN_6)),
    GPIO_enC0M = (UBase_t) (((UBase_t) GPIO_enPORT_C << 8UL) | ((UBase_t) GPIO_enPIN_7)),

    GPIO_enAIN15 = (UBase_t) (((UBase_t) GPIO_enPORT_D << 8UL) | ((UBase_t) GPIO_enPIN_0)),
    GPIO_enAIN14 = (UBase_t) (((UBase_t) GPIO_enPORT_D << 8UL) | ((UBase_t) GPIO_enPIN_1)),
    GPIO_enAIN13 = (UBase_t) (((UBase_t) GPIO_enPORT_D << 8UL) | ((UBase_t) GPIO_enPIN_2)),
    GPIO_enAIN12 = (UBase_t) (((UBase_t) GPIO_enPORT_D << 8UL) | ((UBase_t) GPIO_enPIN_3)),
    GPIO_enAIN7 = (UBase_t) (((UBase_t) GPIO_enPORT_D << 8UL) | ((UBase_t) GPIO_enPIN_4)),
    GPIO_enAIN6 = (UBase_t) (((UBase_t) GPIO_enPORT_D << 8UL) | ((UBase_t) GPIO_enPIN_5)),
    GPIO_enAIN5 = (UBase_t) (((UBase_t) GPIO_enPORT_D << 8UL) | ((UBase_t) GPIO_enPIN_6)),
    GPIO_enAIN4 = (UBase_t) (((UBase_t) GPIO_enPORT_D << 8UL) | ((UBase_t) GPIO_enPIN_7)),

    GPIO_enAIN3 = (UBase_t) (((UBase_t) GPIO_enPORT_E << 8UL) | ((UBase_t) GPIO_enPIN_0)),
    GPIO_enAIN2 = (UBase_t) (((UBase_t) GPIO_enPORT_E << 8UL) | ((UBase_t) GPIO_enPIN_1)),
    GPIO_enAIN1 = (UBase_t) (((UBase_t) GPIO_enPORT_E << 8UL) | ((UBase_t) GPIO_enPIN_2)),
    GPIO_enAIN0 = (UBase_t) (((UBase_t) GPIO_enPORT_E << 8UL) | ((UBase_t) GPIO_enPIN_3)),
    GPIO_enAIN9 = (UBase_t) (((UBase_t) GPIO_enPORT_E << 8UL) | ((UBase_t) GPIO_enPIN_4)),
    GPIO_enAIN8 = (UBase_t) (((UBase_t) GPIO_enPORT_E << 8UL) | ((UBase_t) GPIO_enPIN_5)),

    GPIO_enAIN16 = (UBase_t) (((UBase_t) GPIO_enPORT_K << 8UL) | ((UBase_t) GPIO_enPIN_0)),
    GPIO_enAIN17 = (UBase_t) (((UBase_t) GPIO_enPORT_K << 8UL) | ((UBase_t) GPIO_enPIN_1)),
    GPIO_enAIN18 = (UBase_t) (((UBase_t) GPIO_enPORT_K << 8UL) | ((UBase_t) GPIO_enPIN_2)),
    GPIO_enAIN19 = (UBase_t) (((UBase_t) GPIO_enPORT_K << 8UL) | ((UBase_t) GPIO_enPIN_3)),

    GPIO_enUSB0DP = (UBase_t) (((UBase_t) GPIO_enPORT_L << 8UL) | ((UBase_t) GPIO_enPIN_0)),
    GPIO_enUSB0DM = (UBase_t) (((UBase_t) GPIO_enPORT_L << 8UL) | ((UBase_t) GPIO_enPIN_1)),

    GPIO_enC2P = (UBase_t) (((UBase_t) GPIO_enPORT_P << 8UL) | ((UBase_t) GPIO_enPIN_4)),
    GPIO_enC2M = (UBase_t) (((UBase_t) GPIO_enPORT_P << 8UL) | ((UBase_t) GPIO_enPIN_5)),

    GPIO_enAIN_UNDEF = UNDEF_VALUE,
} GPIO_nANALOG_FUNCTION;

typedef enum
{
    GPIO_enCONFIG_INPUT_2MA_PUSHPULL = ((UBase_t) GPIO_enDRIVE_2mA << 16UL)
            | ((UBase_t) GPIO_enDIR_INPUT << 8UL)
            | ((UBase_t) GPIO_enOUTMODE_PUSHPULL << 4UL)
            | ((UBase_t) GPIO_enRESMODE_INACTIVE << 0UL),
    GPIO_enCONFIG_INPUT_2MA_PUSHPULL_PULLUP = ((UBase_t) GPIO_enDRIVE_2mA << 16UL)
            | ((UBase_t) GPIO_enDIR_INPUT << 8UL)
            | ((UBase_t) GPIO_enOUTMODE_PUSHPULL << 4UL)
            | ((UBase_t) GPIO_enRESMODE_PULLUP << 0UL),
    GPIO_enCONFIG_INPUT_2MA_PUSHPULL_PULLDOWN = ((UBase_t) GPIO_enDRIVE_2mA << 16UL) | ((UBase_t) GPIO_enDIR_INPUT << 8UL)
            | ((UBase_t) GPIO_enOUTMODE_PUSHPULL << 4UL)
            | ((UBase_t) GPIO_enRESMODE_PULLDOWN << 0UL),
    GPIO_enCONFIG_INPUT_2MA_OPENDRAIN = ((UBase_t) GPIO_enDRIVE_2mA << 16UL)
            | ((UBase_t) GPIO_enDIR_INPUT << 8UL)
            | ((UBase_t) GPIO_enOUTMODE_OPENDRAIN << 4UL)
            | ((UBase_t) GPIO_enRESMODE_INACTIVE << 0UL),
    GPIO_enCONFIG_INPUT_2MA_OPENDRAIN_PULLUP = ((UBase_t) GPIO_enDRIVE_2mA << 16UL)
            | ((UBase_t) GPIO_enDIR_INPUT << 8UL)
            | ((UBase_t) GPIO_enOUTMODE_OPENDRAIN << 4UL)
            | ((UBase_t) GPIO_enRESMODE_PULLUP << 0UL),
    GPIO_enCONFIG_INPUT_2MA_OPENDRAIN_PULLDOWN = ((UBase_t) GPIO_enDRIVE_2mA << 16UL)
            | ((UBase_t) GPIO_enDIR_INPUT << 8UL)
            | ((UBase_t) GPIO_enOUTMODE_OPENDRAIN << 4UL)
            | ((UBase_t) GPIO_enRESMODE_PULLDOWN << 0UL),
    GPIO_enCONFIG_INPUT_4MA_PUSHPULL = ((UBase_t) GPIO_enDRIVE_4mA << 16UL)
            | ((UBase_t) GPIO_enDIR_INPUT << 8UL)
            | ((UBase_t) GPIO_enOUTMODE_PUSHPULL << 4UL)
            | ((UBase_t) GPIO_enRESMODE_INACTIVE << 0UL),
    GPIO_enCONFIG_INPUT_4MA_PUSHPULL_PULLUP = ((UBase_t) GPIO_enDRIVE_4mA << 16UL)
            | ((UBase_t) GPIO_enDIR_INPUT << 8UL)
            | ((UBase_t) GPIO_enOUTMODE_PUSHPULL << 4UL)
            | ((UBase_t) GPIO_enRESMODE_PULLUP << 0UL),
    GPIO_enCONFIG_INPUT_4MA_PUSHPULL_PULLDOWN = ((UBase_t) GPIO_enDRIVE_4mA << 16UL)
            | ((UBase_t) GPIO_enDIR_INPUT << 8UL)
            | ((UBase_t) GPIO_enOUTMODE_PUSHPULL << 4UL)
            | ((UBase_t) GPIO_enRESMODE_PULLDOWN << 0UL),
    GPIO_enCONFIG_INPUT_4MA_OPENDRAIN = ((UBase_t) GPIO_enDRIVE_4mA << 16UL)
            | ((UBase_t) GPIO_enDIR_INPUT << 8UL)
            | ((UBase_t) GPIO_enOUTMODE_OPENDRAIN << 4UL)
            | ((UBase_t) GPIO_enRESMODE_INACTIVE << 0UL),
    GPIO_enCONFIG_INPUT_4MA_OPENDRAIN_PULLUP = ((UBase_t) GPIO_enDRIVE_4mA << 16UL)
            | ((UBase_t) GPIO_enDIR_INPUT << 8UL)
            | ((UBase_t) GPIO_enOUTMODE_OPENDRAIN << 4UL)
            | ((UBase_t) GPIO_enRESMODE_PULLUP << 0UL),
    GPIO_enCONFIG_INPUT_4MA_OPENDRAIN_PULLDOWN = ((UBase_t) GPIO_enDRIVE_4mA << 16UL)
            | ((UBase_t) GPIO_enDIR_INPUT << 8UL)
            | ((UBase_t) GPIO_enOUTMODE_OPENDRAIN << 4UL)
            | ((UBase_t) GPIO_enRESMODE_PULLDOWN << 0UL),
    GPIO_enCONFIG_INPUT_6MA_PUSHPULL = ((UBase_t) GPIO_enDRIVE_6mA << 16UL)
            | ((UBase_t) GPIO_enDIR_INPUT << 8UL)
            | ((UBase_t) GPIO_enOUTMODE_PUSHPULL << 4UL)
            | ((UBase_t) GPIO_enRESMODE_INACTIVE << 0UL),
    GPIO_enCONFIG_INPUT_6MA_PUSHPULL_PULLUP = ((UBase_t) GPIO_enDRIVE_6mA << 16UL)
            | ((UBase_t) GPIO_enDIR_INPUT << 8UL)
            | ((UBase_t) GPIO_enOUTMODE_PUSHPULL << 4UL)
            | ((UBase_t) GPIO_enRESMODE_PULLUP << 0UL),
    GPIO_enCONFIG_INPUT_6MA_PUSHPULL_PULLDOWN = ((UBase_t) GPIO_enDRIVE_6mA << 16UL)
            | ((UBase_t) GPIO_enDIR_INPUT << 8UL)
            | ((UBase_t) GPIO_enOUTMODE_PUSHPULL << 4UL)
            | ((UBase_t) GPIO_enRESMODE_PULLDOWN << 0UL),
    GPIO_enCONFIG_INPUT_6MA_OPENDRAIN = ((UBase_t) GPIO_enDRIVE_6mA << 16UL)
            | ((UBase_t) GPIO_enDIR_INPUT << 8UL)
            | ((UBase_t) GPIO_enOUTMODE_OPENDRAIN << 4UL)
            | ((UBase_t) GPIO_enRESMODE_INACTIVE << 0UL),
    GPIO_enCONFIG_INPUT_6MA_OPENDRAIN_PULLUP = ((UBase_t) GPIO_enDRIVE_6mA << 16UL)
            | ((UBase_t) GPIO_enDIR_INPUT << 8UL)
            | ((UBase_t) GPIO_enOUTMODE_OPENDRAIN << 4UL)
            | ((UBase_t) GPIO_enRESMODE_PULLUP << 0UL),
    GPIO_enCONFIG_INPUT_6MA_OPENDRAIN_PULLDOWN = ((UBase_t) GPIO_enDRIVE_6mA << 16UL)
            | ((UBase_t) GPIO_enDIR_INPUT << 8UL)
            | ((UBase_t) GPIO_enOUTMODE_OPENDRAIN << 4UL)
            | ((UBase_t) GPIO_enRESMODE_PULLDOWN << 0UL),
    GPIO_enCONFIG_INPUT_8MA_PUSHPULL = ((UBase_t) GPIO_enDRIVE_8mA << 16UL)
            | ((UBase_t) GPIO_enDIR_INPUT << 8UL)
            | ((UBase_t) GPIO_enOUTMODE_PUSHPULL << 4UL)
            | ((UBase_t) GPIO_enRESMODE_INACTIVE << 0UL),
    GPIO_enCONFIG_INPUT_8MA_PUSHPULL_PULLUP = ((UBase_t) GPIO_enDRIVE_8mA << 16UL)
            | ((UBase_t) GPIO_enDIR_INPUT << 8UL)
            | ((UBase_t) GPIO_enOUTMODE_PUSHPULL << 4UL)
            | ((UBase_t) GPIO_enRESMODE_PULLUP << 0UL),
    GPIO_enCONFIG_INPUT_8MA_PUSHPULL_PULLDOWN = ((UBase_t) GPIO_enDRIVE_8mA << 16UL)
            | ((UBase_t) GPIO_enDIR_INPUT << 8UL)
            | ((UBase_t) GPIO_enOUTMODE_PUSHPULL << 4UL)
            | ((UBase_t) GPIO_enRESMODE_PULLDOWN << 0UL),
    GPIO_enCONFIG_INPUT_8MA_OPENDRAIN = ((UBase_t) GPIO_enDRIVE_8mA << 16UL)
            | ((UBase_t) GPIO_enDIR_INPUT << 8UL)
            | ((UBase_t) GPIO_enOUTMODE_OPENDRAIN << 4UL)
            | ((UBase_t) GPIO_enRESMODE_INACTIVE << 0UL),
    GPIO_enCONFIG_INPUT_8MA_OPENDRAIN_PULLUP = ((UBase_t) GPIO_enDRIVE_8mA << 16UL)
            | ((UBase_t) GPIO_enDIR_INPUT << 8UL)
            | ((UBase_t) GPIO_enOUTMODE_OPENDRAIN << 4UL)
            | ((UBase_t) GPIO_enRESMODE_PULLUP << 0UL),
    GPIO_enCONFIG_INPUT_8MA_OPENDRAIN_PULLDOWN = ((UBase_t) GPIO_enDRIVE_8mA << 16UL)
            | ((UBase_t) GPIO_enDIR_INPUT << 8UL)
            | ((UBase_t) GPIO_enOUTMODE_OPENDRAIN << 4UL)
            | ((UBase_t) GPIO_enRESMODE_PULLDOWN << 0UL),
    GPIO_enCONFIG_INPUT_8MA_SLR_PUSHPULL = ((UBase_t) GPIO_enDRIVE_8mA_SLR << 16UL)
            | ((UBase_t) GPIO_enDIR_INPUT << 8UL)
            | ((UBase_t) GPIO_enOUTMODE_PUSHPULL << 4UL)
            | ((UBase_t) GPIO_enRESMODE_INACTIVE << 0UL),
    GPIO_enCONFIG_INPUT_8MA_SLR_PUSHPULL_PULLUP = ((UBase_t) GPIO_enDRIVE_8mA_SLR << 16UL)
            | ((UBase_t) GPIO_enDIR_INPUT << 8UL)
            | ((UBase_t) GPIO_enOUTMODE_PUSHPULL << 4UL)
            | ((UBase_t) GPIO_enRESMODE_PULLUP << 0UL),
    GPIO_enCONFIG_INPUT_8MA_SLR_PUSHPULL_PULLDOWN = ((UBase_t) GPIO_enDRIVE_8mA_SLR << 16UL)
            | ((UBase_t) GPIO_enDIR_INPUT << 8UL)
            | ((UBase_t) GPIO_enOUTMODE_PUSHPULL << 4UL)
            | ((UBase_t) GPIO_enRESMODE_PULLDOWN << 0UL),
    GPIO_enCONFIG_INPUT_8MA_SLR_OPENDRAIN = ((UBase_t) GPIO_enDRIVE_8mA_SLR << 16UL)
            | ((UBase_t) GPIO_enDIR_INPUT << 8UL)
            | ((UBase_t) GPIO_enOUTMODE_OPENDRAIN << 4UL)
            | ((UBase_t) GPIO_enRESMODE_INACTIVE << 0UL),
    GPIO_enCONFIG_INPUT_8MA_SLR_OPENDRAIN_PULLUP = ((UBase_t) GPIO_enDRIVE_8mA_SLR << 16UL)
            | ((UBase_t) GPIO_enDIR_INPUT << 8UL)
            | ((UBase_t) GPIO_enOUTMODE_OPENDRAIN << 4UL)
            | ((UBase_t) GPIO_enRESMODE_PULLUP << 0UL),
    GPIO_enCONFIG_INPUT_8MA_SLR_OPENDRAIN_PULLDOWN = ((UBase_t) GPIO_enDRIVE_8mA_SLR << 16UL)
            | ((UBase_t) GPIO_enDIR_INPUT << 8UL)
            | ((UBase_t) GPIO_enOUTMODE_OPENDRAIN << 4UL)
            | ((UBase_t) GPIO_enRESMODE_PULLDOWN << 0UL),
    GPIO_enCONFIG_INPUT_10MA_PUSHPULL = ((UBase_t) GPIO_enDRIVE_10mA << 16UL)
            | ((UBase_t) GPIO_enDIR_INPUT << 8UL)
            | ((UBase_t) GPIO_enOUTMODE_PUSHPULL << 4UL)
            | ((UBase_t) GPIO_enRESMODE_INACTIVE << 0UL),
    GPIO_enCONFIG_INPUT_10MA_PUSHPULL_PULLUP = ((UBase_t) GPIO_enDRIVE_10mA << 16UL)
            | ((UBase_t) GPIO_enDIR_INPUT << 8UL)
            | ((UBase_t) GPIO_enOUTMODE_PUSHPULL << 4UL)
            | ((UBase_t) GPIO_enRESMODE_PULLUP << 0UL),
    GPIO_enCONFIG_INPUT_10MA_PUSHPULL_PULLDOWN = ((UBase_t) GPIO_enDRIVE_10mA << 16UL)
            | ((UBase_t) GPIO_enDIR_INPUT << 8UL)
            | ((UBase_t) GPIO_enOUTMODE_PUSHPULL << 4UL)
            | ((UBase_t) GPIO_enRESMODE_PULLDOWN << 0UL),
    GPIO_enCONFIG_INPUT_10MA_OPENDRAIN = ((UBase_t) GPIO_enDRIVE_10mA << 16UL)
            | ((UBase_t) GPIO_enDIR_INPUT << 8UL)
            | ((UBase_t) GPIO_enOUTMODE_OPENDRAIN << 4UL)
            | ((UBase_t) GPIO_enRESMODE_INACTIVE << 0UL),
    GPIO_enCONFIG_INPUT_10MA_OPENDRAIN_PULLUP = ((UBase_t) GPIO_enDRIVE_10mA << 16UL)
            | ((UBase_t) GPIO_enDIR_INPUT << 8UL)
            | ((UBase_t) GPIO_enOUTMODE_OPENDRAIN << 4UL)
            | ((UBase_t) GPIO_enRESMODE_PULLUP << 0UL),
    GPIO_enCONFIG_INPUT_10MA_OPENDRAIN_PULLDOWN = ((UBase_t) GPIO_enDRIVE_10mA << 16UL)
            | ((UBase_t) GPIO_enDIR_INPUT << 8UL)
            | ((UBase_t) GPIO_enOUTMODE_OPENDRAIN << 4UL)
            | ((UBase_t) GPIO_enRESMODE_PULLDOWN << 0UL),
    GPIO_enCONFIG_INPUT_10MA_SLR_PUSHPULL = ((UBase_t) GPIO_enDRIVE_10mA_SLR << 16UL)
            | ((UBase_t) GPIO_enDIR_INPUT << 8UL)
            | ((UBase_t) GPIO_enOUTMODE_PUSHPULL << 4UL)
            | ((UBase_t) GPIO_enRESMODE_INACTIVE << 0UL),
    GPIO_enCONFIG_INPUT_10MA_SLR_PUSHPULL_PULLUP = ((UBase_t) GPIO_enDRIVE_10mA_SLR << 16UL)
            | ((UBase_t) GPIO_enDIR_INPUT << 8UL)
            | ((UBase_t) GPIO_enOUTMODE_PUSHPULL << 4UL)
            | ((UBase_t) GPIO_enRESMODE_PULLUP << 0UL),
    GPIO_enCONFIG_INPUT_10MA_SLR_PUSHPULL_PULLDOWN = ((UBase_t) GPIO_enDRIVE_10mA_SLR << 16UL)
            | ((UBase_t) GPIO_enDIR_INPUT << 8UL)
            | ((UBase_t) GPIO_enOUTMODE_PUSHPULL << 4UL)
            | ((UBase_t) GPIO_enRESMODE_PULLDOWN << 0UL),
    GPIO_enCONFIG_INPUT_10MA_SLR_OPENDRAIN = ((UBase_t) GPIO_enDRIVE_10mA_SLR << 16UL)
            | ((UBase_t) GPIO_enDIR_INPUT << 8UL)
            | ((UBase_t) GPIO_enOUTMODE_OPENDRAIN << 4UL)
            | ((UBase_t) GPIO_enRESMODE_INACTIVE << 0UL),
    GPIO_enCONFIG_INPUT_10MA_SLR_OPENDRAIN_PULLUP = ((UBase_t) GPIO_enDRIVE_10mA_SLR << 16UL)
            | ((UBase_t) GPIO_enDIR_INPUT << 8UL)
            | ((UBase_t) GPIO_enOUTMODE_OPENDRAIN << 4UL)
            | ((UBase_t) GPIO_enRESMODE_PULLUP << 0UL),
    GPIO_enCONFIG_INPUT_10MA_SLR_OPENDRAIN_PULLDOWN = ((UBase_t) GPIO_enDRIVE_10mA_SLR << 16UL)
            | ((UBase_t) GPIO_enDIR_INPUT << 8UL)
            | ((UBase_t) GPIO_enOUTMODE_OPENDRAIN << 4UL)
            | ((UBase_t) GPIO_enRESMODE_PULLDOWN << 0UL),
    GPIO_enCONFIG_INPUT_12MA_PUSHPULL = ((UBase_t) GPIO_enDRIVE_12mA << 16UL)
            | ((UBase_t) GPIO_enDIR_INPUT << 8UL)
            | ((UBase_t) GPIO_enOUTMODE_PUSHPULL << 4UL)
            | ((UBase_t) GPIO_enRESMODE_INACTIVE << 0UL),
    GPIO_enCONFIG_INPUT_12MA_PUSHPULL_PULLUP = ((UBase_t) GPIO_enDRIVE_12mA << 16UL)
            | ((UBase_t) GPIO_enDIR_INPUT << 8UL)
            | ((UBase_t) GPIO_enOUTMODE_PUSHPULL << 4UL)
            | ((UBase_t) GPIO_enRESMODE_PULLUP << 0UL),
    GPIO_enCONFIG_INPUT_12MA_PUSHPULL_PULLDOWN = ((UBase_t) GPIO_enDRIVE_12mA << 16UL)
            | ((UBase_t) GPIO_enDIR_INPUT << 8UL)
            | ((UBase_t) GPIO_enOUTMODE_PUSHPULL << 4UL)
            | ((UBase_t) GPIO_enRESMODE_PULLDOWN << 0UL),
    GPIO_enCONFIG_INPUT_12MA_OPENDRAIN = ((UBase_t) GPIO_enDRIVE_12mA << 16UL)
            | ((UBase_t) GPIO_enDIR_INPUT << 8UL)
            | ((UBase_t) GPIO_enOUTMODE_OPENDRAIN << 4UL)
            | ((UBase_t) GPIO_enRESMODE_INACTIVE << 0UL),
    GPIO_enCONFIG_INPUT_12MA_OPENDRAIN_PULLUP = ((UBase_t) GPIO_enDRIVE_12mA << 16UL)
            | ((UBase_t) GPIO_enDIR_INPUT << 8UL)
            | ((UBase_t) GPIO_enOUTMODE_OPENDRAIN << 4UL)
            | ((UBase_t) GPIO_enRESMODE_PULLUP << 0UL),
    GPIO_enCONFIG_INPUT_12MA_OPENDRAIN_PULLDOWN = ((UBase_t) GPIO_enDRIVE_12mA << 16UL)
            | ((UBase_t) GPIO_enDIR_INPUT << 8UL)
            | ((UBase_t) GPIO_enOUTMODE_OPENDRAIN << 4UL)
            | ((UBase_t) GPIO_enRESMODE_PULLDOWN << 0UL),
    GPIO_enCONFIG_INPUT_12MA_SLR_PUSHPULL = ((UBase_t) GPIO_enDRIVE_12mA_SLR << 16UL)
            | ((UBase_t) GPIO_enDIR_INPUT << 8UL)
            | ((UBase_t) GPIO_enOUTMODE_PUSHPULL << 4UL)
            | ((UBase_t) GPIO_enRESMODE_INACTIVE << 0UL),
    GPIO_enCONFIG_INPUT_12MA_SLR_PUSHPULL_PULLUP = ((UBase_t) GPIO_enDRIVE_12mA_SLR << 16UL)
            | ((UBase_t) GPIO_enDIR_INPUT << 8UL)
            | ((UBase_t) GPIO_enOUTMODE_PUSHPULL << 4UL)
            | ((UBase_t) GPIO_enRESMODE_PULLUP << 0UL),
    GPIO_enCONFIG_INPUT_12MA_SLR_PUSHPULL_PULLDOWN = ((UBase_t) GPIO_enDRIVE_12mA_SLR << 16UL)
            | ((UBase_t) GPIO_enDIR_INPUT << 8UL)
            | ((UBase_t) GPIO_enOUTMODE_PUSHPULL << 4UL)
            | ((UBase_t) GPIO_enRESMODE_PULLDOWN << 0UL),
    GPIO_enCONFIG_INPUT_12MA_SLR_OPENDRAIN = ((UBase_t) GPIO_enDRIVE_12mA_SLR << 16UL)
            | ((UBase_t) GPIO_enDIR_INPUT << 8UL)
            | ((UBase_t) GPIO_enOUTMODE_OPENDRAIN << 4UL)
            | ((UBase_t) GPIO_enRESMODE_INACTIVE << 0UL),
    GPIO_enCONFIG_INPUT_12MA_SLR_OPENDRAIN_PULLUP = ((UBase_t) GPIO_enDRIVE_12mA_SLR << 16UL)
            | ((UBase_t) GPIO_enDIR_INPUT << 8UL)
            | ((UBase_t) GPIO_enOUTMODE_OPENDRAIN << 4UL)
            | ((UBase_t) GPIO_enRESMODE_PULLUP << 0UL),
    GPIO_enCONFIG_INPUT_12MA_SLR_OPENDRAIN_PULLDOWN = ((UBase_t) GPIO_enDRIVE_12mA_SLR << 16UL)
            | ((UBase_t) GPIO_enDIR_INPUT << 8UL)
            | ((UBase_t) GPIO_enOUTMODE_OPENDRAIN << 4UL)
            | ((UBase_t) GPIO_enRESMODE_PULLDOWN << 0UL),
    GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL = ((UBase_t) GPIO_enDRIVE_2mA << 16UL)
            | ((UBase_t) GPIO_enDIR_OUTPUT << 8UL)
            | ((UBase_t) GPIO_enOUTMODE_PUSHPULL << 4UL)
            | ((UBase_t) GPIO_enRESMODE_INACTIVE << 0UL),
    GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL_PULLUP = ((UBase_t) GPIO_enDRIVE_2mA << 16UL)
            | ((UBase_t) GPIO_enDIR_OUTPUT << 8UL)
            | ((UBase_t) GPIO_enOUTMODE_PUSHPULL << 4UL)
            | ((UBase_t) GPIO_enRESMODE_PULLUP << 0UL),
    GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL_PULLDOWN = ((UBase_t) GPIO_enDRIVE_2mA << 16UL)
            | ((UBase_t) GPIO_enDIR_OUTPUT << 8UL)
            | ((UBase_t) GPIO_enOUTMODE_PUSHPULL << 4UL)
            | ((UBase_t) GPIO_enRESMODE_PULLDOWN << 0UL),
    GPIO_enCONFIG_OUTPUT_2MA_OPENDRAIN = ((UBase_t) GPIO_enDRIVE_2mA << 16UL)
            | ((UBase_t) GPIO_enDIR_OUTPUT << 8UL)
            | ((UBase_t) GPIO_enOUTMODE_OPENDRAIN << 4UL)
            | ((UBase_t) GPIO_enRESMODE_INACTIVE << 0UL),
    GPIO_enCONFIG_OUTPUT_2MA_OPENDRAIN_PULLUP = ((UBase_t) GPIO_enDRIVE_2mA << 16UL)
            | ((UBase_t) GPIO_enDIR_OUTPUT << 8UL)
            | ((UBase_t) GPIO_enOUTMODE_OPENDRAIN << 4UL)
            | ((UBase_t) GPIO_enRESMODE_PULLUP << 0UL),
    GPIO_enCONFIG_OUTPUT_2MA_OPENDRAIN_PULLDOWN = ((UBase_t) GPIO_enDRIVE_2mA << 16UL)
            | ((UBase_t) GPIO_enDIR_OUTPUT << 8UL)
            | ((UBase_t) GPIO_enOUTMODE_OPENDRAIN << 4UL)
            | ((UBase_t) GPIO_enRESMODE_PULLDOWN << 0UL),
    GPIO_enCONFIG_OUTPUT_4MA_PUSHPULL = ((UBase_t) GPIO_enDRIVE_4mA << 16UL)
            | ((UBase_t) GPIO_enDIR_OUTPUT << 8UL)
            | ((UBase_t) GPIO_enOUTMODE_PUSHPULL << 4UL)
            | ((UBase_t) GPIO_enRESMODE_INACTIVE << 0UL),
    GPIO_enCONFIG_OUTPUT_4MA_PUSHPULL_PULLUP = ((UBase_t) GPIO_enDRIVE_4mA << 16UL)
            | ((UBase_t) GPIO_enDIR_OUTPUT << 8UL)
            | ((UBase_t) GPIO_enOUTMODE_PUSHPULL << 4UL)
            | ((UBase_t) GPIO_enRESMODE_PULLUP << 0UL),
    GPIO_enCONFIG_OUTPUT_4MA_PUSHPULL_PULLDOWN = ((UBase_t) GPIO_enDRIVE_4mA << 16UL)
            | ((UBase_t) GPIO_enDIR_OUTPUT << 8UL)
            | ((UBase_t) GPIO_enOUTMODE_PUSHPULL << 4UL)
            | ((UBase_t) GPIO_enRESMODE_PULLDOWN << 0UL),
    GPIO_enCONFIG_OUTPUT_4MA_OPENDRAIN = ((UBase_t) GPIO_enDRIVE_4mA << 16UL)
            | ((UBase_t) GPIO_enDIR_OUTPUT << 8UL)
            | ((UBase_t) GPIO_enOUTMODE_OPENDRAIN << 4UL)
            | ((UBase_t) GPIO_enRESMODE_INACTIVE << 0UL),
    GPIO_enCONFIG_OUTPUT_4MA_OPENDRAIN_PULLUP = ((UBase_t) GPIO_enDRIVE_4mA << 16UL)
            | ((UBase_t) GPIO_enDIR_OUTPUT << 8UL)
            | ((UBase_t) GPIO_enOUTMODE_OPENDRAIN << 4UL)
            | ((UBase_t) GPIO_enRESMODE_PULLUP << 0UL),
    GPIO_enCONFIG_OUTPUT_4MA_OPENDRAIN_PULLDOWN = ((UBase_t) GPIO_enDRIVE_4mA << 16UL)
            | ((UBase_t) GPIO_enDIR_OUTPUT << 8UL)
            | ((UBase_t) GPIO_enOUTMODE_OPENDRAIN << 4UL)
            | ((UBase_t) GPIO_enRESMODE_PULLDOWN << 0UL),
    GPIO_enCONFIG_OUTPUT_6MA_PUSHPULL = ((UBase_t) GPIO_enDRIVE_6mA << 16UL)
            | ((UBase_t) GPIO_enDIR_OUTPUT << 8UL)
            | ((UBase_t) GPIO_enOUTMODE_PUSHPULL << 4UL)
            | ((UBase_t) GPIO_enRESMODE_INACTIVE << 0UL),
    GPIO_enCONFIG_OUTPUT_6MA_PUSHPULL_PULLUP = ((UBase_t) GPIO_enDRIVE_6mA << 16UL)
            | ((UBase_t) GPIO_enDIR_OUTPUT << 8UL)
            | ((UBase_t) GPIO_enOUTMODE_PUSHPULL << 4UL)
            | ((UBase_t) GPIO_enRESMODE_PULLUP << 0UL),
    GPIO_enCONFIG_OUTPUT_6MA_PUSHPULL_PULLDOWN = ((UBase_t) GPIO_enDRIVE_6mA << 16UL)
            | ((UBase_t) GPIO_enDIR_OUTPUT << 8UL)
            | ((UBase_t) GPIO_enOUTMODE_PUSHPULL << 4UL)
            | ((UBase_t) GPIO_enRESMODE_PULLDOWN << 0UL),
    GPIO_enCONFIG_OUTPUT_6MA_OPENDRAIN = ((UBase_t) GPIO_enDRIVE_6mA << 16UL)
            | ((UBase_t) GPIO_enDIR_OUTPUT << 8UL)
            | ((UBase_t) GPIO_enOUTMODE_OPENDRAIN << 4UL)
            | ((UBase_t) GPIO_enRESMODE_INACTIVE << 0UL),
    GPIO_enCONFIG_OUTPUT_6MA_OPENDRAIN_PULLUP = ((UBase_t) GPIO_enDRIVE_6mA << 16UL)
            | ((UBase_t) GPIO_enDIR_OUTPUT << 8UL)
            | ((UBase_t) GPIO_enOUTMODE_OPENDRAIN << 4UL)
            | ((UBase_t) GPIO_enRESMODE_PULLUP << 0UL),
    GPIO_enCONFIG_OUTPUT_6MA_OPENDRAIN_PULLDOWN = ((UBase_t) GPIO_enDRIVE_6mA << 16UL)
            | ((UBase_t) GPIO_enDIR_OUTPUT << 8UL)
            | ((UBase_t) GPIO_enOUTMODE_OPENDRAIN << 4UL)
            | ((UBase_t) GPIO_enRESMODE_PULLDOWN << 0UL),
    GPIO_enCONFIG_OUTPUT_8MA_PUSHPULL = ((UBase_t) GPIO_enDRIVE_8mA << 16UL)
            | ((UBase_t) GPIO_enDIR_OUTPUT << 8UL)
            | ((UBase_t) GPIO_enOUTMODE_PUSHPULL << 4UL)
            | ((UBase_t) GPIO_enRESMODE_INACTIVE << 0UL),
    GPIO_enCONFIG_OUTPUT_8MA_PUSHPULL_PULLUP = ((UBase_t) GPIO_enDRIVE_8mA << 16UL)
            | ((UBase_t) GPIO_enDIR_OUTPUT << 8UL)
            | ((UBase_t) GPIO_enOUTMODE_PUSHPULL << 4UL)
            | ((UBase_t) GPIO_enRESMODE_PULLUP << 0UL),
    GPIO_enCONFIG_OUTPUT_8MA_PUSHPULL_PULLDOWN = ((UBase_t) GPIO_enDRIVE_8mA << 16UL)
            | ((UBase_t) GPIO_enDIR_OUTPUT << 8UL)
            | ((UBase_t) GPIO_enOUTMODE_PUSHPULL << 4UL)
            | ((UBase_t) GPIO_enRESMODE_PULLDOWN << 0UL),
    GPIO_enCONFIG_OUTPUT_8MA_OPENDRAIN = ((UBase_t) GPIO_enDRIVE_8mA << 16UL)
            | ((UBase_t) GPIO_enDIR_OUTPUT << 8UL)
            | ((UBase_t) GPIO_enOUTMODE_OPENDRAIN << 4UL)
            | ((UBase_t) GPIO_enRESMODE_INACTIVE << 0UL),
    GPIO_enCONFIG_OUTPUT_8MA_OPENDRAIN_PULLUP = ((UBase_t) GPIO_enDRIVE_8mA << 16UL)
            | ((UBase_t) GPIO_enDIR_OUTPUT << 8UL)
            | ((UBase_t) GPIO_enOUTMODE_OPENDRAIN << 4UL)
            | ((UBase_t) GPIO_enRESMODE_PULLUP << 0UL),
    GPIO_enCONFIG_OUTPUT_8MA_OPENDRAIN_PULLDOWN = ((UBase_t) GPIO_enDRIVE_8mA << 16UL)
            | ((UBase_t) GPIO_enDIR_OUTPUT << 8UL)
            | ((UBase_t) GPIO_enOUTMODE_OPENDRAIN << 4UL)
            | ((UBase_t) GPIO_enRESMODE_PULLDOWN << 0UL),
    GPIO_enCONFIG_OUTPUT_8MA_SLR_PUSHPULL = ((UBase_t) GPIO_enDRIVE_8mA_SLR << 16UL)
            | ((UBase_t) GPIO_enDIR_OUTPUT << 8UL)
            | ((UBase_t) GPIO_enOUTMODE_PUSHPULL << 4UL)
            | ((UBase_t) GPIO_enRESMODE_INACTIVE << 0UL),
    GPIO_enCONFIG_OUTPUT_8MA_SLR_PUSHPULL_PULLUP = ((UBase_t) GPIO_enDRIVE_8mA_SLR << 16UL)
            | ((UBase_t) GPIO_enDIR_OUTPUT << 8UL)
            | ((UBase_t) GPIO_enOUTMODE_PUSHPULL << 4UL)
            | ((UBase_t) GPIO_enRESMODE_PULLUP << 0UL),
    GPIO_enCONFIG_OUTPUT_8MA_SLR_PUSHPULL_PULLDOWN = ((UBase_t) GPIO_enDRIVE_8mA_SLR << 16UL)
            | ((UBase_t) GPIO_enDIR_OUTPUT << 8UL)
            | ((UBase_t) GPIO_enOUTMODE_PUSHPULL << 4UL)
            | ((UBase_t) GPIO_enRESMODE_PULLDOWN << 0UL),
    GPIO_enCONFIG_OUTPUT_8MA_SLR_OPENDRAIN = ((UBase_t) GPIO_enDRIVE_8mA_SLR << 16UL)
            | ((UBase_t) GPIO_enDIR_OUTPUT << 8UL)
            | ((UBase_t) GPIO_enOUTMODE_OPENDRAIN << 4UL)
            | ((UBase_t) GPIO_enRESMODE_INACTIVE << 0UL),
    GPIO_enCONFIG_OUTPUT_8MA_SLR_OPENDRAIN_PULLUP = ((UBase_t) GPIO_enDRIVE_8mA_SLR << 16UL)
            | ((UBase_t) GPIO_enDIR_OUTPUT << 8UL)
            | ((UBase_t) GPIO_enOUTMODE_OPENDRAIN << 4UL)
            | ((UBase_t) GPIO_enRESMODE_PULLUP << 0UL),
    GPIO_enCONFIG_OUTPUT_8MA_SLR_OPENDRAIN_PULLDOWN = ((UBase_t) GPIO_enDRIVE_8mA_SLR << 16UL)
            | ((UBase_t) GPIO_enDIR_OUTPUT << 8UL)
            | ((UBase_t) GPIO_enOUTMODE_OPENDRAIN << 4UL)
            | ((UBase_t) GPIO_enRESMODE_PULLDOWN << 0UL),
    GPIO_enCONFIG_OUTPUT_10MA_PUSHPULL = ((UBase_t) GPIO_enDRIVE_10mA << 16UL)
            | ((UBase_t) GPIO_enDIR_OUTPUT << 8UL)
            | ((UBase_t) GPIO_enOUTMODE_PUSHPULL << 4UL)
            | ((UBase_t) GPIO_enRESMODE_INACTIVE << 0UL),
    GPIO_enCONFIG_OUTPUT_10MA_PUSHPULL_PULLUP = ((UBase_t) GPIO_enDRIVE_10mA << 16UL)
            | ((UBase_t) GPIO_enDIR_OUTPUT << 8UL)
            | ((UBase_t) GPIO_enOUTMODE_PUSHPULL << 4UL)
            | ((UBase_t) GPIO_enRESMODE_PULLUP << 0UL),
    GPIO_enCONFIG_OUTPUT_10MA_PUSHPULL_PULLDOWN = ((UBase_t) GPIO_enDRIVE_10mA << 16UL)
            | ((UBase_t) GPIO_enDIR_OUTPUT << 8UL)
            | ((UBase_t) GPIO_enOUTMODE_PUSHPULL << 4UL)
            | ((UBase_t) GPIO_enRESMODE_PULLDOWN << 0UL),
    GPIO_enCONFIG_OUTPUT_10MA_OPENDRAIN = ((UBase_t) GPIO_enDRIVE_10mA << 16UL)
            | ((UBase_t) GPIO_enDIR_OUTPUT << 8UL)
            | ((UBase_t) GPIO_enOUTMODE_OPENDRAIN << 4UL)
            | ((UBase_t) GPIO_enRESMODE_INACTIVE << 0UL),
    GPIO_enCONFIG_OUTPUT_10MA_OPENDRAIN_PULLUP = ((UBase_t) GPIO_enDRIVE_10mA << 16UL)
            | ((UBase_t) GPIO_enDIR_OUTPUT << 8UL)
            | ((UBase_t) GPIO_enOUTMODE_OPENDRAIN << 4UL)
            | ((UBase_t) GPIO_enRESMODE_PULLUP << 0UL),
    GPIO_enCONFIG_OUTPUT_10MA_OPENDRAIN_PULLDOWN = ((UBase_t) GPIO_enDRIVE_10mA << 16UL)
            | ((UBase_t) GPIO_enDIR_OUTPUT << 8UL)
            | ((UBase_t) GPIO_enOUTMODE_OPENDRAIN << 4UL)
            | ((UBase_t) GPIO_enRESMODE_PULLDOWN << 0UL),
    GPIO_enCONFIG_OUTPUT_10MA_SLR_PUSHPULL = ((UBase_t) GPIO_enDRIVE_10mA_SLR << 16UL)
            | ((UBase_t) GPIO_enDIR_OUTPUT << 8UL)
            | ((UBase_t) GPIO_enOUTMODE_PUSHPULL << 4UL)
            | ((UBase_t) GPIO_enRESMODE_INACTIVE << 0UL),
    GPIO_enCONFIG_OUTPUT_10MA_SLR_PUSHPULL_PULLUP = ((UBase_t) GPIO_enDRIVE_10mA_SLR << 16UL)
            | ((UBase_t) GPIO_enDIR_OUTPUT << 8UL)
            | ((UBase_t) GPIO_enOUTMODE_PUSHPULL << 4UL)
            | ((UBase_t) GPIO_enRESMODE_PULLUP << 0UL),
    GPIO_enCONFIG_OUTPUT_10MA_SLR_PUSHPULL_PULLDOWN = ((UBase_t) GPIO_enDRIVE_10mA_SLR << 16UL)
            | ((UBase_t) GPIO_enDIR_OUTPUT << 8UL)
            | ((UBase_t) GPIO_enOUTMODE_PUSHPULL << 4UL)
            | ((UBase_t) GPIO_enRESMODE_PULLDOWN << 0UL),
    GPIO_enCONFIG_OUTPUT_10MA_SLR_OPENDRAIN = ((UBase_t) GPIO_enDRIVE_10mA_SLR << 16UL)
            | ((UBase_t) GPIO_enDIR_OUTPUT << 8UL)
            | ((UBase_t) GPIO_enOUTMODE_OPENDRAIN << 4UL)
            | ((UBase_t) GPIO_enRESMODE_INACTIVE << 0UL),
    GPIO_enCONFIG_OUTPUT_10MA_SLR_OPENDRAIN_PULLUP = ((UBase_t) GPIO_enDRIVE_10mA_SLR << 16UL)
            | ((UBase_t) GPIO_enDIR_OUTPUT << 8UL)
            | ((UBase_t) GPIO_enOUTMODE_OPENDRAIN << 4UL)
            | ((UBase_t) GPIO_enRESMODE_PULLUP << 0UL),
    GPIO_enCONFIG_OUTPUT_10MA_SLR_OPENDRAIN_PULLDOWN = ((UBase_t) GPIO_enDRIVE_10mA_SLR << 16UL)
            | ((UBase_t) GPIO_enDIR_OUTPUT << 8UL)
            | ((UBase_t) GPIO_enOUTMODE_OPENDRAIN << 4UL)
            | ((UBase_t) GPIO_enRESMODE_PULLDOWN << 0UL),
    GPIO_enCONFIG_OUTPUT_12MA_PUSHPULL = ((UBase_t) GPIO_enDRIVE_12mA << 16UL)
            | ((UBase_t) GPIO_enDIR_OUTPUT << 8UL)
            | ((UBase_t) GPIO_enOUTMODE_PUSHPULL << 4UL)
            | ((UBase_t) GPIO_enRESMODE_INACTIVE << 0UL),
    GPIO_enCONFIG_OUTPUT_12MA_PUSHPULL_PULLUP = ((UBase_t) GPIO_enDRIVE_12mA << 16UL)
            | ((UBase_t) GPIO_enDIR_OUTPUT << 8UL)
            | ((UBase_t) GPIO_enOUTMODE_PUSHPULL << 4UL)
            | ((UBase_t) GPIO_enRESMODE_PULLUP << 0UL),
    GPIO_enCONFIG_OUTPUT_12MA_PUSHPULL_PULLDOWN = ((UBase_t) GPIO_enDRIVE_12mA << 16UL)
            | ((UBase_t) GPIO_enDIR_OUTPUT << 8UL)
            | ((UBase_t) GPIO_enOUTMODE_PUSHPULL << 4UL)
            | ((UBase_t) GPIO_enRESMODE_PULLDOWN << 0UL),
    GPIO_enCONFIG_OUTPUT_12MA_OPENDRAIN = ((UBase_t) GPIO_enDRIVE_12mA << 16UL)
            | ((UBase_t) GPIO_enDIR_OUTPUT << 8UL)
            | ((UBase_t) GPIO_enOUTMODE_OPENDRAIN << 4UL)
            | ((UBase_t) GPIO_enRESMODE_INACTIVE << 0UL),
    GPIO_enCONFIG_OUTPUT_12MA_OPENDRAIN_PULLUP = ((UBase_t) GPIO_enDRIVE_12mA << 16UL)
            | ((UBase_t) GPIO_enDIR_OUTPUT << 8UL)
            | ((UBase_t) GPIO_enOUTMODE_OPENDRAIN << 4UL)
            | ((UBase_t) GPIO_enRESMODE_PULLUP << 0UL),
    GPIO_enCONFIG_OUTPUT_12MA_OPENDRAIN_PULLDOWN = ((UBase_t) GPIO_enDRIVE_12mA << 16UL)
            | ((UBase_t) GPIO_enDIR_OUTPUT << 8UL)
            | ((UBase_t) GPIO_enOUTMODE_OPENDRAIN << 4UL)
            | ((UBase_t) GPIO_enRESMODE_PULLDOWN << 0UL),
    GPIO_enCONFIG_OUTPUT_12MA_SLR_PUSHPULL = ((UBase_t) GPIO_enDRIVE_12mA_SLR << 16UL)
            | ((UBase_t) GPIO_enDIR_OUTPUT << 8UL)
            | ((UBase_t) GPIO_enOUTMODE_PUSHPULL << 4UL)
            | ((UBase_t) GPIO_enRESMODE_INACTIVE << 0UL),
    GPIO_enCONFIG_OUTPUT_12MA_SLR_PUSHPULL_PULLUP = ((UBase_t) GPIO_enDRIVE_12mA_SLR << 16UL)
            | ((UBase_t) GPIO_enDIR_OUTPUT << 8UL)
            | ((UBase_t) GPIO_enOUTMODE_PUSHPULL << 4UL)
            | ((UBase_t) GPIO_enRESMODE_PULLUP << 0UL),
    GPIO_enCONFIG_OUTPUT_12MA_SLR_PUSHPULL_PULLDOWN = ((UBase_t) GPIO_enDRIVE_12mA_SLR << 16UL)
            | ((UBase_t) GPIO_enDIR_OUTPUT << 8UL)
            | ((UBase_t) GPIO_enOUTMODE_PUSHPULL << 4UL)
            | ((UBase_t) GPIO_enRESMODE_PULLDOWN << 0UL),
    GPIO_enCONFIG_OUTPUT_12MA_SLR_OPENDRAIN = ((UBase_t) GPIO_enDRIVE_12mA_SLR << 16UL)
            | ((UBase_t) GPIO_enDIR_OUTPUT << 8UL)
            | ((UBase_t) GPIO_enOUTMODE_OPENDRAIN << 4UL)
            | ((UBase_t) GPIO_enRESMODE_INACTIVE << 0UL),
    GPIO_enCONFIG_OUTPUT_12MA_SLR_OPENDRAIN_PULLUP = ((UBase_t) GPIO_enDRIVE_12mA_SLR << 16UL)
            | ((UBase_t) GPIO_enDIR_OUTPUT << 8UL)
            | ((UBase_t) GPIO_enOUTMODE_OPENDRAIN << 4UL)
            | ((UBase_t) GPIO_enRESMODE_PULLUP << 0UL),
    GPIO_enCONFIG_OUTPUT_12MA_SLR_OPENDRAIN_PULLDOWN = ((UBase_t) GPIO_enDRIVE_12mA_SLR << 16UL)
            | ((UBase_t) GPIO_enDIR_OUTPUT << 8UL)
            | ((UBase_t) GPIO_enOUTMODE_OPENDRAIN << 4UL)
            | ((UBase_t) GPIO_enRESMODE_PULLDOWN << 0UL),
    GPIO_enCONFIG_UNDEF = UNDEF_VALUE,
} GPIO_nCONFIG;

typedef enum
{
    GPIO_enINT_CONFIG_EDGE_FALLING = ((UBase_t) GPIO_enSENSE_EDGE << 8UL) | ((UBase_t) GPIO_enEDGE_FALLING << 0UL),
    GPIO_enINT_CONFIG_EDGE_RISING = ((UBase_t) GPIO_enSENSE_EDGE << 8UL) | ((UBase_t) GPIO_enEDGE_RISING << 0UL),
    GPIO_enINT_CONFIG_EDGE_BOTH = ((UBase_t) GPIO_enSENSE_EDGE << 8UL) | ((UBase_t) GPIO_enEDGE_BOTH << 0UL),
    GPIO_enINT_CONFIG_LEVEL_LOW = ((UBase_t) GPIO_enSENSE_LEVEL << 8UL) | ((UBase_t) GPIO_enLEVEL_LOW << 0UL),
    GPIO_enINT_CONFIG_LEVEL_HIGH = ((UBase_t) GPIO_enSENSE_LEVEL << 8UL) | ((UBase_t) GPIO_enLEVEL_HIGH << 0UL),
    GPIO_enINT_CONFIG_UNDEF = UNDEF_VALUE,
} GPIO_nINT_CONFIG;

typedef struct
{
    GPIO_nDRIVE enDrive;
    GPIO_nDIR enDirection;
    GPIO_nOUTMODE enOutputMode;
    GPIO_nRESMODE enResistorMode;
} GPIO_CONFIG_t;

typedef MCU_Register_t GPIO_Register_t;
typedef MCU_pvfIRQVectorHandler_t GPIO_pvfIRQVectorHandler_t;
typedef MCU_pvfIRQSourceHandler_t GPIO_pvfIRQSourceHandler_t;

#endif /* XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_ENUM_H_ */
