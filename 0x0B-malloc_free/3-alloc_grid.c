#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimentional array
 * @width: with of the array
 * @height: height of the array
 *
 * Return: A two dimentional array
 */
int **alloc_grid(int width, int height)
{
	int **twoDimenArray;
	int i;
	int j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	twoDimenArray = malloc(sizeof(int *) * width);
	if (twoDimenArray == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < width; i++)
	{
		twoDimenArray[i] = malloc(height * sizeof(int));
		if (twoDimenArray[i] == NULL)
		{
			return (NULL);
		}
	}

	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			twoDimenArray[i][j] = 0;
		}
	}
	return (twoDimenArray);	
	
	for (i = 0; i < width; i++)
	{
		free(twoDimenArray);
	}
}
