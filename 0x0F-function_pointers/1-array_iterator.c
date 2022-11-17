#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given a param on each elem
 * of an array
 * @array: array
 * @size: size of array
 * @action: pointer function
 */
void array_iterator(int *array, size_t size, void(*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
