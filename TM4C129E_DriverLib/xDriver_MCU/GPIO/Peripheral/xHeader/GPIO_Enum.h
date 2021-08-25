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

#include <xDriver_MCU/Common/xHeader/MCU_Variables.h>

typedef enum
{
    GPIO_enSTATUS_OK = 0UL,
    GPIO_enSTATUS_ERROR = 1UL,
    GPIO_enSTATUS_UNDEF = 0xFFFFFFFFUL,
} GPIO_nSTATUS;

typedef enum
{
    GPIO_enINT_NOOCCUR = 0UL,
    GPIO_enINT_OCCUR = 1UL,
    GPIO_enINT_STATUS_UNDEF = 0xFFFFFFFFUL,
} GPIO_nINT_STATUS;

typedef enum
{
    GPIO_enNOREADY = 0UL,
    GPIO_enREADY = 1UL,
} GPIO_nREADY;

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
} GPIO_nPORT;
typedef enum
{
    GPIO_enPIN_0 = 0x1UL,
    GPIO_enPIN_1 = 0x2UL,
    GPIO_enPIN_2 = 0x4UL,
    GPIO_enPIN_3 = 0x8UL,
    GPIO_enPIN_4 = 0x10UL,
    GPIO_enPIN_5 = 0x20UL,
    GPIO_enPIN_6 = 0x40UL,
    GPIO_enPIN_7 = 0x80UL,
    GPIO_enPIN_ALL = 0xFFUL,
    GPIO_enPIN_UNDEF = 0xFFFFFFFFUL,
} GPIO_nPIN;

typedef enum
{
    GPIO_enPIN_NUMBER0 = 0x0UL,
    GPIO_enPIN_NUMBER1 = 0x1UL,
    GPIO_enPIN_NUMBER2 = 0x2UL,
    GPIO_enPIN_NUMBER3 = 0x3UL,
    GPIO_enPIN_NUMBER4 = 0x4UL,
    GPIO_enPIN_NUMBER5 = 0x5UL,
    GPIO_enPIN_NUMBER6 = 0x6UL,
    GPIO_enPIN_NUMBER7 = 0x7UL,
    GPIO_enPIN_NUMBER_MAX = 0x8UL,
} GPIO_nPIN_NUMBER;

typedef enum
{
    GPIO_enDIR_INPUT = 0UL,
    GPIO_enDIR_OUTPUT = 1UL,
    GPIO_enDIR_UNDEF = 0xFFFFFFFFUL,
} GPIO_nDIR;

typedef enum
{
    GPIO_enSENSE_EDGE = 0UL,
    GPIO_enSENSE_LEVEL = 1UL,
    GPIO_enSENSE_UNDEF = 0xFFFFFFFFUL,
} GPIO_nSENSE;

typedef enum
{
    GPIO_enINT_TYPE_SINGLE = 0UL,
    GPIO_enINT_TYPE_SEPARATE = 1UL,
    GPIO_enINT_TYPE_UNDEF = 0xFFFFFFFFUL,
} GPIO_nINT_TYPE;

typedef enum
{
    GPIO_enEDGE_FALLING = 0UL,
    GPIO_enEDGE_RISING = 1UL,
    GPIO_enEDGE_BOTH = 2UL,
    GPIO_enEDGE_UNDEF = 0xFFFFFFFFUL,
} GPIO_nEDGE;

typedef enum
{
    GPIO_enWAKE_ENABLE_DIS = 0UL,
    GPIO_enWAKE_ENABLE_ENA = 1UL,
    GPIO_enWAKE_ENABLE_UNDEF = 0xFFFFFFFFUL,
} GPIO_nWAKE_ENABLE;

typedef enum
{
    GPIO_enWAKE_LEVEL_LOW = 0UL,
    GPIO_enWAKE_LEVEL_HIGH = 1UL,
    GPIO_enWAKE_LEVEL_UNDEF = 0xFFFFFFFFUL,
} GPIO_nWAKE_LEVEL;

typedef enum
{
    GPIO_enWAKE_STATUS_IDLE = 0UL,
    GPIO_enWAKE_STATUS_ASSERT = 1UL,
    GPIO_enWAKE_STATUS_UNDEF = 0xFFFFFFFFUL,
} GPIO_nWAKE_STATUS;

typedef enum
{
    GPIO_enDRIVE_2mA = 0UL,
    GPIO_enDRIVE_4mA = 1UL,
    GPIO_enDRIVE_8mA = 2UL,
    GPIO_enDRIVE_6mA = (((uint32_t) 1UL << 16UL) | 2UL),
    GPIO_enDRIVE_8mA_SLR = (((uint32_t) 1UL << 8UL) | 2UL),
    GPIO_enDRIVE_10mA = (((uint32_t) 3UL << 16UL) | ((uint32_t) 1UL << 2UL) | 2UL),
    GPIO_enDRIVE_10mA_SLR = (((uint32_t) 3UL << 16UL) | ((uint32_t) 1UL << 8UL) | ((uint32_t) 1UL << 2UL) | 2UL),
    GPIO_enDRIVE_12mA = (((uint32_t) 3UL << 16UL) | ((uint32_t) 1UL << 2UL) | 2UL),
    GPIO_enDRIVE_12mA_SLR = (((uint32_t) 3UL << 16UL) | ((uint32_t) 1UL << 8UL) | ((uint32_t) 1UL << 2UL) | 3UL),
    GPIO_enDRIVE_UNDEF = 0xFFFFFFFFUL,
} GPIO_nDRIVE;

typedef enum
{
    GPIO_enLEVEL_LOW = 0UL,
    GPIO_enLEVEL_HIGH = 1UL,
    GPIO_enLEVEL_UNDEF = 0xFFFFFFFFUL,
} GPIO_nLEVEL;

typedef enum
{
    GPIO_enADC_TRIGGER_DIS = 0UL,
    GPIO_enADC_TRIGGER_ENA = 1UL,
    GPIO_enADC_TRIGGER_UNDEF = 0xFFFFFFFFUL,
} GPIO_nADC_TRIGGER;

typedef enum
{
    GPIO_enDMA_TRIGGER_DIS = 0UL,
    GPIO_enDMA_TRIGGER_ENA = 1UL,
    GPIO_enDMA_TRIGGER_UNDEF = 0xFFFFFFFFUL,
} GPIO_nDMA_TRIGGER;

typedef enum
{
    GPIO_enANALOG_MODE_DIS = 0UL,
    GPIO_enANALOG_MODE_ENA = 1UL,
    GPIO_enANALOG_MODE_UNDEF = 0xFFFFFFFFUL,
} GPIO_nANALOG_MODE;

typedef enum
{
    GPIO_enALT_FUNCTION_GPIO = 0UL,
    GPIO_enALT_FUNCTION_PERIPHERAL = 1UL,
    GPIO_enALT_FUNCTION_UNDEF = 0xFFFFFFFFUL,
} GPIO_nALT_FUNCTION;

typedef enum
{
    GPIO_enDIGITAL_DIS = 0UL,
    GPIO_enDIGITAL_ENA = 1UL,
    GPIO_enDIGITAL_UNDEF = 0xFFFFFFFFUL,
} GPIO_nDIGITAL;

typedef enum
{
    GPIO_enLOCK_UNLOCKED = 0UL,
    GPIO_enLOCK_LOCKED = 1UL,
    GPIO_enLOCK_UNDEF = 0xFFFFFFFFUL,
} GPIO_nLOCK;

typedef enum
{
    GPIO_enCOMMIT_DIS = 0UL,
    GPIO_enCOMMIT_ENA = 1UL,
    GPIO_enCOMMIT_UNDEF = 0xFFFFFFFFUL,
} GPIO_nCOMMIT;

typedef enum
{
    GPIO_enEXTENDED_DRIVE_NORMAL = 0UL,
    GPIO_enEXTENDED_DRIVE_EXTENDED = 1UL,
    GPIO_enEXTENDED_DRIVE_UNDEF = 0xFFFFFFFFUL,
} GPIO_nEXTENDED_DRIVE;

typedef enum
{
    GPIO_enOUTMODE_PP = 0UL,
    GPIO_enOUTMODE_OD = 1UL,
    GPIO_enOUTMODE_UNDEF = 0xFFFFFFFFUL,
} GPIO_nOUTMODE;
typedef enum
{
    GPIO_enRESMODE_INACTIVE = 0UL,
    GPIO_enRESMODE_PULLUP = 1UL,
    GPIO_enRESMODE_PULLDOWN = 2UL,
    GPIO_enRESMODE_UNDEF = 0xFFFFFFFFUL,
} GPIO_nRESMODE;

/*PORT PIN VALUE*/
typedef enum
{
    /*GPIOA*/
    GPIO_enGPIOA0 = (uint32_t) (((uint32_t) GPIO_enPORT_A << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER0 << 8UL) | (0UL)),
    GPIO_enU0Rx = (uint32_t) (((uint32_t) GPIO_enPORT_A << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER0 << 8UL) | (1UL)),
    GPIO_enI2C9SCL = (uint32_t) (((uint32_t) GPIO_enPORT_A << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER0 << 8UL) | (2UL)),
    GPIO_enT0CCP0 = (uint32_t) (((uint32_t) GPIO_enPORT_A << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER0 << 8UL) | (3UL)),
    GPIO_enCAN0Rx = (uint32_t) (((uint32_t) GPIO_enPORT_A << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER0 << 8UL) | (7UL)),

    GPIO_enGPIOA1 = (uint32_t) (((uint32_t) GPIO_enPORT_A << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER1 << 8UL) | (0UL)),
    GPIO_enU0Tx = (uint32_t) (((uint32_t) GPIO_enPORT_A << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER1 << 8UL) | (1UL)),
    GPIO_enI2C9SDA = (uint32_t) (((uint32_t) GPIO_enPORT_A << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER1 << 8UL) | (2UL)),
    GPIO_enT0CCP1 = (uint32_t) (((uint32_t) GPIO_enPORT_A << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER1 << 8UL) | (3UL)),
    GPIO_enCAN0Tx = (uint32_t) (((uint32_t) GPIO_enPORT_A << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER1 << 8UL) | (7UL)),

    GPIO_enGPIOA2 = (uint32_t) (((uint32_t) GPIO_enPORT_A << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER2 << 8UL) | (0UL)),
    GPIO_enU4Rx = (uint32_t) (((uint32_t) GPIO_enPORT_A << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER2 << 8UL) | (1UL)),
    GPIO_enI2C8SCL = (uint32_t) (((uint32_t) GPIO_enPORT_A << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER2 << 8UL) | (2UL)),
    GPIO_enT1CCP0 = (uint32_t) (((uint32_t) GPIO_enPORT_A << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER2 << 8UL) | (3UL)),
    GPIO_enSSI0Clk = (uint32_t) (((uint32_t) GPIO_enPORT_A << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER2 << 8UL) | (15UL)),

    GPIO_enGPIOA3 = (uint32_t) (((uint32_t) GPIO_enPORT_A << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER3 << 8UL) | (0UL)),
    GPIO_enU4Tx = (uint32_t) (((uint32_t) GPIO_enPORT_A << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER3 << 8UL) | (1UL)),
    GPIO_enI2C8SDA = (uint32_t) (((uint32_t) GPIO_enPORT_A << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER3 << 8UL) | (2UL)),
    GPIO_enT1CCP1 = (uint32_t) (((uint32_t) GPIO_enPORT_A << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER3 << 8UL) | (3UL)),
    GPIO_enSSI0Fss = (uint32_t) (((uint32_t) GPIO_enPORT_A << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER3 << 8UL) | (15UL)),

    GPIO_enGPIOA4 = (uint32_t) (((uint32_t) GPIO_enPORT_A << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER4 << 8UL) | (0UL)),
    GPIO_enU3Rx = (uint32_t) (((uint32_t) GPIO_enPORT_A << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER4 << 8UL) | (1UL)),
    GPIO_enI2C7SCL = (uint32_t) (((uint32_t) GPIO_enPORT_A << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER4 << 8UL) | (2UL)),
    GPIO_enT2CCP0 = (uint32_t) (((uint32_t) GPIO_enPORT_A << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER4 << 8UL) | (3UL)),
    GPIO_enSSI0Tx = (uint32_t) (((uint32_t) GPIO_enPORT_A << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER4 << 8UL) | (15UL)),
    GPIO_enSSI0XDAT0 = (uint32_t) (((uint32_t) GPIO_enPORT_A << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER4 << 8UL) | (15UL)),

    GPIO_enGPIOA5 = (uint32_t) (((uint32_t) GPIO_enPORT_A << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER5 << 8UL) | (0UL)),
    GPIO_enU3Tx = (uint32_t) (((uint32_t) GPIO_enPORT_A << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER5 << 8UL) | (1UL)),
    GPIO_enI2C7SDA = (uint32_t) (((uint32_t) GPIO_enPORT_A << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER5 << 8UL) | (2UL)),
    GPIO_enT2CCP1 = (uint32_t) (((uint32_t) GPIO_enPORT_A << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER5 << 8UL) | (3UL)),
    GPIO_enSSI0Rx = (uint32_t) (((uint32_t) GPIO_enPORT_A << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER5 << 8UL) | (15UL)),
    GPIO_enSSI0XDAT1 = (uint32_t) (((uint32_t) GPIO_enPORT_A << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER5 << 8UL) | (15UL)),

    GPIO_enGPIOA6 = (uint32_t) (((uint32_t) GPIO_enPORT_A << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER6 << 8UL) | (0UL)),
    GPIO_enU2Rx = (uint32_t) (((uint32_t) GPIO_enPORT_A << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER6 << 8UL) | (1UL)),
    GPIO_enI2C6SCL = (uint32_t) (((uint32_t) GPIO_enPORT_A << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER6 << 8UL) | (2UL)),
    GPIO_enT3CCP0 = (uint32_t) (((uint32_t) GPIO_enPORT_A << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER6 << 8UL) | (3UL)),
    GPIO_enUSB0EPEN = (uint32_t) (((uint32_t) GPIO_enPORT_A << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER6 << 8UL) | (5UL)),
    GPIO_enSSI0XDAT2 = (uint32_t) (((uint32_t) GPIO_enPORT_A << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER6 << 8UL) | (13UL)),
    GPIO_enEPI0S8 = (uint32_t) (((uint32_t) GPIO_enPORT_A << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER6 << 8UL) | (15UL)),

    GPIO_enGPIOA7 = (uint32_t) (((uint32_t) GPIO_enPORT_A << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER7 << 8UL) | (0UL)),
    GPIO_enU2Tx = (uint32_t) (((uint32_t) GPIO_enPORT_A << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER7 << 8UL) | (1UL)),
    GPIO_enI2C6SDA = (uint32_t) (((uint32_t) GPIO_enPORT_A << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER7 << 8UL) | (2UL)),
    GPIO_enT3CCP1 = (uint32_t) (((uint32_t) GPIO_enPORT_A << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER7 << 8UL) | (3UL)),
    GPIO_enUSB0PFLT = (uint32_t) (((uint32_t) GPIO_enPORT_A << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER7 << 8UL) | (5UL)),
    GPIO_enUSB0EPEN_A7 = (uint32_t) (((uint32_t) GPIO_enPORT_A << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER7 << 8UL) | (11UL)),
    GPIO_enSSI0XDAT3 = (uint32_t) (((uint32_t) GPIO_enPORT_A << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER7 << 8UL) | (13UL)),
    GPIO_enEPI0S9 = (uint32_t) (((uint32_t) GPIO_enPORT_A << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER7 << 8UL) | (15UL)),

    /*GPIOB*/
    GPIO_enGPIOB0 = (uint32_t) (((uint32_t) GPIO_enPORT_B << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER0 << 8UL) | (0UL)),
    GPIO_enU1Rx = (uint32_t) (((uint32_t) GPIO_enPORT_B << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER0 << 8UL) | (1UL)),
    GPIO_enI2C5SCL = (uint32_t) (((uint32_t) GPIO_enPORT_B << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER0 << 8UL) | (2UL)),
    GPIO_enT4CCP0 = (uint32_t) (((uint32_t) GPIO_enPORT_B << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER0 << 8UL) | (3UL)),
    GPIO_enCAN1Rx = (uint32_t) (((uint32_t) GPIO_enPORT_B << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER0 << 8UL) | (7UL)),

    GPIO_enGPIOB1 = (uint32_t) (((uint32_t) GPIO_enPORT_B << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER1 << 8UL) | (0UL)),
    GPIO_enU1Tx = (uint32_t) (((uint32_t) GPIO_enPORT_B << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER1 << 8UL) | (1UL)),
    GPIO_enI2C5SDA = (uint32_t) (((uint32_t) GPIO_enPORT_B << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER1 << 8UL) | (2UL)),
    GPIO_enT4CCP1 = (uint32_t) (((uint32_t) GPIO_enPORT_B << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER1 << 8UL) | (3UL)),
    GPIO_enCAN1Tx = (uint32_t) (((uint32_t) GPIO_enPORT_B << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER1 << 8UL) | (7UL)),

    GPIO_enGPIOB2 = (uint32_t) (((uint32_t) GPIO_enPORT_B << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER2 << 8UL) | (0UL)),
    GPIO_enI2C0SCL = (uint32_t) (((uint32_t) GPIO_enPORT_B << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER2 << 8UL) | (2UL)),
    GPIO_enT5CCP0 = (uint32_t) (((uint32_t) GPIO_enPORT_B << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER2 << 8UL) | (3UL)),
    GPIO_enUSB0STP = (uint32_t) (((uint32_t) GPIO_enPORT_B << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER2 << 8UL) | (14UL)),
    GPIO_enEPI0S27 = (uint32_t) (((uint32_t) GPIO_enPORT_B << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER2 << 8UL) | (15UL)),

    GPIO_enGPIOB3 = (uint32_t) (((uint32_t) GPIO_enPORT_B << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER3 << 8UL) | (0UL)),
    GPIO_enI2C0SDA = (uint32_t) (((uint32_t) GPIO_enPORT_B << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER3 << 8UL) | (2UL)),
    GPIO_enT5CCP1 = (uint32_t) (((uint32_t) GPIO_enPORT_B << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER3 << 8UL) | (3UL)),
    GPIO_enUSB0CLK = (uint32_t) (((uint32_t) GPIO_enPORT_B << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER3 << 8UL) | (14UL)),
    GPIO_enEPI0S28 = (uint32_t) (((uint32_t) GPIO_enPORT_B << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER3 << 8UL) | (15UL)),

    GPIO_enGPIOB4 = (uint32_t) (((uint32_t) GPIO_enPORT_B << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER4 << 8UL) | (0UL)),
    GPIO_enU0CTS = (uint32_t) (((uint32_t) GPIO_enPORT_B << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER4 << 8UL) | (1UL)),
    GPIO_enI2C5SCL_B4 = (uint32_t) (((uint32_t) GPIO_enPORT_B << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER4 << 8UL) | (2UL)),
    GPIO_enSSI1Fss = (uint32_t) (((uint32_t) GPIO_enPORT_B << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER4 << 8UL) | (15UL)),

    GPIO_enGPIOB5 = (uint32_t) (((uint32_t) GPIO_enPORT_B << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER5 << 8UL) | (0UL)),
    GPIO_enU0RTS = (uint32_t) (((uint32_t) GPIO_enPORT_B << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER5 << 8UL) | (1UL)),
    GPIO_enI2C5SDA_B5 = (uint32_t) (((uint32_t) GPIO_enPORT_B << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER5 << 8UL) | (2UL)),
    GPIO_enSSI1Clk = (uint32_t) (((uint32_t) GPIO_enPORT_B << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER5 << 8UL) | (15UL)),

    GPIO_enGPIOB6 = (uint32_t) (((uint32_t) GPIO_enPORT_B << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER6 << 8UL) | (0UL)),

    GPIO_enGPIOB7 = (uint32_t) (((uint32_t) GPIO_enPORT_B << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER7 << 8UL) | (0UL)),

    /*GPIOC*/
    GPIO_enGPIOC0 = (uint32_t) (((uint32_t) GPIO_enPORT_C << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER0 << 8UL) | (0UL)),
    GPIO_enTCK = (uint32_t) (((uint32_t) GPIO_enPORT_C << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER0 << 8UL) | (1UL)),
    GPIO_enSWCLK = (uint32_t) (((uint32_t) GPIO_enPORT_C << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER0 << 8UL) | (1UL)),

    GPIO_enGPIOC1 = (uint32_t) (((uint32_t) GPIO_enPORT_C << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER1 << 8UL) | (0UL)),
    GPIO_enTMS = (uint32_t) (((uint32_t) GPIO_enPORT_C << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER1 << 8UL) | (1UL)),
    GPIO_enSWDIO = (uint32_t) (((uint32_t) GPIO_enPORT_C << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER1 << 8UL) | (1UL)),

    GPIO_enGPIOC2 = (uint32_t) (((uint32_t) GPIO_enPORT_C << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER2 << 8UL) | (0UL)),
    GPIO_enTDI = (uint32_t) (((uint32_t) GPIO_enPORT_C << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER2 << 8UL) | (1UL)),

    GPIO_enGPIOC3 = (uint32_t) (((uint32_t) GPIO_enPORT_C << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER3 << 8UL) | (0UL)),
    GPIO_enTDO = (uint32_t) (((uint32_t) GPIO_enPORT_C << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER3 << 8UL) | (1UL)),
    GPIO_enSWO = (uint32_t) (((uint32_t) GPIO_enPORT_C << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER3 << 8UL) | (1UL)),

    GPIO_enGPIOC4 = (uint32_t) (((uint32_t) GPIO_enPORT_C << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER4 << 8UL) | (0UL)),
    GPIO_enU7Rx = (uint32_t) (((uint32_t) GPIO_enPORT_C << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER4 << 8UL) | (1UL)),
    GPIO_enEPI0S7 = (uint32_t) (((uint32_t) GPIO_enPORT_C << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER4 << 8UL) | (15UL)),

    GPIO_enGPIOC5 = (uint32_t) (((uint32_t) GPIO_enPORT_C << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER5 << 8UL) | (0UL)),
    GPIO_enU7Tx = (uint32_t) (((uint32_t) GPIO_enPORT_C << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER5 << 8UL) | (1UL)),
    GPIO_enRTCCLK = (uint32_t) (((uint32_t) GPIO_enPORT_C << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER5 << 8UL) | (7UL)),
    GPIO_enEPI0S6 = (uint32_t) (((uint32_t) GPIO_enPORT_C << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER5 << 8UL) | (15UL)),

    GPIO_enGPIOC6 = (uint32_t) (((uint32_t) GPIO_enPORT_C << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER6 << 8UL) | (0UL)),
    GPIO_enU5Rx = (uint32_t) (((uint32_t) GPIO_enPORT_C << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER6 << 8UL) | (1UL)),
    GPIO_enEPI0S5 = (uint32_t) (((uint32_t) GPIO_enPORT_C << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER6 << 8UL) | (15UL)),

    GPIO_enGPIOC7 = (uint32_t) (((uint32_t) GPIO_enPORT_C << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER7 << 8UL) | (0UL)),
    GPIO_enU5Tx = (uint32_t) (((uint32_t) GPIO_enPORT_C << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER6 << 8UL) | (1UL)),
    GPIO_enEPI0S4 = (uint32_t) (((uint32_t) GPIO_enPORT_C << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER6 << 8UL) | (15UL)),

    /*GPIOD*/
    GPIO_enGPIOD0 = (uint32_t) (((uint32_t) GPIO_enPORT_D << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER0 << 8UL) | (0UL)),
    GPIO_enI2C7SCL_D0 = (uint32_t) (((uint32_t) GPIO_enPORT_D << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER0 << 8UL) | (1UL)),
    GPIO_enT0CCP0_D0 = (uint32_t) (((uint32_t) GPIO_enPORT_D << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER0 << 8UL) | (2UL)),
    GPIO_enC0O = (uint32_t) (((uint32_t) GPIO_enPORT_D << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER0 << 8UL) | (4UL)),
    GPIO_enSSI2Rx = (uint32_t) (((uint32_t) GPIO_enPORT_D << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER0 << 8UL) | (15UL)),
    GPIO_enSSI2XDAT1 = (uint32_t) (((uint32_t) GPIO_enPORT_D << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER0 << 8UL) | (15UL)),

    GPIO_enGPIOD1 = (uint32_t) (((uint32_t) GPIO_enPORT_D << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER1 << 8UL) | (0UL)),
    GPIO_enI2C7SDA_D1 = (uint32_t) (((uint32_t) GPIO_enPORT_D << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER1 << 8UL) | (1UL)),
    GPIO_enT0CCP1_D1 = (uint32_t) (((uint32_t) GPIO_enPORT_D << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER1 << 8UL) | (2UL)),
    GPIO_enC1O = (uint32_t) (((uint32_t) GPIO_enPORT_D << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER1 << 8UL) | (4UL)),
    GPIO_enSSI2Tx = (uint32_t) (((uint32_t) GPIO_enPORT_D << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER1 << 8UL) | (15UL)),
    GPIO_enSSI2XDAT0 = (uint32_t) (((uint32_t) GPIO_enPORT_D << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER1 << 8UL) | (15UL)),

    GPIO_enGPIOD2 = (uint32_t) (((uint32_t) GPIO_enPORT_D << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER2 << 8UL) | (0UL)),
    GPIO_enI2C8SCL_D2 = (uint32_t) (((uint32_t) GPIO_enPORT_D << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER2 << 8UL) | (1UL)),
    GPIO_enT1CCP0_D2 = (uint32_t) (((uint32_t) GPIO_enPORT_D << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER2 << 8UL) | (2UL)),
    GPIO_enC2O = (uint32_t) (((uint32_t) GPIO_enPORT_D << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER2 << 8UL) | (4UL)),
    GPIO_enSSI2Fss = (uint32_t) (((uint32_t) GPIO_enPORT_D << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER2 << 8UL) | (15UL)),

    GPIO_enGPIOD3 = (uint32_t) (((uint32_t) GPIO_enPORT_D << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER3 << 8UL) | (0UL)),
    GPIO_enI2C8SDA_D3 = (uint32_t) (((uint32_t) GPIO_enPORT_D << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER3 << 8UL) | (1UL)),
    GPIO_enT1CCP1_D3 = (uint32_t) (((uint32_t) GPIO_enPORT_D << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER3 << 8UL) | (2UL)),
    GPIO_enSSI2Clk = (uint32_t) (((uint32_t) GPIO_enPORT_D << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER3 << 8UL) | (15UL)),

    GPIO_enGPIOD4 = (uint32_t) (((uint32_t) GPIO_enPORT_D << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER4 << 8UL) | (0UL)),
    GPIO_enU2Rx_D4 = (uint32_t) (((uint32_t) GPIO_enPORT_D << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER4 << 8UL) | (1UL)),
    GPIO_enT3CCP0_D4 = (uint32_t) (((uint32_t) GPIO_enPORT_D << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER4 << 8UL) | (3UL)),
    GPIO_enSSI1XDAT2 = (uint32_t) (((uint32_t) GPIO_enPORT_D << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER4 << 8UL) | (15UL)),

    GPIO_enGPIOD5 = (uint32_t) (((uint32_t) GPIO_enPORT_D << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER5 << 8UL) | (0UL)),
    GPIO_enU2Tx_D5 = (uint32_t) (((uint32_t) GPIO_enPORT_D << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER5 << 8UL) | (1UL)),
    GPIO_enT3CCP1_D5 = (uint32_t) (((uint32_t) GPIO_enPORT_D << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER5 << 8UL) | (3UL)),
    GPIO_enSSI1XDAT3 = (uint32_t) (((uint32_t) GPIO_enPORT_D << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER5 << 8UL) | (15UL)),

    GPIO_enGPIOD6 = (uint32_t) (((uint32_t) GPIO_enPORT_D << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER6 << 8UL) | (0UL)),
    GPIO_enU2RTS = (uint32_t) (((uint32_t) GPIO_enPORT_D << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER6 << 8UL) | (1UL)),
    GPIO_enT4CCP0_D6 = (uint32_t) (((uint32_t) GPIO_enPORT_D << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER6 << 8UL) | (3UL)),
    GPIO_enUSB0EPEN_D6 = (uint32_t) (((uint32_t) GPIO_enPORT_D << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER6 << 8UL) | (5UL)),
    GPIO_enSSI2XDAT3 = (uint32_t) (((uint32_t) GPIO_enPORT_D << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER6 << 8UL) | (15UL)),

    GPIO_enGPIOD7 = (uint32_t) (((uint32_t) GPIO_enPORT_D << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER7 << 8UL) | (0UL)),
    GPIO_enU2CTS = (uint32_t) (((uint32_t) GPIO_enPORT_D << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER7 << 8UL) | (1UL)),
    GPIO_enT4CCP1_D7 = (uint32_t) (((uint32_t) GPIO_enPORT_D << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER7 << 8UL) | (3UL)),
    GPIO_enUSB0PFLT_D7 = (uint32_t) (((uint32_t) GPIO_enPORT_D << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER7 << 8UL) | (5UL)),
    GPIO_enNMI = (uint32_t) (((uint32_t) GPIO_enPORT_D << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER7 << 8UL) | (8UL)),
    GPIO_enSSI2XDAT2 = (uint32_t) (((uint32_t) GPIO_enPORT_D << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER7 << 8UL) | (15UL)),

    /*GPIOE*/
    GPIO_enGPIOE0 = (uint32_t) (((uint32_t) GPIO_enPORT_E << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER0 << 8UL) | (0UL)),
    GPIO_enU1RTS = (uint32_t) (((uint32_t) GPIO_enPORT_E << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER0 << 8UL) | (1UL)),

    GPIO_enGPIOE1 = (uint32_t) (((uint32_t) GPIO_enPORT_E << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER1 << 8UL) | (0UL)),
    GPIO_enU1DSR = (uint32_t) (((uint32_t) GPIO_enPORT_E << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER1 << 8UL) | (1UL)),

    GPIO_enGPIOE2 = (uint32_t) (((uint32_t) GPIO_enPORT_E << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER2 << 8UL) | (0UL)),
    GPIO_enU1DCD = (uint32_t) (((uint32_t) GPIO_enPORT_E << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER2 << 8UL) | (0UL)),

    GPIO_enGPIOE3 = (uint32_t) (((uint32_t) GPIO_enPORT_E << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER3 << 8UL) | (0UL)),
    GPIO_enU1DTR = (uint32_t) (((uint32_t) GPIO_enPORT_E << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER2 << 8UL) | (0UL)),

    GPIO_enGPIOE4 = (uint32_t) (((uint32_t) GPIO_enPORT_E << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER4 << 8UL) | (0UL)),
    GPIO_enU1RI = (uint32_t) (((uint32_t) GPIO_enPORT_E << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER4 << 8UL) | (1UL)),
    GPIO_enSSI1Tx = (uint32_t) (((uint32_t) GPIO_enPORT_E << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER4 << 8UL) | (15UL)),
    GPIO_enSSI1XDAT0 = (uint32_t) (((uint32_t) GPIO_enPORT_E << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER4 << 8UL) | (15UL)),

    GPIO_enGPIOE5 = (uint32_t) (((uint32_t) GPIO_enPORT_E << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER5 << 8UL) | (0UL)),
    GPIO_enSSI1Rx = (uint32_t) (((uint32_t) GPIO_enPORT_E << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER5 << 8UL) | (15UL)),
    GPIO_enSSI1XDAT1 = (uint32_t) (((uint32_t) GPIO_enPORT_E << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER5 << 8UL) | (15UL)),

    GPIO_enGPIOE6 = (uint32_t) (((uint32_t) GPIO_enPORT_E << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER6 << 8UL) | (0UL)),

    GPIO_enGPIOE7 = (uint32_t) (((uint32_t) GPIO_enPORT_E << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER7 << 8UL) | (0UL)),

    /*GPIOF*/
    GPIO_enGPIOF0 = (uint32_t) (((uint32_t) GPIO_enPORT_F << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER0 << 8UL) | (0UL)),
    GPIO_enEN0LED0 = (uint32_t) (((uint32_t) GPIO_enPORT_F << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER0 << 8UL) | (5UL)),
    GPIO_enM0PWM0 = (uint32_t) (((uint32_t) GPIO_enPORT_F << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER0 << 8UL) | (6UL)),
    GPIO_enSSI3Rx = (uint32_t) (((uint32_t) GPIO_enPORT_F << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER0 << 8UL) | (14UL)),
    GPIO_enSSI3XDAT1 = (uint32_t) (((uint32_t) GPIO_enPORT_F << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER0 << 8UL) | (14UL)),
    GPIO_enTRD2 = (uint32_t) (((uint32_t) GPIO_enPORT_F << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER0 << 8UL) | (15UL)),

    GPIO_enGPIOF1 = (uint32_t) (((uint32_t) GPIO_enPORT_F << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER1 << 8UL) | (0UL)),
    GPIO_enEN0LED2 = (uint32_t) (((uint32_t) GPIO_enPORT_F << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER1 << 8UL) | (5UL)),
    GPIO_enM0PWM1 = (uint32_t) (((uint32_t) GPIO_enPORT_F << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER1 << 8UL) | (6UL)),
    GPIO_enSSI3Tx = (uint32_t) (((uint32_t) GPIO_enPORT_F << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER1 << 8UL) | (14UL)),
    GPIO_enSSI3XDAT0 = (uint32_t) (((uint32_t) GPIO_enPORT_F << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER1 << 8UL) | (14UL)),
    GPIO_enTRD1 = (uint32_t) (((uint32_t) GPIO_enPORT_F << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER1 << 8UL) | (15UL)),

    GPIO_enGPIOF2 = (uint32_t) (((uint32_t) GPIO_enPORT_F << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER2 << 8UL) | (0UL)),
    GPIO_enM0PWM2 = (uint32_t) (((uint32_t) GPIO_enPORT_F << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER2 << 8UL) | (6UL)),
    GPIO_enSSI3Fss = (uint32_t) (((uint32_t) GPIO_enPORT_F << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER2 << 8UL) | (14UL)),
    GPIO_enTRD0 = (uint32_t) (((uint32_t) GPIO_enPORT_F << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER2 << 8UL) | (15UL)),

    GPIO_enGPIOF3 = (uint32_t) (((uint32_t) GPIO_enPORT_F << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER3 << 8UL) | (0UL)),
    GPIO_enM0PWM3 = (uint32_t) (((uint32_t) GPIO_enPORT_F << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER3 << 8UL) | (6UL)),
    GPIO_enSSI3Clk = (uint32_t) (((uint32_t) GPIO_enPORT_F << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER3 << 8UL) | (14UL)),
    GPIO_enTRCLK = (uint32_t) (((uint32_t) GPIO_enPORT_F << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER3 << 8UL) | (15UL)),

    GPIO_enGPIOF4 = (uint32_t) (((uint32_t) GPIO_enPORT_F << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER4 << 8UL) | (0UL)),
    GPIO_enEN0LED1 = (uint32_t) (((uint32_t) GPIO_enPORT_F << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER4 << 8UL) | (5UL)),
    GPIO_enM0FAULT0 = (uint32_t) (((uint32_t) GPIO_enPORT_F << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER4 << 8UL) | (6UL)),
    GPIO_enSSI3XDAT2 = (uint32_t) (((uint32_t) GPIO_enPORT_F << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER4 << 8UL) | (14UL)),
    GPIO_enTRD3 = (uint32_t) (((uint32_t) GPIO_enPORT_F << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER4 << 8UL) | (15UL)),

    GPIO_enGPIOF5 = (uint32_t) (((uint32_t) GPIO_enPORT_F << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER5 << 8UL) | (0UL)),

    GPIO_enGPIOF6 = (uint32_t) (((uint32_t) GPIO_enPORT_F << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER6 << 8UL) | (0UL)),

    GPIO_enGPIOF7 = (uint32_t) (((uint32_t) GPIO_enPORT_F << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER7 << 8UL) | (0UL)),

    /*GPIOG*/
    GPIO_enGPIOG0 = (uint32_t) (((uint32_t) GPIO_enPORT_G << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER0 << 8UL) | (0UL)),
    GPIO_enI2C1SCL = (uint32_t) (((uint32_t) GPIO_enPORT_G << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER0 << 8UL) | (2UL)),
    GPIO_enEN0PPS = (uint32_t) (((uint32_t) GPIO_enPORT_G << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER0 << 8UL) | (5UL)),
    GPIO_enM0PWM4 = (uint32_t) (((uint32_t) GPIO_enPORT_G << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER0 << 8UL) | (6UL)),
    GPIO_enEPI0S11 = (uint32_t) (((uint32_t) GPIO_enPORT_G << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER0 << 8UL) | (15UL)),

    GPIO_enGPIOG1 = (uint32_t) (((uint32_t) GPIO_enPORT_G << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER1 << 8UL) | (0UL)),
    GPIO_enI2C1SDA = (uint32_t) (((uint32_t) GPIO_enPORT_G << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER1 << 8UL) | (2UL)),
    GPIO_enM0PWM5 = (uint32_t) (((uint32_t) GPIO_enPORT_G << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER1 << 8UL) | (6UL)),
    GPIO_enEPI0S10 = (uint32_t) (((uint32_t) GPIO_enPORT_G << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER1 << 8UL) | (15UL)),

    GPIO_enGPIOG2 = (uint32_t) (((uint32_t) GPIO_enPORT_G << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER2 << 8UL) | (0UL)),

    GPIO_enGPIOG3 = (uint32_t) (((uint32_t) GPIO_enPORT_G << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER3 << 8UL) | (0UL)),

    GPIO_enGPIOG4 = (uint32_t) (((uint32_t) GPIO_enPORT_G << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER4 << 8UL) | (0UL)),

    GPIO_enGPIOG5 = (uint32_t) (((uint32_t) GPIO_enPORT_G << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER5 << 8UL) | (0UL)),

    GPIO_enGPIOG6 = (uint32_t) (((uint32_t) GPIO_enPORT_G << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER6 << 8UL) | (0UL)),

    GPIO_enGPIOG7 = (uint32_t) (((uint32_t) GPIO_enPORT_G << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER7 << 8UL) | (0UL)),

    /*GPIOH*/
    GPIO_enGPIOH0 = (uint32_t) (((uint32_t) GPIO_enPORT_H << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER0 << 8UL) | (0UL)),
    GPIO_enU0RTS_H0 = (uint32_t) (((uint32_t) GPIO_enPORT_H << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER0 << 8UL) | (1UL)),
    GPIO_enEPI0S0 = (uint32_t) (((uint32_t) GPIO_enPORT_H << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER0 << 8UL) | (15UL)),

    GPIO_enGPIOH1 = (uint32_t) (((uint32_t) GPIO_enPORT_H << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER1 << 8UL) | (0UL)),
    GPIO_enU0CTS_H1 = (uint32_t) (((uint32_t) GPIO_enPORT_H << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER1 << 8UL) | (1UL)),
    GPIO_enEPI0S1 = (uint32_t) (((uint32_t) GPIO_enPORT_H << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER1 << 8UL) | (15UL)),

    GPIO_enGPIOH2 = (uint32_t) (((uint32_t) GPIO_enPORT_H << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER2 << 8UL) | (0UL)),
    GPIO_enU0DCD = (uint32_t) (((uint32_t) GPIO_enPORT_H << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER2 << 8UL) | (1UL)),
    GPIO_enEPI0S2 = (uint32_t) (((uint32_t) GPIO_enPORT_H << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER2 << 8UL) | (15UL)),

    GPIO_enGPIOH3 = (uint32_t) (((uint32_t) GPIO_enPORT_H << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER3 << 8UL) | (0UL)),
    GPIO_enU0DSR = (uint32_t) (((uint32_t) GPIO_enPORT_H << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER3 << 8UL) | (1UL)),
    GPIO_enEPI0S3 = (uint32_t) (((uint32_t) GPIO_enPORT_H << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER3 << 8UL) | (15UL)),

    GPIO_enGPIOH4 = (uint32_t) (((uint32_t) GPIO_enPORT_H << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER4 << 8UL) | (0UL)),

    GPIO_enGPIOH5 = (uint32_t) (((uint32_t) GPIO_enPORT_H << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER5 << 8UL) | (0UL)),

    GPIO_enGPIOH6 = (uint32_t) (((uint32_t) GPIO_enPORT_H << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER6 << 8UL) | (0UL)),

    GPIO_enGPIOH7 = (uint32_t) (((uint32_t) GPIO_enPORT_H << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER7 << 8UL) | (0UL)),

    /*GPIOJ*/
    GPIO_enGPIOJ0 = (uint32_t) (((uint32_t) GPIO_enPORT_J << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER0 << 8UL) | (0UL)),
    GPIO_enU3Rx_J0 = (uint32_t) (((uint32_t) GPIO_enPORT_J << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER0 << 8UL) | (1UL)),
    GPIO_enEN0PPS_J0 = (uint32_t) (((uint32_t) GPIO_enPORT_J << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER0 << 8UL) | (5UL)),

    GPIO_enGPIOJ1 = (uint32_t) (((uint32_t) GPIO_enPORT_J << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER1 << 8UL) | (0UL)),
    GPIO_enU3Tx_J1 = (uint32_t) (((uint32_t) GPIO_enPORT_J << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER1 << 8UL) | (1UL)),

    GPIO_enGPIOJ2 = (uint32_t) (((uint32_t) GPIO_enPORT_J << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER2 << 8UL) | (0UL)),

    GPIO_enGPIOJ3 = (uint32_t) (((uint32_t) GPIO_enPORT_J << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER3 << 8UL) | (0UL)),

    GPIO_enGPIOJ4 = (uint32_t) (((uint32_t) GPIO_enPORT_J << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER4 << 8UL) | (0UL)),

    GPIO_enGPIOJ5 = (uint32_t) (((uint32_t) GPIO_enPORT_J << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER5 << 8UL) | (0UL)),

    GPIO_enGPIOJ6 = (uint32_t) (((uint32_t) GPIO_enPORT_J << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER6 << 8UL) | (0UL)),

    GPIO_enGPIOJ7 = (uint32_t) (((uint32_t) GPIO_enPORT_J << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER7 << 8UL) | (0UL)),

    /*GPIOK*/
    GPIO_enGPIOK0 = (uint32_t) (((uint32_t) GPIO_enPORT_K << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER0 << 8UL) | (0UL)),
    GPIO_enU4Rx_K0 = (uint32_t) (((uint32_t) GPIO_enPORT_K << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER0 << 8UL) | (1UL)),
    GPIO_enEPI0S0_K0 = (uint32_t) (((uint32_t) GPIO_enPORT_K << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER0 << 8UL) | (15UL)),

    GPIO_enGPIOK1 = (uint32_t) (((uint32_t) GPIO_enPORT_K << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER1 << 8UL) | (0UL)),
    GPIO_enU4Tx_K1 = (uint32_t) (((uint32_t) GPIO_enPORT_K << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER1 << 8UL) | (1UL)),
    GPIO_enEPI0S1_K1 = (uint32_t) (((uint32_t) GPIO_enPORT_K << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER1 << 8UL) | (15UL)),

    GPIO_enGPIOK2 = (uint32_t) (((uint32_t) GPIO_enPORT_K << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER2 << 8UL) | (0UL)),
    GPIO_enU4RTS = (uint32_t) (((uint32_t) GPIO_enPORT_K << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER2 << 8UL) | (1UL)),
    GPIO_enEPI0S2_K2 = (uint32_t) (((uint32_t) GPIO_enPORT_K << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER2 << 8UL) | (15UL)),

    GPIO_enGPIOK3 = (uint32_t) (((uint32_t) GPIO_enPORT_K << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER3 << 8UL) | (0UL)),
    GPIO_enU4CTS = (uint32_t) (((uint32_t) GPIO_enPORT_K << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER3 << 8UL) | (1UL)),
    GPIO_enEPI0S3_K3 = (uint32_t) (((uint32_t) GPIO_enPORT_K << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER3 << 8UL) | (15UL)),

    GPIO_enGPIOK4 = (uint32_t) (((uint32_t) GPIO_enPORT_K << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER4 << 8UL) | (0UL)),
    GPIO_enI2C3SCL = (uint32_t) (((uint32_t) GPIO_enPORT_K << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER4 << 8UL) | (2UL)),
    GPIO_enEN0LED0_K4 = (uint32_t) (((uint32_t) GPIO_enPORT_K << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER4 << 8UL) | (5UL)),
    GPIO_enM0PWM6 = (uint32_t) (((uint32_t) GPIO_enPORT_K << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER4 << 8UL) | (6UL)),
    GPIO_enEPI0S32 = (uint32_t) (((uint32_t) GPIO_enPORT_K << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER4 << 8UL) | (15UL)),

    GPIO_enGPIOK5 = (uint32_t) (((uint32_t) GPIO_enPORT_K << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER5 << 8UL) | (0UL)),
    GPIO_enI2C3SDA = (uint32_t) (((uint32_t) GPIO_enPORT_K << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER5 << 8UL) | (2UL)),
    GPIO_enEN0LED2_K5 = (uint32_t) (((uint32_t) GPIO_enPORT_K << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER5 << 8UL) | (5UL)),
    GPIO_enM0PWM7 = (uint32_t) (((uint32_t) GPIO_enPORT_K << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER5 << 8UL) | (6UL)),
    GPIO_enEPI0S31 = (uint32_t) (((uint32_t) GPIO_enPORT_K << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER5 << 8UL) | (15UL)),

    GPIO_enGPIOK6 = (uint32_t) (((uint32_t) GPIO_enPORT_K << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER6 << 8UL) | (0UL)),
    GPIO_enI2C4SCL = (uint32_t) (((uint32_t) GPIO_enPORT_K << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER6 << 8UL) | (2UL)),
    GPIO_enEN0LED1_K6 = (uint32_t) (((uint32_t) GPIO_enPORT_K << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER6 << 8UL) | (5UL)),
    GPIO_enM0FAULT1 = (uint32_t) (((uint32_t) GPIO_enPORT_K << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER6 << 8UL) | (6UL)),
    GPIO_enEPI0S25 = (uint32_t) (((uint32_t) GPIO_enPORT_K << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER6 << 8UL) | (15UL)),

    GPIO_enGPIOK7 = (uint32_t) (((uint32_t) GPIO_enPORT_K << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER7 << 8UL) | (0UL)),
    GPIO_enU0RI = (uint32_t) (((uint32_t) GPIO_enPORT_K << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER7 << 8UL) | (1UL)),
    GPIO_enI2C4SDA = (uint32_t) (((uint32_t) GPIO_enPORT_K << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER7 << 8UL) | (2UL)),
    GPIO_enRTCCLK_K7 = (uint32_t) (((uint32_t) GPIO_enPORT_K << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER7 << 8UL) | (5UL)),
    GPIO_enM0FAULT2 = (uint32_t) (((uint32_t) GPIO_enPORT_K << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER7 << 8UL) | (6UL)),
    GPIO_enEPI0S24 = (uint32_t) (((uint32_t) GPIO_enPORT_K << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER7 << 8UL) | (15UL)),

    /*GPIOL*/
    GPIO_enGPIOL0 = (uint32_t) (((uint32_t) GPIO_enPORT_L << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER0 << 8UL) | (0UL)),
    GPIO_enI2C2SDA = (uint32_t) (((uint32_t) GPIO_enPORT_L << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER0 << 8UL) | (2UL)),
    GPIO_enM0FAULT3 = (uint32_t) (((uint32_t) GPIO_enPORT_L << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER0 << 8UL) | (6UL)),
    GPIO_enUSB0D0 = (uint32_t) (((uint32_t) GPIO_enPORT_L << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER0 << 8UL) | (14UL)),
    GPIO_enEPI0S16 = (uint32_t) (((uint32_t) GPIO_enPORT_L << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER0 << 8UL) | (15UL)),

    GPIO_enGPIOL1 = (uint32_t) (((uint32_t) GPIO_enPORT_L << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER1 << 8UL) | (0UL)),
    GPIO_enI2C2SCL = (uint32_t) (((uint32_t) GPIO_enPORT_L << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER1 << 8UL) | (2UL)),
    GPIO_enPhA0 = (uint32_t) (((uint32_t) GPIO_enPORT_L << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER1 << 8UL) | (6UL)),
    GPIO_enUSB0D1 = (uint32_t) (((uint32_t) GPIO_enPORT_L << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER1 << 8UL) | (14UL)),
    GPIO_enEPI0S17 = (uint32_t) (((uint32_t) GPIO_enPORT_L << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER1 << 8UL) | (15UL)),

    GPIO_enGPIOL2 = (uint32_t) (((uint32_t) GPIO_enPORT_L << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER2 << 8UL) | (0UL)),
    GPIO_enC0O_L2 = (uint32_t) (((uint32_t) GPIO_enPORT_L << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER2 << 8UL) | (5UL)),
    GPIO_enPhB0 = (uint32_t) (((uint32_t) GPIO_enPORT_L << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER2 << 8UL) | (6UL)),
    GPIO_enUSB0D2 = (uint32_t) (((uint32_t) GPIO_enPORT_L << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER2 << 8UL) | (14UL)),
    GPIO_enEPI0S18 = (uint32_t) (((uint32_t) GPIO_enPORT_L << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER2 << 8UL) | (15UL)),

    GPIO_enGPIOL3 = (uint32_t) (((uint32_t) GPIO_enPORT_L << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER3 << 8UL) | (0UL)),
    GPIO_enC1O_L3 = (uint32_t) (((uint32_t) GPIO_enPORT_L << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER3 << 8UL) | (5UL)),
    GPIO_enIDX0 = (uint32_t) (((uint32_t) GPIO_enPORT_L << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER3 << 8UL) | (6UL)),
    GPIO_enUSB0D3 = (uint32_t) (((uint32_t) GPIO_enPORT_L << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER3 << 8UL) | (14UL)),
    GPIO_enEPI0S19 = (uint32_t) (((uint32_t) GPIO_enPORT_L << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER3 << 8UL) | (15UL)),

    GPIO_enGPIOL4 = (uint32_t) (((uint32_t) GPIO_enPORT_L << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER4 << 8UL) | (0UL)),
    GPIO_enT0CCP0_L4 = (uint32_t) (((uint32_t) GPIO_enPORT_L << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER4 << 8UL) | (3UL)),
    GPIO_enUSB0D4 = (uint32_t) (((uint32_t) GPIO_enPORT_L << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER4 << 8UL) | (14UL)),
    GPIO_enEPI0S26 = (uint32_t) (((uint32_t) GPIO_enPORT_L << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER4 << 8UL) | (15UL)),

    GPIO_enGPIOL5 = (uint32_t) (((uint32_t) GPIO_enPORT_L << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER5 << 8UL) | (0UL)),
    GPIO_enT0CCP1_L5 = (uint32_t) (((uint32_t) GPIO_enPORT_L << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER5 << 8UL) | (3UL)),
    GPIO_enUSB0D5 = (uint32_t) (((uint32_t) GPIO_enPORT_L << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER5 << 8UL) | (14UL)),
    GPIO_enEPI0S33 = (uint32_t) (((uint32_t) GPIO_enPORT_L << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER5 << 8UL) | (15UL)),

    GPIO_enGPIOL6 = (uint32_t) (((uint32_t) GPIO_enPORT_L << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER6 << 8UL) | (0UL)),
    GPIO_enT1CCP0_L6 = (uint32_t) (((uint32_t) GPIO_enPORT_L << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER6 << 8UL) | (3UL)),

    GPIO_enGPIOL7 = (uint32_t) (((uint32_t) GPIO_enPORT_L << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER7 << 8UL) | (0UL)),
    GPIO_enT1CCP1_L7 = (uint32_t) (((uint32_t) GPIO_enPORT_L << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER7 << 8UL) | (3UL)),

    /*GPIOM*/
    GPIO_enGPIOM0 = (uint32_t) (((uint32_t) GPIO_enPORT_M << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER0 << 8UL) | (0UL)),
    GPIO_enT2CCP0_M0 = (uint32_t) (((uint32_t) GPIO_enPORT_M << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER0 << 8UL) | (3UL)),
    GPIO_enEPI0S15 = (uint32_t) (((uint32_t) GPIO_enPORT_M << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER0 << 8UL) | (15UL)),

    GPIO_enGPIOM1 = (uint32_t) (((uint32_t) GPIO_enPORT_M << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER1 << 8UL) | (0UL)),
    GPIO_enT2CCP1_M1 = (uint32_t) (((uint32_t) GPIO_enPORT_M << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER1 << 8UL) | (3UL)),
    GPIO_enEPI0S14 = (uint32_t) (((uint32_t) GPIO_enPORT_M << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER1 << 8UL) | (15UL)),

    GPIO_enGPIOM2 = (uint32_t) (((uint32_t) GPIO_enPORT_M << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER2 << 8UL) | (0UL)),
    GPIO_enT3CCP0_M2 = (uint32_t) (((uint32_t) GPIO_enPORT_M << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER2 << 8UL) | (3UL)),
    GPIO_enEPI0S13 = (uint32_t) (((uint32_t) GPIO_enPORT_M << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER2 << 8UL) | (15UL)),

    GPIO_enGPIOM3 = (uint32_t) (((uint32_t) GPIO_enPORT_M << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER3 << 8UL) | (0UL)),
    GPIO_enT3CCP1_M3 = (uint32_t) (((uint32_t) GPIO_enPORT_M << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER3 << 8UL) | (3UL)),
    GPIO_enEPI0S12 = (uint32_t) (((uint32_t) GPIO_enPORT_M << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER3 << 8UL) | (15UL)),

    GPIO_enGPIOM4 = (uint32_t) (((uint32_t) GPIO_enPORT_M << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER4 << 8UL) | (0UL)),
    GPIO_enU0CTS_M4 = (uint32_t) (((uint32_t) GPIO_enPORT_M << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER4 << 8UL) | (1UL)),
    GPIO_enT4CCP0_M4 = (uint32_t) (((uint32_t) GPIO_enPORT_M << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER4 << 8UL) | (3UL)),

    GPIO_enGPIOM5 = (uint32_t) (((uint32_t) GPIO_enPORT_M << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER5 << 8UL) | (0UL)),
    GPIO_enU0DCD_M5 = (uint32_t) (((uint32_t) GPIO_enPORT_M << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER5 << 8UL) | (1UL)),
    GPIO_enT4CCP1_M5 = (uint32_t) (((uint32_t) GPIO_enPORT_M << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER5 << 8UL) | (3UL)),

    GPIO_enGPIOM6 = (uint32_t) (((uint32_t) GPIO_enPORT_M << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER6 << 8UL) | (0UL)),
    GPIO_enU0DSR_M6 = (uint32_t) (((uint32_t) GPIO_enPORT_M << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER6 << 8UL) | (1UL)),
    GPIO_enT5CCP0_M6 = (uint32_t) (((uint32_t) GPIO_enPORT_M << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER6 << 8UL) | (3UL)),

    GPIO_enGPIOM7 = (uint32_t) (((uint32_t) GPIO_enPORT_M << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER7 << 8UL) | (0UL)),
    GPIO_enU0RI_M7 = (uint32_t) (((uint32_t) GPIO_enPORT_M << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER7 << 8UL) | (1UL)),
    GPIO_enT5CCP1_M7 = (uint32_t) (((uint32_t) GPIO_enPORT_M << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER7 << 8UL) | (3UL)),

    /*GPION*/
    GPIO_enGPION0 = (uint32_t) (((uint32_t) GPIO_enPORT_N << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER0 << 8UL) | (0UL)),
    GPIO_enU1RTS_N0 = (uint32_t) (((uint32_t) GPIO_enPORT_N << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER0 << 8UL) | (1UL)),

    GPIO_enGPION1 = (uint32_t) (((uint32_t) GPIO_enPORT_N << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER1 << 8UL) | (0UL)),
    GPIO_enU1CTS = (uint32_t) (((uint32_t) GPIO_enPORT_N << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER1 << 8UL) | (1UL)),

    GPIO_enGPION2 = (uint32_t) (((uint32_t) GPIO_enPORT_N << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER2 << 8UL) | (0UL)),
    GPIO_enU1DCD_N2 = (uint32_t) (((uint32_t) GPIO_enPORT_N << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER2 << 8UL) | (1UL)),
    GPIO_enU2RTS_N2 = (uint32_t) (((uint32_t) GPIO_enPORT_N << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER2 << 8UL) | (2UL)),
    GPIO_enEPI0S29 = (uint32_t) (((uint32_t) GPIO_enPORT_N << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER2 << 8UL) | (15UL)),

    GPIO_enGPION3 = (uint32_t) (((uint32_t) GPIO_enPORT_N << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER3 << 8UL) | (0UL)),
    GPIO_enU1DSR_N3 = (uint32_t) (((uint32_t) GPIO_enPORT_N << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER3 << 8UL) | (1UL)),
    GPIO_enU2CTS_N3 = (uint32_t) (((uint32_t) GPIO_enPORT_N << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER3 << 8UL) | (2UL)),
    GPIO_enEPI0S30_N3 = (uint32_t) (((uint32_t) GPIO_enPORT_N << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER3 << 8UL) | (15UL)),

    GPIO_enGPION4 = (uint32_t) (((uint32_t) GPIO_enPORT_N << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER4 << 8UL) | (0UL)),
    GPIO_enU1DTR_N4 = (uint32_t) (((uint32_t) GPIO_enPORT_N << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER4 << 8UL) | (1UL)),
    GPIO_enU3RTS = (uint32_t) (((uint32_t) GPIO_enPORT_N << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER4 << 8UL) | (2UL)),
    GPIO_enI2C2SDA_N4 = (uint32_t) (((uint32_t) GPIO_enPORT_N << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER4 << 8UL) | (3UL)),
    GPIO_enEPI0S34 = (uint32_t) (((uint32_t) GPIO_enPORT_N << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER4 << 8UL) | (15UL)),

    GPIO_enGPION5 = (uint32_t) (((uint32_t) GPIO_enPORT_N << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER5 << 8UL) | (0UL)),
    GPIO_enU1RI_N5 = (uint32_t) (((uint32_t) GPIO_enPORT_N << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER5 << 8UL) | (1UL)),
    GPIO_enU3CTS = (uint32_t) (((uint32_t) GPIO_enPORT_N << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER5 << 8UL) | (2UL)),
    GPIO_enI2C2SCL_N5 = (uint32_t) (((uint32_t) GPIO_enPORT_N << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER5 << 8UL) | (3UL)),
    GPIO_enEPI0S35 = (uint32_t) (((uint32_t) GPIO_enPORT_N << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER5 << 8UL) | (15UL)),

    GPIO_enGPION6 = (uint32_t) (((uint32_t) GPIO_enPORT_N << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER6 << 8UL) | (0UL)),

    GPIO_enGPION7 = (uint32_t) (((uint32_t) GPIO_enPORT_N << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER7 << 8UL) | (0UL)),

    /*GPIOP*/
    GPIO_enGPIOP0 = (uint32_t) (((uint32_t) GPIO_enPORT_P << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER0 << 8UL) | (0UL)),
    GPIO_enU6Rx = (uint32_t) (((uint32_t) GPIO_enPORT_P << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER0 << 8UL) | (1UL)),
    GPIO_enSSI3XDAT2_P0 = (uint32_t) (((uint32_t) GPIO_enPORT_P << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER0 << 8UL) | (15UL)),

    GPIO_enGPIOP1 = (uint32_t) (((uint32_t) GPIO_enPORT_P << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER1 << 8UL) | (0UL)),
    GPIO_enU6Tx = (uint32_t) (((uint32_t) GPIO_enPORT_P << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER1 << 8UL) | (1UL)),
    GPIO_enSSI3XDAT3 = (uint32_t) (((uint32_t) GPIO_enPORT_P << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER1 << 8UL) | (15UL)),

    GPIO_enGPIOP2 = (uint32_t) (((uint32_t) GPIO_enPORT_P << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER2 << 8UL) | (0UL)),
    GPIO_enU0DTR = (uint32_t) (((uint32_t) GPIO_enPORT_P << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER2 << 8UL) | (1UL)),
    GPIO_enUSB0NXT = (uint32_t) (((uint32_t) GPIO_enPORT_P << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER2 << 8UL) | (14UL)),
    GPIO_enEPI0S29_P2 = (uint32_t) (((uint32_t) GPIO_enPORT_P << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER2 << 8UL) | (15UL)),

    GPIO_enGPIOP3 = (uint32_t) (((uint32_t) GPIO_enPORT_P << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER3 << 8UL) | (0UL)),
    GPIO_enU1CTS_P3 = (uint32_t) (((uint32_t) GPIO_enPORT_P << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER3 << 8UL) | (1UL)),
    GPIO_enU0DCD_P3 = (uint32_t) (((uint32_t) GPIO_enPORT_P << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER3 << 8UL) | (2UL)),
    GPIO_enRTCCLK_P3 = (uint32_t) (((uint32_t) GPIO_enPORT_P << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER3 << 8UL) | (7UL)),
    GPIO_enUSB0DIR = (uint32_t) (((uint32_t) GPIO_enPORT_P << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER3 << 8UL) | (14UL)),
    GPIO_enEPI0S30_P3 = (uint32_t) (((uint32_t) GPIO_enPORT_P << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER3 << 8UL) | (15UL)),

    GPIO_enGPIOP4 = (uint32_t) (((uint32_t) GPIO_enPORT_P << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER4 << 8UL) | (0UL)),
    GPIO_enU3RTS_P4 = (uint32_t) (((uint32_t) GPIO_enPORT_P << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER4 << 8UL) | (1UL)),
    GPIO_enU0DSR_P4 = (uint32_t) (((uint32_t) GPIO_enPORT_P << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER4 << 8UL) | (2UL)),
    GPIO_enUSB0D7 = (uint32_t) (((uint32_t) GPIO_enPORT_P << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER4 << 8UL) | (14UL)),

    GPIO_enGPIOP5 = (uint32_t) (((uint32_t) GPIO_enPORT_P << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER5 << 8UL) | (0UL)),
    GPIO_enU3CTS_P5 = (uint32_t) (((uint32_t) GPIO_enPORT_P << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER5 << 8UL) | (1UL)),
    GPIO_enI2C2SCL_P5 = (uint32_t) (((uint32_t) GPIO_enPORT_P << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER5 << 8UL) | (2UL)),
    GPIO_enUSB0D6 = (uint32_t) (((uint32_t) GPIO_enPORT_P << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER5 << 8UL) | (14UL)),

    GPIO_enGPIOP6 = (uint32_t) (((uint32_t) GPIO_enPORT_P << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER6 << 8UL) | (0UL)),

    GPIO_enGPIOP7 = (uint32_t) (((uint32_t) GPIO_enPORT_P << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER7 << 8UL) | (0UL)),

    /*GPIOQ*/
    GPIO_enGPIOQ0 = (uint32_t) (((uint32_t) GPIO_enPORT_Q << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER0 << 8UL) | (0UL)),
    GPIO_enSSI3Clk_Q0 = (uint32_t) (((uint32_t) GPIO_enPORT_Q << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER0 << 8UL) | (14UL)),
    GPIO_enEPI0S20 = (uint32_t) (((uint32_t) GPIO_enPORT_Q << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER0 << 8UL) | (15UL)),

    GPIO_enGPIOQ1 = (uint32_t) (((uint32_t) GPIO_enPORT_Q << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER1 << 8UL) | (0UL)),
    GPIO_enSSI3Fss_Q1 = (uint32_t) (((uint32_t) GPIO_enPORT_Q << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER1 << 8UL) | (14UL)),
    GPIO_enEPI0S21 = (uint32_t) (((uint32_t) GPIO_enPORT_Q << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER1 << 8UL) | (15UL)),

    GPIO_enGPIOQ2 = (uint32_t) (((uint32_t) GPIO_enPORT_Q << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER2 << 8UL) | (0UL)),
    GPIO_enSSI3Tx_Q2 = (uint32_t) (((uint32_t) GPIO_enPORT_Q << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER2 << 8UL) | (14UL)),
    GPIO_enSSI3XDAT0_Q2 = (uint32_t) (((uint32_t) GPIO_enPORT_Q << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER2 << 8UL) | (14UL)),
    GPIO_enEPI0S22 = (uint32_t) (((uint32_t) GPIO_enPORT_Q << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER2 << 8UL) | (15UL)),

    GPIO_enGPIOQ3 = (uint32_t) (((uint32_t) GPIO_enPORT_Q << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER3 << 8UL) | (0UL)),
    GPIO_enSSI3Rx_Q3 = (uint32_t) (((uint32_t) GPIO_enPORT_Q << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER3 << 8UL) | (14UL)),
    GPIO_enSSI3XDAT1_Q3 = (uint32_t) (((uint32_t) GPIO_enPORT_Q << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER3 << 8UL) | (14UL)),
    GPIO_enEPI0S23 = (uint32_t) (((uint32_t) GPIO_enPORT_Q << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER3 << 8UL) | (15UL)),

    GPIO_enGPIOQ4 = (uint32_t) (((uint32_t) GPIO_enPORT_Q << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER4 << 8UL) | (0UL)),
    GPIO_enU1Rx_Q4 = (uint32_t) (((uint32_t) GPIO_enPORT_Q << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER4 << 8UL) | (1UL)),
    GPIO_enDIVSCLK = (uint32_t) (((uint32_t) GPIO_enPORT_Q << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER4 << 8UL) | (7UL)),

    GPIO_enGPIOQ5 = (uint32_t) (((uint32_t) GPIO_enPORT_Q << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER5 << 8UL) | (0UL)),

    GPIO_enGPIOQ6 = (uint32_t) (((uint32_t) GPIO_enPORT_Q << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER6 << 8UL) | (0UL)),

    GPIO_enGPIOQ7 = (uint32_t) (((uint32_t) GPIO_enPORT_Q << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER7 << 8UL) | (0UL)),


    GPIO_enGPIO_UNDEF = 0xFFFFFFFFUL,
} GPIO_nDIGITAL_FUNCTION;

/*PORT PIN*/
typedef enum
{
    GPIO_enUSB0ID = (uint32_t) (((uint32_t) GPIO_enPORT_B << 8UL) | ((uint32_t) GPIO_enPIN_NUMBER0)),
    GPIO_enUSB0VBUS = (uint32_t) (((uint32_t) GPIO_enPORT_B << 8UL) | ((uint32_t) GPIO_enPIN_NUMBER1)),
    GPIO_enAIN10 = (uint32_t) (((uint32_t) GPIO_enPORT_B << 8UL) | ((uint32_t) GPIO_enPIN_NUMBER4)),
    GPIO_enAIN11 = (uint32_t) (((uint32_t) GPIO_enPORT_B << 8UL) | ((uint32_t) GPIO_enPIN_NUMBER5)),

    GPIO_enC1M = (uint32_t) (((uint32_t) GPIO_enPORT_C << 8UL) | ((uint32_t) GPIO_enPIN_NUMBER4)),
    GPIO_enC1P = (uint32_t) (((uint32_t) GPIO_enPORT_C << 8UL) | ((uint32_t) GPIO_enPIN_NUMBER5)),
    GPIO_enC0P = (uint32_t) (((uint32_t) GPIO_enPORT_C << 8UL) | ((uint32_t) GPIO_enPIN_NUMBER6)),
    GPIO_enC0M = (uint32_t) (((uint32_t) GPIO_enPORT_C << 8UL) | ((uint32_t) GPIO_enPIN_NUMBER7)),

    GPIO_enAIN15 = (uint32_t) (((uint32_t) GPIO_enPORT_D << 8UL) | ((uint32_t) GPIO_enPIN_NUMBER0)),
    GPIO_enAIN14 = (uint32_t) (((uint32_t) GPIO_enPORT_D << 8UL) | ((uint32_t) GPIO_enPIN_NUMBER1)),
    GPIO_enAIN13 = (uint32_t) (((uint32_t) GPIO_enPORT_D << 8UL) | ((uint32_t) GPIO_enPIN_NUMBER2)),
    GPIO_enAIN12 = (uint32_t) (((uint32_t) GPIO_enPORT_D << 8UL) | ((uint32_t) GPIO_enPIN_NUMBER3)),
    GPIO_enAIN7 = (uint32_t) (((uint32_t) GPIO_enPORT_D << 8UL) | ((uint32_t) GPIO_enPIN_NUMBER4)),
    GPIO_enAIN6 = (uint32_t) (((uint32_t) GPIO_enPORT_D << 8UL) | ((uint32_t) GPIO_enPIN_NUMBER5)),
    GPIO_enAIN5 = (uint32_t) (((uint32_t) GPIO_enPORT_D << 8UL) | ((uint32_t) GPIO_enPIN_NUMBER6)),
    GPIO_enAIN4 = (uint32_t) (((uint32_t) GPIO_enPORT_D << 8UL) | ((uint32_t) GPIO_enPIN_NUMBER7)),

    GPIO_enAIN3 = (uint32_t) (((uint32_t) GPIO_enPORT_E << 8UL) | ((uint32_t) GPIO_enPIN_NUMBER0)),
    GPIO_enAIN2 = (uint32_t) (((uint32_t) GPIO_enPORT_E << 8UL) | ((uint32_t) GPIO_enPIN_NUMBER1)),
    GPIO_enAIN1 = (uint32_t) (((uint32_t) GPIO_enPORT_E << 8UL) | ((uint32_t) GPIO_enPIN_NUMBER2)),
    GPIO_enAIN0 = (uint32_t) (((uint32_t) GPIO_enPORT_E << 8UL) | ((uint32_t) GPIO_enPIN_NUMBER3)),
    GPIO_enAIN9 = (uint32_t) (((uint32_t) GPIO_enPORT_E << 8UL) | ((uint32_t) GPIO_enPIN_NUMBER4)),
    GPIO_enAIN8 = (uint32_t) (((uint32_t) GPIO_enPORT_E << 8UL) | ((uint32_t) GPIO_enPIN_NUMBER5)),

    GPIO_enAIN16 = (uint32_t) (((uint32_t) GPIO_enPORT_K << 8UL) | ((uint32_t) GPIO_enPIN_NUMBER0)),
    GPIO_enAIN17 = (uint32_t) (((uint32_t) GPIO_enPORT_K << 8UL) | ((uint32_t) GPIO_enPIN_NUMBER1)),
    GPIO_enAIN18 = (uint32_t) (((uint32_t) GPIO_enPORT_K << 8UL) | ((uint32_t) GPIO_enPIN_NUMBER2)),
    GPIO_enAIN19 = (uint32_t) (((uint32_t) GPIO_enPORT_K << 8UL) | ((uint32_t) GPIO_enPIN_NUMBER3)),

    GPIO_enUSB0DP = (uint32_t) (((uint32_t) GPIO_enPORT_L << 8UL) | ((uint32_t) GPIO_enPIN_NUMBER0)),
    GPIO_enUSB0DM = (uint32_t) (((uint32_t) GPIO_enPORT_L << 8UL) | ((uint32_t) GPIO_enPIN_NUMBER1)),

    GPIO_enC2P = (uint32_t) (((uint32_t) GPIO_enPORT_P << 8UL) | ((uint32_t) GPIO_enPIN_NUMBER4)),
    GPIO_enC2M = (uint32_t) (((uint32_t) GPIO_enPORT_P << 8UL) | ((uint32_t) GPIO_enPIN_NUMBER5)),

    GPIO_enAIN_UNDEF = 0xFFFFFFFFUL,
} GPIO_nANALOG_FUNCTION;

typedef enum
{
    GPIO_enPRI0 = 0UL,
    GPIO_enPRI1 = 1UL,
    GPIO_enPRI2 = 2UL,
    GPIO_enPRI3 = 3UL,
    GPIO_enPRI4 = 4UL,
    GPIO_enPRI5 = 5UL,
    GPIO_enPRI6 = 6UL,
    GPIO_enPRI7 = 7UL,
    GPIO_enPRI_MIN = 7UL,
    GPIO_enDEFAULT = 0xFFFFFFFFUL,
} GPIO_nPRIORITY;

typedef enum
{
    GPIO_enCONFIG_INPUT_2MA_PUSHPULL = ((uint32_t) GPIO_enDRIVE_2mA << 16UL)
            | ((uint32_t) GPIO_enDIR_INPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_PP << 4UL)
            | ((uint32_t) GPIO_enRESMODE_INACTIVE << 0UL),
    GPIO_enCONFIG_INPUT_2MA_PUSHPULL_PULLUP = ((uint32_t) GPIO_enDRIVE_2mA << 16UL)
            | ((uint32_t) GPIO_enDIR_INPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_PP << 4UL)
            | ((uint32_t) GPIO_enRESMODE_PULLUP << 0UL),
    GPIO_enCONFIG_INPUT_2MA_PUSHPULL_PULLDOWN = ((uint32_t) GPIO_enDRIVE_2mA << 16UL) | ((uint32_t) GPIO_enDIR_INPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_PP << 4UL)
            | ((uint32_t) GPIO_enRESMODE_PULLDOWN << 0UL),
    GPIO_enCONFIG_INPUT_2MA_OPENDRAIN = ((uint32_t) GPIO_enDRIVE_2mA << 16UL)
            | ((uint32_t) GPIO_enDIR_INPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_OD << 4UL)
            | ((uint32_t) GPIO_enRESMODE_INACTIVE << 0UL),
    GPIO_enCONFIG_INPUT_2MA_OPENDRAIN_PULLUP = ((uint32_t) GPIO_enDRIVE_2mA << 16UL)
            | ((uint32_t) GPIO_enDIR_INPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_OD << 4UL)
            | ((uint32_t) GPIO_enRESMODE_PULLUP << 0UL),
    GPIO_enCONFIG_INPUT_2MA_OPENDRAIN_PULLDOWN = ((uint32_t) GPIO_enDRIVE_2mA << 16UL)
            | ((uint32_t) GPIO_enDIR_INPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_OD << 4UL)
            | ((uint32_t) GPIO_enRESMODE_PULLDOWN << 0UL),
    GPIO_enCONFIG_INPUT_4MA_PUSHPULL = ((uint32_t) GPIO_enDRIVE_4mA << 16UL)
            | ((uint32_t) GPIO_enDIR_INPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_PP << 4UL)
            | ((uint32_t) GPIO_enRESMODE_INACTIVE << 0UL),
    GPIO_enCONFIG_INPUT_4MA_PUSHPULL_PULLUP = ((uint32_t) GPIO_enDRIVE_4mA << 16UL)
            | ((uint32_t) GPIO_enDIR_INPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_PP << 4UL)
            | ((uint32_t) GPIO_enRESMODE_PULLUP << 0UL),
    GPIO_enCONFIG_INPUT_4MA_PUSHPULL_PULLDOWN = ((uint32_t) GPIO_enDRIVE_4mA << 16UL)
            | ((uint32_t) GPIO_enDIR_INPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_PP << 4UL)
            | ((uint32_t) GPIO_enRESMODE_PULLDOWN << 0UL),
    GPIO_enCONFIG_INPUT_4MA_OPENDRAIN = ((uint32_t) GPIO_enDRIVE_4mA << 16UL)
            | ((uint32_t) GPIO_enDIR_INPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_OD << 4UL)
            | ((uint32_t) GPIO_enRESMODE_INACTIVE << 0UL),
    GPIO_enCONFIG_INPUT_4MA_OPENDRAIN_PULLUP = ((uint32_t) GPIO_enDRIVE_4mA << 16UL)
            | ((uint32_t) GPIO_enDIR_INPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_OD << 4UL)
            | ((uint32_t) GPIO_enRESMODE_PULLUP << 0UL),
    GPIO_enCONFIG_INPUT_4MA_OPENDRAIN_PULLDOWN = ((uint32_t) GPIO_enDRIVE_4mA << 16UL)
            | ((uint32_t) GPIO_enDIR_INPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_OD << 4UL)
            | ((uint32_t) GPIO_enRESMODE_PULLDOWN << 0UL),
    GPIO_enCONFIG_INPUT_6MA_PUSHPULL = ((uint32_t) GPIO_enDRIVE_6mA << 16UL)
            | ((uint32_t) GPIO_enDIR_INPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_PP << 4UL)
            | ((uint32_t) GPIO_enRESMODE_INACTIVE << 0UL),
    GPIO_enCONFIG_INPUT_6MA_PUSHPULL_PULLUP = ((uint32_t) GPIO_enDRIVE_6mA << 16UL)
            | ((uint32_t) GPIO_enDIR_INPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_PP << 4UL)
            | ((uint32_t) GPIO_enRESMODE_PULLUP << 0UL),
    GPIO_enCONFIG_INPUT_6MA_PUSHPULL_PULLDOWN = ((uint32_t) GPIO_enDRIVE_6mA << 16UL)
            | ((uint32_t) GPIO_enDIR_INPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_PP << 4UL)
            | ((uint32_t) GPIO_enRESMODE_PULLDOWN << 0UL),
    GPIO_enCONFIG_INPUT_6MA_OPENDRAIN = ((uint32_t) GPIO_enDRIVE_6mA << 16UL)
            | ((uint32_t) GPIO_enDIR_INPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_OD << 4UL)
            | ((uint32_t) GPIO_enRESMODE_INACTIVE << 0UL),
    GPIO_enCONFIG_INPUT_6MA_OPENDRAIN_PULLUP = ((uint32_t) GPIO_enDRIVE_6mA << 16UL)
            | ((uint32_t) GPIO_enDIR_INPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_OD << 4UL)
            | ((uint32_t) GPIO_enRESMODE_PULLUP << 0UL),
    GPIO_enCONFIG_INPUT_6MA_OPENDRAIN_PULLDOWN = ((uint32_t) GPIO_enDRIVE_6mA << 16UL)
            | ((uint32_t) GPIO_enDIR_INPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_OD << 4UL)
            | ((uint32_t) GPIO_enRESMODE_PULLDOWN << 0UL),
    GPIO_enCONFIG_INPUT_8MA_PUSHPULL = ((uint32_t) GPIO_enDRIVE_8mA << 16UL)
            | ((uint32_t) GPIO_enDIR_INPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_PP << 4UL)
            | ((uint32_t) GPIO_enRESMODE_INACTIVE << 0UL),
    GPIO_enCONFIG_INPUT_8MA_PUSHPULL_PULLUP = ((uint32_t) GPIO_enDRIVE_8mA << 16UL)
            | ((uint32_t) GPIO_enDIR_INPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_PP << 4UL)
            | ((uint32_t) GPIO_enRESMODE_PULLUP << 0UL),
    GPIO_enCONFIG_INPUT_8MA_PUSHPULL_PULLDOWN = ((uint32_t) GPIO_enDRIVE_8mA << 16UL)
            | ((uint32_t) GPIO_enDIR_INPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_PP << 4UL)
            | ((uint32_t) GPIO_enRESMODE_PULLDOWN << 0UL),
    GPIO_enCONFIG_INPUT_8MA_OPENDRAIN = ((uint32_t) GPIO_enDRIVE_8mA << 16UL)
            | ((uint32_t) GPIO_enDIR_INPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_OD << 4UL)
            | ((uint32_t) GPIO_enRESMODE_INACTIVE << 0UL),
    GPIO_enCONFIG_INPUT_8MA_OPENDRAIN_PULLUP = ((uint32_t) GPIO_enDRIVE_8mA << 16UL)
            | ((uint32_t) GPIO_enDIR_INPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_OD << 4UL)
            | ((uint32_t) GPIO_enRESMODE_PULLUP << 0UL),
    GPIO_enCONFIG_INPUT_8MA_OPENDRAIN_PULLDOWN = ((uint32_t) GPIO_enDRIVE_8mA << 16UL)
            | ((uint32_t) GPIO_enDIR_INPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_OD << 4UL)
            | ((uint32_t) GPIO_enRESMODE_PULLDOWN << 0UL),
    GPIO_enCONFIG_INPUT_8MA_SLR_PUSHPULL = ((uint32_t) GPIO_enDRIVE_8mA_SLR << 16UL)
            | ((uint32_t) GPIO_enDIR_INPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_PP << 4UL)
            | ((uint32_t) GPIO_enRESMODE_INACTIVE << 0UL),
    GPIO_enCONFIG_INPUT_8MA_SLR_PUSHPULL_PULLUP = ((uint32_t) GPIO_enDRIVE_8mA_SLR << 16UL)
            | ((uint32_t) GPIO_enDIR_INPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_PP << 4UL)
            | ((uint32_t) GPIO_enRESMODE_PULLUP << 0UL),
    GPIO_enCONFIG_INPUT_8MA_SLR_PUSHPULL_PULLDOWN = ((uint32_t) GPIO_enDRIVE_8mA_SLR << 16UL)
            | ((uint32_t) GPIO_enDIR_INPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_PP << 4UL)
            | ((uint32_t) GPIO_enRESMODE_PULLDOWN << 0UL),
    GPIO_enCONFIG_INPUT_8MA_SLR_OPENDRAIN = ((uint32_t) GPIO_enDRIVE_8mA_SLR << 16UL)
            | ((uint32_t) GPIO_enDIR_INPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_OD << 4UL)
            | ((uint32_t) GPIO_enRESMODE_INACTIVE << 0UL),
    GPIO_enCONFIG_INPUT_8MA_SLR_OPENDRAIN_PULLUP = ((uint32_t) GPIO_enDRIVE_8mA_SLR << 16UL)
            | ((uint32_t) GPIO_enDIR_INPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_OD << 4UL)
            | ((uint32_t) GPIO_enRESMODE_PULLUP << 0UL),
    GPIO_enCONFIG_INPUT_8MA_SLR_OPENDRAIN_PULLDOWN = ((uint32_t) GPIO_enDRIVE_8mA_SLR << 16UL)
            | ((uint32_t) GPIO_enDIR_INPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_OD << 4UL)
            | ((uint32_t) GPIO_enRESMODE_PULLDOWN << 0UL),
    GPIO_enCONFIG_INPUT_10MA_PUSHPULL = ((uint32_t) GPIO_enDRIVE_10mA << 16UL)
            | ((uint32_t) GPIO_enDIR_INPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_PP << 4UL)
            | ((uint32_t) GPIO_enRESMODE_INACTIVE << 0UL),
    GPIO_enCONFIG_INPUT_10MA_PUSHPULL_PULLUP = ((uint32_t) GPIO_enDRIVE_10mA << 16UL)
            | ((uint32_t) GPIO_enDIR_INPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_PP << 4UL)
            | ((uint32_t) GPIO_enRESMODE_PULLUP << 0UL),
    GPIO_enCONFIG_INPUT_10MA_PUSHPULL_PULLDOWN = ((uint32_t) GPIO_enDRIVE_10mA << 16UL)
            | ((uint32_t) GPIO_enDIR_INPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_PP << 4UL)
            | ((uint32_t) GPIO_enRESMODE_PULLDOWN << 0UL),
    GPIO_enCONFIG_INPUT_10MA_OPENDRAIN = ((uint32_t) GPIO_enDRIVE_10mA << 16UL)
            | ((uint32_t) GPIO_enDIR_INPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_OD << 4UL)
            | ((uint32_t) GPIO_enRESMODE_INACTIVE << 0UL),
    GPIO_enCONFIG_INPUT_10MA_OPENDRAIN_PULLUP = ((uint32_t) GPIO_enDRIVE_10mA << 16UL)
            | ((uint32_t) GPIO_enDIR_INPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_OD << 4UL)
            | ((uint32_t) GPIO_enRESMODE_PULLUP << 0UL),
    GPIO_enCONFIG_INPUT_10MA_OPENDRAIN_PULLDOWN = ((uint32_t) GPIO_enDRIVE_10mA << 16UL)
            | ((uint32_t) GPIO_enDIR_INPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_OD << 4UL)
            | ((uint32_t) GPIO_enRESMODE_PULLDOWN << 0UL),
    GPIO_enCONFIG_INPUT_10MA_SLR_PUSHPULL = ((uint32_t) GPIO_enDRIVE_10mA_SLR << 16UL)
            | ((uint32_t) GPIO_enDIR_INPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_PP << 4UL)
            | ((uint32_t) GPIO_enRESMODE_INACTIVE << 0UL),
    GPIO_enCONFIG_INPUT_10MA_SLR_PUSHPULL_PULLUP = ((uint32_t) GPIO_enDRIVE_10mA_SLR << 16UL)
            | ((uint32_t) GPIO_enDIR_INPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_PP << 4UL)
            | ((uint32_t) GPIO_enRESMODE_PULLUP << 0UL),
    GPIO_enCONFIG_INPUT_10MA_SLR_PUSHPULL_PULLDOWN = ((uint32_t) GPIO_enDRIVE_10mA_SLR << 16UL)
            | ((uint32_t) GPIO_enDIR_INPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_PP << 4UL)
            | ((uint32_t) GPIO_enRESMODE_PULLDOWN << 0UL),
    GPIO_enCONFIG_INPUT_10MA_SLR_OPENDRAIN = ((uint32_t) GPIO_enDRIVE_10mA_SLR << 16UL)
            | ((uint32_t) GPIO_enDIR_INPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_OD << 4UL)
            | ((uint32_t) GPIO_enRESMODE_INACTIVE << 0UL),
    GPIO_enCONFIG_INPUT_10MA_SLR_OPENDRAIN_PULLUP = ((uint32_t) GPIO_enDRIVE_10mA_SLR << 16UL)
            | ((uint32_t) GPIO_enDIR_INPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_OD << 4UL)
            | ((uint32_t) GPIO_enRESMODE_PULLUP << 0UL),
    GPIO_enCONFIG_INPUT_10MA_SLR_OPENDRAIN_PULLDOWN = ((uint32_t) GPIO_enDRIVE_10mA_SLR << 16UL)
            | ((uint32_t) GPIO_enDIR_INPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_OD << 4UL)
            | ((uint32_t) GPIO_enRESMODE_PULLDOWN << 0UL),
    GPIO_enCONFIG_INPUT_12MA_PUSHPULL = ((uint32_t) GPIO_enDRIVE_12mA << 16UL)
            | ((uint32_t) GPIO_enDIR_INPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_PP << 4UL)
            | ((uint32_t) GPIO_enRESMODE_INACTIVE << 0UL),
    GPIO_enCONFIG_INPUT_12MA_PUSHPULL_PULLUP = ((uint32_t) GPIO_enDRIVE_12mA << 16UL)
            | ((uint32_t) GPIO_enDIR_INPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_PP << 4UL)
            | ((uint32_t) GPIO_enRESMODE_PULLUP << 0UL),
    GPIO_enCONFIG_INPUT_12MA_PUSHPULL_PULLDOWN = ((uint32_t) GPIO_enDRIVE_12mA << 16UL)
            | ((uint32_t) GPIO_enDIR_INPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_PP << 4UL)
            | ((uint32_t) GPIO_enRESMODE_PULLDOWN << 0UL),
    GPIO_enCONFIG_INPUT_12MA_OPENDRAIN = ((uint32_t) GPIO_enDRIVE_12mA << 16UL)
            | ((uint32_t) GPIO_enDIR_INPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_OD << 4UL)
            | ((uint32_t) GPIO_enRESMODE_INACTIVE << 0UL),
    GPIO_enCONFIG_INPUT_12MA_OPENDRAIN_PULLUP = ((uint32_t) GPIO_enDRIVE_12mA << 16UL)
            | ((uint32_t) GPIO_enDIR_INPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_OD << 4UL)
            | ((uint32_t) GPIO_enRESMODE_PULLUP << 0UL),
    GPIO_enCONFIG_INPUT_12MA_OPENDRAIN_PULLDOWN = ((uint32_t) GPIO_enDRIVE_12mA << 16UL)
            | ((uint32_t) GPIO_enDIR_INPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_OD << 4UL)
            | ((uint32_t) GPIO_enRESMODE_PULLDOWN << 0UL),
    GPIO_enCONFIG_INPUT_12MA_SLR_PUSHPULL = ((uint32_t) GPIO_enDRIVE_12mA_SLR << 16UL)
            | ((uint32_t) GPIO_enDIR_INPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_PP << 4UL)
            | ((uint32_t) GPIO_enRESMODE_INACTIVE << 0UL),
    GPIO_enCONFIG_INPUT_12MA_SLR_PUSHPULL_PULLUP = ((uint32_t) GPIO_enDRIVE_12mA_SLR << 16UL)
            | ((uint32_t) GPIO_enDIR_INPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_PP << 4UL)
            | ((uint32_t) GPIO_enRESMODE_PULLUP << 0UL),
    GPIO_enCONFIG_INPUT_12MA_SLR_PUSHPULL_PULLDOWN = ((uint32_t) GPIO_enDRIVE_12mA_SLR << 16UL)
            | ((uint32_t) GPIO_enDIR_INPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_PP << 4UL)
            | ((uint32_t) GPIO_enRESMODE_PULLDOWN << 0UL),
    GPIO_enCONFIG_INPUT_12MA_SLR_OPENDRAIN = ((uint32_t) GPIO_enDRIVE_12mA_SLR << 16UL)
            | ((uint32_t) GPIO_enDIR_INPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_OD << 4UL)
            | ((uint32_t) GPIO_enRESMODE_INACTIVE << 0UL),
    GPIO_enCONFIG_INPUT_12MA_SLR_OPENDRAIN_PULLUP = ((uint32_t) GPIO_enDRIVE_12mA_SLR << 16UL)
            | ((uint32_t) GPIO_enDIR_INPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_OD << 4UL)
            | ((uint32_t) GPIO_enRESMODE_PULLUP << 0UL),
    GPIO_enCONFIG_INPUT_12MA_SLR_OPENDRAIN_PULLDOWN = ((uint32_t) GPIO_enDRIVE_12mA_SLR << 16UL)
            | ((uint32_t) GPIO_enDIR_INPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_OD << 4UL)
            | ((uint32_t) GPIO_enRESMODE_PULLDOWN << 0UL),
    GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL = ((uint32_t) GPIO_enDRIVE_2mA << 16UL)
            | ((uint32_t) GPIO_enDIR_OUTPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_PP << 4UL)
            | ((uint32_t) GPIO_enRESMODE_INACTIVE << 0UL),
    GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL_PULLUP = ((uint32_t) GPIO_enDRIVE_2mA << 16UL)
            | ((uint32_t) GPIO_enDIR_OUTPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_PP << 4UL)
            | ((uint32_t) GPIO_enRESMODE_PULLUP << 0UL),
    GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL_PULLDOWN = ((uint32_t) GPIO_enDRIVE_2mA << 16UL)
            | ((uint32_t) GPIO_enDIR_OUTPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_PP << 4UL)
            | ((uint32_t) GPIO_enRESMODE_PULLDOWN << 0UL),
    GPIO_enCONFIG_OUTPUT_2MA_OPENDRAIN = ((uint32_t) GPIO_enDRIVE_2mA << 16UL)
            | ((uint32_t) GPIO_enDIR_OUTPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_OD << 4UL)
            | ((uint32_t) GPIO_enRESMODE_INACTIVE << 0UL),
    GPIO_enCONFIG_OUTPUT_2MA_OPENDRAIN_PULLUP = ((uint32_t) GPIO_enDRIVE_2mA << 16UL)
            | ((uint32_t) GPIO_enDIR_OUTPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_OD << 4UL)
            | ((uint32_t) GPIO_enRESMODE_PULLUP << 0UL),
    GPIO_enCONFIG_OUTPUT_2MA_OPENDRAIN_PULLDOWN = ((uint32_t) GPIO_enDRIVE_2mA << 16UL)
            | ((uint32_t) GPIO_enDIR_OUTPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_OD << 4UL)
            | ((uint32_t) GPIO_enRESMODE_PULLDOWN << 0UL),
    GPIO_enCONFIG_OUTPUT_4MA_PUSHPULL = ((uint32_t) GPIO_enDRIVE_4mA << 16UL)
            | ((uint32_t) GPIO_enDIR_OUTPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_PP << 4UL)
            | ((uint32_t) GPIO_enRESMODE_INACTIVE << 0UL),
    GPIO_enCONFIG_OUTPUT_4MA_PUSHPULL_PULLUP = ((uint32_t) GPIO_enDRIVE_4mA << 16UL)
            | ((uint32_t) GPIO_enDIR_OUTPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_PP << 4UL)
            | ((uint32_t) GPIO_enRESMODE_PULLUP << 0UL),
    GPIO_enCONFIG_OUTPUT_4MA_PUSHPULL_PULLDOWN = ((uint32_t) GPIO_enDRIVE_4mA << 16UL)
            | ((uint32_t) GPIO_enDIR_OUTPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_PP << 4UL)
            | ((uint32_t) GPIO_enRESMODE_PULLDOWN << 0UL),
    GPIO_enCONFIG_OUTPUT_4MA_OPENDRAIN = ((uint32_t) GPIO_enDRIVE_4mA << 16UL)
            | ((uint32_t) GPIO_enDIR_OUTPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_OD << 4UL)
            | ((uint32_t) GPIO_enRESMODE_INACTIVE << 0UL),
    GPIO_enCONFIG_OUTPUT_4MA_OPENDRAIN_PULLUP = ((uint32_t) GPIO_enDRIVE_4mA << 16UL)
            | ((uint32_t) GPIO_enDIR_OUTPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_OD << 4UL)
            | ((uint32_t) GPIO_enRESMODE_PULLUP << 0UL),
    GPIO_enCONFIG_OUTPUT_4MA_OPENDRAIN_PULLDOWN = ((uint32_t) GPIO_enDRIVE_4mA << 16UL)
            | ((uint32_t) GPIO_enDIR_OUTPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_OD << 4UL)
            | ((uint32_t) GPIO_enRESMODE_PULLDOWN << 0UL),
    GPIO_enCONFIG_OUTPUT_6MA_PUSHPULL = ((uint32_t) GPIO_enDRIVE_6mA << 16UL)
            | ((uint32_t) GPIO_enDIR_OUTPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_PP << 4UL)
            | ((uint32_t) GPIO_enRESMODE_INACTIVE << 0UL),
    GPIO_enCONFIG_OUTPUT_6MA_PUSHPULL_PULLUP = ((uint32_t) GPIO_enDRIVE_6mA << 16UL)
            | ((uint32_t) GPIO_enDIR_OUTPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_PP << 4UL)
            | ((uint32_t) GPIO_enRESMODE_PULLUP << 0UL),
    GPIO_enCONFIG_OUTPUT_6MA_PUSHPULL_PULLDOWN = ((uint32_t) GPIO_enDRIVE_6mA << 16UL)
            | ((uint32_t) GPIO_enDIR_OUTPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_PP << 4UL)
            | ((uint32_t) GPIO_enRESMODE_PULLDOWN << 0UL),
    GPIO_enCONFIG_OUTPUT_6MA_OPENDRAIN = ((uint32_t) GPIO_enDRIVE_6mA << 16UL)
            | ((uint32_t) GPIO_enDIR_OUTPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_OD << 4UL)
            | ((uint32_t) GPIO_enRESMODE_INACTIVE << 0UL),
    GPIO_enCONFIG_OUTPUT_6MA_OPENDRAIN_PULLUP = ((uint32_t) GPIO_enDRIVE_6mA << 16UL)
            | ((uint32_t) GPIO_enDIR_OUTPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_OD << 4UL)
            | ((uint32_t) GPIO_enRESMODE_PULLUP << 0UL),
    GPIO_enCONFIG_OUTPUT_6MA_OPENDRAIN_PULLDOWN = ((uint32_t) GPIO_enDRIVE_6mA << 16UL)
            | ((uint32_t) GPIO_enDIR_OUTPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_OD << 4UL)
            | ((uint32_t) GPIO_enRESMODE_PULLDOWN << 0UL),
    GPIO_enCONFIG_OUTPUT_8MA_PUSHPULL = ((uint32_t) GPIO_enDRIVE_8mA << 16UL)
            | ((uint32_t) GPIO_enDIR_OUTPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_PP << 4UL)
            | ((uint32_t) GPIO_enRESMODE_INACTIVE << 0UL),
    GPIO_enCONFIG_OUTPUT_8MA_PUSHPULL_PULLUP = ((uint32_t) GPIO_enDRIVE_8mA << 16UL)
            | ((uint32_t) GPIO_enDIR_OUTPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_PP << 4UL)
            | ((uint32_t) GPIO_enRESMODE_PULLUP << 0UL),
    GPIO_enCONFIG_OUTPUT_8MA_PUSHPULL_PULLDOWN = ((uint32_t) GPIO_enDRIVE_8mA << 16UL)
            | ((uint32_t) GPIO_enDIR_OUTPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_PP << 4UL)
            | ((uint32_t) GPIO_enRESMODE_PULLDOWN << 0UL),
    GPIO_enCONFIG_OUTPUT_8MA_OPENDRAIN = ((uint32_t) GPIO_enDRIVE_8mA << 16UL)
            | ((uint32_t) GPIO_enDIR_OUTPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_OD << 4UL)
            | ((uint32_t) GPIO_enRESMODE_INACTIVE << 0UL),
    GPIO_enCONFIG_OUTPUT_8MA_OPENDRAIN_PULLUP = ((uint32_t) GPIO_enDRIVE_8mA << 16UL)
            | ((uint32_t) GPIO_enDIR_OUTPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_OD << 4UL)
            | ((uint32_t) GPIO_enRESMODE_PULLUP << 0UL),
    GPIO_enCONFIG_OUTPUT_8MA_OPENDRAIN_PULLDOWN = ((uint32_t) GPIO_enDRIVE_8mA << 16UL)
            | ((uint32_t) GPIO_enDIR_OUTPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_OD << 4UL)
            | ((uint32_t) GPIO_enRESMODE_PULLDOWN << 0UL),
    GPIO_enCONFIG_OUTPUT_8MA_SLR_PUSHPULL = ((uint32_t) GPIO_enDRIVE_8mA_SLR << 16UL)
            | ((uint32_t) GPIO_enDIR_OUTPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_PP << 4UL)
            | ((uint32_t) GPIO_enRESMODE_INACTIVE << 0UL),
    GPIO_enCONFIG_OUTPUT_8MA_SLR_PUSHPULL_PULLUP = ((uint32_t) GPIO_enDRIVE_8mA_SLR << 16UL)
            | ((uint32_t) GPIO_enDIR_OUTPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_PP << 4UL)
            | ((uint32_t) GPIO_enRESMODE_PULLUP << 0UL),
    GPIO_enCONFIG_OUTPUT_8MA_SLR_PUSHPULL_PULLDOWN = ((uint32_t) GPIO_enDRIVE_8mA_SLR << 16UL)
            | ((uint32_t) GPIO_enDIR_OUTPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_PP << 4UL)
            | ((uint32_t) GPIO_enRESMODE_PULLDOWN << 0UL),
    GPIO_enCONFIG_OUTPUT_8MA_SLR_OPENDRAIN = ((uint32_t) GPIO_enDRIVE_8mA_SLR << 16UL)
            | ((uint32_t) GPIO_enDIR_OUTPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_OD << 4UL)
            | ((uint32_t) GPIO_enRESMODE_INACTIVE << 0UL),
    GPIO_enCONFIG_OUTPUT_8MA_SLR_OPENDRAIN_PULLUP = ((uint32_t) GPIO_enDRIVE_8mA_SLR << 16UL)
            | ((uint32_t) GPIO_enDIR_OUTPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_OD << 4UL)
            | ((uint32_t) GPIO_enRESMODE_PULLUP << 0UL),
    GPIO_enCONFIG_OUTPUT_8MA_SLR_OPENDRAIN_PULLDOWN = ((uint32_t) GPIO_enDRIVE_8mA_SLR << 16UL)
            | ((uint32_t) GPIO_enDIR_OUTPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_OD << 4UL)
            | ((uint32_t) GPIO_enRESMODE_PULLDOWN << 0UL),
    GPIO_enCONFIG_OUTPUT_10MA_PUSHPULL = ((uint32_t) GPIO_enDRIVE_10mA << 16UL)
            | ((uint32_t) GPIO_enDIR_OUTPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_PP << 4UL)
            | ((uint32_t) GPIO_enRESMODE_INACTIVE << 0UL),
    GPIO_enCONFIG_OUTPUT_10MA_PUSHPULL_PULLUP = ((uint32_t) GPIO_enDRIVE_10mA << 16UL)
            | ((uint32_t) GPIO_enDIR_OUTPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_PP << 4UL)
            | ((uint32_t) GPIO_enRESMODE_PULLUP << 0UL),
    GPIO_enCONFIG_OUTPUT_10MA_PUSHPULL_PULLDOWN = ((uint32_t) GPIO_enDRIVE_10mA << 16UL)
            | ((uint32_t) GPIO_enDIR_OUTPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_PP << 4UL)
            | ((uint32_t) GPIO_enRESMODE_PULLDOWN << 0UL),
    GPIO_enCONFIG_OUTPUT_10MA_OPENDRAIN = ((uint32_t) GPIO_enDRIVE_10mA << 16UL)
            | ((uint32_t) GPIO_enDIR_OUTPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_OD << 4UL)
            | ((uint32_t) GPIO_enRESMODE_INACTIVE << 0UL),
    GPIO_enCONFIG_OUTPUT_10MA_OPENDRAIN_PULLUP = ((uint32_t) GPIO_enDRIVE_10mA << 16UL)
            | ((uint32_t) GPIO_enDIR_OUTPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_OD << 4UL)
            | ((uint32_t) GPIO_enRESMODE_PULLUP << 0UL),
    GPIO_enCONFIG_OUTPUT_10MA_OPENDRAIN_PULLDOWN = ((uint32_t) GPIO_enDRIVE_10mA << 16UL)
            | ((uint32_t) GPIO_enDIR_OUTPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_OD << 4UL)
            | ((uint32_t) GPIO_enRESMODE_PULLDOWN << 0UL),
    GPIO_enCONFIG_OUTPUT_10MA_SLR_PUSHPULL = ((uint32_t) GPIO_enDRIVE_10mA_SLR << 16UL)
            | ((uint32_t) GPIO_enDIR_OUTPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_PP << 4UL)
            | ((uint32_t) GPIO_enRESMODE_INACTIVE << 0UL),
    GPIO_enCONFIG_OUTPUT_10MA_SLR_PUSHPULL_PULLUP = ((uint32_t) GPIO_enDRIVE_10mA_SLR << 16UL)
            | ((uint32_t) GPIO_enDIR_OUTPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_PP << 4UL)
            | ((uint32_t) GPIO_enRESMODE_PULLUP << 0UL),
    GPIO_enCONFIG_OUTPUT_10MA_SLR_PUSHPULL_PULLDOWN = ((uint32_t) GPIO_enDRIVE_10mA_SLR << 16UL)
            | ((uint32_t) GPIO_enDIR_OUTPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_PP << 4UL)
            | ((uint32_t) GPIO_enRESMODE_PULLDOWN << 0UL),
    GPIO_enCONFIG_OUTPUT_10MA_SLR_OPENDRAIN = ((uint32_t) GPIO_enDRIVE_10mA_SLR << 16UL)
            | ((uint32_t) GPIO_enDIR_OUTPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_OD << 4UL)
            | ((uint32_t) GPIO_enRESMODE_INACTIVE << 0UL),
    GPIO_enCONFIG_OUTPUT_10MA_SLR_OPENDRAIN_PULLUP = ((uint32_t) GPIO_enDRIVE_10mA_SLR << 16UL)
            | ((uint32_t) GPIO_enDIR_OUTPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_OD << 4UL)
            | ((uint32_t) GPIO_enRESMODE_PULLUP << 0UL),
    GPIO_enCONFIG_OUTPUT_10MA_SLR_OPENDRAIN_PULLDOWN = ((uint32_t) GPIO_enDRIVE_10mA_SLR << 16UL)
            | ((uint32_t) GPIO_enDIR_OUTPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_OD << 4UL)
            | ((uint32_t) GPIO_enRESMODE_PULLDOWN << 0UL),
    GPIO_enCONFIG_OUTPUT_12MA_PUSHPULL = ((uint32_t) GPIO_enDRIVE_12mA << 16UL)
            | ((uint32_t) GPIO_enDIR_OUTPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_PP << 4UL)
            | ((uint32_t) GPIO_enRESMODE_INACTIVE << 0UL),
    GPIO_enCONFIG_OUTPUT_12MA_PUSHPULL_PULLUP = ((uint32_t) GPIO_enDRIVE_12mA << 16UL)
            | ((uint32_t) GPIO_enDIR_OUTPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_PP << 4UL)
            | ((uint32_t) GPIO_enRESMODE_PULLUP << 0UL),
    GPIO_enCONFIG_OUTPUT_12MA_PUSHPULL_PULLDOWN = ((uint32_t) GPIO_enDRIVE_12mA << 16UL)
            | ((uint32_t) GPIO_enDIR_OUTPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_PP << 4UL)
            | ((uint32_t) GPIO_enRESMODE_PULLDOWN << 0UL),
    GPIO_enCONFIG_OUTPUT_12MA_OPENDRAIN = ((uint32_t) GPIO_enDRIVE_12mA << 16UL)
            | ((uint32_t) GPIO_enDIR_OUTPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_OD << 4UL)
            | ((uint32_t) GPIO_enRESMODE_INACTIVE << 0UL),
    GPIO_enCONFIG_OUTPUT_12MA_OPENDRAIN_PULLUP = ((uint32_t) GPIO_enDRIVE_12mA << 16UL)
            | ((uint32_t) GPIO_enDIR_OUTPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_OD << 4UL)
            | ((uint32_t) GPIO_enRESMODE_PULLUP << 0UL),
    GPIO_enCONFIG_OUTPUT_12MA_OPENDRAIN_PULLDOWN = ((uint32_t) GPIO_enDRIVE_12mA << 16UL)
            | ((uint32_t) GPIO_enDIR_OUTPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_OD << 4UL)
            | ((uint32_t) GPIO_enRESMODE_PULLDOWN << 0UL),
    GPIO_enCONFIG_OUTPUT_12MA_SLR_PUSHPULL = ((uint32_t) GPIO_enDRIVE_12mA_SLR << 16UL)
            | ((uint32_t) GPIO_enDIR_OUTPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_PP << 4UL)
            | ((uint32_t) GPIO_enRESMODE_INACTIVE << 0UL),
    GPIO_enCONFIG_OUTPUT_12MA_SLR_PUSHPULL_PULLUP = ((uint32_t) GPIO_enDRIVE_12mA_SLR << 16UL)
            | ((uint32_t) GPIO_enDIR_OUTPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_PP << 4UL)
            | ((uint32_t) GPIO_enRESMODE_PULLUP << 0UL),
    GPIO_enCONFIG_OUTPUT_12MA_SLR_PUSHPULL_PULLDOWN = ((uint32_t) GPIO_enDRIVE_12mA_SLR << 16UL)
            | ((uint32_t) GPIO_enDIR_OUTPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_PP << 4UL)
            | ((uint32_t) GPIO_enRESMODE_PULLDOWN << 0UL),
    GPIO_enCONFIG_OUTPUT_12MA_SLR_OPENDRAIN = ((uint32_t) GPIO_enDRIVE_12mA_SLR << 16UL)
            | ((uint32_t) GPIO_enDIR_OUTPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_OD << 4UL)
            | ((uint32_t) GPIO_enRESMODE_INACTIVE << 0UL),
    GPIO_enCONFIG_OUTPUT_12MA_SLR_OPENDRAIN_PULLUP = ((uint32_t) GPIO_enDRIVE_12mA_SLR << 16UL)
            | ((uint32_t) GPIO_enDIR_OUTPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_OD << 4UL)
            | ((uint32_t) GPIO_enRESMODE_PULLUP << 0UL),
    GPIO_enCONFIG_OUTPUT_12MA_SLR_OPENDRAIN_PULLDOWN = ((uint32_t) GPIO_enDRIVE_12mA_SLR << 16UL)
            | ((uint32_t) GPIO_enDIR_OUTPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_OD << 4UL)
            | ((uint32_t) GPIO_enRESMODE_PULLDOWN << 0UL),
    GPIO_enCONFIG_UNDEF = 0xFFFFFFFFUL,
} GPIO_nCONFIG;

typedef enum
{
    GPIO_enINT_CONFIG_EDGE_FALLING = ((uint32_t) GPIO_enSENSE_EDGE << 8UL) | ((uint32_t) GPIO_enEDGE_FALLING << 0UL),
    GPIO_enINT_CONFIG_EDGE_RISING = ((uint32_t) GPIO_enSENSE_EDGE << 8UL) | ((uint32_t) GPIO_enEDGE_RISING << 0UL),
    GPIO_enINT_CONFIG_EDGE_BOTH = ((uint32_t) GPIO_enSENSE_EDGE << 8UL) | ((uint32_t) GPIO_enEDGE_BOTH << 0UL),
    GPIO_enINT_CONFIG_LEVEL_LOW = ((uint32_t) GPIO_enSENSE_LEVEL << 8UL) | ((uint32_t) GPIO_enLEVEL_LOW << 0UL),
    GPIO_enINT_CONFIG_LEVEL_HIGH = ((uint32_t) GPIO_enSENSE_LEVEL << 8UL) | ((uint32_t) GPIO_enLEVEL_HIGH << 0UL),
    GPIO_enINT_CONFIG_UNDEF = 0xFFFFFFFFUL,
} GPIO_nINT_CONFIG;

typedef struct
{
        GPIO_nDRIVE enDrive;
        GPIO_nDIR enDirection;
        GPIO_nOUTMODE enOutputMode;
        GPIO_nRESMODE enResistorMode;
} GPIO_CONFIG_Typedef;

#endif /* XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_ENUM_H_ */
