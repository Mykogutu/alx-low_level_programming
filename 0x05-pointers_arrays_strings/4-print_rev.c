#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - prints a string in reverse
 * @s: String of text
 *
 * Return: Always 0
 */
void print_rev(char *s)
{
	int len = strlen(s);
	int devd = len / 2;
	char strg;
	int i;

	for (i = 0; i < devd; i++)
	{
		strg = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = strg;
	}
}
