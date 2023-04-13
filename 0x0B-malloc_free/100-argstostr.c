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
	int i, j, k, l = 0;

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
		k += 1;
	}
	k += 1;
	str = malloc(k * sizeof(*str));
	if (str == NULL)
	{
		free(str);
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[l] = av[i][j];
			l++;
		}
		str[l] = '\n';
		l++;
	}
	str[l] = '\0';
	return (str);
}
