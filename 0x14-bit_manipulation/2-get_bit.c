#include "main.h"
#include <stdio.h>

/**
 * get_bit - gets the value of a bit at a given idex
 * @n: the number at the index
 * @index: the index staarting from 0
 * Return: the value of a bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(n) * 8 - 1)
	{
		return (-1);
	}
	return ((n >> index) & 1);
}
