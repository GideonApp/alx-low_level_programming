#include "main.h"

/**
 * _puts - a function that prints a string
 * @str: parameter
 */

void _puts(char *str)
{
	int j = 0;

	while (str[j] != '\0')
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
