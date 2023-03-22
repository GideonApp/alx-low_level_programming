#include "main.h"
/**
 * print_last_digit - prints last digit
 * @i: parameter
 * Return: always last digit
 */

int print_last_digit(int i)
{
	i = i % 10;
	_putchar (i);
	return (i);
}
