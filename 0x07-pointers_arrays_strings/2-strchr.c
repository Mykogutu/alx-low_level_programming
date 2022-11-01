#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates a character in c
 * @c: first character to locate
 * @s: a string
 *
 * Return: Returns the firs occurace of the charcter
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i]!= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s);
		}
	}
	return (NULL);
}
