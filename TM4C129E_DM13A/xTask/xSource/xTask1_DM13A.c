/**
 *
 * @file xTask1_DM13A.c
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

#include <xOS/xOS.h>
#include <xTask/xHeader/xTask1_DM13A.h>

void DM13A__vInitChipSelect(void);
void DM13A__vEnableChipSelect(void);
void DM13A__vDisableChipSelect(void);

void xTask1_DM13A(void* pvParams)
{
    uint32_t u32Data = (uint32_t) pvParams;
    uint32_t u32Direction = 0UL;
    uint32_t u32LastWakeTime = 0UL;
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
        {SSI_enLINE_SELECT_ALT},
        {SSI_enLINE_SELECT_PRIMARY},
        SSI_enLINE_SELECT_PRIMARY,
        SSI_enLINE_SELECT_PRIMARY,
        SSI_enLINE_SELECT_ALT,
        SSI_enLINE_SELECT_PRIMARY
    };
    u32LastWakeTime = OS_Task__uxGetTickCount ();

    SSI__vSetEnable(SSI_enMODULE_3, SSI_enENABLE_STOP);
    SSI__vSetClockConfig(SSI_enMODULE_3, SSI_enCLOCK_SYSCLK);
    SSI__enSetConfig(SSI_enMODULE_3, SSI_enMS_MASTER, &pstControlConfigReg, &pstFrameControlConfigReg, 24000000UL, &pstLineConfigReg);
    SSI__vSetEnable(SSI_enMODULE_3, SSI_enENABLE_START);
    SSI__vSetHighSpeed(SSI_enMODULE_3, SSI_enHIGHSPEED_ENA);

    DM13A__vInitChipSelect();
    while(1UL)
    {
        SSI__u32SetData(SSI_enMODULE_3, (u32Data >> 16UL) & 0xFFFFUL);
        SSI__u32SetData(SSI_enMODULE_3, (u32Data >> 0UL) & 0xFFFFUL);

        switch (u32Direction)
        {
        case 0UL:
            u32Data <<= 1UL;
            u32Data |= 1UL;
            if(0x3FFFFFFFUL == u32Data)
            {
                u32Direction = 1UL;
            }
            break;
        case 1UL:
            u32Data <<= 1UL;
            if(0UL == u32Data)
            {
                u32Direction = 2UL;
            }
            break;
        case 2UL:
            u32Data >>= 1UL;
            u32Data |= 0x20000000UL;
            if(0x3FFFFFFFUL == u32Data)
            {
                u32Direction = 3UL;
            }
            break;
        case 3UL:
            u32Data >>= 1UL;
            if(0UL == u32Data)
            {
                u32Direction = 0UL;
            }
            break;
        default:
            break;
        }

        DM13A__vEnableChipSelect();
        DM13A__vDisableChipSelect();
        OS_Task__vSuspendAll();

        GraphTerm__u32Printf(UART_enMODULE_0, 0UL, 3UL,
                             "Data Send: %u \n\r",u32Data
                             );
        OS_Task__boResumeAll();
        OS_Task__vDelayUntil(&u32LastWakeTime, 100UL);
    }
}


void DM13A__vInitChipSelect(void)
{
    GPIO__enSetDigitalConfig(GPIO_enGPIOD5, GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);
}

void DM13A__vEnableChipSelect(void)
{
    GPIO__vSetData(GPIO_enPORT_D, GPIO_enPIN_5, GPIO_enPIN_5);
}

void DM13A__vDisableChipSelect(void)
{
    GPIO__vSetData(GPIO_enPORT_D, GPIO_enPIN_5, 0UL);
}
