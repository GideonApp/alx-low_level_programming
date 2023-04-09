#include "main.h"

/**
 * _puts_recursion -  a funtion tha t prints a string.
 * @s: parameter holding the string
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\0');
	}
}
