#include "main.h"

int prime2(int n, int i);
/**
 * is_prime_number - determine whether a numberis prime or not
 * @n: parameter
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	int i = n / 2;

	if (n <= 1)
	{
		return (0);
	}
	return (prime2(n, i));
}
/**
 * prime2 - helper
 * @n: parameter
 * @i: parameter
 * Return: parameter
 */
int prime2(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (prime2(n, i - 1));
}
