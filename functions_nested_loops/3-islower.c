#include "main.h"
#include <stdio.h>

/**
 * _islower - prints 1 of the string provided is a lower case letter
 *            and prints 0 if the string is anything else.
 *
 * Return: Always 0.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
    {
        _putchar('1');
    }
    else
    {
        _putchar('0');
    }

	return (0);
}
