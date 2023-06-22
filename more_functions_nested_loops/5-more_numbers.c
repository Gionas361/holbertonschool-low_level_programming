#include "main.h"
#include <stdio.h>

/**
 * more_numbers - prints the numbers from 0 to 14
 *
 * Return: gives out the result of calculation.
 */

int more_numbers(void)
{
	int r;
	int count;

	for (count = 0 ; count <= 9 ; count++)
	{
		for (r = 0 ; r <= 14 ; r++)
		{
			printf("%d", r);
		}
		printf("\n");
	}
	return (0);
}
