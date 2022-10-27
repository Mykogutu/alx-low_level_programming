#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strncpy - a function that copies strings
 * @dest: The destination string
 * @src: The source string
 * @n: number of characters to be copied
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
