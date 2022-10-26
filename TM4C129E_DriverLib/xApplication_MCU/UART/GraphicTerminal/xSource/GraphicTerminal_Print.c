/**
 *
 * @file GraphicTerminal_Print.c
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
#include <xApplication_MCU/UART/GraphicTerminal/xHeader/GraphicTerminal_Print.h>

#include <xApplication_MCU/UART/Printf/UART_Printf.h>
#include <xApplication_MCU/UART/GraphicTerminal/xHeader/GraphicTerminal_Cursor.h>
#include <xApplication_MCU/UART/Intrinsics/xHeader/UART_Dependencies.h>

#if defined (__TI_ARM__ ) || defined (__MSP430__ )
    #pragma CHECK_MISRA("-4.1, -6.3, -10.1, -10.3, -12.2, -12.7, -12.10, -14.5, -16.1")
#endif

UBase_t GraphTerm__uxPrintf(UART_nMODULE enModule, UBase_t uxColumn, UBase_t uxRow, const char* pcFormat, ... )
{
    UBase_t uxLengtht = 0UL;
    va_list vaList;
    va_start(vaList, pcFormat);
    GraphTerm__vSetCursorXY(enModule, uxColumn, uxRow);
    uxLengtht = UART__uxvsCustomPrintf(enModule, pcFormat,vaList);
    va_end(vaList);
    return  (uxLengtht);
}

void GraphTerm__vSetFontColor(UART_nMODULE enModule, UBase_t uxRedColor,UBase_t uxGreenColor,UBase_t uxBlueColor)
{
    UART__uxCustomPrintf(enModule,"\x1B[38;2;%u;%u;%um",uxRedColor, uxGreenColor, uxBlueColor);
}


#if defined (__TI_ARM__ ) || defined (__MSP430__ )
    #pragma RESET_MISRA("4.1, 6.3, 10.1, 10.3, 12.2, 12.7, 12.10, 14.5, 16.1")
#endif
