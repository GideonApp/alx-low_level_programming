#include "main.h"
#include "stdio.h"

/**
 * print_diagsums - print the sum of 2 diagonals
 * @a: array
 * @size: parameter
 */

void print_diagsums(int *a, int size)
{
	int i = 0;
	int j = 0;
	int k = 0;

	for (; k < size; k++)
	{
		i = i + a[k * size + k];
	}
	for (k = size - 1; k >= 0; k--)
	{
		j = j + a[k * size + (size - k - 1)];
	}
	printf("%d, %d\n", i, j);
}
