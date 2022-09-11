/**
 *
 * @file DMA_CH_ControlWorld.c
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
 * @verbatim 21 sep. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 21 sep. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/DMA/Driver/CH_Control/xHeader/DMA_CH_ControlWorld.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/DMA/Driver/Intrinsics/DMA_Intrinsics.h>
#include <xDriver_MCU/DMA/Peripheral/DMA_Peripheral.h>

DMA_nERROR DMA_CH__enSetControlRegisterByMask(DMA_nMODULE enModuleArg, DMA_nCHMASK enChannelMaskArg,
                                              DMA_nCH_CONTROL enControlArg, DMA_CH_CTL_t* pstControlArg)
{
    uint32_t u32ChannelReg;
    uint32_t u32ChannelMaskReg;
    DMA_nERROR enErrorReg;

    u32ChannelReg = 0U;
    u32ChannelMaskReg = (uint32_t) enChannelMaskArg;
    while(0U != u32ChannelMaskReg)
    {
        if(0UL != (DMA_enCHMASK_0 & u32ChannelMaskReg))
        {
            enErrorReg = DMA_CH__enSetControlRegisterByNumber(enModuleArg,  (DMA_nCH) u32ChannelReg, enControlArg, pstControlArg);
        }

        if(DMA_enERROR_OK != enErrorReg)
        {
            break;
        }
        u32ChannelReg++;
        u32ChannelMaskReg >>= 1U;
    }

    return (enErrorReg);
}

DMA_nERROR DMA_CH_Primary__enSetControlRegisterByMask(DMA_nMODULE enModuleArg, DMA_nCHMASK enChannelMaskArg,
                                                      DMA_CH_CTL_t* pstControlArg)
{
    DMA_nERROR enErrorReg;
    enErrorReg = DMA_CH__enSetControlRegisterByMask(enModuleArg, enChannelMaskArg, DMA_enCH_CONTROL_PRIMARY, pstControlArg);
    return (enErrorReg);
}

DMA_nERROR DMA_CH_Alternate__enSetControlRegisterByMask(DMA_nMODULE enModuleArg, DMA_nCHMASK enChannelMaskArg,
                                                                 DMA_CH_CTL_t* pstControlArg)
{
    DMA_nERROR enErrorReg;
    enErrorReg = DMA_CH__enSetControlRegisterByMask(enModuleArg, enChannelMaskArg, DMA_enCH_CONTROL_ALTERNATE, pstControlArg);
    return (enErrorReg);
}


DMA_nERROR DMA_CH__enSetControlRegisterByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                DMA_nCH_CONTROL enControlArg, DMA_CH_CTL_t* pstControlArg)
{
    DMA_Register_t stRegister;
    volatile uint32_t *pu32ControlReg;
    DMA_nERROR enErrorReg;

    if(0UL != (uintptr_t) pstControlArg)
    {
    pu32ControlReg = (volatile uint32_t*) pstControlArg;
    stRegister.u32Shift = 0UL;
    stRegister.u32Mask = MCU_MASK_32;
    stRegister.uptrAddress = DMA_CH_CTL_OFFSET;
    stRegister.u32Value = (uint32_t) *pu32ControlReg;
    enErrorReg = DMA_CH__enWriteRegister(enModuleArg, enChannelArg, enControlArg, &stRegister);
    }
    else
    {
        enErrorReg = DMA_enERROR_POINTER;
    }

    return (enErrorReg);
}

DMA_nERROR DMA_CH_Primary__enSetControlRegisterByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                        DMA_CH_CTL_t* pstControlArg)
{
    DMA_nERROR enErrorReg;
    enErrorReg = DMA_CH__enSetControlRegisterByNumber(enModuleArg, enChannelArg, DMA_enCH_CONTROL_PRIMARY, pstControlArg);
    return (enErrorReg);
}

DMA_nERROR DMA_CH_Alternate__enSetControlRegisterByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                          DMA_CH_CTL_t* pstControlArg)
{
    DMA_nERROR enErrorReg;
    enErrorReg = DMA_CH__enSetControlRegisterByNumber(enModuleArg, enChannelArg, DMA_enCH_CONTROL_ALTERNATE, pstControlArg);
    return (enErrorReg);
}


DMA_nERROR DMA_CH__enGetControlRegisterByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                DMA_nCH_CONTROL enControlArg, DMA_CH_CTL_t* pstControlArg)
{
    DMA_Register_t stRegister;
    volatile uint32_t* pu32ControlReg;
    DMA_nERROR enErrorReg;

    if(0UL != (uintptr_t) pstControlArg)
    {
        stRegister.u32Shift = 0UL;
        stRegister.u32Mask = MCU_MASK_32;
        stRegister.uptrAddress = DMA_CH_CTL_OFFSET;
        enErrorReg = DMA_CH__enReadRegister(enModuleArg, enChannelArg, enControlArg, &stRegister);
        if(DMA_enERROR_OK == enErrorReg)
        {
            pu32ControlReg = (volatile uint32_t*) pstControlArg;
            *pu32ControlReg = stRegister.u32Value;
        }
}
    else
    {
        enErrorReg = DMA_enERROR_POINTER;
    }

    return (enErrorReg);
}

DMA_nERROR DMA_CH_Primary__enGetControlRegisterByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                        DMA_CH_CTL_t* pstControlArg)
{
    DMA_nERROR enErrorReg;
    enErrorReg = DMA_CH__enGetControlRegisterByNumber(enModuleArg, enChannelArg, DMA_enCH_CONTROL_PRIMARY, pstControlArg);
    return (enErrorReg);
}

DMA_nERROR DMA_CH_Alternate__enGetControlRegisterByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                          DMA_CH_CTL_t* pstControlArg)
{
    DMA_nERROR enErrorReg;
    enErrorReg = DMA_CH__enGetControlRegisterByNumber(enModuleArg, enChannelArg, DMA_enCH_CONTROL_ALTERNATE, pstControlArg);
    return (enErrorReg);
}




DMA_nERROR DMA_CH__enSetControlValueByMask(DMA_nMODULE enModuleArg, DMA_nCHMASK enChannelMaskArg,
                                              DMA_nCH_CONTROL enControlArg, uint32_t u32ControlArg)
{
    uint32_t u32ChannelReg;
    uint32_t u32ChannelMaskReg;
    DMA_nERROR enErrorReg;

    u32ChannelReg = 0U;
    u32ChannelMaskReg = (uint32_t) enChannelMaskArg;
    while(0U != u32ChannelMaskReg)
    {
        if(0UL != (DMA_enCHMASK_0 & u32ChannelMaskReg))
        {
            enErrorReg = DMA_CH__enSetControlValueByNumber(enModuleArg,  (DMA_nCH) u32ChannelReg, enControlArg, u32ControlArg);
        }

        if(DMA_enERROR_OK != enErrorReg)
        {
            break;
        }
        u32ChannelReg++;
        u32ChannelMaskReg >>= 1U;
    }

    return (enErrorReg);
}

DMA_nERROR DMA_CH_Primary__enSetControlValueByMask(DMA_nMODULE enModuleArg, DMA_nCHMASK enChannelMaskArg,
                                                      uint32_t u32ControlArg)
{
    DMA_nERROR enErrorReg;
    enErrorReg = DMA_CH__enSetControlValueByMask(enModuleArg, enChannelMaskArg, DMA_enCH_CONTROL_PRIMARY, u32ControlArg);
    return (enErrorReg);
}

DMA_nERROR DMA_CH_Alternate__enSetControlValueByMask(DMA_nMODULE enModuleArg, DMA_nCHMASK enChannelMaskArg,
                                                                 uint32_t u32ControlArg)
{
    DMA_nERROR enErrorReg;
    enErrorReg = DMA_CH__enSetControlValueByMask(enModuleArg, enChannelMaskArg, DMA_enCH_CONTROL_ALTERNATE, u32ControlArg);
    return (enErrorReg);
}


DMA_nERROR DMA_CH__enSetControlValueByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                DMA_nCH_CONTROL enControlArg, uint32_t u32ControlArg)
{
    DMA_Register_t stRegister;
    DMA_nERROR enErrorReg;

    stRegister.u32Shift = 0UL;
    stRegister.u32Mask = MCU_MASK_32;
    stRegister.uptrAddress = DMA_CH_CTL_OFFSET;
    stRegister.u32Value = u32ControlArg;
    enErrorReg = DMA_CH__enWriteRegister(enModuleArg, enChannelArg, enControlArg, &stRegister);

    return (enErrorReg);
}

DMA_nERROR DMA_CH_Primary__enSetControlValueByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                        uint32_t u32ControlArg)
{
    DMA_nERROR enErrorReg;
    enErrorReg = DMA_CH__enSetControlValueByNumber(enModuleArg, enChannelArg, DMA_enCH_CONTROL_PRIMARY, u32ControlArg);
    return (enErrorReg);
}

DMA_nERROR DMA_CH_Alternate__enSetControlValueByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                          uint32_t u32ControlArg)
{
    DMA_nERROR enErrorReg;
    enErrorReg = DMA_CH__enSetControlValueByNumber(enModuleArg, enChannelArg, DMA_enCH_CONTROL_ALTERNATE, u32ControlArg);
    return (enErrorReg);
}


DMA_nERROR DMA_CH__enGetControlValueByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                             DMA_nCH_CONTROL enControlArg, uint32_t* pu32ControlArg)
{
    DMA_Register_t stRegister;
    DMA_nERROR enErrorReg;

    if(0UL != (uintptr_t) pu32ControlArg)
    {
        stRegister.u32Shift = 0UL;
        stRegister.u32Mask = MCU_MASK_32;
        stRegister.uptrAddress = DMA_CH_CTL_OFFSET;
        enErrorReg = DMA_CH__enReadRegister(enModuleArg, enChannelArg, enControlArg, &stRegister);
        if(DMA_enERROR_OK == enErrorReg)
        {
            *pu32ControlArg = stRegister.u32Value;
        }
}
    else
    {
        enErrorReg = DMA_enERROR_POINTER;
    }

    return (enErrorReg);
}

DMA_nERROR DMA_CH_Primary__enGetControlValueByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                     uint32_t* pu32ControlArg)
{
    DMA_nERROR enErrorReg;
    enErrorReg = DMA_CH__enGetControlValueByNumber(enModuleArg, enChannelArg, DMA_enCH_CONTROL_PRIMARY, pu32ControlArg);
    return (enErrorReg);
}

DMA_nERROR DMA_CH_Alternate__enGetControlValueByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                          uint32_t* pu32ControlArg)
{
    DMA_nERROR enErrorReg;
    enErrorReg = DMA_CH__enGetControlValueByNumber(enModuleArg, enChannelArg, DMA_enCH_CONTROL_ALTERNATE, pu32ControlArg);
    return (enErrorReg);
}
