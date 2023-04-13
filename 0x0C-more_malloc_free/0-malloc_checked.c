#include "main.h"

/**
 * malloc_checked - a function that
 * allocates memory using malloc
 * @b: size
 * Return: 98 if null 0r otherwise str
 */

void *malloc_checked(unsigned int b)
{
	void *str;

	str = malloc(b);
	if (!str)
	{
		return (98);
	}
	return (str);
}
