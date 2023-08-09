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
    MCU_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) pstRegisterDataArg) ? MCU_enERROR_POINTER : MCU_enERROR_OK;
    if(MCU_enERROR_OK == enErrorReg)
    {
        uintptr_t uptrRegisterAddress = pstRegisterDataArg->uptrAddress;
        volatile UBase_t* puxRegisterAddress = (volatile UBase_t*) uptrRegisterAddress;

         UBase_t uxRegisterValue = *puxRegisterAddress;
         UBase_t uxRegisterMask = pstRegisterDataArg->uxMask;
        if(MCU_MASK_BASE != uxRegisterMask)
        {
            UBase_t uxRegisterShift = pstRegisterDataArg->uxShift;
            uxRegisterValue >>= uxRegisterShift;
            uxRegisterValue &= uxRegisterMask;
        }
        pstRegisterDataArg->uxValue = (UBase_t) uxRegisterValue;
    }
    return (enErrorReg);
}


MCU_nERROR MCU__enReadRegister_RAM(MCU_Register_t* pstRegisterDataArg)
{
    MCU_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) pstRegisterDataArg) ? MCU_enERROR_POINTER : MCU_enERROR_OK;
    if(MCU_enERROR_OK == enErrorReg)
    {
        uintptr_t uptrRegisterAddress = pstRegisterDataArg->uptrAddress;
        volatile UBase_t* puxRegisterAddress = (volatile UBase_t*) uptrRegisterAddress;

        UBase_t uxRegisterValue = *puxRegisterAddress;
        UBase_t uxRegisterMask = pstRegisterDataArg->uxMask;
        if(MCU_MASK_BASE != uxRegisterMask)
        {
            UBase_t uxRegisterShift = pstRegisterDataArg->uxShift;
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
    volatile UBase_t* puxPeripheral;
    UBase_t uxFeatureValue;
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
    volatile UBase_t* puxPeripheral;
    UBase_t uxFeatureValue;
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
