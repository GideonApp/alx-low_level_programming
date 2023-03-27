#include "main.h"

/**
 * _strlen - a function that retuns the length of a string
 * @s: string
 * Return: Always length of a string (Successful)
 */

int _strlen(char *s)
{
	int j = 0;

	while (s[j] != '\0')
	{
		j++;
	}
	return (j);
}
