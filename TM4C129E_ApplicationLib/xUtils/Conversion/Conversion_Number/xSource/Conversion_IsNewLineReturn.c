/**
 *
 * @file Conversion_IsNewLineReturn.c
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
 * @verbatim 18 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 18 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xUtils/Conversion/xHeader/Conversion_Enum.h>
#include <xUtils/Conversion/Conversion_Number/xHeader/Conversion_IsNewLineReturn.h>

CONV_nERROR Conv__enIsNewLineReturn(char cCharacter)
{
    CONV_nERROR enStatus;

    if(('\n' == cCharacter) || ('\r' == cCharacter))
    {
        enStatus = CONV_enERROR_OK;
    }
    else
    {
        enStatus = CONV_enERROR_VALUE;
    }
    return (enStatus);
}


