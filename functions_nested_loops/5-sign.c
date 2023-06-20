#include "main.h"
#include <stdio.h>

/**
 * print_sign - prints 1 of the string provided is a lower case letter
 *            and prints 0 if the string is anything else.
 *
 * @n: The string provided by the user
 *
 * Return: gives out the result of calculation.
 */
int print_sign(int n)
{
    char f;

	if (n > 0)
	{
		_putchar('+');
		_putchar(',');
		_putchar(' ');
		f = 1;
	}
	else if (n < 0)
	{
		_putchar('-');
		_putchar(',');
		_putchar(' ');
		f = -1;
	}
	else if (n == 0)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		f = 0;
	}
	return (f);
	_putchar('\n');
}
