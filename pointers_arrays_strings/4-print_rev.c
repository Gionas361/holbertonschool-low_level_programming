#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints a triangle
 *
 * @s: the string provided by the user
 *
 * Return: gives out the result of calculation.
 */

void print_rev(char *s)
{
	int currstr;
	int countnum;

	for (countnum = 0; s[countnum] ; countnum++)
	{}

	for (currstr = countnum ; currstr >= 0 ; currstr--)
	{
		_putchar(s[currstr]);
	}
	_putchar('\n');
}
