#include "main.h"

/**
 * wildcmp  - compare two strings
 * @s1: 1st string
 * @s2: 2nd string
 * Return: 0 or 1
 */

int wildcmp(char *s1, char *s2)
{
	if  (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	else if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	else
	{
		return (0);
	}
}
