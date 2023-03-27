#include "main.h"

/**
 * swap_int - a function that swaps the value of twoo integers
 * @a: first parameter
 * @b: second parameter
 */

void swap_int(int *a, int *b)
{
	int cont;

	cont = *a;
	*a = *b;
	*b = cont;
}
