#include "main.h"

/**
 * _strspn - a funtion that gets the length of prefix
 * @s: 1st string
 * @accept: 2nd string
 * Return: length
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j = 0;
	int len = 0;

	while (s[i] != '\0')
	{
		while (accept[j] != '\0')
		{
			if ( s[i] == accept[j])
			{
				len++;
			}
			j++;
		}
		i++;
	}
	return (len);
}
