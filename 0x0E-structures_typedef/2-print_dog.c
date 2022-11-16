#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints a struct named dog
 * @d: pointer to the struct
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	if ((d->name == NULL) || (d->owner == NULL))
	{
		printf("(nil)");
	}
	printf("Name :%s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
