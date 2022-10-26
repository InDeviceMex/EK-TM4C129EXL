/**
 *
 * @file GraphicTerminal_Cursor.c
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
 * @verbatim 11 feb. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 11 feb. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xApplication_MCU/UART/GraphicTerminal/xHeader/GraphicTerminal_Cursor.h>

#include <xApplication_MCU/UART/Printf/UART_Printf.h>
#include <xApplication_MCU/UART/Intrinsics/xHeader/UART_Dependencies.h>

#define ROW_MAX (48UL)
#define COLUMN_MAX (84UL)

#if defined (__TI_ARM__ ) || defined (__MSP430__ )
    #pragma CHECK_MISRA("-4.1")
#endif

void GraphTerm__vCursorToHome(UART_nMODULE enModule)
{
    UART__uxCustomPrintf(enModule,"\x1B[H" );
}

void GraphTerm__vHideCursor(UART_nMODULE enModule)
{
    UART__uxCustomPrintf(enModule,"\x1B[?25l" );
}

void GraphTerm__vSetCursorXY(UART_nMODULE enModule, UBase_t uxColumn, UBase_t uxRow)
{
    GraphTerm__vSetCursorXYSecure(enModule, uxColumn, uxRow, COLUMN_MAX, ROW_MAX);
}

void GraphTerm__vSetCursorXYSecure(UART_nMODULE enModule, UBase_t uxColumn, UBase_t uxRow, UBase_t uxColumnMax, UBase_t uxRowMax)
{
    uxColumn += 1UL;
    uxRow += 1UL;
    if(uxColumn >= uxColumnMax)
    {
        uxColumn = uxColumnMax;
    }
    if(uxRow >= uxRowMax)
    {
        uxRow = uxRowMax;
    }
    UART__uxCustomPrintf(enModule,"\x1B[%u;%uH",uxRow, uxColumn);
}

#if defined (__TI_ARM__ ) || defined (__MSP430__ )
    #pragma RESET_MISRA("4.1")
#endif
