#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - prints the numbers from 0 to 9, except 2 and 4
 *
 * Return: gives out the result of calculation.
 */

int print_most_numbers(void)
{
	int r;

	for (r = 0 ; r <= 9 ; r++)
	{
		if (r == 2 || r == 4)
		{
			r = r + 1;
		}
		printf("%d", r);
	}
	printf("\n");

	return (0);
}
