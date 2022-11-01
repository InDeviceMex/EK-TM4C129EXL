/**
 *
 * @file MCU_ReadReg.c
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
 * @verbatim 24 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 24 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/Common/xHeader/MCU_ReadReg.h>

MCU_nERROR MCU__enReadRegister(MCU_Register_t* pstRegisterDataArg)
{
    volatile UBase_t* puxRegisterAddress;
    uintptr_t uptrRegisterAddress;
    UBase_t uxRegisterValue;
    UBase_t uxRegisterMask;
    MCU_nERROR enErrorReg;
    UBase_t uxRegisterShift;

    enErrorReg = MCU_enERROR_OK;
    if(0UL == (uintptr_t) pstRegisterDataArg)
    {
        enErrorReg = MCU_enERROR_POINTER;
    }
    if(MCU_enERROR_OK == enErrorReg)
    {
        uxRegisterMask = pstRegisterDataArg->uxMask;
        uxRegisterShift = pstRegisterDataArg->uxShift;
        uptrRegisterAddress = pstRegisterDataArg->uptrAddress;

        puxRegisterAddress = (volatile UBase_t*) uptrRegisterAddress;
        uxRegisterValue = *puxRegisterAddress;
        if(MCU_MASK_BASE != uxRegisterMask)
        {
            uxRegisterValue >>= uxRegisterShift;
            uxRegisterValue &= uxRegisterMask;
        }
        pstRegisterDataArg->uxValue = (UBase_t) uxRegisterValue;
    }

    return (enErrorReg);
}


MCU_nERROR MCU__enReadRegister_RAM(MCU_Register_t* pstRegisterDataArg)
{
    volatile UBase_t* puxRegisterAddress;
    uintptr_t uptrRegisterAddress;
    UBase_t uxRegisterValue;
    UBase_t uxRegisterMask;
    MCU_nERROR enErrorReg;
    UBase_t uxRegisterShift;

    enErrorReg = MCU_enERROR_OK;
    if(0UL == (uintptr_t) pstRegisterDataArg)
    {
        enErrorReg = MCU_enERROR_POINTER;
    }
    if(MCU_enERROR_OK == enErrorReg)
    {
        uxRegisterMask = pstRegisterDataArg->uxMask;
        uxRegisterShift = pstRegisterDataArg->uxShift;
        uptrRegisterAddress = pstRegisterDataArg->uptrAddress;

        puxRegisterAddress = (volatile UBase_t*) uptrRegisterAddress;
        uxRegisterValue = *puxRegisterAddress;
        if(MCU_MASK_BASE != uxRegisterMask)
        {
            uxRegisterValue >>= uxRegisterShift;
            uxRegisterValue &= uxRegisterMask;
        }
        pstRegisterDataArg->uxValue = (UBase_t) uxRegisterValue;
    }

    return (enErrorReg);
}

UBase_t MCU__uxReadRegister(UBase_t uxPeripheralBase, UBase_t uxOffsetRegister,
                              UBase_t uxMaskFeature, UBase_t uxBitFeature)
{
    UBase_t uxFeatureValue = 0UL;
    volatile UBase_t* puxPeripheral = 0UL;

    uxPeripheralBase += uxOffsetRegister;
    puxPeripheral = (volatile UBase_t*) (uxPeripheralBase);

    uxFeatureValue = *puxPeripheral;

    if(MCU_MASK_32 != uxMaskFeature)
    {
        uxFeatureValue >>= uxBitFeature;
        uxFeatureValue &= uxMaskFeature;
    }
    return (uxFeatureValue);
}


UBase_t MCU__uxReadRegister_RAM(UBase_t uxPeripheralBase, UBase_t uxOffsetRegister,
                                  UBase_t uxMaskFeature, UBase_t uxBitFeature)
{
    UBase_t uxFeatureValue = 0UL;
    volatile UBase_t* puxPeripheral = 0UL;

    uxPeripheralBase += uxOffsetRegister;
    puxPeripheral = (volatile UBase_t*) (uxPeripheralBase);

    uxFeatureValue = *puxPeripheral;

    if(MCU_MASK_32 != uxMaskFeature)
    {
        uxFeatureValue >>= uxBitFeature;
        uxFeatureValue &= uxMaskFeature;
    }
    return (uxFeatureValue);
}
