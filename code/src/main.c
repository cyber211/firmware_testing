/**
 * This is the main firmware file.
 */

#include <stdio.h>
#include "common.h"

/** 
 * TEST_MAIN macro allows us to test main firmware in tests/t_main.cpp 
 */
#ifdef TEST_MAIN
uint32_t test_main(void)
#else
uint32_t main(void)
#endif
{
    printf("Hello World from Firmware\n");
    return 0;
}