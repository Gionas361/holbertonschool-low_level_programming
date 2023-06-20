#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - will print the alphabet in lower case
 *
 * Return: Always 0.
 */
int print_alphabet(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');

	return (0);
}
