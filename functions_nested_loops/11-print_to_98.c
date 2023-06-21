#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints out the last digit of the number string provided
 *
 * @n: The string provided by the user
 *
 * Return: gives out the result of calculation.
 */

int print_to_98(int n)
{
    int vnum;

    printf("%d", n);
	for (vnum = n ; n <= 98 ; n++)
	{
        vnum = n;
		printf(", %d", vnum);
	}

	return (0);
}
