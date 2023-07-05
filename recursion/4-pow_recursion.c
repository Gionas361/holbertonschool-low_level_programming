#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - Copy a string
 *
 * @x: the string provided by the user
 * @y: the string provided by the user
 *
 * Return: gives out the result of calculation.
 */  

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

    if (y == 0)
    {
        return (1);
    }

    return (x * _pow_recursion(x, y - 1));
}
