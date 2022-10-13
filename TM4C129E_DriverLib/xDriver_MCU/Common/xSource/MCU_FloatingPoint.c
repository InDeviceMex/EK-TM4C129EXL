/**
 *
 * @file MCU_FloatingPoint.c
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
 * @verbatim 19 jun. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 19 jun. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/Common/xHeader/MCU_FloatingPoint.h>

UBase_t MCU__uxFPUStatusControlMask(UBase_t uxBitMaskArg, UBase_t uxValueArg)
{
    UBase_t uxValueReg;
    if(0U == uxValueArg)
    {
        uxValueReg = MCU__uxClearFPUStatusControlMask(uxBitMaskArg);
    }
    else
    {
        uxValueReg = MCU__uxSetFPUStatusControlMask(uxBitMaskArg);
    }

    return (uxValueReg);
}

void MCU__vFPUStatusControlMask(UBase_t uxBitMaskArg, UBase_t uxValueArg)
{
    if(0U == uxValueArg)
    {
        MCU__uxClearFPUStatusControlMask(uxBitMaskArg);
    }
    else
    {
        MCU__uxSetFPUStatusControlMask(uxBitMaskArg);
    }
}

UBase_t MCU__uxFPUStatusControlBit(UBase_t uxBitBitArg, UBase_t uxValueArg)
{
    UBase_t uxValueReg;
    if(0U == uxValueArg)
    {
        uxValueReg = MCU__uxSetFPUStatusControlBit(uxBitBitArg);
    }
    else
    {
        uxValueReg = MCU__uxClearFPUStatusControlBit(uxBitBitArg);
    }

    return (uxValueReg);
}

void MCU__vFPUStatusControlBit(UBase_t uxBitBitArg, UBase_t uxValueArg)
{
    if(0U == uxValueArg)
    {
        MCU__uxSetFPUStatusControlBit(uxBitBitArg);
    }
    else
    {
        MCU__uxClearFPUStatusControlBit(uxBitBitArg);
    }
}
