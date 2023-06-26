#include "main.h"
#include <stdio.h>

/**
 * puts_half - prints a triangle
 *
 * @str: the string provided by the user
 *
 * Return: gives out the result of calculation.
 */

int puts_half(char *str)
{
	int currstr;
	int countnum;
	int halfcountnum;

	for (countnum = 0; str[countnum] ; countnum++)
	{}

	halfcountnum = countnum / 2;

	for (currstr = 0 ; currstr <= halfcountnum ; currstr++)
	{
		printf("%c", str[currstr + halfcountnum]);
	}
	printf("\n");

	return (0);
}