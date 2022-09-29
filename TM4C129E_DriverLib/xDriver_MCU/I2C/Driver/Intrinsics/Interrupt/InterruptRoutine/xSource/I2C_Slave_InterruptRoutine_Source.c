/**
 *
 * @file I2C_Slave_InterruptRoutine_Source.c
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
#include <xDriver_MCU/I2C/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/I2C_Slave_InterruptRoutine_Source.h>

static void I2C_vIRQSourceHandler_Dummy(uintptr_t uptrModuleArg, void* pvArgument);

static I2C_pvfIRQSourceHandler_t I2C_Slave_vIRQSourceHandler[(uint32_t) I2C_enMODULE_MAX][(uint32_t) I2C_enSLAVE_INT_MAX] =
{
 {
      &I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy,
      &I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy,
      &I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy,
      &I2C_vIRQSourceHandler_Dummy
 },
 {
      &I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy,
      &I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy,
      &I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy,
      &I2C_vIRQSourceHandler_Dummy
 },
 {
      &I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy,
      &I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy,
      &I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy,
      &I2C_vIRQSourceHandler_Dummy
 },
 {
      &I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy,
      &I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy,
      &I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy,
      &I2C_vIRQSourceHandler_Dummy
 },
 {
      &I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy,
      &I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy,
      &I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy,
      &I2C_vIRQSourceHandler_Dummy
 },
 {
      &I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy,
      &I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy,
      &I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy,
      &I2C_vIRQSourceHandler_Dummy
 },
 {
      &I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy,
      &I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy,
      &I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy,
      &I2C_vIRQSourceHandler_Dummy
 },
 {
      &I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy,
      &I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy,
      &I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy,
      &I2C_vIRQSourceHandler_Dummy
 },
 {
      &I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy,
      &I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy,
      &I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy,
      &I2C_vIRQSourceHandler_Dummy
 },
 {
      &I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy,
      &I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy,
      &I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy,
      &I2C_vIRQSourceHandler_Dummy
 },
};

static void I2C_vIRQSourceHandler_Dummy(uintptr_t uptrModuleArg, void* pvArgument)
{
    (void) uptrModuleArg;
    (void) pvArgument;
    while(1UL){}
}

I2C_pvfIRQSourceHandler_t I2C_Slave__pvfGetIRQSourceHandler(I2C_nMODULE enModuleArg, I2C_nSLAVE_INT enIntSourceArg)
{
    I2C_pvfIRQSourceHandler_t pvfFunctionReg;
    pvfFunctionReg = I2C_Slave_vIRQSourceHandler[(uint32_t) enModuleArg][(uint32_t) enIntSourceArg];
    return (pvfFunctionReg);
}

I2C_pvfIRQSourceHandler_t* I2C_Slave__pvfGetIRQSourceHandlerPointer(I2C_nMODULE enModuleArg, I2C_nSLAVE_INT enIntSourceArg)
{
    I2C_pvfIRQSourceHandler_t* pvfFunctionReg;
    pvfFunctionReg = &I2C_Slave_vIRQSourceHandler[(uint32_t) enModuleArg][(uint32_t) enIntSourceArg];
    return (pvfFunctionReg);
}
