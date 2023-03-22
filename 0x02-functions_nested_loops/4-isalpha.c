#include "main.h"

/**
 * _isalpha - whether is an alphabet or not
 * @c: intiger
 * Return: 1 and 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
