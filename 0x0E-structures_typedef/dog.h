#include <stdio.h>
#ifndef DOG_H
#define DOG_H

/**
 * struct dog - self declared data type
 * @name: First member
 * @age: second member
 * @owner: third member
 *
 * Description: a struct data type with three variables
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif /* DOG_H */
