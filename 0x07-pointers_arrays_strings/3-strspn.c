#include "main.h"

/**
 * _strspn - a funtion that gets the length of prefix
 * @s: 1st string
 * @accept: 2nd string
 * Return: length
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int n = 0;

	for (i = 0; s[i] != '\0' && s[i] != ' '; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
			if (s[i] == accept[j])
			{
				n++;
				break;
			}
	}
	return (n);
}
