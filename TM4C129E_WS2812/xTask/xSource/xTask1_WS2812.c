/**
 *
 * @file xTask1_WS2812.c
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
 * @verbatim 17 dic. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 17 dic. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xTask/xHeader/xSemaphores.h>
#include <xApplication_MCU/xApplication_MCU.h>
#include <xUtils/Math/Math.h>
#include <xUtils/Conversion/Conversion.h>
#include <xUtils/Colors/Colors.h>
#include <xOS/xOS.h>
#include <xTask/xHeader/xTask1_WS2812.h>
#include "string.h"
#include "ctype.h"
#include "stdlib.h"

// Overall twinkle speed.
// 0 (VERY slow) to 8 (VERY fast).
// 4, 5, and 6 are recommended, default is 4.
#define TWINKLE_SPEED (4)

// Overall twinkle density.
// 0 (NONE lit) to 8 (ALL lit at once).
// Default is 5.
#define TWINKLE_DENSITY (5)

// How often to change color palettes.
#define SECONDS_PER_PALETTE  (30)

// If AUTO_SELECT_BACKGROUND_COLOR is set to 1,
// then for any palette where the first two entries
// are the same, a dimmed version of that color will
// automatically be used as the background color.
#define AUTO_SELECT_BACKGROUND_COLOR (0)

// If COOL_LIKE_INCANDESCENT is set to 1, colors will
// fade out slighted 'reddened', similar to how
// incandescent bulbs change color as they get dim down.
#define COOL_LIKE_INCANDESCENT (1)

#define HIGH_CODE (0x3F0) /*1111110000*/
#define LOW_CODE (0x380)  /*1110000000*/


COLORS_nValues gBackgroundColor = COLORS_enBLACK;
uint16_t u16ValueLed[2] =
{
 LOW_CODE,
 HIGH_CODE,
};

uint32_t u32Delay = 1000;
uint32_t u32Colors[5] =
{
 0x0,
 0xFFFFFF,
 0xFF0000,
 0x00FF00,
 0x0000FF,
};

void WritePixel(uint8_t Red, uint8_t Green, uint8_t Blue);
void WritePixelColor(uint32_t Color);

void xTask1_WS2812(void* pvParams)
{
    /*Period Handling*/
    UBase_t uxLastWakeTime;
    UBase_t uxPeriodTask = (UBase_t) pvParams;
    UART_CONTROL_t enUart0Control =
    {
        UART_enEOT_ALL,
        UART_enSTATE_DIS,
        UART_enSTATE_ENA,
        UART_enSTATE_ENA,
        UART_enSTATE_ENA,
        UART_enLINE_MODE_SOFT,
        UART_enLINE_MODE_SOFT,
        UART_enSTATE_DIS,
        UART_enSTATE_DIS,
        UART_enSTATE_DIS,
        UART_enSTATE_DIS,
        UART_enLEVEL_LOW,
        UART_enLEVEL_LOW,
        UART_enLEVEL_LOW,
    };

    UART_LINE_CONTROL_t enUart0LineControl =
    {
     UART_enSTATE_ENA,
     UART_enSTOP_ONE,
     UART_enPARITY_NONE,
     UART_enLENGTH_8BITS,
     UART_enFIFO_LEVEL_13_16,
     UART_enFIFO_LEVEL_13_16,
    };

    UART_LINE_t enUart0Line =
    {
     UART_enLINE_SELECT_PRIMARY,
     UART_enLINE_SELECT_PRIMARY,
     UART_enLINE_SELECT_PRIMARY,
     UART_enLINE_SELECT_PRIMARY,
     UART_enLINE_SELECT_PRIMARY,
     UART_enLINE_SELECT_PRIMARY,
     UART_enLINE_SELECT_PRIMARY,
     UART_enLINE_SELECT_PRIMARY,
    };

    const SSI_CONTROL_t SSIControlReg =
    {
     SSI_enSTATE_DIS,
     SSI_enDIRECTION_TX,
     SSI_enMODE_LEGACY,
     SSI_enSTATE_DIS,
     SSI_enSTATE_ENA,
     SSI_enSTATE_DIS,
     SSI_enSTATE_DIS,
     SSI_enSTATE_DIS,
     SSI_enSTATE_ENA,
     SSI_enSTATE_DIS,
    };

    const SSI_LINE_t SSILineReg =
    {
     SSI_enLINE_SELECT_PRIMARY,
     SSI_enLINE_SELECT_PRIMARY,
     SSI_enLINE_SELECT_PRIMARY,
     SSI_enLINE_SELECT_PRIMARY,
     SSI_enLINE_SELECT_PRIMARY,
     SSI_enLINE_SELECT_PRIMARY,
    };

     SSI_FRAME_CONTROL_t SSIFrameControlReg =
    {
     SSI_enFORMAT_FREESCALE,
     SSI_enPHASE_FIRST,
     SSI_enPOLARITY_LOW,
     SSI_enLENGTH_10BITS,
    };

    SYSCTL__enEnableRunMode(SYSCTL_enMODULE_0, SYSCTL_enGPIOA);
    SYSCTL__enEnableRunMode(SYSCTL_enMODULE_0, SYSCTL_enGPIOF);
    SYSCTL__enEnableRunMode(SYSCTL_enMODULE_0, SYSCTL_enGPIOG);
    SYSCTL__enEnableRunMode(SYSCTL_enMODULE_0, SYSCTL_enGPIOK);

    GPIO__enInit();
    SSI__enInit(SSI_enMODULE_0);
    UART__enInit(UART_enMODULE_0);
    UART__enSetConfig(UART_enMODULE_0, UART_enMODE_NORMAL, 115200UL, 0UL, 0UL,
                      &enUart0Control, &enUart0LineControl, &enUart0Line, 0UL);

    SSI__enSetConfig(SSI_enMODULE_0, SSI_enOPERATION_MASTER, 8000000, &SSIControlReg, &SSIFrameControlReg, &SSILineReg);
    //GPIO__enSetPullDownResistorByNumber(GPIO_enPORT_A, GPIO_enPIN_4, GPIO_enSTATE_ENA);
    SSI__enSetState(SSI_enMODULE_0, SSI_enSTATE_ENA);
    uint32_t Red = 0;
    uint32_t Green = 0xFF;
    uint32_t Blue = 0;
    uint32_t RedDir = 0;
    uint32_t GreenDir = 0;
    uint32_t BlueDir = 0;
    uint32_t Color;

    srand(SYSTICK_CVR_R);
    for(int i=0; i<600; i++)
    {
        WritePixelColor(0x0000UL);
    }
    OS_Task__vDelay(100);
    uxLastWakeTime = OS_Task__uxGetTickCount();
    while(1UL)
    {
        if(Red >= 0xFC)
        {
            RedDir = 1;
        }
        else if (Red == 0)
        {
            RedDir = 0;
        }

        if(Green >= 0xFC)
        {
            GreenDir = 1;
        }
        else if (Green == 0)
        {
            GreenDir = 0;
        }

        if(Blue >= 0xFC)
        {
            BlueDir = 1;
        }
        else if (Blue == 0)
        {
            BlueDir = 0;
        }

        if(RedDir == 0)
        {
            Red++;
        }
        else
        {
            Red--;
        }

        if(BlueDir == 0)
        {
            Blue += 2;
        }
        else
        {
            Blue -= 2;
        }

        if(GreenDir == 0)
        {
            Green += 4;
        }
        else
        {
            Green -= 4;
        }

        for(int i=0; i<150; i++)
        {
            Color = rand() >> 13;
            Color %= 5;
            Color = u32Colors[Color];
            WritePixelColor(Color);
        }
        OS_Task__vDelayUntil(&uxLastWakeTime, u32Delay);
    }
}


void WritePixel(uint8_t Red, uint8_t Green, uint8_t Blue)
{
    uint8_t u8Temp;

    for(int i=0; i<8; i++)
    {
        u8Temp = Green & 0x80;
        Green <<= 1;
        u8Temp >>=7;
        SSI0_DR_R = u16ValueLed[u8Temp];
        while(SSI0_SR->TNF == 0);
    }

    for(int i=0; i<8; i++)
    {
        u8Temp = Red & 0x80;
        Red <<= 1;
        u8Temp >>=7;
        SSI0_DR_R = u16ValueLed[u8Temp];
        while(SSI0_SR->TNF == 0);
    }

    for(int i=0; i<8; i++)
    {
        u8Temp = Blue & 0x80;
        Blue <<= 1;
        u8Temp >>=7;
        SSI0_DR_R = u16ValueLed[u8Temp];
        while(SSI0_SR->TNF == 0);
    }
}


void WritePixelColor(uint32_t Color)
{
    uint8_t Green;
    uint8_t Red;
    uint8_t Blue;
    uint8_t u8Temp;

    Blue = Color & 0xFF;
    Color >>= 8;
    Green = Color & 0xFF;
    Color >>= 8;
    Red = Color & 0xFF;
    WritePixel(Red, Green, Blue);

}

