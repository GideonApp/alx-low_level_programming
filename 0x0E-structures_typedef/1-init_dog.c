#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * init_dog -a function that initialize a variable type struct dog
 * @d: argument
 * @name: argument
 * @age: argument
 * @owner: argument
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
	}
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
