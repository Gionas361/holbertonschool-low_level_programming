#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints a triangle
 *
 * @str: the string provided by the user
 *
 * Return: gives out the result of calculation.
 */

void puts2(char *str)
{
	int currstr;
	int countnum;

	for (countnum = 0 ; str[countnum] != '\0' ; countnum++)
	{
	}

	for (currstr = 0 ; currstr < countnum ; currstr+=2)
	{
		_putchar(str[currstr]);
	}
	_putchar('\n');
}
