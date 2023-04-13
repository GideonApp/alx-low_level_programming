#include "main.h"

/**
 * string_nconcat - concatenate two strings
 * @s1: 1st string
 * @s2: 2nd string
 * @n: size
 * Return: null or string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *cont;
	unsigned int len1 = 0, len2 = 0;
	unsigned int i = 0, j = 0;

	while (*s1)
	{
		len1++;
	}
	while (*s2)
	{
		len2++;
	}
	if (n < len2)
	{
		cont = malloc(sizeof(char) * (len1 + n + 1));
	}
	else
	{
		cont = malloc(sizeof(char) * (len1 + len2 + 1));
	}
	if (s == NULL)
	{
		return (NULL);
	}
	while (i < len1)
	{
		cont[i] = s1[i];
		i++;
	}
	while (i < (len1 + n) && n < len2)
	{
		cont[i++] = s2[j++];
	}
	while (n >= len2 && i < (len1 + len2))
	{
		cont[i++] = s2[j++];
	}
	cont[i] = '\0';
	return (cont);
}
