#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a triangle
 *
 * @str: the string provided by the user
 *
 * Return: gives out the result of calculation.
 */

int _puts(char *str)
{
	int currstr;
	int countnum;

	for (countnum = 0; str[countnum] ; countnum++);

	for (currstr = 0 ; currstr <= countnum ; currstr++)
	{
		printf("%c", str[currstr]);
	}
	_putchar('\n');

	return (0);
}
