#include "main.h"
#include <stdio.h>

/**
 * puts_half - prints a triangle
 *
 * @str: the string provided by the user
 *
 * Return: void
 */

void puts_half(char *str)
{
	int currstr;
	int countnum;
	int halfcountnum;

	for (countnum = 0; str[countnum] != '\0' ; countnum++)
	{}

	if ((countnum % 2) == 1)
	{
		halfcountnum = (countnum - 1) / 2;
		halfcountnum += 1;
	}
	else
	{
		halfcountnum = countnum / 2;
	}

	for (currstr = 0 ; currstr <= halfcountnum ; currstr++)
	{
		_putchar(str[currstr + halfcountnum]);
	}
	_putchar('\n');
}
