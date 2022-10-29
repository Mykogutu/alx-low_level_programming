#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcmp - compares two strings
 * @s1: First string
 * @s2: Second string
 * Return: Returns the difference between strings
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] == s2[i]; i++)
		if (s2[i] == '\0')
		{
			return (0);
		}
	return (s1[i] - s2[i]);
}


