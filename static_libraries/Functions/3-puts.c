#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a triangle
 *
 * @str: the string provided by the user
 *
 * Return: gives out the result of calculation.
 */

void _puts(char *str)
{
	int countnum;

	for (countnum = 0; str[countnum] != '\0' ; countnum++)
	{
		_putchar(str[countnum]);
	}
	_putchar('\n');
}
