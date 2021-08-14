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

#if defined (__TI_ARM__ )
    #pragma CHECK_MISRA("-4.1")
#endif

void GraphTerm__vCursorToHome(UART_nMODULE enModule)
{
    UART__u32Printf(enModule,"\x1B[H" );
}

void GraphTerm__vHideCursor(UART_nMODULE enModule)
{
    UART__u32Printf(enModule,"\x1B[?25l" );
}

void GraphTerm__vSetCursorXY(UART_nMODULE enModule, uint32_t u32Column, uint32_t u32Row)
{
    GraphTerm__vSetCursorXYSecure(enModule, u32Column, u32Row, COLUMN_MAX, ROW_MAX);
}

void GraphTerm__vSetCursorXYSecure(UART_nMODULE enModule, uint32_t u32Column, uint32_t u32Row, uint32_t u32ColumnMax, uint32_t u32RowMax)
{
    u32Column += 1UL;
    u32Row += 1UL;
    if(u32Column >= u32ColumnMax)
    {
        u32Column = u32ColumnMax;
    }
    if(u32Row >= u32RowMax)
    {
        u32Row = u32RowMax;
    }
    UART__u32Printf(enModule,"\x1B[%u;%uH",u32Row, u32Column);
}

#if defined (__TI_ARM__ )
    #pragma RESET_MISRA("4.1")
#endif
