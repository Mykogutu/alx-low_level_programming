#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strncat - concatenates two strings
 * @dest: Destination string
 * @src: Source string
 * @n: number of characters
 * Return: returns concatenated string with n characters
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int size1 = strlen(dest);

	for (i = 0; i < n; i++)
	{
		dest[size1 + i] = src[i];
	}
	return (dest);
}
