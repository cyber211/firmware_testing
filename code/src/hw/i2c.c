/**
 * This file implements the i2c hardware functions and are provided by the
 * SoC vendor. This type of functions (architecture specific) make embedded
 * systems debugging difficult and painful.
 * These functions are mocked in tests/mocks/i2c_mock.cpp by the CppUTest
 * framework and therefore never called.
 */

#include <stdio.h>
#include "common.h"

/**
 * I2c read function.
 */
uint8_t i2c_read(uint8_t address, uint8_t reg_addr)
{
    printf("I2C read from slave 0x%x at reg 0x%x\n", address, reg_addr);
    return 0;
}

/**
 * I2c write function.
 */
uint8_t i2c_write(uint8_t address, uint8_t reg_addr, uint8_t value)
{
    printf("I2C write value 0x%x to reg 0x%x from slave 0x%x\n", value, reg_addr, address);
    return 0;
}
