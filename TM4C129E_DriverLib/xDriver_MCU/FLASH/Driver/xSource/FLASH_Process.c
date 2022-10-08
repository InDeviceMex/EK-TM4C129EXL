/**
 *
 * @file FLASH_Process.c
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
 * @verbatim 19 sep. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 19 sep. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */

#include <xDriver_MCU/FLASH/Driver/xHeader/FLASH_Process.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/FLASH/Driver/Intrinsics/FLASH_Intrinsics.h>
#include <xDriver_MCU/FLASH/Peripheral/FLASH_Peripheral.h>


FLASH_nERROR FLASH__enInitProcess(FLASH_nMODULE enModuleArg, UBase_t uxKeyArg, FLASH_nPROCESS enProcessArg)
{
    FLASH_Register_t stRegister;
    UBase_t uxValueReg;
    FLASH_nERROR enErrorReg;

    stRegister.uxShift = 0UL;
    stRegister.uxMask = MCU_MASK_BASE;
    uxValueReg = uxKeyArg;
    uxValueReg &= MCU_MASK_16;
    uxValueReg <<= 16UL;
    switch(enProcessArg)
    {
    case FLASH_enPROCESS_WORD_WRITE:
        stRegister.uptrAddress = FLASH_CTL_OFFSET;
        uxValueReg |= FLASH_CTL_R_WRITE_MASK;
        stRegister.uxValue = (UBase_t) uxValueReg;
        enErrorReg = FLASH__enWriteRegister(enModuleArg, &stRegister);
        break;
    case FLASH_enPROCESS_PAGE_ERASE:
        stRegister.uptrAddress = FLASH_CTL_OFFSET;
        uxValueReg |= FLASH_CTL_R_ERASE_MASK;
        stRegister.uxValue = (UBase_t) uxValueReg;
        enErrorReg = FLASH__enWriteRegister(enModuleArg, &stRegister);
        break;
    case FLASH_enPROCESS_MASS_ERASE:
        stRegister.uptrAddress = FLASH_CTL_OFFSET;
        uxValueReg |= FLASH_CTL_R_MERASE_MASK;
        stRegister.uxValue = (UBase_t) uxValueReg;
        enErrorReg = FLASH__enWriteRegister(enModuleArg, &stRegister);
        break;
    case FLASH_enPROCESS_REGISTER_WRITE:
        stRegister.uptrAddress = FLASH_CTL_OFFSET;
        uxValueReg |= FLASH_CTL_R_COMT_MASK;
        stRegister.uxValue = (UBase_t) uxValueReg;
        enErrorReg = FLASH__enWriteRegister(enModuleArg, &stRegister);
        break;
    case FLASH_enPROCESS_BUFFER_WRITE:
        stRegister.uptrAddress = FLASH_CTL2_OFFSET;
        uxValueReg |= FLASH_CTL2_R_WRBUF_MASK;
        stRegister.uxValue = (UBase_t) uxValueReg;
        enErrorReg = FLASH__enWriteRegister(enModuleArg, &stRegister);
        break;
    default:
        enErrorReg = FLASH_enERROR_VALUE;
        break;
    }

    return (enErrorReg);
}

FLASH_nERROR FLASH__enIsProcessOngoing(FLASH_nMODULE enModuleArg, FLASH_nPROCESS enProcessArg, FLASH_nSTATUS* penStatusArg)
{
    FLASH_Register_t stRegister;
    FLASH_nERROR enErrorReg;

    enErrorReg = FLASH_enERROR_OK;
    if(0UL == (uintptr_t) penStatusArg)
    {
        enErrorReg = FLASH_enERROR_POINTER;
    }
    if(FLASH_enERROR_OK == enErrorReg)
    {
        switch(enProcessArg)
        {
        case FLASH_enPROCESS_WORD_WRITE:
            stRegister.uxShift = FLASH_CTL_R_WRITE_BIT;
            stRegister.uxMask = FLASH_CTL_WRITE_MASK;
            stRegister.uptrAddress = FLASH_CTL_OFFSET;
            enErrorReg = FLASH__enWriteRegister(enModuleArg, &stRegister);
            break;
        case FLASH_enPROCESS_PAGE_ERASE:
            stRegister.uxShift = FLASH_CTL_R_ERASE_BIT;
            stRegister.uxMask = FLASH_CTL_ERASE_MASK;
            stRegister.uptrAddress = FLASH_CTL_OFFSET;
            enErrorReg = FLASH__enWriteRegister(enModuleArg, &stRegister);
            break;
        case FLASH_enPROCESS_MASS_ERASE:
            stRegister.uxShift = FLASH_CTL_R_MERASE_BIT;
            stRegister.uxMask = FLASH_CTL_MERASE_MASK;
            stRegister.uptrAddress = FLASH_CTL_OFFSET;
            enErrorReg = FLASH__enWriteRegister(enModuleArg, &stRegister);
            break;
        case FLASH_enPROCESS_REGISTER_WRITE:
            stRegister.uxShift = FLASH_CTL_R_COMT_BIT;
            stRegister.uxMask = FLASH_CTL_COMT_MASK;
            stRegister.uptrAddress = FLASH_CTL_OFFSET;
            enErrorReg = FLASH__enWriteRegister(enModuleArg, &stRegister);
            break;
        case FLASH_enPROCESS_BUFFER_WRITE:
            stRegister.uxShift = FLASH_CTL2_R_WRBUF_BIT;
            stRegister.uxMask = FLASH_CTL2_WRBUF_MASK;
            stRegister.uptrAddress = FLASH_CTL2_OFFSET;
            enErrorReg = FLASH__enWriteRegister(enModuleArg, &stRegister);
            break;
        default:
            enErrorReg = FLASH_enERROR_VALUE;
            break;
        }
    }
    if(FLASH_enERROR_OK == enErrorReg)
    {
        *penStatusArg = (FLASH_nSTATUS) stRegister.uxValue;
    }
    return (enErrorReg);
}



