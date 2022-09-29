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


static void I2C_vIRQSourceHandler_Dummy(uintptr_t uptrModuleArg, void* pvArgument);
static void I2C_vIRQSourceHandler_Dummy_NonBlocking(uintptr_t uptrModuleArg, void* pvArgument);

static I2C_pvfIRQSourceHandler_t I2C_Master_vIRQSourceHandler[(uint32_t) I2C_enMODULE_MAX][(uint32_t) I2C_enMASTER_INT_MAX] =
{
 {
  &I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy,
  &I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy,
  &I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy,
  &I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy,
  &I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy,
  &I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy,
  &I2C_vIRQSourceHandler_Dummy_NonBlocking
 },
 {
  &I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy,
  &I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy,
  &I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy,
  &I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy,
  &I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy,
  &I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy,
  &I2C_vIRQSourceHandler_Dummy_NonBlocking
 },
 {
  &I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy,
  &I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy,
  &I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy,
  &I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy,
  &I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy,
  &I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy,
  &I2C_vIRQSourceHandler_Dummy_NonBlocking
 },
 {
  &I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy,
  &I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy,
  &I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy,
  &I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy,
  &I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy,
  &I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy,
  &I2C_vIRQSourceHandler_Dummy_NonBlocking
 },
 {
  &I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy,
  &I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy,
  &I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy,
  &I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy,
  &I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy,
  &I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy,
  &I2C_vIRQSourceHandler_Dummy_NonBlocking
 },
 {
  &I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy,
  &I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy,
  &I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy,
  &I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy,
  &I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy,
  &I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy,
  &I2C_vIRQSourceHandler_Dummy_NonBlocking
 },
 {
  &I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy,
  &I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy,
  &I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy,
  &I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy,
  &I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy,
  &I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy,
  &I2C_vIRQSourceHandler_Dummy_NonBlocking
 },
 {
  &I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy,
  &I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy,
  &I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy,
  &I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy,
  &I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy,
  &I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy,
  &I2C_vIRQSourceHandler_Dummy_NonBlocking
 },
 {
  &I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy,
  &I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy,
  &I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy,
  &I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy,
  &I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy,
  &I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy,
  &I2C_vIRQSourceHandler_Dummy_NonBlocking
 },
 {
  &I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy,
  &I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy,
  &I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy,
  &I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy,
  &I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy,
  &I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy,
  &I2C_vIRQSourceHandler_Dummy_NonBlocking
 },
};

static void I2C_vIRQSourceHandler_Dummy(uintptr_t uptrModuleArg, void* pvArgument)
{
    (void) uptrModuleArg;
    (void) pvArgument;
    while(1UL){}
}

static void I2C_vIRQSourceHandler_Dummy_NonBlocking(uintptr_t uptrModuleArg, void* pvArgument)
{
    (void) uptrModuleArg;
    (void) pvArgument;
}

I2C_pvfIRQSourceHandler_t I2C_Master__pvfGetIRQSourceHandler(I2C_nMODULE enModuleArg, I2C_nMASTER_INT enIntSourceArg)
{
    I2C_pvfIRQSourceHandler_t pvfFunctionReg;
    pvfFunctionReg = I2C_Master_vIRQSourceHandler[(uint32_t) enModuleArg][(uint32_t) enIntSourceArg];
    return (pvfFunctionReg);
}

I2C_pvfIRQSourceHandler_t* I2C_Master__pvfGetIRQSourceHandlerPointer(I2C_nMODULE enModuleArg, I2C_nMASTER_INT enIntSourceArg)
{
    I2C_pvfIRQSourceHandler_t* pvfFunctionReg;
    pvfFunctionReg = &I2C_Master_vIRQSourceHandler[(uint32_t) enModuleArg][(uint32_t) enIntSourceArg];
    return (pvfFunctionReg);
}
