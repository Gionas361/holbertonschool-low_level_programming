#include "main.h"
#include <stdio.h>

/**
 * print_array - prints a triangle
 *
 * @a: the string provided by the user
 * @n: the string provided by the user
 *
 * Return: gives out the result of calculation.
 */

void print_array(int *a, int n)
{
	int currstr ;
	int countnum = n;

	for (countnum = 0; a[countnum] != '\0' ; countnum++)
	{}

	for (currstr = -1 ; currstr < countnum ; currstr++)
	{
		_putchar(a[currstr]);
		if (currstr +1 < countnum)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
