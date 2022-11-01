#include "main.h"
#include <stdio.h>

/**
 * _memcpy - copies memory area
 * @n: number of bytes to copy
 * @src: memory area to copy
 * @dest: memory destination
 *
 * Return: returns dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
