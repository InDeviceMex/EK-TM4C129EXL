/**
 *
 * @file MCU_WriteReg.c
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
#include <xDriver_MCU/Common/xHeader/MCU_WriteReg.h>

#include <xDriver_MCU/Common/xHeader/MCU_Interrupt.h>

MCU_nERROR MCU__enWriteRegister_RAM(const MCU_Register_t* const pstRegisterDataArg)
{
    MCU_nERROR enErrorReg;
    enErrorReg = (0U == (uintptr_t) pstRegisterDataArg) ? MCU_enERROR_POINTER : MCU_enERROR_OK;
    if(MCU_enERROR_OK == enErrorReg)
    {
        UBase_t uxRegisterValue = pstRegisterDataArg->uxValue;
        UBase_t uxRegisterMask = pstRegisterDataArg->uxMask;
        uintptr_t uptrRegisterAddress = pstRegisterDataArg->uptrAddress;

        UBase_t uxReg = uxRegisterValue;
        MCU_nSTATE enStatus = MCU__enDisableGlobalInterrupt_RAM();
        volatile UBase_t* puxRegisterAddress = (volatile UBase_t*) uptrRegisterAddress;
        if(MCU_MASK_BASE != uxRegisterMask)
        {
            uxReg = *puxRegisterAddress;
            uxRegisterValue &= uxRegisterMask;
            UBase_t uxRegisterShift = pstRegisterDataArg->uxShift;
            if(0U != uxRegisterShift)
            {
                uxRegisterValue <<= uxRegisterShift;
                uxRegisterMask <<= uxRegisterShift;
            }
            uxReg &= ~uxRegisterMask;
            uxReg |= uxRegisterValue;
        }
        *puxRegisterAddress = (UBase_t) uxReg;
        (void) MCU__vSetGlobalInterrupt_RAM(enStatus);
    }

    return (enErrorReg);
}

MCU_nERROR MCU__enWriteRegister(const MCU_Register_t* const pstRegisterDataArg)
{
    MCU_nERROR enErrorReg;
    enErrorReg = (0U == (uintptr_t) pstRegisterDataArg) ? MCU_enERROR_POINTER : MCU_enERROR_OK;
    if(MCU_enERROR_OK == enErrorReg)
    {
        UBase_t uxRegisterValue = pstRegisterDataArg->uxValue;
        UBase_t uxRegisterMask = pstRegisterDataArg->uxMask;
        uintptr_t uptrRegisterAddress = pstRegisterDataArg->uptrAddress;

        UBase_t uxReg = uxRegisterValue;
        MCU_nSTATE enStatus = MCU__enDisableGlobalInterrupt_RAM();
        volatile UBase_t* puxRegisterAddress = (volatile UBase_t*) uptrRegisterAddress;
        if(MCU_MASK_BASE != uxRegisterMask)
        {
            uxReg = *puxRegisterAddress;
            uxRegisterValue &= uxRegisterMask;
            UBase_t uxRegisterShift = pstRegisterDataArg->uxShift;
            if(0U != uxRegisterShift)
            {
                uxRegisterValue <<= uxRegisterShift;
                uxRegisterMask <<= uxRegisterShift;
            }
            uxReg &= ~uxRegisterMask;
            uxReg |= uxRegisterValue;
        }
        *puxRegisterAddress = (UBase_t) uxReg;
        (void) MCU__vSetGlobalInterrupt_RAM(enStatus);
    }

    return (enErrorReg);
}

MCU_nERROR MCU__enWriteRegister_Direct(const MCU_Register_t* const pstRegisterDataArg)
{
    MCU_nERROR enErrorReg;
    enErrorReg = (0U == (uintptr_t) pstRegisterDataArg) ? MCU_enERROR_POINTER : MCU_enERROR_OK;
    if(MCU_enERROR_OK == enErrorReg)
    {
        UBase_t uxRegisterValue = pstRegisterDataArg->uxValue;
        UBase_t uxRegisterMask = pstRegisterDataArg->uxMask;
        uintptr_t uptrRegisterAddress = pstRegisterDataArg->uptrAddress;
        UBase_t uxRegisterShift = pstRegisterDataArg->uxShift;

        UBase_t uxReg = uxRegisterValue;
        MCU_nSTATE enStatus = MCU__enDisableGlobalInterrupt();
        volatile UBase_t* puxRegisterAddress = (volatile UBase_t*) uptrRegisterAddress;
        uxRegisterValue &= uxRegisterMask;
        uxRegisterValue <<= uxRegisterShift;
        *puxRegisterAddress = uxReg;
        (void) MCU__vSetGlobalInterrupt(enStatus);
    }

    return (enErrorReg);
}

void MCU__vWriteRegister_Direct(UBase_t uxPeripheralBase, UBase_t uxOffsetRegister, UBase_t uxFeatureValue, UBase_t uxMaskFeature, UBase_t uxBitFeature)
{
    MCU_nSTATE enStatus;
    volatile UBase_t* puxPeripheral;

    uxPeripheralBase += uxOffsetRegister;
    /*Get Value in bit position*/
    uxFeatureValue &= uxMaskFeature;
    uxFeatureValue <<= uxBitFeature;
    enStatus = MCU__enDisableGlobalInterrupt();
    puxPeripheral = (volatile UBase_t*) uxPeripheralBase;
    (*puxPeripheral) = (UBase_t) uxFeatureValue;
    MCU__vSetGlobalInterrupt(enStatus);
}

void MCU__vWriteRegisterNew(const MCU_Register_t* const pstRegisterDataArg)
{
    if(0U != (uintptr_t) pstRegisterDataArg)
    {
        UBase_t uxRegisterValue = pstRegisterDataArg->uxValue;
        UBase_t uxRegisterMask = pstRegisterDataArg->uxMask;
        uintptr_t uptrRegisterAddress = pstRegisterDataArg->uptrAddress;

        UBase_t uxReg = uxRegisterValue;
        volatile UBase_t* puxRegisterAddress = (volatile UBase_t*) uptrRegisterAddress;
        if(MCU_MASK_BASE != uxRegisterMask)
        {
            uxReg = *puxRegisterAddress;
            uxRegisterValue &= uxRegisterMask;
            UBase_t uxRegisterShift = pstRegisterDataArg->uxShift;
            if(0U != uxRegisterShift)
            {
                uxRegisterValue <<= uxRegisterShift;
                uxRegisterMask <<= uxRegisterShift;
            }
            uxReg &= ~uxRegisterMask;
            uxReg |= uxRegisterValue;
        }
        MCU_nSTATE enStatus = MCU__enDisableGlobalInterrupt();
        *puxRegisterAddress = (UBase_t) uxReg;
        MCU__vSetGlobalInterrupt(enStatus);
    }
}

void MCU__vWriteRegister_DirectNew(const MCU_Register_t* const pstRegisterDataArg)
{
    if(0U != (uintptr_t) pstRegisterDataArg)
    {
        UBase_t uxRegisterValue = pstRegisterDataArg->uxValue;
        UBase_t uxRegisterMask = pstRegisterDataArg->uxMask;
        UBase_t uxRegisterShift = pstRegisterDataArg->uxShift;
        uintptr_t uptrRegisterAddress = pstRegisterDataArg->uptrAddress;

        volatile UBase_t* puxRegisterAddress = (volatile UBase_t*) uptrRegisterAddress;
        uxRegisterValue &= uxRegisterMask;
        uxRegisterValue <<= uxRegisterShift;
        MCU_nSTATE enStatus = MCU__enDisableGlobalInterrupt();
        *puxRegisterAddress = (UBase_t) uxRegisterValue;
        MCU__vSetGlobalInterrupt(enStatus);
    }
}

void MCU__vWriteRegister_RAM(UBase_t uxPeripheralBase, UBase_t uxOffsetRegister,
                             UBase_t uxFeatureValue, UBase_t uxMaskFeature,
                             UBase_t uxBitFeature)
{
    volatile UBase_t* puxPeripheral;
    UBase_t uxReg;

    uxPeripheralBase += uxOffsetRegister;
    puxPeripheral = (volatile UBase_t*) uxPeripheralBase;
    uxReg = uxFeatureValue;
    if(MCU_MASK_BASE != uxMaskFeature)
    {
        uxReg = *puxPeripheral;
        /*Get Value in bit position*/
        uxFeatureValue &= uxMaskFeature;
        if(0UL != uxBitFeature)
        {
            uxFeatureValue <<= uxBitFeature;
            /*Get Value to clear*/
            uxMaskFeature <<= uxBitFeature;
        }
        uxReg &= ~uxMaskFeature;
        uxReg |= uxFeatureValue;
    }
    MCU_nSTATE enStatus = MCU__enDisableGlobalInterrupt();
    (*puxPeripheral) = (UBase_t) uxReg;
    MCU__vSetGlobalInterrupt(enStatus);
}

void MCU__vWriteRegister(UBase_t uxPeripheralBase,
                                UBase_t uxOffsetRegister,
                                UBase_t uxFeatureValue,
                                UBase_t uxMaskFeature,
                                UBase_t uxBitFeature)
{
    volatile UBase_t* puxPeripheral;
    UBase_t uxReg;

    uxPeripheralBase += uxOffsetRegister;
    puxPeripheral = (volatile UBase_t*) uxPeripheralBase;
    uxReg = uxFeatureValue;
    if(MCU_MASK_BASE != uxMaskFeature)
    {
        uxReg = *puxPeripheral;
        /*Get Value in bit position*/
        uxFeatureValue &= uxMaskFeature;
        if(0UL != uxBitFeature)
        {
            uxFeatureValue <<= uxBitFeature;
            /*Get Value to clear*/
            uxMaskFeature <<= uxBitFeature;
        }
        uxReg &= ~uxMaskFeature;
        uxReg |= uxFeatureValue;
    }
    MCU_nSTATE enStatus = MCU__enDisableGlobalInterrupt();
    (*puxPeripheral) = (UBase_t) uxReg;
    MCU__vSetGlobalInterrupt(enStatus);
}

