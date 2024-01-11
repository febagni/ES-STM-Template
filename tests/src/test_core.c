/**
 * @file test_core.c
 *
 * @brief Core functions to the test
 *
 * @copyright MIT License
 *
 */

#include "test_core.h"
#include "mcu.h"

/*****************************************
 * Public Functions Bodies Definitions
 *****************************************/

void test_core_init(void) {
    mcu_init();
}
