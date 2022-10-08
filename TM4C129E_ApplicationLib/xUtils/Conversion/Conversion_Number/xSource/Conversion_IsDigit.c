/**
 *
 * @file Conversion_IsDigit.c
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
 * @verbatim 17 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 17 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */
 #include <xUtils/Standard/Standard.h>
#include <xUtils/Conversion/xHeader/Conversion_Enum.h>
#include <xUtils/Conversion/Conversion_Number/xHeader/Conversion_IsDigit.h>

CONV_nERROR Conv__enIsDigit(char cCharacter)
{
    CONV_nERROR enStatus;

    if(((uint8_t) cCharacter < (uint8_t) '0') || ((uint8_t) cCharacter > (uint8_t) '9'))
    {
        enStatus = CONV_enERROR_VALUE;
    }
    else
    {
        enStatus = CONV_enERROR_OK;
    }

    return (enStatus);
}
