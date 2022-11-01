#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * strspn - gets the length of a prefix substring
 * @s: substring
 * @accept: bytes
 *
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; i < s[i]; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				break;
			}
		}
		if (s[i] == '\0')
		{
			break;
		}
	}
	return (i);
}

