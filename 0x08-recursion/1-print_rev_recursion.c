#include "main.h"

/**
 * _print_rev_recursion - a function that prints a sring in reverse
 * @s: parameter holding the string
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
	else
	{
		_putchar('\0');
	}
}
