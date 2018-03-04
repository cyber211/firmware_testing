/**
 * Simple math API function.
 */

#include "common.h"

/**
 * Simple 8 bit calculator
 * Tests need to cover all switch cases and check for overflow in return value
 */
uint8_t calculator(char op, uint8_t val1, uint8_t val2)
{
    uint8_t result = 0;

    switch(op) {
        case '+':
            result = (uint8_t)(val1 + val2);
            break;
        case '-':
            result = (uint8_t)(val1 - val2);
            break;
        default:
            break;  /* There is no test covering this case */
    }

    return result;
}