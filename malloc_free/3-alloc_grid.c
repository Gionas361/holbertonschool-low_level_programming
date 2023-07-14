#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - prints a grid of integers
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: Nothing.
 */

int **alloc_grid(int width, int height)
{
	int **griid;
    int w, h;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	griid = malloc(sizeof(int *) * height);
	if (griid == NULL)
	{
		return (NULL);
	}

	for (h = 0 ; h < height ; h++)
	{
		griid[h] = malloc(sizeof(int) * width);
		if (griid[h] == NULL)
		{
			for (w = 0 ; w < h ; w++)
			{
			}
			free(griid[w]);
		}
	}

	for (h = 0 ; h < height ; h++)
	{
		for (w = 0 ; w < width ; w++)
		{
			griid[h][w] = 0;
		}
	}

	return (griid);
}
