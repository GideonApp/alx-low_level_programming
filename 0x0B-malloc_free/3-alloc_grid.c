#include "main.h"

/**
 * alloc_grid - allocate a two dimensional
 * @width: 1st parameter
 * @hight: 2nd parameter
 * Return: NULL on failure
 */

int  **alloc_grid(int width, int height)
{
	int **str;
	int i;
	int j;

	if (width < 1 || height < 1)
	{
		return (NULL);
	}
	str = malloc((**str) * height);

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		str[i] = malloc(sizeof(int) * width);
		if (str[i] == NULL)
		{
			for (; i >= 0; i--)
			{
				free(str[i]);
			}
			free(str);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			str[i][j] = 0;
		}
	}
	return (str);
}
