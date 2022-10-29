#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * reverse_array - reverses array of n items
 * @a: an array of integers
 * @n: number of elements in the array
 *
 * Returns: nothing
 */
void reverse_array(int *a, int n)
{
	int i;

	for (i = n - 1; i >= n / 2; i--)
	{
		if (i != n - 1)
		{
			printf(", ");
		}
		printf("%d", a[i]);
	}
	printf("\n");
}

