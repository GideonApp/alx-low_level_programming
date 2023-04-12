#include "main.h"

/**
 * _strdup - allocates  a size to a new array
 * @str: the string
 * Return: null is str = Null
 */

char *_strdup(char *str)
{
	char *str2;
	int i = 0;
	int j = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[i] != '\0')
	{
		i++;
	}
	str2 = malloc(sizeof(*str2) * (i + 1));
	while (*str)
	{
		str2[j] = str[j];
		j++;
	}
	return (str2);
}
