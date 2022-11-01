#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - searches a string for any set of characters
 * @s: string
 * @accept: list of bytes
 *
 * Return: Returns a pointer to the bytes
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				return (accept);
			}
		}
	}
	return (0);
}

