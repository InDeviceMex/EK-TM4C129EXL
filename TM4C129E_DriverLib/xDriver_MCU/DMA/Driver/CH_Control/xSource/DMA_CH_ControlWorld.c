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
    UBase_t uxChannelReg;
    UBase_t uxChannelMaskReg;
    DMA_nERROR enErrorReg;

    uxChannelReg = 0U;
    uxChannelMaskReg = (UBase_t) enChannelMaskArg;
    enErrorReg = DMA_enERROR_OK;
    while((0U != uxChannelMaskReg) && (DMA_enERROR_OK == enErrorReg))
    {
        if(0UL != ((UBase_t) DMA_enCHMASK_0 & uxChannelMaskReg))
        {
            enErrorReg = DMA_CH__enSetControlRegisterByNumber(enModuleArg,  (DMA_nCH) uxChannelReg, enControlArg, pstControlArg);
        }
        uxChannelReg++;
        uxChannelMaskReg >>= 1U;
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
    volatile UBase_t *puxControlReg;
    DMA_nERROR enErrorReg;

    enErrorReg = DMA_enERROR_OK;
    if(0UL == (uintptr_t) pstControlArg)
    {
        enErrorReg = DMA_enERROR_POINTER;
    }
    if(DMA_enERROR_OK == enErrorReg)
    {
        puxControlReg = (volatile UBase_t*) pstControlArg;
        stRegister.uxShift = 0UL;
        stRegister.uxMask = MCU_MASK_BASE;
        stRegister.uptrAddress = DMA_CH_CTL_OFFSET;
        stRegister.uxValue = (UBase_t) *puxControlReg;
        enErrorReg = DMA_CH__enWriteRegister(enModuleArg, enChannelArg, enControlArg, &stRegister);
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
    volatile UBase_t* puxControlReg;
    DMA_nERROR enErrorReg;

    enErrorReg = DMA_enERROR_OK;
    if(0UL == (uintptr_t) pstControlArg)
    {
        enErrorReg = DMA_enERROR_POINTER;
    }
    if(DMA_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = 0UL;
        stRegister.uxMask = MCU_MASK_BASE;
        stRegister.uptrAddress = DMA_CH_CTL_OFFSET;
        enErrorReg = DMA_CH__enReadRegister(enModuleArg, enChannelArg, enControlArg, &stRegister);
    }
    if(DMA_enERROR_OK == enErrorReg)
    {
        puxControlReg = (volatile UBase_t*) pstControlArg;
        *puxControlReg = stRegister.uxValue;
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
                                              DMA_nCH_CONTROL enControlArg, UBase_t uxControlArg)
{
    UBase_t uxChannelReg;
    UBase_t uxChannelMaskReg;
    DMA_nERROR enErrorReg;

    uxChannelReg = 0U;
    uxChannelMaskReg = (UBase_t) enChannelMaskArg;
    enErrorReg = DMA_enERROR_OK;
    while((0U != uxChannelMaskReg) && (DMA_enERROR_OK == enErrorReg))
    {
        if(0UL != ((UBase_t) DMA_enCHMASK_0 & uxChannelMaskReg))
        {
            enErrorReg = DMA_CH__enSetControlValueByNumber(enModuleArg,  (DMA_nCH) uxChannelReg, enControlArg, uxControlArg);
        }
        uxChannelReg++;
        uxChannelMaskReg >>= 1U;
    }

    return (enErrorReg);
}

DMA_nERROR DMA_CH_Primary__enSetControlValueByMask(DMA_nMODULE enModuleArg, DMA_nCHMASK enChannelMaskArg,
                                                      UBase_t uxControlArg)
{
    DMA_nERROR enErrorReg;
    enErrorReg = DMA_CH__enSetControlValueByMask(enModuleArg, enChannelMaskArg, DMA_enCH_CONTROL_PRIMARY, uxControlArg);
    return (enErrorReg);
}

DMA_nERROR DMA_CH_Alternate__enSetControlValueByMask(DMA_nMODULE enModuleArg, DMA_nCHMASK enChannelMaskArg,
                                                                 UBase_t uxControlArg)
{
    DMA_nERROR enErrorReg;
    enErrorReg = DMA_CH__enSetControlValueByMask(enModuleArg, enChannelMaskArg, DMA_enCH_CONTROL_ALTERNATE, uxControlArg);
    return (enErrorReg);
}


DMA_nERROR DMA_CH__enSetControlValueByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                DMA_nCH_CONTROL enControlArg, UBase_t uxControlArg)
{
    DMA_Register_t stRegister;
    DMA_nERROR enErrorReg;

    stRegister.uxShift = 0UL;
    stRegister.uxMask = MCU_MASK_BASE;
    stRegister.uptrAddress = DMA_CH_CTL_OFFSET;
    stRegister.uxValue = uxControlArg;
    enErrorReg = DMA_CH__enWriteRegister(enModuleArg, enChannelArg, enControlArg, &stRegister);

    return (enErrorReg);
}

DMA_nERROR DMA_CH_Primary__enSetControlValueByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                        UBase_t uxControlArg)
{
    DMA_nERROR enErrorReg;
    enErrorReg = DMA_CH__enSetControlValueByNumber(enModuleArg, enChannelArg, DMA_enCH_CONTROL_PRIMARY, uxControlArg);
    return (enErrorReg);
}

DMA_nERROR DMA_CH_Alternate__enSetControlValueByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                          UBase_t uxControlArg)
{
    DMA_nERROR enErrorReg;
    enErrorReg = DMA_CH__enSetControlValueByNumber(enModuleArg, enChannelArg, DMA_enCH_CONTROL_ALTERNATE, uxControlArg);
    return (enErrorReg);
}


DMA_nERROR DMA_CH__enGetControlValueByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                             DMA_nCH_CONTROL enControlArg, UBase_t* puxControlArg)
{
    DMA_Register_t stRegister;
    DMA_nERROR enErrorReg;

    enErrorReg = DMA_enERROR_OK;
    if(0UL == (uintptr_t) puxControlArg)
    {
        enErrorReg = DMA_enERROR_POINTER;
    }
    if(DMA_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = 0UL;
        stRegister.uxMask = MCU_MASK_BASE;
        stRegister.uptrAddress = DMA_CH_CTL_OFFSET;
        enErrorReg = DMA_CH__enReadRegister(enModuleArg, enChannelArg, enControlArg, &stRegister);
    }
    if(DMA_enERROR_OK == enErrorReg)
    {
        *puxControlArg = stRegister.uxValue;
    }

    return (enErrorReg);
}

DMA_nERROR DMA_CH_Primary__enGetControlValueByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                     UBase_t* puxControlArg)
{
    DMA_nERROR enErrorReg;
    enErrorReg = DMA_CH__enGetControlValueByNumber(enModuleArg, enChannelArg, DMA_enCH_CONTROL_PRIMARY, puxControlArg);
    return (enErrorReg);
}

DMA_nERROR DMA_CH_Alternate__enGetControlValueByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                          UBase_t* puxControlArg)
{
    DMA_nERROR enErrorReg;
    enErrorReg = DMA_CH__enGetControlValueByNumber(enModuleArg, enChannelArg, DMA_enCH_CONTROL_ALTERNATE, puxControlArg);
    return (enErrorReg);
}
