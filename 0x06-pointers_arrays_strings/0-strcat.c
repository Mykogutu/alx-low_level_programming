#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src : source string
 *
 * Return: concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int len1 = strlen(dest);
	int len2 = strlen(src);

	for (i = 0; i < len2; i++)
	{
		dest[len1 + i] = src[i];
	}
}
