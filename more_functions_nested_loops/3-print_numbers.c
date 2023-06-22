#include "main.h"
#include <stdio.h>

/**
 * print_numbers - prints the numbers from 0 to 9
 *
 * Return: gives out the result of calculation.
 */

int print_numbers(void)
{
	int r;

	for (r = 0 ; r <= 9 ; r++)
	{
		_putchar(r);
	}
	_putchar('\n');

	return (0);
}
