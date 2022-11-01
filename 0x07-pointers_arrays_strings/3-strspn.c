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
	int i;
	int len1 = strlen(s);
	int len2 = strlen(accept);
	int j;
	int count = 0;

	for (i = 0; i < len1; i++)
	{
		for (j = 0; j < len2; j++)
		{
			if (accept[j] == s[i])
			{
				count++;
			}
		}
	}

	return (count);
}

