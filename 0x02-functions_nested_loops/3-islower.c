#include "main.h"

/**
 * _islower - if c lowercase 0 and 1 otherwise
 * @c: intiger
 * Return: 1 and 0 depending on condition
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
