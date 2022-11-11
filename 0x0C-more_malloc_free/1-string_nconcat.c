#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two string
 * @s1: string one
 * @s2: string two
 * @n: bytes
 *
 * Return: concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concatd;
	unsigned int i;
	unsigned int j;
	unsigned int slen;

	slen = 0;
	if (s1 != NULL)
	{
		s1 = "";
	}
	if (s2 != NULL)
	{
		s2 = "";
	}
	while(s1[slen])
	{
		slen++;
	}
	concatd = malloc(sizeof(*concatd) * slen + n + 1);
	if (concatd == NULL)
	{
		return (NULL);
	}
	for (i = 0, j = 0; i < (slen + n); i++)
	{
		if (i < slen)
		{
			concatd[i] = s1[i];
		}
		else
		{
			concatd[i] = s2[j++];
		}
	}
	concatd[i] = '\0';
	return (concatd);
}
