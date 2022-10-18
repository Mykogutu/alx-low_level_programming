#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/** main: The main function
 * 
 * @n: random input
 * Description: The progran checks for positive and negatives
 * Returns: It returns zero, negative or positive.
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
