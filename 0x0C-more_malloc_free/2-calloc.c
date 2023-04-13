#include "main.h"

/**
 * _calloc - a function that allocates a memory for an array
 * @nmemb: parameter
 * @size: parameter
 * Return: NULL oe string
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *str;
	unsigned int i;

	str = malloc(nmemb * size);
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	if (!str)
	{
		return (NULL);
	}
	for (i = 0; i < (nmemb * size); i++)
	{
		str[i] = 0;
	}
	return (str);
}
