#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - Copy a string
 *
 * @c: the string provided by the user
 *
 * Return: gives out the result of calculation.
 */

void _print_rev_recursion(char *c)
{
	if (*c == '\0')
	{
		return;
	}

	c++;
	_print_rev_recursion(c);
	c--;
	_putchar(*c);
}
