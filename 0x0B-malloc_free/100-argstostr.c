#include "main.h"

/**
 * argstostr - a funcion that concatenates all arguments
 * @ac: parameter
 * @av: parameter
 * Return: a new string pointer or a null
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, k = 0, l = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			k += 1;
		}
	}
	k += ac;
	str = malloc(sizeof(*str) * l + 1);
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[l] = av[i][j];
			l++;
		}
		if (str[l] == '\0')
		{
			str[l++] = '\0';
		}
	}
	return (str);
}
