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
	int i = j = 0, k, l;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	str = malloc(sizeof(char) * (i + j + 1));
	if (str == NULL)
	{
		return (NULL);
	}
	for (k = 0; s1[k] != '\0'; k++)
	{
		str[k] = s1[k];
	}
	for (l = 0; s2[l] != '\0'; l++)
	{
		str[k] = s2[l];
		k++;
	}
	str[i] = '\0';
	return (str);
}
