/**
 *
 * @file xTask1_MAX7219.c
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
 * @verbatim 19 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 19 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xApplication/EDUMKII/EDUMKII.h>
#include <xApplication_MCU/xApplication_MCU.h>
#include <xUtils/Font/Font.h>

#include <xOS/xOS.h>
#include <xTask/xHeader/xTask1_MAX7219.h>

void MAX7219__vEnableChipSelect(void);
void MAX7219__vDisableChipSelect(void);

void MAX7219__vInit(SSI_nMODULE enSpiModule, uint32_t u32MaxDevices);
void MAX7219__vInitChipSelect(GPIO_nDIGITAL_FUNCTION enDigitalPin);
void MAX7219__vCleanScreen(void);

char* pcStringPrint = "Hey You Lalo !!!";
uint32_t MAX7219_u32MaxDevices = 0UL;
SSI_nMODULE MAX7219_enModule = SSI_enMODULE_0;
GPIO_nPORT MAX7219_enPort = GPIO_enPORT_A;
GPIO_nPIN MAX7219_enPin = GPIO_enPIN_0;

void xTask1_MAX7219(void* pvParams)
{
    uint32_t u32Data = (uint32_t) pvParams;
    uint32_t u32LastWakeTime = 0UL;

    MAX7219__vInit(SSI_enMODULE_0, 16UL);
    MAX7219__vCleanScreen();


    while(1UL)
    {
        #define MAX_DEVICES (16UL)
        for(uint32_t u32Devices = 0UL; u32Devices < MAX_DEVICES; u32Devices++)
        {
            uint32_t u32Index = pcStringPrint[u32Devices];
            u32Index -= ' ';
            u32Index *= 8UL;
            for(uint32_t u32Row = 1UL; u32Row <= 8UL; u32Row++)
            {
                uint32_t u32Value = 0UL;
                u32Value = FONT_u16_8x8[u32Index];
                u32Data = u32Row;
                u32Data <<= 8UL;
                u32Data |= u32Value;
                MAX7219__vEnableChipSelect();
                for(uint32_t u32Nop = 0UL; u32Nop < u32Devices ; u32Nop++)
                {
                    SSI__u32SetData(MAX7219_enModule, 0UL);
                }
                SSI__u32SetData(MAX7219_enModule, u32Data);
                for(uint32_t u32Nop = u32Devices + 1UL; u32Nop < (MAX_DEVICES) ; u32Nop++)
                {
                    SSI__u32SetData(MAX7219_enModule, 0UL);
                }
                MAX7219__vDisableChipSelect();
                u32Index++;
            }
        }

        OS_Task__vSuspendAll();

        GraphTerm__u32Printf(UART_enMODULE_0, 0UL, 3UL,
                             "Data Send: %u \n\r",u32Data
                             );
        OS_Task__boResumeAll();
        OS_Task__vDelayUntil(&u32LastWakeTime, 100UL);
    }
}


void MAX7219__vInitChipSelect(GPIO_nDIGITAL_FUNCTION enDigitalPin)
{
    uint32_t u32AuxValue = (uint32_t) enDigitalPin;
    uint32_t u32AuxPort = 0UL;
    uint32_t u32AuxPin = 1UL;
    GPIO__enSetDigitalConfig(enDigitalPin, GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);
    u32AuxPort = (u32AuxValue >> 16UL);
    u32AuxPort &= 0xFFUL;
    MAX7219_enPort = (GPIO_nPORT) u32AuxPort;
    u32AuxValue >>= 8UL;
    u32AuxValue &= 0xFFUL;
    u32AuxPin <<= u32AuxValue;
    MAX7219_enPin = (GPIO_nPIN) (u32AuxPin);
}

void MAX7219__vEnableChipSelect(void)
{
    GPIO__vSetData(MAX7219_enPort, MAX7219_enPin, 0UL);
}

void MAX7219__vDisableChipSelect(void)
{
    GPIO__vSetData(MAX7219_enPort, MAX7219_enPin, MAX7219_enPin);
}


void MAX7219__vInit(SSI_nMODULE enSpiModule, uint32_t u32MaxDevices)
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
        SSI_enLENGTH_16BITS
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
    MAX7219_u32MaxDevices = u32MaxDevices;
    SSI_nMODULE MAX7219_enModule = enSpiModule;
    MAX7219__vInitChipSelect(GPIO_enGPIOP3);
    MAX7219__vDisableChipSelect();

    SSI__vSetEnable(MAX7219_enModule, SSI_enENABLE_STOP);
    SSI__vSetClockConfig(MAX7219_enModule, SSI_enCLOCK_SYSCLK);
    SSI__enSetConfig(MAX7219_enModule, SSI_enMS_MASTER, &pstControlConfigReg, &pstFrameControlConfigReg, 10000000UL, &pstLineConfigReg);
    SSI__vSetEnable(MAX7219_enModule, SSI_enENABLE_START);
    SSI__vSetHighSpeed(MAX7219_enModule, SSI_enHIGHSPEED_ENA);


    for (uint32_t u32Iter = 0UL; u32Iter < MAX7219_u32MaxDevices; u32Iter++)
    {
        MAX7219__vEnableChipSelect();
        SSI__u32SetData(MAX7219_enModule, 0x0C00UL | 0UL );
        MAX7219__vDisableChipSelect();
    }
    /*Init Module*/
    for (uint32_t u32Iter = 0UL; u32Iter < MAX7219_u32MaxDevices; u32Iter++)
    {
        MAX7219__vEnableChipSelect();
        SSI__u32SetData(MAX7219_enModule, 0x0900UL | 0UL );
        SSI__u32SetData(MAX7219_enModule, 0x0A00UL | 0UL );
        SSI__u32SetData(MAX7219_enModule, 0x0B00UL | 7UL );
        SSI__u32SetData(MAX7219_enModule, 0x0F00UL | 0UL );
        SSI__u32SetData(MAX7219_enModule, 0x0C00UL | 1UL );
        MAX7219__vDisableChipSelect();
        OS_Task__vDelay(1UL);
    }

}

void MAX7219__vCleanScreen(void)
{
    for(uint32_t u32Devices = 0; u32Devices < MAX7219_u32MaxDevices; u32Devices++)
    {
        for(uint32_t u32Row = 1UL; u32Row <= 8UL; u32Row++)
        {
            MAX7219__vEnableChipSelect();
            SSI__u32SetData(MAX7219_enModule, (u32Row<<8UL) | 0UL );
            MAX7219__vDisableChipSelect();

        }
    }
}


void MAX7219__vWriteScreen(void)
{

    uint32_t u32Data = 0UL;
#define MAX_DEVICES (4UL)
for(uint32_t u32Devices = 0UL; u32Devices < MAX_DEVICES; u32Devices++)
{
    uint32_t u32Index = pcStringPrint[u32Devices];
    u32Index -= ' ';
    u32Index *= 8UL;
    for(uint32_t u32Row = 1UL; u32Row <= 8UL; u32Row++)
    {
        uint32_t u32Value = 0UL;
        u32Value = FONT_u16_8x8[u32Index];
        u32Data = u32Row;
        u32Data <<= 8UL;
        u32Data |= u32Value;
        MAX7219__vEnableChipSelect();
        for(uint32_t u32Nop = 0UL; u32Nop < u32Devices ; u32Nop++)
        {
            SSI__u32SetData(MAX7219_enModule, 0UL);
        }
        SSI__u32SetData(MAX7219_enModule, u32Data);
        for(uint32_t u32Nop = 0UL; u32Nop < (MAX_DEVICES - 1UL) - u32Devices ; u32Nop++)
        {
            SSI__u32SetData(MAX7219_enModule, 0UL);
        }
        MAX7219__vDisableChipSelect();
        u32Index++;
    }
}
}

