#include "main.h"
/**
 * _isupper - determines whether a letter is an upper case or not
 * @c: parameter
 * Return: 1 for uppercase and 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
