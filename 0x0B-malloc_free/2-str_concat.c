#include "main.h"

/**
 * str_concat - concatenates two strings into one string
 * @s1: 1st string
 * @s2: 2nd string
 * Return: the concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	char *str;
	int i, j, k, l;

	while (*s1)
	{
		i++;
	}
	while (*s2)
	{
		j++;
	}
	str = malloc(sizeof(char) * (i + j));
	for (k = 0; s1[k] != '\0'; k++)
	{
		str[k] = s1[k];
	}
	for (l = 0; s2[l] != '\0'; l++; k++)
	{
		str[k] = s2[l];
	}
	if (str == NULL)
	{
		return (NULL);
	}
	return (str);
}
