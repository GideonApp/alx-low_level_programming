#include "main.h"

/**
 * _realloc - function that reallocates a memory block
 * @ptr: string
 * @old_size: parameter
 * @new_size: parameter
 * Return: Null and string
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *str;
	char *str1;
	unsigned int i;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	str = malloc(new_size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	str1 = ptr;
	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
		{
			str[i] = str1[i];
		}
	}
	else
	{
		for (i = 0; i < old_size; i++)
		{
			str[i] = str1[i];
		}
	}
	free(ptr);
	return (str);
}
