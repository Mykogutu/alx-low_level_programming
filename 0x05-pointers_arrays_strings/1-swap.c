#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps the values of two integers
 * @a: first integer
 * @b: the second integer
 *
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int swp  = *a;
	*a = *b;
	*b = swp;
}
