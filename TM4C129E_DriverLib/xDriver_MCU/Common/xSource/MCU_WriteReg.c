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
    volatile UBase_t* puxRegisterAddress;
    uintptr_t uptrRegisterAddress;
    UBase_t uxRegisterValue;
    UBase_t uxRegisterMask;
    UBase_t uxReg;
    MCU_nSTATE enStatus;
    MCU_nERROR enErrorReg;
    UBase_t uxRegisterShift;

    enErrorReg = MCU_enERROR_OK;
    if(0U == (uintptr_t) pstRegisterDataArg)
    {
        enErrorReg = MCU_enERROR_POINTER;
    }
    if(MCU_enERROR_OK == enErrorReg)
    {
        uxRegisterValue = pstRegisterDataArg->uxValue;
        uxRegisterMask = pstRegisterDataArg->uxMask;
        uxRegisterShift = pstRegisterDataArg->uxShift;
        uptrRegisterAddress = pstRegisterDataArg->uptrAddress;

        uxReg = uxRegisterValue;
        enStatus = MCU__enDisGlobalInterrupt_RAM();
        puxRegisterAddress = (volatile UBase_t*) uptrRegisterAddress;
        if(MCU_MASK_BASE != uxRegisterMask)
        {
            uxReg = *puxRegisterAddress;
            uxRegisterValue &= uxRegisterMask;
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
    volatile UBase_t* puxRegisterAddress;
    uintptr_t uptrRegisterAddress;
    UBase_t uxRegisterValue;
    UBase_t uxRegisterMask;
    UBase_t uxReg;
    MCU_nSTATE enStatus;
    MCU_nERROR enErrorReg;
    UBase_t uxRegisterShift;

    enErrorReg = MCU_enERROR_OK;
    if(0U == (uintptr_t) pstRegisterDataArg)
    {
        enErrorReg = MCU_enERROR_POINTER;
    }
    if(MCU_enERROR_OK == enErrorReg)
    {
        uxRegisterValue = pstRegisterDataArg->uxValue;
        uxRegisterMask = pstRegisterDataArg->uxMask;
        uxRegisterShift = pstRegisterDataArg->uxShift;
        uptrRegisterAddress = pstRegisterDataArg->uptrAddress;

        uxReg = uxRegisterValue;
        enStatus = MCU__enDisGlobalInterrupt();
        puxRegisterAddress = (volatile UBase_t*) uptrRegisterAddress;
        if(MCU_MASK_BASE != uxRegisterMask)
        {
            uxReg = *puxRegisterAddress;
            uxRegisterValue &= uxRegisterMask;
            if(0U != uxRegisterShift)
            {
                uxRegisterValue <<= uxRegisterShift;
                uxRegisterMask <<= uxRegisterShift;
            }
            uxReg &= ~uxRegisterMask;
            uxReg |= uxRegisterValue;
        }
        *puxRegisterAddress = (UBase_t) uxReg;
        (void) MCU__vSetGlobalInterrupt(enStatus);
    }

    return (enErrorReg);
}

MCU_nERROR MCU__enWriteRegister_Direct(const MCU_Register_t* const pstRegisterDataArg)
{
    volatile UBase_t* puxRegisterAddress;
    uintptr_t uptrRegisterAddress;
    UBase_t uxRegisterValue;
    UBase_t uxRegisterMask;
    UBase_t uxReg;
    MCU_nSTATE enStatus;
    MCU_nERROR enErrorReg;
    UBase_t uxRegisterShift;

    enErrorReg = MCU_enERROR_OK;
    if(0U == (uintptr_t) pstRegisterDataArg)
    {
        enErrorReg = MCU_enERROR_POINTER;
    }
    if(MCU_enERROR_OK == enErrorReg)
    {
        uxRegisterValue = pstRegisterDataArg->uxValue;
        uxRegisterMask = pstRegisterDataArg->uxMask;
        uxRegisterShift = pstRegisterDataArg->uxShift;
        uptrRegisterAddress = pstRegisterDataArg->uptrAddress;

        uxReg = uxRegisterValue;
        enStatus = MCU__enDisGlobalInterrupt();
        puxRegisterAddress = (volatile UBase_t*) uptrRegisterAddress;
        uxRegisterValue &= uxRegisterMask;
        uxRegisterValue <<= uxRegisterShift;
        *puxRegisterAddress = uxReg;
        (void) MCU__vSetGlobalInterrupt(enStatus);
    }

    return (enErrorReg);
}

void MCU__vWriteRegister_RAM(UBase_t uxPeripheralBase, UBase_t uxOffsetRegister,
                             UBase_t uxFeatureValue, UBase_t uxMaskFeature,
                             UBase_t uxBitFeature)
{
    MCU_nSTATE enStatus = MCU_enSTATE_ENA;
    UBase_t uxReg = uxFeatureValue;
    volatile UBase_t* puxPeripheral = 0UL;

    uxPeripheralBase += uxOffsetRegister;
    enStatus = MCU__enDisGlobalInterrupt();
    puxPeripheral = (volatile UBase_t*) uxPeripheralBase;
    if(0xFFFFFFFFUL != uxMaskFeature)
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
    (*puxPeripheral) = (UBase_t) uxReg;
    MCU__vSetGlobalInterrupt(enStatus);
}

void MCU__vWriteRegisterNew(const MCU_Register_t* const pstRegisterDataArg)
{
    volatile UBase_t* puxRegisterAddress;
    uintptr_t uptrRegisterAddress;
    UBase_t uxRegisterValue;
    UBase_t uxRegisterMask;
    UBase_t uxReg;
    MCU_nSTATE enStatus;
    UBase_t uxRegisterShift;

    if(0U != (uintptr_t) pstRegisterDataArg)
    {
        uxRegisterValue = pstRegisterDataArg->uxValue;
        uxRegisterMask = pstRegisterDataArg->uxMask;
        uxRegisterShift = pstRegisterDataArg->uxShift;
        uptrRegisterAddress = pstRegisterDataArg->uptrAddress;

        uxReg = uxRegisterValue;
        puxRegisterAddress = (volatile UBase_t*) uptrRegisterAddress;
        if(MCU_MASK_BASE != uxRegisterMask)
        {
            uxReg = *puxRegisterAddress;
            uxRegisterValue &= uxRegisterMask;
            if(0U != uxRegisterShift)
            {
                uxRegisterValue <<= uxRegisterShift;
                uxRegisterMask <<= uxRegisterShift;
            }
            uxReg &= ~uxRegisterMask;
            uxReg |= uxRegisterValue;
        }
        enStatus = MCU__enDisGlobalInterrupt();
        *puxRegisterAddress = (UBase_t) uxReg;
        MCU__vSetGlobalInterrupt(enStatus);
    }
}

void MCU__vWriteRegister_DirectNew(const MCU_Register_t* const pstRegisterDataArg)
{
    volatile UBase_t* puxRegisterAddress;
    uintptr_t uptrRegisterAddress;
    UBase_t uxRegisterValue;
    UBase_t uxRegisterMask;
    UBase_t uxReg;
    MCU_nSTATE enStatus;
    UBase_t uxRegisterShift;

    if(0U != (uintptr_t) pstRegisterDataArg)
    {
        uxRegisterValue = pstRegisterDataArg->uxValue;
        uxRegisterMask = pstRegisterDataArg->uxMask;
        uxRegisterShift = pstRegisterDataArg->uxShift;
        uptrRegisterAddress = pstRegisterDataArg->uptrAddress;

        uxReg = uxRegisterValue;
        puxRegisterAddress = (volatile UBase_t*) uptrRegisterAddress;
        uxRegisterValue &= uxRegisterMask;
        uxRegisterValue <<= uxRegisterShift;
        enStatus = MCU__enDisGlobalInterrupt();
        *puxRegisterAddress = uxReg;
        MCU__vSetGlobalInterrupt(enStatus);
    }
}



void MCU__vWriteRegister(UBase_t uxPeripheralBase,
                                UBase_t uxOffsetRegister,
                                UBase_t uxFeatureValue,
                                UBase_t uxMaskFeature,
                                UBase_t uxBitFeature)
{
    UBase_t uxReg = uxFeatureValue;
    volatile UBase_t* puxPeripheral = 0UL;
    MCU_nSTATE enStatus = MCU_enSTATE_ENA;

    uxPeripheralBase += uxOffsetRegister;
    puxPeripheral = (volatile UBase_t*) uxPeripheralBase;
    if(0xFFFFFFFFUL != uxMaskFeature)
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

    enStatus = MCU__enDisGlobalInterrupt();
    (*puxPeripheral) = (UBase_t) uxReg;
    (void) MCU__vSetGlobalInterrupt(enStatus);
}

void MCU__vWriteRegister_Direct(UBase_t uxPeripheralBase,
                                       UBase_t uxOffsetRegister,
                                       UBase_t uxFeatureValue,
                                       UBase_t uxMaskFeature,
                                       UBase_t uxBitFeature)
{
    MCU_nSTATE enStatus = MCU_enSTATE_ENA;
    volatile UBase_t* puxPeripheral = 0UL;

    uxPeripheralBase += uxOffsetRegister;
    puxPeripheral = (volatile UBase_t*) uxPeripheralBase;
    /*Get Value in bit position*/
    uxFeatureValue &= uxMaskFeature;
    uxFeatureValue <<= uxBitFeature;
    enStatus = MCU__enDisGlobalInterrupt();
    (*puxPeripheral) = (UBase_t) uxFeatureValue;
    MCU__vSetGlobalInterrupt(enStatus);
}
