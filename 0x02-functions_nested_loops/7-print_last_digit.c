#include "main.h"
/**
 * print_last_digit - prints last digit
 * @n: parameter
 * Return: always last digit
 */
int print_last_digit(int n)
{
	int i;

	i = (n % 10);
	if (i < 0)
		i = (-1 * i);
	_putchar(i + '0');
	return (i);
}
