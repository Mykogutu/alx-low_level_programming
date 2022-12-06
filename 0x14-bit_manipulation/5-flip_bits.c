#include <stdio.h>
#include "main.h"
/**
 * flip_bits - finds number of bits needed to be fliped to get to a number
 * @n: the number to be flipped
 * @m: number to get to
 *
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;

	while (n > 0 || m > 0)
	{
		if ((n & 1) != (m & 1))
		{
			++count;
		}
		n >>= 1;
		m >>= 1;
	}
	return (count);
}

