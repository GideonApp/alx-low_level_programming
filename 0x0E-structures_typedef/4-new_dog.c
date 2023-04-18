#include <string.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - function that creates a new dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: 0 for a fail function
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *str = (dog_t *) malloc(sizeof(dog_t));

	if (str == NULL)
	{
		return (NULL);
	}
	str->name = (char *) malloc(strlen(name) + 1);
	if (str->name == NULL)
	{
		return (NULL);
	}
	strcpy(str->name, name);

	str->owner = (char *) malloc(strlen(owner) + 1);
	if (str->owner == NULL)
	{
		return (NULL);
	}
	strcpy(str->owner, owner);
	str->age = age;
	return (str);
}
