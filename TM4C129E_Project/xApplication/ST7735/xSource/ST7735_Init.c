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

uint32_t u32StX=0UL;
uint32_t u32StY=0UL;
uint16_t u16StTextColor = (uint16_t) COLORS_enYELLOW;

static uint8_t ST7735_u8ColStart = 0U;
static uint8_t ST7735_u8RowStart = 0U;
static uint32_t ST7735_u32WidthArg = ST7735_WIDTH;
static uint32_t ST7735_u32HeightArg = ST7735_HEIGHT;

void ST7735__vSetCursor(uint32_t u32NewX, uint32_t u32NewY);
void ST7735__vSetAddrWindow(uint32_t u32CoordX0, uint32_t u32CoordY0, uint32_t u32CoordX1, uint32_t u32CoordY1);

void ST7735__vInit(const uint8_t *pu8CommandList)
{
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

    ST7735__vInitWriteDMAConfig();

    ST7735__vInitChipSelect();
    ST7735__vInitReset();
    ST7735__vInitDataCommand();

    SSI__vSetEnable(ST7735_SSI, SSI_enENABLE_STOP);
    SSI__vSetClockConfig(ST7735_SSI, SSI_enCLOCK_SYSCLK);
    SSI__enSetConfig(ST7735_SSI, SSI_enMS_MASTER, &pstControlConfigReg, &pstFrameControlConfigReg, 25000000UL, &pstLineConfigReg);
    SSI__vSetEnable(ST7735_SSI, SSI_enENABLE_START);
    SSI__vSetHighSpeed(ST7735_SSI, SSI_enHIGHSPEED_ENA);

    SSI__vSetDMATx(ST7735_SSI, SSI_enDMA_DIS);
    SSI__vEnInterruptSource(ST7735_SSI, (SSI_nINT_SOURCE) (SSI_enINT_SOURCE_TRANSMIT_DMA));
    SSI__vClearInterruptSource(ST7735_SSI, (SSI_nINT_SOURCE) (SSI_enINT_SOURCE_TRANSMIT_DMA));
    SSI__vEnInterruptVector(ST7735_SSI, (SSI_nPRIORITY) NVIC_enPriority_SSI2);
    ST7735__vEnableChipSelect();
    ST7735__vClearReset();
    ST7735__vDelay1ms(10UL);
    ST7735__vSetReset();
    ST7735__vDelay1ms(10UL);
    ST7735__vClearReset();
    ST7735__vDelay1ms(5UL);
    ST7735__vDisableChipSelect();

  if(0UL != (uint32_t) pu8CommandList)
  {
      ST7735__vCommandList(pu8CommandList);
  }
}

void ST7735__vInitRModel(ST7735_nINITFLAGS enOptionArg) {
    ST7735__vInit(ST7735_pcCommandSet1);
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
    ST7735__vCommandList(ST7735_pcCommandSet3);

    if (ST7735_enINITFLAGS_BLACK == enOptionArg)
    {
        ST7735__u32WriteCommand(ST7735_enCOMMAND_MADCTL);
        ST7735__u32WriteData(0xC0UL);
    }
    ST7735__vSetCursor(0UL,0UL);
    u16StTextColor = (uint16_t) COLORS_enYELLOW;
    ST7735__vFillRect(0UL, 0UL, ST7735_u32WidthArg, ST7735_u32HeightArg, COLORS_enBLACK);
}

void ST7735__vSetCursor(uint32_t u32NewX, uint32_t u32NewY)
{
  if((u32NewX <= 20UL) && (u32NewY <= 12UL))
  {
      u32StX = u32NewX;
      u32StY = u32NewY;
  }
}

void ST7735__vDrawBuffer(uint32_t u32XCoord, uint32_t u32YCoord, uint32_t u32WidthArg, uint32_t u32HeightArg, uint16_t* u16Buffer)
{
    uint32_t u32XCoordEnd = 0UL;
    uint32_t u32YCoordEnd = 0UL;
    uint32_t u32TotalDim = 0UL;
    /* rudimentary clipping (drawChar w/big text requires this)*/
    if((u32XCoord < ST7735_u32WidthArg) && (u32YCoord < ST7735_u32HeightArg))
    {
        if((0UL != u32WidthArg) && (0UL != u32HeightArg))
        {
            u32XCoordEnd = u32XCoord;
            u32XCoordEnd += u32WidthArg;
            u32XCoordEnd -= 1UL;
            if(u32XCoordEnd >= ST7735_u32WidthArg)
            {
                u32WidthArg = ST7735_u32WidthArg;
                u32WidthArg -= u32XCoord;
                u32XCoordEnd = u32XCoord;
                u32XCoordEnd += u32WidthArg;
                u32XCoordEnd -= 1UL;
            }

            u32YCoordEnd = u32YCoord;
            u32YCoordEnd += u32HeightArg;
            u32YCoordEnd -= 1UL;
            if(u32YCoordEnd >= ST7735_u32HeightArg)
            {
                u32HeightArg = ST7735_u32HeightArg;
                u32HeightArg -= u32YCoord;
                u32YCoordEnd = u32YCoord;
                u32YCoordEnd += u32HeightArg;
                u32YCoordEnd -= 1UL;
            }
            ST7735__vSetAddrWindow(u32XCoord, u32YCoord, u32XCoordEnd, u32YCoordEnd);

            SSI__vSetEnable(ST7735_SSI, SSI_enENABLE_STOP);
            SSI__vSetDataLength(ST7735_SSI, SSI_enLENGTH_16BITS);
            SSI__vSetEnable(ST7735_SSI, SSI_enENABLE_START);

            u32TotalDim = u32HeightArg;
            u32TotalDim *= u32WidthArg;
            ST7735__u32WriteBuffer16bDMA(u16Buffer, u32TotalDim);

            SSI__vSetEnable(ST7735_SSI, SSI_enENABLE_STOP);
            SSI__vSetDataLength(ST7735_SSI, SSI_enLENGTH_8BITS);
            SSI__vSetEnable(ST7735_SSI, SSI_enENABLE_START);
        }
    }
}

void ST7735__vFillRect(uint32_t u32XCoord, uint32_t u32YCoord, uint32_t u32WidthArg, uint32_t u32HeightArg, uint32_t u32Color)
{
    uint32_t u32XCoordEnd = 0UL;
    uint32_t u32YCoordEnd = 0UL;
    uint32_t u32TotalDim = 0UL;
    /* rudimentary clipping (drawChar w/big text requires this)*/
    if((u32XCoord < ST7735_u32WidthArg) && (u32YCoord < ST7735_u32HeightArg))
    {
        if((0UL != u32WidthArg) && (0UL != u32HeightArg))
        {
            u32XCoordEnd = u32XCoord;
            u32XCoordEnd += u32WidthArg;
            u32XCoordEnd -= 1UL;
            if(u32XCoordEnd >= ST7735_u32WidthArg)
            {
                u32WidthArg = ST7735_u32WidthArg;
                u32WidthArg -= u32XCoord;
                u32XCoordEnd = u32XCoord;
                u32XCoordEnd += u32WidthArg;
                u32XCoordEnd -= 1UL;
            }

            u32YCoordEnd = u32YCoord;
            u32YCoordEnd += u32HeightArg;
            u32YCoordEnd -= 1UL;
            if(u32YCoordEnd >= ST7735_u32HeightArg)
            {
                u32HeightArg = ST7735_u32HeightArg;
                u32HeightArg -= u32YCoord;
                u32YCoordEnd = u32YCoord;
                u32YCoordEnd += u32HeightArg;
                u32YCoordEnd -= 1UL;
            }
            ST7735__vSetAddrWindow(u32XCoord, u32YCoord, u32XCoordEnd, u32YCoordEnd);

            SSI__vSetEnable(ST7735_SSI, SSI_enENABLE_STOP);
            SSI__vSetDataLength(ST7735_SSI, SSI_enLENGTH_16BITS);
            SSI__vSetEnable(ST7735_SSI, SSI_enENABLE_START);

            u32TotalDim = u32HeightArg;
            u32TotalDim *= u32WidthArg;
            ST7735__u32WriteDMA(u32Color, u32TotalDim);

            SSI__vSetEnable(ST7735_SSI, SSI_enENABLE_STOP);
            SSI__vSetDataLength(ST7735_SSI, SSI_enLENGTH_8BITS);
            SSI__vSetEnable(ST7735_SSI, SSI_enENABLE_START);
        }
    }
}

void ST7735__vSetAddrWindow(uint32_t u32CoordX0, uint32_t u32CoordY0, uint32_t u32CoordX1, uint32_t u32CoordY1)
{
    uint32_t u32CoordX0Offset = u32CoordX0;
    uint32_t u32CoordX1Offset = u32CoordX1;
    uint32_t u32CoordY0Offset = u32CoordY0;
    uint32_t u32CoordY1Offset = u32CoordY1;
    u32CoordX0Offset += ST7735_u8ColStart;
    u32CoordX1Offset += ST7735_u8ColStart;
    u32CoordY0Offset += ST7735_u8RowStart;
    u32CoordY1Offset += ST7735_u8RowStart;
    ST7735__u32WriteCommand(ST7735_enCOMMAND_CASET);
    ST7735__u32WriteData(0x00UL);
    ST7735__u32WriteData(u32CoordX0Offset);
    ST7735__u32WriteData(0x00UL);
    ST7735__u32WriteData(u32CoordX1Offset);

    ST7735__u32WriteCommand(ST7735_enCOMMAND_RASET);
    ST7735__u32WriteData(0x00UL);
    ST7735__u32WriteData(u32CoordY0Offset);
    ST7735__u32WriteData(0x00UL);
    ST7735__u32WriteData(u32CoordY1Offset);

    ST7735__u32WriteCommand(ST7735_enCOMMAND_RAMWR);
}


void ST7735__vBufferChar(uint16_t* pu16Buffer, uint32_t u32CoordX0, uint32_t u32CoordY0, char cASCII, uint16_t u16Color, FONT_t* sFontType)
{
  uint16_t u16Row = 0, u16Column = 0;
  uint32_t  u32AddressX = u32CoordX0, u32PosY =0;

  const uint16_t* restrict character;

  if((u32CoordY0+sFontType->u32Height)>ST7735_u32HeightArg)
      return;

  if((u32CoordX0+sFontType->u32Width)>ST7735_u32WidthArg)
      return;

  character=(const uint16_t*)(&sFontType->pu16Ascii[(cASCII-' ') * sFontType->u32Height]);

  u32PosY = u32CoordY0 * ST7735_u32WidthArg * 2UL;

  if(sFontType->u32Width == 11UL)
  {
      character=(const uint16_t*)(&sFontType->pu16Ascii[(cASCII - 0x20UL) * sFontType->u32Width]);
      u32PosY = u32CoordY0;
      for(u16Row = 0; u16Row < sFontType->u32Height; u16Row++)
      {
            for(u16Column = 0U; u16Column < sFontType->u32Width; u16Column++)
            {
                if((((character[u16Column] )>>(u16Row))&1) )
                    *(uint16_t*) ((uint32_t) pu16Buffer + (2*((u32PosY*ST7735_u32WidthArg) + u32AddressX ))) = u16Color;
                u32AddressX++;
            }
        u32AddressX =  u32CoordX0;
        u32PosY++;
      }
  }
  else if (sFontType->u32Width==7)
  {
      for(u16Row = 0; u16Row < sFontType->u32Width; u16Row++)
      {
            for(u16Column = 0; u16Column < sFontType->u32Height;u16Column++)
            {
                if((((character[u16Column] )>>(u16Row))&1) )
                    *(uint16_t*) ((uint32_t) pu16Buffer + (2U * u32AddressX) + u32PosY) = u16Color;
                u32AddressX++;
            }
        u32AddressX += (ST7735_u32WidthArg - sFontType->u32Height);
      }
  }
  else
    for(u16Row = 0; u16Row < sFontType->u32Height; u16Row++)
    {
        if(sFontType->u32Height==24)
            for(u16Column = 0; u16Column < sFontType->u32Width;u16Column++)
            {
                if((((character[u16Row] )>>(u16Column))&1) )
                    *( uint16_t*) ((uint32_t) pu16Buffer + (2*u32AddressX) + u32PosY) = u16Color;
                u32AddressX++;
            }
        else
            for(u16Column = sFontType->u32Bits; u16Column > (sFontType->u32Bits-sFontType->u32Width);u16Column--)
            {
                if((((character[u16Row] )>>(u16Column-1))&1) )
                    *(uint16_t*) ((uint32_t) pu16Buffer + (2*u32AddressX) + u32PosY) = u16Color;
                u32AddressX++;
            }
        u32AddressX += (ST7735_u32WidthArg - sFontType->u32Width);
    }
}


void ST7735__vBufferString(uint16_t* pu16Buffer, uint32_t u32CoordX0, uint32_t u32CoordY0, char* cASCII, uint16_t u16Color, FONT_t* sFontType)
{
    uint32_t u32CoordX = u32CoordX0;
    uint32_t u32CoordY = u32CoordY0;
    while(0UL != (uint32_t) (*cASCII))
    {
        if((uint32_t) '\n' == (uint32_t) (*cASCII))
        {
            u32CoordY += sFontType->u32Height + 2UL;
        }
        else if((uint32_t) '\r' == (uint32_t) (*cASCII))
        {
            u32CoordX = u32CoordX0;
        }
        else
        {
            if((u32CoordX + sFontType->u32Width) > ST7735_u32WidthArg)
            {
                u32CoordY += sFontType->u32Height + 2UL;
                u32CoordX = u32CoordX0;
            }
            ST7735__vBufferChar(pu16Buffer, u32CoordX, u32CoordY, *cASCII, u16Color, sFontType);
            u32CoordX += sFontType->u32Width;
        }
        cASCII++;
    }
}
