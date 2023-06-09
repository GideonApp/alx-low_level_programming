#include "main.h"

/**
 * _strlen_recursion - a function that prints the lenght of a string
 * @s: parameter holding the srring
 * Return: always the length of the string
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		i++;
		i = 1 + _strlen_recursion(s + 1);
	}
	return (i);
}
