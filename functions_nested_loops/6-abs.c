#include "main.h"
#include <stdio.h>

/**
 * _abs - turns a negative number, into a positive one
 *
 * @n: The string provided by the user
 *
 * Return: gives out the result of calculation.
 */
/**
int _abs(int n)
{
	char f;

	if (n < 0)
	{
		f = (n * -1);
	}
	else if (n >= 0)
	{
		f = n;
	}
	return (f);
	_putchar('\n');
}
*/

int _abs(int n)
{
	int f;
	f = ("%d\n", n);
	return (f);
}
