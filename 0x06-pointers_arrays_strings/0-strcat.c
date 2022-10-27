#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcat - concatinates two strings
 * @dest: string one
 * @src: string two
 * Return: A concatinated string
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
