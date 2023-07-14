#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - prints a grid of integers
 * @b: the size to allocate
 *
 * Return: Nothing.
 */

void *malloc_checked(unsigned int b)
{
    void *dance;

    dance = malloc(b);

    if (dance == NULL)
    {
        exit (98);
    }

    return (dance);
}
