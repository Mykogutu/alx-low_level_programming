#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: parameter for memory allocation
 *
 * Return: Address.
 */
void *malloc_checked(unsigned int b)
{
	int *memory = malloc(b);

	if (memory == NULL)
	{
		exit(98);
	}
	return (memory);
}
