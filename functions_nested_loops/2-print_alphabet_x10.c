#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - prints the alphabet in lower
 *                      case 10 times, each in a new line
 *
 * Return: Always 0.
 */
int print_alphabet_x10(void)
{
	char nTimes;

	for (nTimes = '0' ; nTimes <= '9' ; nTimes++)
	{
		char ch;

		for (ch = 'a' ; ch <= 'z' ; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}

	return (0);
}
