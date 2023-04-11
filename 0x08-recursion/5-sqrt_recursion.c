#include "main.h"

int sqrtpart(int n, int i);

/**
 * _sqrt_recursion - a fuction that returns the square root of a number
 * @n: parameter
 * Return: always the square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
}

/**
 * sqrtpart - it does the actual square root
 * @n: parameter
 * @i: parameter
 * Return: the square root
 */

int sqrtpart(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return(sqrtpart(n, i + 1);
