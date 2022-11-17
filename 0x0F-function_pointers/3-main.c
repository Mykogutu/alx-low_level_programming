#include <stdio.h>
#include  "3-calc.h"
#include <stdlib.h>

/**
 * main - check the code
 * @argc: argument count
 * @argv: arguments in array
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int a;
	int b;
	int (*fptr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	fptr = get_op_func(argv[2]);
	if (fptr == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	printf("%d\n", fptr(a, b));
	return (0);
}
