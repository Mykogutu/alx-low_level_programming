#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints the binary representation of a number
 * @n: number to be converted to binary
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	if ((n & 1) == 0)
	{
		_putchar ('0');
	}
	else
	{
		_putchar('1');
	}
}
