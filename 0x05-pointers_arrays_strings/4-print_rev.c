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
	printf("%s\n", strrev(s));
}
