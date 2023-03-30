#include "main.h"

/**
 * _strcmp - funtion that compares 2 strings
 * @s1: 1st array
 * @s2: 2nd array
 * Return: 0 when equal, and 1 when s1 > s2 and vice versa
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
