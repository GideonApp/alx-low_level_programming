#include "main.c"

/**
 * _strstr - compare 2 string and print similarities
 * @haystack: 1st string
 * @needle: 2nd string
 * Return: similarities
 */

char *_strstr(char *haystack, char *needle)
{
	char *s1 = haystack;
	char *s2 = needle;

	for (; *haystack != '\0'; hayback++)
	{
		while(*s1 == *s2 && *s2 != '\0')
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
		{
			return (hayback);
		}
	}
	return (0);
}
