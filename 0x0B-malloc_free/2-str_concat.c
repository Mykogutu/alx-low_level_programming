#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: Concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	int i;
	int j;
	int slen;

	if (s1 != NULL)
	{
		for (i = 0; s1[i]; i++)
			;
	}
	if (s2 != NULL)
	{
		for (j = 0; s2[j]; j++)
			;
	}
	concat_str = malloc(sizeof(char) * (i + j + 1));
	if (concat_str == 0)
	{
		return (NULL);
	}
	for (slen = 0; slen < (i + j); slen++)
	{
		if (slen < i)
		{
			concat_str[slen] = s1[slen];
		}
		else
		{
			concat_str[slen] = s2[slen - i];
		}
	}
	concat_str[slen] = 0;
	return (concat_str);
}
