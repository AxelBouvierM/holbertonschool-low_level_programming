#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - concatena strings
 * @width: Variable.
 * @height: Variable.
 * Return: puntero a cadenas concatenadas
 */
int **alloc_grid(int width, int height)
{
	int **str;
	int i;
	int x = 0;

	if (width <= 0)
	{
		return (NULL);
	}
	if (height <= 0)
	{
		return (NULL);
	}
	str = malloc(height * sizeof(int *));
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		str[i] = malloc(width * sizeof(int));
		if (str[i] == NULL)
		{
			for (x = 0; x < width; x++)
			{
				free(str[x]);
			}
			free(str);
			return (NULL);
		}
		str[i][x] = 0;
	}
	return (str);
}
