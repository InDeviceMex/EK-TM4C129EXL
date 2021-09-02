/**
 *
 * @file I2C_Master_InterruptRoutine_Source.c
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
 * @verbatim Mar 24, 2021 @endverbatim
 *
 * @author
 * @verbatim indevicemex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * Mar 24, 2021        indevicemex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/I2C/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/I2C_Master_InterruptRoutine_Source.h>

static void I2C_vIRQSourceHandler_Dummy(void);
static void I2C_vIRQSourceHandler_Dummy_Blocking(void);

void (*I2C_Master__vIRQSourceHandler[(uint32_t) I2C_enMODULE_MAX][(uint32_t) I2C_enMASTER_INTERRUPT_MAX]) (void) =
{
    {
         &I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy_Blocking,
         &I2C_vIRQSourceHandler_Dummy_Blocking,&I2C_vIRQSourceHandler_Dummy_Blocking,
         &I2C_vIRQSourceHandler_Dummy_Blocking,&I2C_vIRQSourceHandler_Dummy_Blocking,
         &I2C_vIRQSourceHandler_Dummy_Blocking,&I2C_vIRQSourceHandler_Dummy_Blocking,
         &I2C_vIRQSourceHandler_Dummy_Blocking,&I2C_vIRQSourceHandler_Dummy_Blocking,
         &I2C_vIRQSourceHandler_Dummy_Blocking,&I2C_vIRQSourceHandler_Dummy_Blocking,
         &I2C_vIRQSourceHandler_Dummy_Blocking
    },
    {
         &I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy_Blocking,
         &I2C_vIRQSourceHandler_Dummy_Blocking,&I2C_vIRQSourceHandler_Dummy_Blocking,
         &I2C_vIRQSourceHandler_Dummy_Blocking,&I2C_vIRQSourceHandler_Dummy_Blocking,
         &I2C_vIRQSourceHandler_Dummy_Blocking,&I2C_vIRQSourceHandler_Dummy_Blocking,
         &I2C_vIRQSourceHandler_Dummy_Blocking,&I2C_vIRQSourceHandler_Dummy_Blocking,
         &I2C_vIRQSourceHandler_Dummy_Blocking,&I2C_vIRQSourceHandler_Dummy_Blocking,
         &I2C_vIRQSourceHandler_Dummy_Blocking
    },
    {
         &I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy_Blocking,
         &I2C_vIRQSourceHandler_Dummy_Blocking,&I2C_vIRQSourceHandler_Dummy_Blocking,
         &I2C_vIRQSourceHandler_Dummy_Blocking,&I2C_vIRQSourceHandler_Dummy_Blocking,
         &I2C_vIRQSourceHandler_Dummy_Blocking,&I2C_vIRQSourceHandler_Dummy_Blocking,
         &I2C_vIRQSourceHandler_Dummy_Blocking,&I2C_vIRQSourceHandler_Dummy_Blocking,
         &I2C_vIRQSourceHandler_Dummy_Blocking,&I2C_vIRQSourceHandler_Dummy_Blocking,
         &I2C_vIRQSourceHandler_Dummy_Blocking
    },
    {
         &I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy_Blocking,
         &I2C_vIRQSourceHandler_Dummy_Blocking,&I2C_vIRQSourceHandler_Dummy_Blocking,
         &I2C_vIRQSourceHandler_Dummy_Blocking,&I2C_vIRQSourceHandler_Dummy_Blocking,
         &I2C_vIRQSourceHandler_Dummy_Blocking,&I2C_vIRQSourceHandler_Dummy_Blocking,
         &I2C_vIRQSourceHandler_Dummy_Blocking,&I2C_vIRQSourceHandler_Dummy_Blocking,
         &I2C_vIRQSourceHandler_Dummy_Blocking,&I2C_vIRQSourceHandler_Dummy_Blocking,
         &I2C_vIRQSourceHandler_Dummy_Blocking
    },
    {
         &I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy_Blocking,
         &I2C_vIRQSourceHandler_Dummy_Blocking,&I2C_vIRQSourceHandler_Dummy_Blocking,
         &I2C_vIRQSourceHandler_Dummy_Blocking,&I2C_vIRQSourceHandler_Dummy_Blocking,
         &I2C_vIRQSourceHandler_Dummy_Blocking,&I2C_vIRQSourceHandler_Dummy_Blocking,
         &I2C_vIRQSourceHandler_Dummy_Blocking,&I2C_vIRQSourceHandler_Dummy_Blocking,
         &I2C_vIRQSourceHandler_Dummy_Blocking,&I2C_vIRQSourceHandler_Dummy_Blocking,
         &I2C_vIRQSourceHandler_Dummy_Blocking
    },
    {
         &I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy_Blocking,
         &I2C_vIRQSourceHandler_Dummy_Blocking,&I2C_vIRQSourceHandler_Dummy_Blocking,
         &I2C_vIRQSourceHandler_Dummy_Blocking,&I2C_vIRQSourceHandler_Dummy_Blocking,
         &I2C_vIRQSourceHandler_Dummy_Blocking,&I2C_vIRQSourceHandler_Dummy_Blocking,
         &I2C_vIRQSourceHandler_Dummy_Blocking,&I2C_vIRQSourceHandler_Dummy_Blocking,
         &I2C_vIRQSourceHandler_Dummy_Blocking,&I2C_vIRQSourceHandler_Dummy_Blocking,
         &I2C_vIRQSourceHandler_Dummy_Blocking
    },
    {
         &I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy_Blocking,
         &I2C_vIRQSourceHandler_Dummy_Blocking,&I2C_vIRQSourceHandler_Dummy_Blocking,
         &I2C_vIRQSourceHandler_Dummy_Blocking,&I2C_vIRQSourceHandler_Dummy_Blocking,
         &I2C_vIRQSourceHandler_Dummy_Blocking,&I2C_vIRQSourceHandler_Dummy_Blocking,
         &I2C_vIRQSourceHandler_Dummy_Blocking,&I2C_vIRQSourceHandler_Dummy_Blocking,
         &I2C_vIRQSourceHandler_Dummy_Blocking,&I2C_vIRQSourceHandler_Dummy_Blocking,
         &I2C_vIRQSourceHandler_Dummy_Blocking
    },
    {
         &I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy_Blocking,
         &I2C_vIRQSourceHandler_Dummy_Blocking,&I2C_vIRQSourceHandler_Dummy_Blocking,
         &I2C_vIRQSourceHandler_Dummy_Blocking,&I2C_vIRQSourceHandler_Dummy_Blocking,
         &I2C_vIRQSourceHandler_Dummy_Blocking,&I2C_vIRQSourceHandler_Dummy_Blocking,
         &I2C_vIRQSourceHandler_Dummy_Blocking,&I2C_vIRQSourceHandler_Dummy_Blocking,
         &I2C_vIRQSourceHandler_Dummy_Blocking,&I2C_vIRQSourceHandler_Dummy_Blocking,
         &I2C_vIRQSourceHandler_Dummy_Blocking
    },
    {
         &I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy_Blocking,
         &I2C_vIRQSourceHandler_Dummy_Blocking,&I2C_vIRQSourceHandler_Dummy_Blocking,
         &I2C_vIRQSourceHandler_Dummy_Blocking,&I2C_vIRQSourceHandler_Dummy_Blocking,
         &I2C_vIRQSourceHandler_Dummy_Blocking,&I2C_vIRQSourceHandler_Dummy_Blocking,
         &I2C_vIRQSourceHandler_Dummy_Blocking,&I2C_vIRQSourceHandler_Dummy_Blocking,
         &I2C_vIRQSourceHandler_Dummy_Blocking,&I2C_vIRQSourceHandler_Dummy_Blocking,
         &I2C_vIRQSourceHandler_Dummy_Blocking
    },
    {
         &I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy_Blocking,
         &I2C_vIRQSourceHandler_Dummy_Blocking,&I2C_vIRQSourceHandler_Dummy_Blocking,
         &I2C_vIRQSourceHandler_Dummy_Blocking,&I2C_vIRQSourceHandler_Dummy_Blocking,
         &I2C_vIRQSourceHandler_Dummy_Blocking,&I2C_vIRQSourceHandler_Dummy_Blocking,
         &I2C_vIRQSourceHandler_Dummy_Blocking,&I2C_vIRQSourceHandler_Dummy_Blocking,
         &I2C_vIRQSourceHandler_Dummy_Blocking,&I2C_vIRQSourceHandler_Dummy_Blocking,
         &I2C_vIRQSourceHandler_Dummy_Blocking
    },
};

static void I2C_vIRQSourceHandler_Dummy_Blocking(void)
{
    while(1UL){}
}

static void I2C_vIRQSourceHandler_Dummy(void)
{
}


void (*I2C_Master__pvfGetIRQSourceHandler(I2C_nMODULE enI2CPort,
                                    I2C_nMASTER_INTERRUPT enInterruptNumber))(void)
{
    void(*pvfFunctionReg)(void) = (void(*)(void)) 0UL;
    pvfFunctionReg = I2C_Master__vIRQSourceHandler[(uint32_t) enI2CPort][(uint32_t) enInterruptNumber];
    return (pvfFunctionReg);
}

void (**I2C_Master__pvfGetIRQSourceHandlerPointer(I2C_nMODULE enI2CPort,
                                            I2C_nMASTER_INTERRUPT enInterruptNumber))(void)
{
    void(**pvfFunctionReg)(void) = (void(**)(void)) 0UL;
    pvfFunctionReg = (void(**)(void)) &I2C_Master__vIRQSourceHandler[(uint32_t) enI2CPort]
                                                              [(uint32_t) enInterruptNumber];
    return (pvfFunctionReg);
}
