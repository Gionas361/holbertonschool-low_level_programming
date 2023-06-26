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

int print_array(int *a, int n)
{
	int currstr ;
	int countnum = n;

	for (countnum = 0; a[countnum] ; countnum++)
	{}

	for (currstr = 0 ; currstr < countnum ; currstr++)
	{
		printf("%d", a[currstr]);
		if (currstr +1 < countnum)
		{
			printf(", ");
		}
	}
	printf("\n");

	return (0);
}
