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

    griid = malloc(sizeof(int *) * height);

    if (width <= 0 || height <= 0)
    {
        return (NULL);
    }

    for (; height != '\0' ; height++)
    {
        for (; width != '\0' ; width++)
        {
            griid[height][width] = 0;
        }
    }

    return (griid);
}