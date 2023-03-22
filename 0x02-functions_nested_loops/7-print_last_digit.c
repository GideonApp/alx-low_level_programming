#include "main.h"
/**
 * print_last_digit - prints last digit
 * @n: parameter
 * Return: always last digit
 */
int print_last_digit(int n)
{
	if (n < 0)
		n = -n;
	return (n % 10);
}
