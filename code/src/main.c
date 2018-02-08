/**
 * This is the main file with firmware code.
 */

#include <stdio.h>
#include "common.h"

/**
 * Device configuration
 */
void init_device(void)
{
    i2c_write(I2C_SLAVE_ADDRESS, I2C_REG1, I2C_START_DEV); /* Start device */
}

/** 
 * TEST_MAIN macro allows to test firmware code in tests/t_main.cpp
 */
#ifdef TEST_MAIN
uint32_t test_main(void)
#else
uint32_t main(void)
#endif
{
    printf("Hello World from Firmware\n");

    uint8_t reg = 0;

    init_device();

    /**
     * Use case: Firmware tries to read I2C_REG2, if successful it
     * will read I2C_REG3, otherwise tries to configure device again.
     */
    reg = i2c_read(I2C_SLAVE_ADDRESS, I2C_REG2);
    if (reg > 0x10) {
        i2c_read(I2C_SLAVE_ADDRESS, I2C_REG3);
    } else {
        init_device();
    }

    return 0;
}