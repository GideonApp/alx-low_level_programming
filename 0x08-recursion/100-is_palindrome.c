#include "main.h"

int helperfunc(char *s, int len);

/**
 * is_palindrome - determines whether a string is a palindrome or not
 * @s: string
 * Return: 0 or 1
 */

int is_palindrome(char *s)
{
	int len = 1;

	if (*s)
	{
		len++;
		len += is_palindrome(s + 1);
	}
	return (helperfunc(s, len));
}

/**
 * helperfunc - extends the function
 * @s: string
 * @len: length
 * Return: 0 or 1
 */

int helperfunc(char *s, int len)
{
	if (len == 0 || len == 1)
	{
		return (1);
	}
	if (s[0] == s[len - 1])
	{
		s[len - 1] = '\0';
		return (helperfunc((s + 1), (len - 1)));
	}
	return (0);
}
