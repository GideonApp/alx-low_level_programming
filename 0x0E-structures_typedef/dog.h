#ifndef DOG_H
#define DOG_H

/**
 * struct dog - information about a dog
 * @name: name of the Dog
 * @age: age of the Dog
 * @owner: owner of the Dog
 *
 * Description: basic information about a dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
