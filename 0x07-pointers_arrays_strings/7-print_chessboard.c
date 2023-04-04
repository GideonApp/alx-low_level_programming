#include "main.h"

/**
 * print_chessboard - prints chessboard
 * @a: array
 */

void print_chessboard(char (*a)[8])
{
	int i = 0;
	int j = 0;

	while (i < 8)
	{
		while (j < 0)
		{
			_putchar (a[i][j]);
			j++;
		}
		i++;
		_putchar ('\n');
	}
}
