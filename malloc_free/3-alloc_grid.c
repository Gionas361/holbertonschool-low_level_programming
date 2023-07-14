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

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	for (height = 0 ; height != '\0' ; height++)
	{
		for (width = 0 ; width != '\0' ; width++)
		{
			griid[height][width] = 0;
		}
	}

	return (griid);
}
