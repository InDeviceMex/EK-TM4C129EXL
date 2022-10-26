/**
 *
 * @file SYSEXC_InterruptRoutine_Vector.c
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
 * @verbatim 11 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 11 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xApplication_MCU/SYSEXC/Interrupt/InterruptRoutine/xHeader/SYSEXC_InterruptRoutine_Vector.h>
#include <xApplication_MCU/SYSEXC/Intrinsics/xHeader/SYSEXC_Dependencies.h>

UBase_t SYSEXC_puxContext[8UL];

UART_CONTROL_t enUartSysExcControl =
{
    UART_enEOT_ALL,
    UART_enSTATE_DIS,
    UART_enSTATE_ENA,
    UART_enSTATE_ENA,
    UART_enLINE_MODE_SOFT,
    UART_enLINE_MODE_SOFT,
    UART_enSTATE_DIS,
    UART_enSTATE_DIS,
    UART_enSTATE_DIS,
    UART_enSTATE_DIS,
};

UART_LINE_CONTROL_t enUartSysExcLineControl =
{
 UART_enSTATE_ENA,
 UART_enSTOP_ONE,
 UART_enPARITY_NONE,
 UART_enLENGTH_8BITS,
};

UART_LINE_t enUartSysExcLine =
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

void SYSEXC__vSendValues(void)
{
    SYSCTL__vEnRunModePeripheral(SYSCTL_enGPIOA);
    SYSCTL__vEnRunModePeripheral(SYSCTL_enUART0);
    UART__enInit(UART_enMODULE_0);
    UART__enSetState(UART_enMODULE_0, UART_enSTATE_DIS);
    UART__enSetConfig(UART_enMODULE_0, UART_enMODE_NORMAL, 921600UL, 0UL, 0UL, &enUartSysExcControl, &enUartSysExcLineControl, &enUartSysExcLine, 0UL);
    UART__enSetState(UART_enMODULE_0, UART_enSTATE_ENA);

    UART__uxPrintf(UART_enMODULE_0, "SYSEXC FAULT exception Detected\n\r"
                    "Core Register dump:\n\r"
                    "R0: %X, R1: %X\n\r"
                    "R2: %X, R3: %X\n\r"
                    "R12: %X xPSR: %X\n\r"
                    "LR: %X, PC: %X\n\r",
                    SYSEXC_puxContext[0UL],
                    SYSEXC_puxContext[1UL],
                    SYSEXC_puxContext[2UL],
                    SYSEXC_puxContext[3UL],
                    SYSEXC_puxContext[4UL],
                    SYSEXC_puxContext[7UL],
                    SYSEXC_puxContext[5UL],
                    SYSEXC_puxContext[6UL]);
}

void SYSEXC__vIRQVectorHandlerCustom(uintptr_t uptrModuleArg, void* pvArgument)
{
    SYSEXC_t* pstSystemExceptionReg;
    UBase_t uxSystemException;
    UBase_t uxSysExcAddressFault;
    SYSEXC_pvfIRQSourceHandler_t pvfCallback;

    UBase_t* puxContext;
    UBase_t* puxContextOffset;

    pstSystemExceptionReg = (SYSEXC_t*) uptrModuleArg;
    puxContext = (UBase_t*) pvArgument;

    uxSystemException = pstSystemExceptionReg->MIS;
    if(0UL == ((UBase_t) SYSEXC_enINTMASK_ALL & uxSystemException))
    {
        UART__uxPrintf(UART_enMODULE_0, "SYSEXC FAULT Exception triggered by Software \n\r");
        pvfCallback = SYSEXC__pvfGetIRQSourceHandler(SYSEXC_enMODULE_0, SYSEXC_enINT_SW);
        pvfCallback(SYSEXC_BASE, (void*) SYSEXC_enINT_SW);
    }
    else
    {
        puxContextOffset = puxContext;
        puxContextOffset += 6UL;
        uxSysExcAddressFault = *puxContextOffset;
        if(0UL != ((UBase_t) SYSEXC_enINTMASK_DENORMAL & uxSystemException))
        {
            pstSystemExceptionReg->IC = (UBase_t) SYSEXC_enINTMASK_DENORMAL;
            UART__uxPrintf(UART_enMODULE_0, "SYSEXC FAULT on De-normal Operation \n\r"
                                            "De-normal operation occurred on: %X\n\r", uxSysExcAddressFault);
            pvfCallback = SYSEXC__pvfGetIRQSourceHandler(SYSEXC_enMODULE_0, SYSEXC_enINT_DENORMAL);
            pvfCallback(SYSEXC_BASE, (void*) SYSEXC_enINT_DENORMAL);
        }
        if(0UL != ((UBase_t) SYSEXC_enINTMASK_DIV0 & uxSystemException))
        {
            pstSystemExceptionReg->IC = (UBase_t) SYSEXC_enINTMASK_DIV0 ;
            UART__uxPrintf(UART_enMODULE_0,"SYSEXC FAULT on a Div by 0\n\r"
                                            "Invalid div by 0 operation occurred on: %X\n\r", uxSysExcAddressFault);
            pvfCallback = SYSEXC__pvfGetIRQSourceHandler(SYSEXC_enMODULE_0, SYSEXC_enINT_DIV0);
            pvfCallback(SYSEXC_BASE, (void*) SYSEXC_enINT_DIV0);
        }
        if(0UL != ((UBase_t) SYSEXC_enINTMASK_INVALID & uxSystemException))
        {
            pstSystemExceptionReg->IC = (UBase_t) SYSEXC_enINTMASK_INVALID;
            UART__uxPrintf(UART_enMODULE_0,"SYSEXC FAULT on execution of an invalid operation\n\r"
                                               "Invalid operation execution occurred on: %X\n\r", uxSysExcAddressFault);
            pvfCallback = SYSEXC__pvfGetIRQSourceHandler(SYSEXC_enMODULE_0, SYSEXC_enINT_INVALID);
            pvfCallback(SYSEXC_BASE, (void*) SYSEXC_enINT_INVALID);
        }
        if(0UL != ((UBase_t) SYSEXC_enINTMASK_UNDERFLOW & uxSystemException))
        {
            pstSystemExceptionReg->IC = (UBase_t) SYSEXC_enINTMASK_UNDERFLOW;
            UART__uxPrintf(UART_enMODULE_0,"SYSEXC FAULT, underflow exception\n\r"
                                               "underflow occurred on: %X\n\r", uxSysExcAddressFault);
            pvfCallback = SYSEXC__pvfGetIRQSourceHandler(SYSEXC_enMODULE_0, SYSEXC_enINT_UNDERFLOW);
            pvfCallback(SYSEXC_BASE, (void*) SYSEXC_enINT_UNDERFLOW);
        }
        if(0UL != ((UBase_t) SYSEXC_enINTMASK_OVERFLOW & uxSystemException))
        {
            pstSystemExceptionReg->IC = (UBase_t) SYSEXC_enINTMASK_OVERFLOW;
            UART__uxPrintf(UART_enMODULE_0,"SYSEXC FAULT, overflow exception\n\r"
                                               "overflow occurred on: %X\n\r", uxSysExcAddressFault);
            pvfCallback = SYSEXC__pvfGetIRQSourceHandler(SYSEXC_enMODULE_0, SYSEXC_enINT_OVERFLOW);
            pvfCallback(SYSEXC_BASE, (void*) SYSEXC_enINT_OVERFLOW);
        }
        if(0UL != ((UBase_t) SYSEXC_enINTMASK_INEXACT & uxSystemException))
        {
            pstSystemExceptionReg->IC = (UBase_t) SYSEXC_enINTMASK_INEXACT;
            UART__uxPrintf(UART_enMODULE_0,"SYSEXC FAULT, Inexact operation exception\n\r"
                                               "Inexact operation occurred on: %X\n\r", uxSysExcAddressFault);
            pvfCallback = SYSEXC__pvfGetIRQSourceHandler(SYSEXC_enMODULE_0, SYSEXC_enINT_INEXACT);
            pvfCallback(SYSEXC_BASE, (void*) SYSEXC_enINT_INEXACT);
        }
    }

}

