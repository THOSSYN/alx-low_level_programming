#include "main.h"
#include <stdlib.h>

/**
 *alloc_grid - allocates memory to a 2-D array
 *@width: like row in 2-D array
 *@height: like columns in 2-D array
 *Return: the pointer to the alloc memory.
 */

int **alloc_grid(int width, int height)
{
	int i, j;

	int **ptw_h = malloc(sizeof(int *) * height);

	if (ptw_h == NULL)
	{
		return (NULL);
	}
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		ptw_h[i] = malloc(sizeof(int) * width);
		if (ptw_h[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(ptw_h[j]);
			}
			free(ptw_h);
			return (NULL);
		}
	}
	return (ptw_h);
}
