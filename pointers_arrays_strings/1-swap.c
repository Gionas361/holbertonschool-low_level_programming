#include "main.h"
#include <stdio.h>

/**
 * swap_int - prints a triangle
 *
 * @a: the string provided by the user
 * @b: the string provided by the user
 *
 * Return: gives out the result of calculation.
 */

int swap_int(int *a, int *b)
{
	int swap1 = *a;
	int swap2 = *b;

	*a = swap2;
    *b = swap1;

	return (0);
}
