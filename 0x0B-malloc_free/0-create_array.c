#include "main.h"

/**
 * create_array - it writes an array of chars, and initializes it with a char.
 * @size: size of array
 * @c: char
 * Return: Null if size = 0;
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	int i = 0;

	s = malloc(sizeof(*s) * size);
	if (size == 0 || s == NULL)
	{
		return (NULL);
	}
	while (i == 0)
	{
		s[i] = c;
		i++;
	}
	return (s);
}
