#include "main.h"

/**
 * _sqrt_recursion - a fuction that returns the square root of a number
 * @n: parameter
 * Retern: always the square root 
 */

int _sqrt_recursion(int n)
{
	int i = 0;

	if (n < 0)
	{
		return (-1);
	}
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	i = 1 + return (_sqrt_recursion(n));
}
