#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a new allocated space
 * @str: string parameter to copy
 *
 * Returns: A pointer
 */
char *_strdup(char *str)
{
	int i;
	char *str2;

	if (str == 0)
	{
		return (0);
	}
	for (i = 0; str[i]; i++)
		;
	str2 = (char *)malloc(sizeof(char) * (i + 1));
	if (str2 == 0)
	{
		return (0);
	}
	str2[i] = '\0';
	while (i--)
	{
		str2[i] = str[i];
	}
	return (str2);
}
