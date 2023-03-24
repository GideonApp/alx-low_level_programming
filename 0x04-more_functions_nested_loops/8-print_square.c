#include "main.h"

/**
 * print_square - function that prints a square
 * @size: parameter that determines the length and width
 */

void print_square(int size)
{
	int l, w;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (l = 1; l <= size; l++)
		{
			for (w = 1; w <= size; w++)
			{
				_putchar('#');
			}
			_putchar('\n')
		}
	}
}
