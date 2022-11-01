#include <stdio.h>
#include "main.h"

/**
 * _memset - fills first n bytes of memory area
 * @n: bytes of memory area
 * @s: pointer
 * @b: constant byte
 *
 * Return: Returns a pointer to the memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
