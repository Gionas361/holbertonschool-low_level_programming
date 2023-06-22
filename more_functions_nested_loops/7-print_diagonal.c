#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - prints a diagonal line
 *
 * @n: the string provided by the user
 *
 * Return: gives out the result of calculation.
 */

int print_diagonal(int n)
{
	int counter;

	for (counter = 0 ; counter <= n ; counter++)
	{
		for (; counter > 0 ; counter--)
		{
			_putchar(" ");
		}
		_putchar("\\")
	}
	_putchar("\n");

	return (0);
}
