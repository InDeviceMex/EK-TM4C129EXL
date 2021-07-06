/**
 *
 * @file SYSCTL_DeInitClockGates.c
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
 * @verbatim 24 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 24 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/SYSCTL/App/xHeader/SYSCTL_DeInitClockGates.h>

#include <xDriver_MCU/SYSCTL/Driver/SYSCTL_Driver.h>
#include <xDriver_MCU/SYSCTL/Peripheral/SYSCTL_Peripheral.h>

void SYSCTL__vDeInitClockGates(void)
{
    SYSCTL__vResetPeripheral(SYSCTL_enWDT0);
    SYSCTL__vResetPeripheral(SYSCTL_enWDT1);
    SYSCTL__vDisRunModePeripheral(SYSCTL_enWDT0);
    SYSCTL__vDisRunModePeripheral(SYSCTL_enWDT1);

    SYSCTL__vResetPeripheral(SYSCTL_enTIMER0);
    SYSCTL__vResetPeripheral(SYSCTL_enTIMER1);
    SYSCTL__vResetPeripheral(SYSCTL_enTIMER2);
    SYSCTL__vResetPeripheral(SYSCTL_enTIMER3);
    SYSCTL__vResetPeripheral(SYSCTL_enTIMER4);
    SYSCTL__vResetPeripheral(SYSCTL_enTIMER5);
    SYSCTL__vResetPeripheral(SYSCTL_enTIMER6);
    SYSCTL__vResetPeripheral(SYSCTL_enTIMER7);
    SYSCTL__vDisRunModePeripheral(SYSCTL_enTIMER0);
    SYSCTL__vDisRunModePeripheral(SYSCTL_enTIMER1);
    SYSCTL__vDisRunModePeripheral(SYSCTL_enTIMER2);
    SYSCTL__vDisRunModePeripheral(SYSCTL_enTIMER3);
    SYSCTL__vDisRunModePeripheral(SYSCTL_enTIMER4);
    SYSCTL__vDisRunModePeripheral(SYSCTL_enTIMER5);
    SYSCTL__vDisRunModePeripheral(SYSCTL_enTIMER6);
    SYSCTL__vDisRunModePeripheral(SYSCTL_enTIMER7);


    SYSCTL__vResetPeripheral(SYSCTL_enGPIOA);
    SYSCTL__vResetPeripheral(SYSCTL_enGPIOB);
    SYSCTL__vResetPeripheral(SYSCTL_enGPIOC);
    SYSCTL__vResetPeripheral(SYSCTL_enGPIOD);
    SYSCTL__vResetPeripheral(SYSCTL_enGPIOE);
    SYSCTL__vResetPeripheral(SYSCTL_enGPIOF);
    SYSCTL__vResetPeripheral(SYSCTL_enGPIOG);
    SYSCTL__vResetPeripheral(SYSCTL_enGPIOH);
    SYSCTL__vResetPeripheral(SYSCTL_enGPIOJ);
    SYSCTL__vResetPeripheral(SYSCTL_enGPIOK);
    SYSCTL__vResetPeripheral(SYSCTL_enGPIOL);
    SYSCTL__vResetPeripheral(SYSCTL_enGPIOM);
    SYSCTL__vResetPeripheral(SYSCTL_enGPION);
    SYSCTL__vResetPeripheral(SYSCTL_enGPIOP);
    SYSCTL__vResetPeripheral(SYSCTL_enGPIOQ);
    SYSCTL__vDisRunModePeripheral(SYSCTL_enGPIOA);
    SYSCTL__vDisRunModePeripheral(SYSCTL_enGPIOB);
    SYSCTL__vDisRunModePeripheral(SYSCTL_enGPIOC);
    SYSCTL__vDisRunModePeripheral(SYSCTL_enGPIOD);
    SYSCTL__vDisRunModePeripheral(SYSCTL_enGPIOE);
    SYSCTL__vDisRunModePeripheral(SYSCTL_enGPIOF);
    SYSCTL__vDisRunModePeripheral(SYSCTL_enGPIOG);
    SYSCTL__vDisRunModePeripheral(SYSCTL_enGPIOH);
    SYSCTL__vDisRunModePeripheral(SYSCTL_enGPIOJ);
    SYSCTL__vDisRunModePeripheral(SYSCTL_enGPIOK);
    SYSCTL__vDisRunModePeripheral(SYSCTL_enGPIOL);
    SYSCTL__vDisRunModePeripheral(SYSCTL_enGPIOM);
    SYSCTL__vDisRunModePeripheral(SYSCTL_enGPION);
    SYSCTL__vDisRunModePeripheral(SYSCTL_enGPIOP);
    SYSCTL__vDisRunModePeripheral(SYSCTL_enGPIOQ);

    SYSCTL__vResetPeripheral(SYSCTL_enUDMA);
    SYSCTL__vDisRunModePeripheral(SYSCTL_enUDMA);

    SYSCTL__vResetPeripheral(SYSCTL_enEPI);
    SYSCTL__vDisRunModePeripheral(SYSCTL_enEPI);

    SYSCTL__vResetPeripheral(SYSCTL_enHIB);
    SYSCTL__vDisRunModePeripheral(SYSCTL_enHIB);

    SYSCTL__vResetPeripheral(SYSCTL_enUART0);
    SYSCTL__vResetPeripheral(SYSCTL_enUART1);
    SYSCTL__vResetPeripheral(SYSCTL_enUART2);
    SYSCTL__vResetPeripheral(SYSCTL_enUART3);
    SYSCTL__vResetPeripheral(SYSCTL_enUART4);
    SYSCTL__vResetPeripheral(SYSCTL_enUART5);
    SYSCTL__vResetPeripheral(SYSCTL_enUART6);
    SYSCTL__vResetPeripheral(SYSCTL_enUART7);
    SYSCTL__vDisRunModePeripheral(SYSCTL_enUART0);
    SYSCTL__vDisRunModePeripheral(SYSCTL_enUART1);
    SYSCTL__vDisRunModePeripheral(SYSCTL_enUART2);
    SYSCTL__vDisRunModePeripheral(SYSCTL_enUART3);
    SYSCTL__vDisRunModePeripheral(SYSCTL_enUART4);
    SYSCTL__vDisRunModePeripheral(SYSCTL_enUART5);
    SYSCTL__vDisRunModePeripheral(SYSCTL_enUART6);
    SYSCTL__vDisRunModePeripheral(SYSCTL_enUART7);

    SYSCTL__vResetPeripheral(SYSCTL_enSSI0);
    SYSCTL__vResetPeripheral(SYSCTL_enSSI1);
    SYSCTL__vResetPeripheral(SYSCTL_enSSI2);
    SYSCTL__vResetPeripheral(SYSCTL_enSSI3);
    SYSCTL__vDisRunModePeripheral(SYSCTL_enSSI0);
    SYSCTL__vDisRunModePeripheral(SYSCTL_enSSI1);
    SYSCTL__vDisRunModePeripheral(SYSCTL_enSSI2);
    SYSCTL__vDisRunModePeripheral(SYSCTL_enSSI3);

    SYSCTL__vResetPeripheral(SYSCTL_enI2C0);
    SYSCTL__vResetPeripheral(SYSCTL_enI2C1);
    SYSCTL__vResetPeripheral(SYSCTL_enI2C2);
    SYSCTL__vResetPeripheral(SYSCTL_enI2C3);
    SYSCTL__vResetPeripheral(SYSCTL_enI2C4);
    SYSCTL__vResetPeripheral(SYSCTL_enI2C5);
    SYSCTL__vResetPeripheral(SYSCTL_enI2C6);
    SYSCTL__vResetPeripheral(SYSCTL_enI2C7);
    SYSCTL__vResetPeripheral(SYSCTL_enI2C8);
    SYSCTL__vResetPeripheral(SYSCTL_enI2C9);
    SYSCTL__vDisRunModePeripheral(SYSCTL_enI2C0);
    SYSCTL__vDisRunModePeripheral(SYSCTL_enI2C1);
    SYSCTL__vDisRunModePeripheral(SYSCTL_enI2C2);
    SYSCTL__vDisRunModePeripheral(SYSCTL_enI2C3);
    SYSCTL__vDisRunModePeripheral(SYSCTL_enI2C4);
    SYSCTL__vDisRunModePeripheral(SYSCTL_enI2C5);
    SYSCTL__vDisRunModePeripheral(SYSCTL_enI2C6);
    SYSCTL__vDisRunModePeripheral(SYSCTL_enI2C7);
    SYSCTL__vDisRunModePeripheral(SYSCTL_enI2C8);
    SYSCTL__vDisRunModePeripheral(SYSCTL_enI2C9);

    SYSCTL__vResetPeripheral(SYSCTL_enUSB);
    SYSCTL__vDisRunModePeripheral(SYSCTL_enUSB);

    SYSCTL__vResetPeripheral(SYSCTL_enEPHY);
    SYSCTL__vDisRunModePeripheral(SYSCTL_enEPHY);

    SYSCTL__vResetPeripheral(SYSCTL_enCAN0);
    SYSCTL__vResetPeripheral(SYSCTL_enCAN1);
    SYSCTL__vDisRunModePeripheral(SYSCTL_enCAN0);
    SYSCTL__vDisRunModePeripheral(SYSCTL_enCAN1);

    SYSCTL__vResetPeripheral(SYSCTL_enADC0);
    SYSCTL__vResetPeripheral(SYSCTL_enADC1);
    SYSCTL__vDisRunModePeripheral(SYSCTL_enADC0);
    SYSCTL__vDisRunModePeripheral(SYSCTL_enADC1);

    SYSCTL__vResetPeripheral(SYSCTL_enACMP);
    SYSCTL__vDisRunModePeripheral(SYSCTL_enACMP);

    SYSCTL__vResetPeripheral(SYSCTL_enPWM0);
    SYSCTL__vDisRunModePeripheral(SYSCTL_enPWM0);

    SYSCTL__vResetPeripheral(SYSCTL_enQEI0);
    SYSCTL__vDisRunModePeripheral(SYSCTL_enQEI0);

    SYSCTL__vResetPeripheral(SYSCTL_enEEPROM);
    SYSCTL__vDisRunModePeripheral(SYSCTL_enEEPROM);

    SYSCTL__vResetPeripheral(SYSCTL_enWTIMER0);
    SYSCTL__vDisRunModePeripheral(SYSCTL_enWTIMER0);
}
