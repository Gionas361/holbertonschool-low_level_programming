#include "main.h"
#include <stdio.h>

/**
 * _islower - prints 1 of the string provided is a lower case letter
 *            and prints 0 if the string is anything else.
 *
 * @c: The string provided by the user
 *
 * Return: gives out the result of calculation.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
