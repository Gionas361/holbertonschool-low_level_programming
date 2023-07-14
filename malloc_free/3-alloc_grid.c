#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_grid - prints a grid of integers
 * @grid: the address of the two dimensional grid
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

	griid = malloc(sizeof(int *) * height);
	if (griid == NULL)
	{
		return (NULL);
	}

	for (height = 0 ; height != '\0'; height++)
	{
		griid[height] = malloc(sizeof(int) * width);
		if (griid[height] == NULL)
		{
            for (width = 0 ; width != '\0' ; width++)
            {
			    free(griid[width]);
            }
		}
		free(griid);
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
