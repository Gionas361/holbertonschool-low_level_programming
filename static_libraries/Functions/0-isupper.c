#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks for the upper case letter
 *
 * @c: The string provided by the user
 *
 * Return: gives out the result of calculation.
 */

int _isupper(char c)
{
	int r;

	if (c >= 'A' && c <= 'Z')
	{
		r = 1;
	}
	else
	{
		r = 0;
	}
	return (r);
}
