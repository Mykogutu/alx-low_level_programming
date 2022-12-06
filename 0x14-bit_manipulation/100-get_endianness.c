#include <stdio.h>
#include "main.h"
#include <stdint.h>

/**
 * get_endianness - checks the endianness
 *
 * Returns: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	uint32_t test = 1;
	char *testPtr = (char *) &test;

	return ((int) *testPtr);
}

