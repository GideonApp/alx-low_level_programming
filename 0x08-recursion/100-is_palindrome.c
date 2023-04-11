#include "main.h"

int helperfunc(char *s, int len);

/**
 * length - determines the length of a string
 * @s: string
 * Return: 0 or 1
 */

int length(char *s)
{
	int len = 1;

	if (*s)
	{
		len++;
		len += length(s + 1);
	}
	return (len);
}

/**
 * helperfunc - extends the function
 * @s: string
 * @len: length
 * @i: begining parameter
 * Return: 0 or 1
 */

int helperfunc(char *s, int i, int len)
{
	if (s[i] >= s[len])
	{
		return (1);
	}
	else if (s[i] != s[len])
	{
		return (0);
	}
	else
	{
		return (helperfunc(s, i + 1, len - 1));
	}
}
/**
 * is_palindrome - determines whether a string is a palindrome or not
 * @s: string
 * Return: 0 or 1
 */

int is_palindrome(char *s)
{
	int len = length(s);

	if (len <= 1)
	{
		return (1);
	}
	else
	{
		return (helperfunc(s, 0, len - 1));
	}
}
