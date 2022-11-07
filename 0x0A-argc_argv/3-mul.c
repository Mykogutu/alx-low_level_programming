#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints multiplication of two numbers
 * @argc: number of arguments
 * @argv: list of arguments
 *
 * Return: Always 0;
 */
int main(int argc, char *argv[])
{
	int result;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	result = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", result);
	return (0);
}
