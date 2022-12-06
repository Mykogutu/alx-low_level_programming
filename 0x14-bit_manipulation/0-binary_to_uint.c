#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;

	if (b == NULL)
		return (0);
	while (*b != '\0')
	{
		if (*b == '1')
		{
			i = (i << 1) + 1;
		}
		else if ((*b == '0'))
		{
			i <<= 1;
		}
		b++;
	}
	return (i);
}
