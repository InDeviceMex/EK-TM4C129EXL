/**
 *
 * @file xTask5_LedGreenLog.c
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
#include <xTask/xHeader/xTask5_LedGreenLog.h>

#include <xApplication_MCU/xApplication_MCU.h>
#include <xDriver_MCU/xDriver_MCU.h>

#include <xOS/xOS.h>

#define DATA_ENCRYPT_1 (0xFF2233ABUL)
#define DATA_ENCRYPT_2 (0x12345678UL)

void xTask5_LedGreenLog(void* pvParams)
{
    uint32_t u32DataEncript1 = 0UL;
    uint32_t u32DataEncript2 = 0UL;
    uint32_t u32DataDesencript1 = 0UL;
    uint32_t u32DataDesencript2 = 0UL;
    uint32_t u32LastWakeTime = 0UL;
    uint32_t u32PinValue = (uint32_t) pvParams;
    static uint32_t u32CountTask = 0UL;
    u32LastWakeTime = OS_Task__uxGetTickCount();
    GPIO__enSetDigitalConfig(GPIO_enGPIOF3, GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);

    /*Remove and replace by DES APIs*/
    SYSCTL__vEnRunModePeripheral(SYSCTL_enCCM);


    (*((volatile uint32_t*) (0x44038000UL + 0x34))) =  0x2UL;
    while(((*((volatile uint32_t*) (0x44038000UL + 0x38))) & 0x1UL) == 0UL);
    (*((volatile uint32_t*) (0x44038000UL + 0x34))) =  0x0UL;
    (*((volatile uint32_t*) (0x44038000UL + 0x20))) |=  0x4UL;

    (*((volatile uint32_t*) (0x44038000UL + 0x10))) =  0x05734905UL;
    (*((volatile uint32_t*) (0x44038000UL + 0x14))) =  0x78983427UL;

    (*((volatile uint32_t*) (0x44038000UL + 0x28))) =  DATA_ENCRYPT_1;
    (*((volatile uint32_t*) (0x44038000UL + 0x2C))) =  DATA_ENCRYPT_2;
    while(((*((volatile uint32_t*) (0x44038000UL + 0x20))) & 0x1UL) == 0UL);
    u32DataEncript1 = (*((volatile uint32_t*) (0x44038000UL + 0x28)));
    u32DataEncript2 = (*((volatile uint32_t*) (0x44038000UL + 0x2C)));


    (*((volatile uint32_t*) (0x44038000UL + 0x20))) &=  ~0x4UL;
    (*((volatile uint32_t*) (0x44038000UL + 0x28))) =  u32DataEncript1;
    (*((volatile uint32_t*) (0x44038000UL + 0x2C))) =  u32DataEncript2;
    while(((*((volatile uint32_t*) (0x44038000UL + 0x20))) & 0x1UL) == 0UL);
    u32DataDesencript1 = (*((volatile uint32_t*) (0x44038000UL + 0x28)));
    u32DataDesencript2 = (*((volatile uint32_t*) (0x44038000UL + 0x2C)));

    while((u32DataDesencript1 != DATA_ENCRYPT_1) || (u32DataDesencript2 != DATA_ENCRYPT_2));

    while(1UL)
    {
        GPIO__vSetData(GPIO_enPORT_F, GPIO_enPIN_3, u32PinValue);
        u32PinValue ^= GPIO_enPIN_3;
        OS_Task__vSuspendAll();
        if(0UL == u32PinValue)
        {
            GraphTerm__u32Printf(UART_enMODULE_0, 0UL, 0UL, "LED GREEN: ON  ");
        }
        else
        {
            GraphTerm__u32Printf(UART_enMODULE_0, 0UL, 0UL, "LED GREEN: OFF ");
        }
        OS_Task__boResumeAll();
        u32CountTask++;
        OS_Task__vDelayUntil(&u32LastWakeTime, 1000UL);
    }
}
