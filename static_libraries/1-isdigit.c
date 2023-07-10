#include "main.h"
#include <stdio.h>

/**
 * _isdigit - checks if the string given is a digit
 *
 * @c: The string provided by the user
 *
 * Return: gives out the result of calculation.
 */

int _isdigit(int c)
{
	int r;

	if (c >= '0' && c <= '9')
	{
		r = 1;
	}
	else
	{
		r = 0;
	}
	return (r);
}
