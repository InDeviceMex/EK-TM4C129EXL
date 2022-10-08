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

static I2C_pvfIRQSourceHandler_t I2C_Master_vIRQSourceHandler[(UBase_t) I2C_enMODULE_MAX][(UBase_t) I2C_enMASTER_INT_MAX] =
{
 {
  &MCU_vIRQSourceHandler_Dummy,&MCU_vIRQSourceHandler_Dummy,
  &MCU_vIRQSourceHandler_Dummy,&MCU_vIRQSourceHandler_Dummy,
  &MCU_vIRQSourceHandler_Dummy,&MCU_vIRQSourceHandler_Dummy,
  &MCU_vIRQSourceHandler_Dummy,&MCU_vIRQSourceHandler_Dummy,
  &MCU_vIRQSourceHandler_Dummy,&MCU_vIRQSourceHandler_Dummy,
  &MCU_vIRQSourceHandler_Dummy,&MCU_vIRQSourceHandler_Dummy,
  &MCU_vIRQSourceHandler_DummyNonBlocking
 },
 {
  &MCU_vIRQSourceHandler_Dummy,&MCU_vIRQSourceHandler_Dummy,
  &MCU_vIRQSourceHandler_Dummy,&MCU_vIRQSourceHandler_Dummy,
  &MCU_vIRQSourceHandler_Dummy,&MCU_vIRQSourceHandler_Dummy,
  &MCU_vIRQSourceHandler_Dummy,&MCU_vIRQSourceHandler_Dummy,
  &MCU_vIRQSourceHandler_Dummy,&MCU_vIRQSourceHandler_Dummy,
  &MCU_vIRQSourceHandler_Dummy,&MCU_vIRQSourceHandler_Dummy,
  &MCU_vIRQSourceHandler_DummyNonBlocking
 },
 {
  &MCU_vIRQSourceHandler_Dummy,&MCU_vIRQSourceHandler_Dummy,
  &MCU_vIRQSourceHandler_Dummy,&MCU_vIRQSourceHandler_Dummy,
  &MCU_vIRQSourceHandler_Dummy,&MCU_vIRQSourceHandler_Dummy,
  &MCU_vIRQSourceHandler_Dummy,&MCU_vIRQSourceHandler_Dummy,
  &MCU_vIRQSourceHandler_Dummy,&MCU_vIRQSourceHandler_Dummy,
  &MCU_vIRQSourceHandler_Dummy,&MCU_vIRQSourceHandler_Dummy,
  &MCU_vIRQSourceHandler_DummyNonBlocking
 },
 {
  &MCU_vIRQSourceHandler_Dummy,&MCU_vIRQSourceHandler_Dummy,
  &MCU_vIRQSourceHandler_Dummy,&MCU_vIRQSourceHandler_Dummy,
  &MCU_vIRQSourceHandler_Dummy,&MCU_vIRQSourceHandler_Dummy,
  &MCU_vIRQSourceHandler_Dummy,&MCU_vIRQSourceHandler_Dummy,
  &MCU_vIRQSourceHandler_Dummy,&MCU_vIRQSourceHandler_Dummy,
  &MCU_vIRQSourceHandler_Dummy,&MCU_vIRQSourceHandler_Dummy,
  &MCU_vIRQSourceHandler_DummyNonBlocking
 },
 {
  &MCU_vIRQSourceHandler_Dummy,&MCU_vIRQSourceHandler_Dummy,
  &MCU_vIRQSourceHandler_Dummy,&MCU_vIRQSourceHandler_Dummy,
  &MCU_vIRQSourceHandler_Dummy,&MCU_vIRQSourceHandler_Dummy,
  &MCU_vIRQSourceHandler_Dummy,&MCU_vIRQSourceHandler_Dummy,
  &MCU_vIRQSourceHandler_Dummy,&MCU_vIRQSourceHandler_Dummy,
  &MCU_vIRQSourceHandler_Dummy,&MCU_vIRQSourceHandler_Dummy,
  &MCU_vIRQSourceHandler_DummyNonBlocking
 },
 {
  &MCU_vIRQSourceHandler_Dummy,&MCU_vIRQSourceHandler_Dummy,
  &MCU_vIRQSourceHandler_Dummy,&MCU_vIRQSourceHandler_Dummy,
  &MCU_vIRQSourceHandler_Dummy,&MCU_vIRQSourceHandler_Dummy,
  &MCU_vIRQSourceHandler_Dummy,&MCU_vIRQSourceHandler_Dummy,
  &MCU_vIRQSourceHandler_Dummy,&MCU_vIRQSourceHandler_Dummy,
  &MCU_vIRQSourceHandler_Dummy,&MCU_vIRQSourceHandler_Dummy,
  &MCU_vIRQSourceHandler_DummyNonBlocking
 },
 {
  &MCU_vIRQSourceHandler_Dummy,&MCU_vIRQSourceHandler_Dummy,
  &MCU_vIRQSourceHandler_Dummy,&MCU_vIRQSourceHandler_Dummy,
  &MCU_vIRQSourceHandler_Dummy,&MCU_vIRQSourceHandler_Dummy,
  &MCU_vIRQSourceHandler_Dummy,&MCU_vIRQSourceHandler_Dummy,
  &MCU_vIRQSourceHandler_Dummy,&MCU_vIRQSourceHandler_Dummy,
  &MCU_vIRQSourceHandler_Dummy,&MCU_vIRQSourceHandler_Dummy,
  &MCU_vIRQSourceHandler_DummyNonBlocking
 },
 {
  &MCU_vIRQSourceHandler_Dummy,&MCU_vIRQSourceHandler_Dummy,
  &MCU_vIRQSourceHandler_Dummy,&MCU_vIRQSourceHandler_Dummy,
  &MCU_vIRQSourceHandler_Dummy,&MCU_vIRQSourceHandler_Dummy,
  &MCU_vIRQSourceHandler_Dummy,&MCU_vIRQSourceHandler_Dummy,
  &MCU_vIRQSourceHandler_Dummy,&MCU_vIRQSourceHandler_Dummy,
  &MCU_vIRQSourceHandler_Dummy,&MCU_vIRQSourceHandler_Dummy,
  &MCU_vIRQSourceHandler_DummyNonBlocking
 },
 {
  &MCU_vIRQSourceHandler_Dummy,&MCU_vIRQSourceHandler_Dummy,
  &MCU_vIRQSourceHandler_Dummy,&MCU_vIRQSourceHandler_Dummy,
  &MCU_vIRQSourceHandler_Dummy,&MCU_vIRQSourceHandler_Dummy,
  &MCU_vIRQSourceHandler_Dummy,&MCU_vIRQSourceHandler_Dummy,
  &MCU_vIRQSourceHandler_Dummy,&MCU_vIRQSourceHandler_Dummy,
  &MCU_vIRQSourceHandler_Dummy,&MCU_vIRQSourceHandler_Dummy,
  &MCU_vIRQSourceHandler_DummyNonBlocking
 },
 {
  &MCU_vIRQSourceHandler_Dummy,&MCU_vIRQSourceHandler_Dummy,
  &MCU_vIRQSourceHandler_Dummy,&MCU_vIRQSourceHandler_Dummy,
  &MCU_vIRQSourceHandler_Dummy,&MCU_vIRQSourceHandler_Dummy,
  &MCU_vIRQSourceHandler_Dummy,&MCU_vIRQSourceHandler_Dummy,
  &MCU_vIRQSourceHandler_Dummy,&MCU_vIRQSourceHandler_Dummy,
  &MCU_vIRQSourceHandler_Dummy,&MCU_vIRQSourceHandler_Dummy,
  &MCU_vIRQSourceHandler_DummyNonBlocking
 },
};


I2C_pvfIRQSourceHandler_t I2C_Master__pvfGetIRQSourceHandler(I2C_nMODULE enModuleArg, I2C_nMASTER_INT enIntSourceArg)
{
    I2C_pvfIRQSourceHandler_t pvfFunctionReg;
    pvfFunctionReg = I2C_Master_vIRQSourceHandler[(UBase_t) enModuleArg][(UBase_t) enIntSourceArg];
    return (pvfFunctionReg);
}

I2C_pvfIRQSourceHandler_t* I2C_Master__pvfGetIRQSourceHandlerPointer(I2C_nMODULE enModuleArg, I2C_nMASTER_INT enIntSourceArg)
{
    I2C_pvfIRQSourceHandler_t* pvfFunctionReg;
    pvfFunctionReg = &I2C_Master_vIRQSourceHandler[(UBase_t) enModuleArg][(UBase_t) enIntSourceArg];
    return (pvfFunctionReg);
}
