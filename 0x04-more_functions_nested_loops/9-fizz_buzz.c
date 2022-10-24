#include <stdio.h>
/**
 * main - prints Fizz for multiples of 3
 * and buxx for multiples of 5 and
 * fizzbuzz for multiples of 3 and 5
 *
 * Return: Always 0.
 */
int main(void)
{
	int numbers = 1;

	while (numbers <= 100)
	{
		if (numbers % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (numbers % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (numbers % 3 == 0 && numbers % 5 == 0)
		{
			printf("Fizz Buzz ");
		}
		else
		{
			printf("%d ", numbers);
		}
		numbers++;
	}
	printf("\n");
	return (0);
}



