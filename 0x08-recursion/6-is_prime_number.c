#include "main.h"

/**
 * is_prime_number - determine whether a numberis prime or not
 * @n: parameter
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	int i = n - 1;

	if (i <= 1)
	{
		return (0);
	}
	if (n <= 0)
	{
		return (0);
	}
	if (!(n % i == 0 && i > 0))
	{
		return (1);
	}
	if (n % i == 0 && i > 0)
	{
		return (0);
	}
	i--;
	i -= is_prime_number(n);
}
