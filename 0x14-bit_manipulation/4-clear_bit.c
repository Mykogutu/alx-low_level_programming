#include <stdio.h>
#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0
 * @n: the value of the bit
 * @index: the index starting from 0
 *
 * Return: 1 if it worked, or -1 if an error occured
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 64)
	{
		return (-1);
	}
	else
	{
		*n &= ~(1 << index);
		return (1);
	}
}
