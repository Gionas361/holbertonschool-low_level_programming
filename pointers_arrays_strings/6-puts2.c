#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints a triangle
 *
 * @str: the string provided by the user
 *
 * Return: gives out the result of calculation.
 */

int puts2(char *str)
{
	int currstr;
	int countnum;

	for (countnum = 0; str[countnum] ; countnum++)
	{}

	for (currstr = -1 ; currstr <= countnum ; currstr++)
	{
		currstr++;
		printf("%c", str[currstr]);
	}
	printf("\n");

	return (0);
}
