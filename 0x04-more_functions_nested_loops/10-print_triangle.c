#include "main.h"

/**
 * print_triangle - funtion that prints atriangle
 * @size: parameter
 */
void print_triangle(int size)
{
	int i, n;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (n = i; n < size; n++)
			{
				_putchar(' ');
			}
			for (n = 1; n <= i; n++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
