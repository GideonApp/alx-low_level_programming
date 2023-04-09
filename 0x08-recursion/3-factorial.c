#include "main.h"

/**
 * factorial - a function that returns the factorial of anumber
 * @n: the number
 * Return: always the facrorial
 */

int factorial(int n)
{
	if (n == 0 || n == 1)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
