/**
 *
 * @file DMA_CH_ControlStruct.c
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
 * @verbatim 23 sep. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 23 sep. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/DMA/App/CH_Control/xHeader/DMA_CH_ControlStruct.h>

#include <stdlib.h>
#include <xDriver_MCU/DMA/Peripheral/DMA_Peripheral.h>

DMA_nERROR DMA_CH__enConvertControlStructure(uint32_t u32ControlWorldArg,
                                             DMA_CONTROL_t* pstControlArg)
{
    DMA_nERROR enErrorReg;
    uint32_t u32ControlReg;

    enErrorReg = DMA_enERROR_OK;
    if(0UL == (uintptr_t) pstControlArg)
    {
        enErrorReg = DMA_enERROR_POINTER;
    }
    if(DMA_enERROR_OK == enErrorReg)
    {
        u32ControlReg = u32ControlWorldArg;
        u32ControlReg >>= DMA_CH_CTL_R_XFERMODE_BIT;
        u32ControlReg &= DMA_CH_CTL_XFERMODE_MASK;
        pstControlArg->enTransferMode = (DMA_nCH_MODE) u32ControlReg;

        u32ControlReg = u32ControlWorldArg;
        u32ControlReg >>= DMA_CH_CTL_R_NXTUSEBURST_BIT;
        u32ControlReg &= DMA_CH_CTL_NXTUSEBURST_MASK;
        pstControlArg->enUseLastBurst = (DMA_nSTATE) u32ControlReg;

        u32ControlReg = u32ControlWorldArg;
        u32ControlReg >>= DMA_CH_CTL_R_XFERSIZE_BIT;
        u32ControlReg &= DMA_CH_CTL_XFERSIZE_MASK;
        u32ControlReg += 1UL;
        pstControlArg->u32TransferSize = (uint32_t) u32ControlReg;

        u32ControlReg = u32ControlWorldArg;
        u32ControlReg >>= DMA_CH_CTL_R_SRCPROT0_BIT;
        u32ControlReg &= DMA_CH_CTL_SRCPROT0_MASK;
        pstControlArg->enSourceAccess = (DMA_nCH_ACCESS) u32ControlReg;

        u32ControlReg = u32ControlWorldArg;
        u32ControlReg >>= DMA_CH_CTL_R_DSTPROT0_BIT;
        u32ControlReg &= DMA_CH_CTL_DSTPROT0_MASK;
        pstControlArg->enDestinationAccess = (DMA_nCH_ACCESS) u32ControlReg;

        u32ControlReg = u32ControlWorldArg;
        u32ControlReg >>= DMA_CH_CTL_R_ARBSIZE_BIT;
        u32ControlReg &= DMA_CH_CTL_ARBSIZE_MASK;
        pstControlArg->enArbitrationSize = (DMA_nCH_ARBITRATION_SIZE) u32ControlReg;

        u32ControlReg = u32ControlWorldArg;
        u32ControlReg >>= DMA_CH_CTL_R_SRCSIZE_BIT;
        u32ControlReg &= DMA_CH_CTL_SRCSIZE_MASK;
        pstControlArg->enSourceDataSize = (DMA_nCH_DATA_SIZE) u32ControlReg;

        u32ControlReg = u32ControlWorldArg;
        u32ControlReg >>= DMA_CH_CTL_R_SRCINC_BIT;
        u32ControlReg &= DMA_CH_CTL_SRCINC_MASK;
        pstControlArg->enSourceIncrement = (DMA_nCH_INCREMENT) u32ControlReg;

        u32ControlReg = u32ControlWorldArg;
        u32ControlReg >>= DMA_CH_CTL_R_DSTSIZE_BIT;
        u32ControlReg &= DMA_CH_CTL_DSTSIZE_MASK;
        pstControlArg->enDestinationDataSize = (DMA_nCH_DATA_SIZE) u32ControlReg;

        u32ControlReg = u32ControlWorldArg;
        u32ControlReg >>= DMA_CH_CTL_R_DSTINC_BIT;
        u32ControlReg &= DMA_CH_CTL_DSTINC_MASK;
        pstControlArg->enDestinationIncrement = (DMA_nCH_INCREMENT) u32ControlReg;
    }
    return (enErrorReg);
}

DMA_nERROR DMA_CH__enConvertControlStructure_Create(uint32_t u32ControlWorldArg,
                                                    DMA_CONTROL_t** pstControlArg)
{
    DMA_CONTROL_t* pstControlReg;
    DMA_nERROR enErrorReg;
    enErrorReg = DMA_enERROR_OK;
    if(0UL == (uintptr_t) pstControlArg)
    {
        enErrorReg = DMA_enERROR_POINTER;
    }
    if(DMA_enERROR_OK == enErrorReg)
    {
        #if defined (__TI_ARM__ ) || defined (__MSP430__ )
        pstControlReg = (DMA_CONTROL_t*) memalign( (size_t) 4,
                                                      (size_t) sizeof(DMA_CONTROL_t));
        #elif defined (__GNUC__ )
        pstControlReg = (DMA_CONTROL_t*) malloc( (size_t) sizeof(DMA_CONTROL_t));
        #endif
        enErrorReg = DMA_CH__enConvertControlStructure(u32ControlWorldArg, pstControlReg);
    }
    if(DMA_enERROR_OK == enErrorReg)
    {
        *pstControlArg = pstControlReg;
    }
    return (enErrorReg);
}
