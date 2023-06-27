#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints a triangle
 *
 * @s: the string provided by the user
 *
 * Return: gives out the result of calculation.
 */

void print_rev(char *str)
{
	int countnum;

	for (; str[countnum] != '\0' ; countnum--)
	{
		_putchar(str[countnum]);
	}

	_putchar('\n');
}
