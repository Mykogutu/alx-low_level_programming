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
	unsigned int slen2;

	if (s1 != NULL)
	{
		s1 = "";
	}
	if (s2 != NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	if (n < j)
	{
		j = n;
	}
	j += i;
	concatd = malloc(sizeof(char *) * (j + 1));
	if (concatd == NULL)
	{
		return (NULL);
	}
	for (slen = 0; slen < i; slen++)
	{
		concatd[slen] = s1[slen];
	}
	for (slen2 = 0; slen < j; slen2++)
	{
		concatd[slen] = s2[slen2];
		slen++;
	}
	slen++;
	concatd[slen] = '\0';
	return (concatd);
}
