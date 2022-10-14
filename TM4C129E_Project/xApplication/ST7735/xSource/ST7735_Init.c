/**
 *
 * @file ST7735_Init.c
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
 * @verbatim 18 feb. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 18 feb. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xApplication/ST7735/xHeader/ST7735_Init.h>
#include <xApplication/ST7735/xHeader/ST7735_Reset.h>
#include <xApplication/ST7735/xHeader/ST7735_ChipSelect.h>
#include <xApplication/ST7735/xHeader/ST7735_DataCommand.h>
#include <xApplication/ST7735/xHeader/ST7735_Write.h>
#include <xApplication/ST7735/xHeader/ST7735_Commands.h>
#include <xApplication/ST7735/xHeader/ST7735_Delay.h>
#include <xApplication/ST7735/xHeader/ST7735_Defines.h>

#include <xApplication_MCU/SSI/SSI.h>
#include <xDriver_MCU/SSI/SSI.h>
#include <xDriver_MCU/SSI/Peripheral/SSI_Peripheral.h>
#include <xDriver_MCU/GPIO/GPIO.h>
#include <xDriver_MCU/DMA/DMA.h>

#include <xUtils/Colors/Colors.h>
#include <xUtils/Font/Font.h>

UBase_t uxStX=0UL;
UBase_t uxStY=0UL;
uint16_t u16StTextColor = (uint16_t) COLORS_enYELLOW;

static uint8_t ST7735_u8ColStart = 0U;
static uint8_t ST7735_u8RowStart = 0U;
static UBase_t ST7735_uxWidthArg = ST7735_WIDTH;
static UBase_t ST7735_uxHeightArg = ST7735_HEIGHT;

void ST7735__vSetCursor(UBase_t uxNewX, UBase_t uxNewY);
void ST7735__vSetAddrWindow(UBase_t uxCoordX0, UBase_t uxCoordY0, UBase_t uxCoordX1, UBase_t uxCoordY1);

error_t ST7735__enInit(const uint8_t *pu8CommandList)
{
    error_t enErrorReg;
    const SSI_CONTROL_t pstControlConfigReg =
    {
        SSI_enLOOPBACK_DIS,
        SSI_enEOT_FIFO,
        SSI_enDIRECTION_TX,
        SSI_enMODE_LEGACY,
        SSI_enFSSHOLD_DIS,
        {SSI_enLINE_ENA},
        {SSI_enLINE_DIS},
        SSI_enLINE_DIS,
        SSI_enLINE_DIS,
        SSI_enLINE_ENA,
        SSI_enLINE_DIS
    };

    SSI_FRAME_CONTROL_t pstFrameControlConfigReg =
    {
        SSI_enFORMAT_FREESCALE,
        SSI_enCLOCK_PHASE_FIRST,
        SSI_enCLOCK_POLARITY_LOW,
        SSI_enLENGTH_8BITS,
    };
    const SSI_LINE_t pstLineConfigReg =
    {
        {SSI_enLINE_SELECT_PRIMARY},
        {SSI_enLINE_SELECT_PRIMARY},
        SSI_enLINE_SELECT_PRIMARY,
        SSI_enLINE_SELECT_PRIMARY,
        SSI_enLINE_SELECT_PRIMARY,
        SSI_enLINE_SELECT_PRIMARY
    };

    enErrorReg = ST7735__enInitWriteDMAConfig();
    if(ERROR_OK == enErrorReg)
    {
        enErrorReg = ST7735__enInitChipSelect();
    }
    if(ERROR_OK == enErrorReg)
    {
        enErrorReg = ST7735__enInitReset();
    }
    if(ERROR_OK == enErrorReg)
    {
        enErrorReg = ST7735__enInitDataCommand();
    }

    if(ERROR_OK == enErrorReg)
    {
        SSI__vSetEnable(ST7735_SSI, SSI_enENABLE_STOP);
        SSI__vSetClockConfig(ST7735_SSI, SSI_enCLOCK_SYSCLK);
        SSI__enSetConfig(ST7735_SSI, SSI_enMS_MASTER, &pstControlConfigReg, &pstFrameControlConfigReg, 28000000UL, &pstLineConfigReg);
        SSI__vSetEnable(ST7735_SSI, SSI_enENABLE_START);
        SSI__vSetHighSpeed(ST7735_SSI, SSI_enHIGHSPEED_ENA);

        SSI__vSetDMATx(ST7735_SSI, SSI_enDMA_DIS);
        SSI__vDisInterruptSource(ST7735_SSI, (SSI_nINT_SOURCE) (SSI_enINT_SOURCE_TRANSMIT_DMA));
        SSI__vClearInterruptSource(ST7735_SSI, (SSI_nINT_SOURCE) (SSI_enINT_SOURCE_TRANSMIT_DMA));
        SSI__vDisInterruptSource(ST7735_SSI, (SSI_nINT_SOURCE) (SSI_enINT_SOURCE_END_OF_TRANSMIT));
        SSI__vClearInterruptSource(ST7735_SSI, (SSI_nINT_SOURCE) (SSI_enINT_SOURCE_END_OF_TRANSMIT));
        SSI__vEnInterruptVector(ST7735_SSI, (SSI_nPRIORITY) NVIC_enVECTOR_PRI_SSI2);
        enErrorReg = ST7735__enEnableChipSelect();
    }
    if(ERROR_OK == enErrorReg)
    {
        enErrorReg = ST7735__enClearReset();
    }
    if(ERROR_OK == enErrorReg)
    {
        ST7735__vDelay1ms(10UL);
        enErrorReg = ST7735__enSetReset();
    }
    if(ERROR_OK == enErrorReg)
    {
        ST7735__vDelay1ms(10UL);
        enErrorReg = ST7735__enClearReset();
    }
    if(ERROR_OK == enErrorReg)
    {
        ST7735__vDelay1ms(5UL);
        enErrorReg = ST7735__enDisableChipSelect();
    }

    if(ERROR_OK == enErrorReg)
    {
        if(0UL != (uintptr_t) pu8CommandList)
        {
            ST7735__vCommandList(pu8CommandList);
        }
    }
    return (enErrorReg);
}

error_t ST7735__enInitRModel(ST7735_nINITFLAGS enOptionArg)
{
    error_t enErrorReg;
    enErrorReg = ST7735__enInit(ST7735_pcCommandSet1);
    if(ERROR_OK == enErrorReg)
    {
        if(ST7735_enINITFLAGS_GREEN == enOptionArg)
        {
            ST7735__vCommandList(ST7735_pcCommandSet2_Green);
            ST7735_u8ColStart = 2U;
            ST7735_u8RowStart = 3U;
        }
        else
        {
            ST7735__vCommandList(ST7735_pcCommandSet2_Red);
        }
    }
    if(ERROR_OK == enErrorReg)
    {
        ST7735__vCommandList(ST7735_pcCommandSet3);
    }

    if(ERROR_OK == enErrorReg)
    {
        if (ST7735_enINITFLAGS_BLACK == enOptionArg)
        {
            enErrorReg = ST7735__enWriteCommand(ST7735_enCOMMAND_MADCTL);
            if(ERROR_OK == enErrorReg)
            {
                enErrorReg = ST7735__enWriteData(0xC0UL);
            }
        }
    }
    ST7735__vSetCursor(0UL,0UL);
    u16StTextColor = (uint16_t) COLORS_enYELLOW;
    ST7735__vFillRect(0UL, 0UL, ST7735_uxWidthArg, ST7735_uxHeightArg, COLORS_enRED);
    return (enErrorReg);
}

void ST7735__vSetCursor(UBase_t uxNewX, UBase_t uxNewY)
{
  if((uxNewX <= 20UL) && (uxNewY <= 12UL))
  {
      uxStX = uxNewX;
      uxStY = uxNewY;
  }
}

void ST7735__vDrawBuffer(UBase_t uxXCoord, UBase_t uxYCoord, UBase_t uxWidthArg, UBase_t uxHeightArg, uint16_t* u16Buffer)
{
    UBase_t uxXCoordEnd = 0UL;
    UBase_t uxYCoordEnd = 0UL;
    UBase_t uxTotalDim = 0UL;
    /* rudimentary clipping (drawChar w/big text requires this)*/
    if((uxXCoord < ST7735_uxWidthArg) && (uxYCoord < ST7735_uxHeightArg))
    {
        if((0UL != uxWidthArg) && (0UL != uxHeightArg))
        {
            uxXCoordEnd = uxXCoord;
            uxXCoordEnd += uxWidthArg;
            uxXCoordEnd -= 1UL;
            if(uxXCoordEnd >= ST7735_uxWidthArg)
            {
                uxWidthArg = ST7735_uxWidthArg;
                uxWidthArg -= uxXCoord;
                uxXCoordEnd = uxXCoord;
                uxXCoordEnd += uxWidthArg;
                uxXCoordEnd -= 1UL;
            }

            uxYCoordEnd = uxYCoord;
            uxYCoordEnd += uxHeightArg;
            uxYCoordEnd -= 1UL;
            if(uxYCoordEnd >= ST7735_uxHeightArg)
            {
                uxHeightArg = ST7735_uxHeightArg;
                uxHeightArg -= uxYCoord;
                uxYCoordEnd = uxYCoord;
                uxYCoordEnd += uxHeightArg;
                uxYCoordEnd -= 1UL;
            }
            ST7735__vSetAddrWindow(uxXCoord, uxYCoord, uxXCoordEnd, uxYCoordEnd);


            uxTotalDim = uxHeightArg;
            uxTotalDim *= uxWidthArg;
            ST7735__enWriteBuffer16bDMA(u16Buffer, uxTotalDim);
        }
    }
}

void ST7735__vFillRect(UBase_t uxXCoord, UBase_t uxYCoord, UBase_t uxWidthArg, UBase_t uxHeightArg, UBase_t uxColor)
{
    UBase_t uxXCoordEnd = 0UL;
    UBase_t uxYCoordEnd = 0UL;
    UBase_t uxTotalDim = 0UL;
    /* rudimentary clipping (drawChar w/big text requires this)*/
    if((uxXCoord < ST7735_uxWidthArg) && (uxYCoord < ST7735_uxHeightArg))
    {
        if((0UL != uxWidthArg) && (0UL != uxHeightArg))
        {
            uxXCoordEnd = uxXCoord;
            uxXCoordEnd += uxWidthArg;
            uxXCoordEnd -= 1UL;
            if(uxXCoordEnd >= ST7735_uxWidthArg)
            {
                uxWidthArg = ST7735_uxWidthArg;
                uxWidthArg -= uxXCoord;
                uxXCoordEnd = uxXCoord;
                uxXCoordEnd += uxWidthArg;
                uxXCoordEnd -= 1UL;
            }

            uxYCoordEnd = uxYCoord;
            uxYCoordEnd += uxHeightArg;
            uxYCoordEnd -= 1UL;
            if(uxYCoordEnd >= ST7735_uxHeightArg)
            {
                uxHeightArg = ST7735_uxHeightArg;
                uxHeightArg -= uxYCoord;
                uxYCoordEnd = uxYCoord;
                uxYCoordEnd += uxHeightArg;
                uxYCoordEnd -= 1UL;
            }
            ST7735__vSetAddrWindow(uxXCoord, uxYCoord, uxXCoordEnd, uxYCoordEnd);

            uxTotalDim = uxHeightArg;
            uxTotalDim *= uxWidthArg;
            ST7735__enWriteDMA(uxColor, uxTotalDim);
        }
    }
}

void ST7735__vSetAddrWindow(UBase_t uxCoordX0, UBase_t uxCoordY0, UBase_t uxCoordX1, UBase_t uxCoordY1)
{
    UBase_t uxCoordX0Offset = uxCoordX0;
    UBase_t uxCoordX1Offset = uxCoordX1;
    UBase_t uxCoordY0Offset = uxCoordY0;
    UBase_t uxCoordY1Offset = uxCoordY1;
    uxCoordX0Offset += ST7735_u8ColStart;
    uxCoordX1Offset += ST7735_u8ColStart;
    uxCoordY0Offset += ST7735_u8RowStart;
    uxCoordY1Offset += ST7735_u8RowStart;
    ST7735__enWriteCommand(ST7735_enCOMMAND_CASET);
    ST7735__enWriteData(0x00UL);
    ST7735__enWriteData(uxCoordX0Offset);
    ST7735__enWriteData(0x00UL);
    ST7735__enWriteData(uxCoordX1Offset);

    ST7735__enWriteCommand(ST7735_enCOMMAND_RASET);
    ST7735__enWriteData(0x00UL);
    ST7735__enWriteData(uxCoordY0Offset);
    ST7735__enWriteData(0x00UL);
    ST7735__enWriteData(uxCoordY1Offset);

    ST7735__enWriteCommand(ST7735_enCOMMAND_RAMWR);
}


void ST7735__vBufferChar(uint16_t* pu16Buffer, UBase_t uxCoordX0, UBase_t uxCoordY0, char cASCII, uint16_t u16Color, FONT_t* sFontType)
{
  uint16_t u16Row = 0, u16Column = 0, u16ValueReg;
  UBase_t uxIndexReg;
  UBase_t  uxAddressX = uxCoordX0, uxPosY =0;

  const uint16_t* restrict character;

  if((uxCoordY0+sFontType->uxHeight)>ST7735_uxHeightArg)
      return;

  if((uxCoordX0+sFontType->uxWidth)>ST7735_uxWidthArg)
      return;

  uxIndexReg = (UBase_t) cASCII;
  uxIndexReg -= (UBase_t) ' ';
  uxIndexReg *= sFontType->uxHeight;
  character=(const uint16_t*)(&(sFontType->pu16Ascii[uxIndexReg]));

  uxPosY = uxCoordY0;
  uxPosY *= ST7735_uxWidthArg;
  uxPosY *= 2UL;

  if(sFontType->uxWidth == 11UL)
  {
      uxIndexReg = (UBase_t) cASCII;
      uxIndexReg -= (UBase_t) 0x20UL;
      uxIndexReg *= sFontType->uxWidth;
      character=(const uint16_t*)(&(sFontType->pu16Ascii[uxIndexReg]));
      uxPosY = uxCoordY0;
      for(u16Row = 0U; u16Row < sFontType->uxHeight; u16Row++)
      {
            for(u16Column = 0U; u16Column < sFontType->uxWidth; u16Column++)
            {
                u16ValueReg = (uint16_t) character[u16Column];
                u16ValueReg >>= u16Row;
                if(1U & u16ValueReg)
                {
                    uxIndexReg = uxPosY;
                    uxIndexReg *= ST7735_uxWidthArg;
                    uxIndexReg += uxAddressX;
                    uxIndexReg *= 2UL;
                    *(uint16_t*) ((UBase_t) pu16Buffer + uxIndexReg) = u16Color;
                }
                uxAddressX++;
            }
        uxAddressX =  uxCoordX0;
        uxPosY++;
      }
  }
  else if (sFontType->uxWidth == 7U)
  {
      for(u16Row = 0U; u16Row < sFontType->uxWidth; u16Row++)
      {
            for(u16Column = 0U; u16Column < sFontType->uxHeight; u16Column++)
            {
                u16ValueReg = (uint16_t) (character[u16Column]);
                u16ValueReg >>= u16Row;
                if(1U & u16ValueReg)
                {
                    uxIndexReg = uxAddressX;
                    uxIndexReg *= 2U;
                    uxIndexReg += uxPosY;
                    *(uint16_t*) ((UBase_t) pu16Buffer + uxIndexReg ) = u16Color;
                }
                uxAddressX++;
            }
        uxAddressX += (ST7735_uxWidthArg - sFontType->uxHeight);
      }
  }
  else
    for(u16Row = 0U; u16Row < sFontType->uxHeight; u16Row++)
    {
        if(sFontType->uxHeight == 24U)
            for(u16Column = 0U; u16Column < sFontType->uxWidth;u16Column++)
            {
                u16ValueReg = (uint16_t) (character[(UBase_t) u16Row]);
                u16ValueReg >>= u16Column;
                if(1U & u16ValueReg)
                {
                    uxIndexReg = uxAddressX;
                    uxIndexReg *= 2U;
                    uxIndexReg += uxPosY;
                    *( uint16_t*) ((UBase_t) pu16Buffer + uxIndexReg) = u16Color;
                }
                uxAddressX++;
            }
        else
            for(u16Column = (uint16_t) (sFontType->uxBits); u16Column >(uint16_t) ((UBase_t) sFontType->uxBits - (UBase_t) sFontType->uxWidth); u16Column--)
            {
                u16ValueReg = (uint16_t) (character[(UBase_t) u16Row]);
                u16ValueReg >>= (u16Column - 1U);
                if(1U & u16ValueReg)
                {
                    uxIndexReg = uxAddressX;
                    uxIndexReg *= 2U;
                    uxIndexReg += uxPosY;
                    *(uint16_t*) ((UBase_t) pu16Buffer + uxIndexReg) = u16Color;
                }
                uxAddressX++;
            }
        uxAddressX += (ST7735_uxWidthArg - sFontType->uxWidth);
    }
}


void ST7735__vBufferString(uint16_t* pu16Buffer, UBase_t uxCoordX0, UBase_t uxCoordY0, char* cASCII, uint16_t u16Color, FONT_t* sFontType)
{
    UBase_t uxCoordX = uxCoordX0;
    UBase_t uxCoordY = uxCoordY0;
    while(0UL != (uint8_t) (*cASCII))
    {
        if((uint8_t) '\n' == (uint8_t) (*cASCII))
        {
            uxCoordY += sFontType->uxHeight;
            uxCoordY += 2UL;
        }
        else if((uint8_t) '\r' == (uint8_t) (*cASCII))
        {
            uxCoordX = uxCoordX0;
        }
        else
        {
            if((uxCoordX + sFontType->uxWidth) > ST7735_uxWidthArg)
            {
                uxCoordY += sFontType->uxHeight;
                uxCoordY += 2UL;
                uxCoordX = uxCoordX0;
            }
            ST7735__vBufferChar(pu16Buffer, uxCoordX, uxCoordY, *cASCII, u16Color, sFontType);
            uxCoordX += sFontType->uxWidth;
        }
        cASCII += 1U;
    }
}
