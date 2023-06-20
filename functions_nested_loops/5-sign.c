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
	if (n > 0)
	{
		_putchar('+');
		_putchar(',');
		_putchar(' ');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		_putchar(',');
		_putchar(' ');
		return (-1);
	}
	else if (n == 0)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		return (0);
	}
	_putchar('\n');

}
