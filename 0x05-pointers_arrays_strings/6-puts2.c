#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts2 - prints every other character of a string
 * with the first character followed by a new line
 * @str: string to print
 *
 * Return: Always 0
 */
void puts2(char *str)
{
	int i;
	int len = strlen(str);

	for (i = 0; i < len; i++)
	{
		if (str[i] % 2 == 0)
		{
			printf("%c", str[i]);
		}
	}
	printf("\n");
}
