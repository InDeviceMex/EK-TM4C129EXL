/**
 *
 * @file Graphics_CheckParams.c
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
 * @verbatim 19 feb. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 19 feb. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xUtils/Graphics/Common/xHeader/Graphics_CheckParams.h>

Graphics_nSTATUS Graphics__enCheckParams(UBase_t uxPosStart, UBase_t uxPosOffset, UBase_t uxValueMax)
{
    Graphics_nSTATUS enStatus = Graphics_enSTATUS_OK;
    UBase_t uxPosReg = 0UL;
    uxPosReg = uxPosStart;
    uxPosReg += uxPosOffset;
    if(uxPosReg > uxValueMax)
    {
        enStatus = Graphics_enSTATUS_ERROR;
    }

    return (enStatus);
}




