#include "main.h"
#include <stdio.h>

/**
 * factorial - Copy a string
 *
 * @n: the string provided by the user
 *
 * Return: gives out the result of calculation.
 */  

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

    if (n <= 1)
    {
        return (1);
    }

    return (n * factorial(n - 1));
}
