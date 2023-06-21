#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - prints out the last digit of the number string provided
 *
 * @n: The string provided by the user
 *
 * Return: gives out the result of calculation.
 */

int jack_bauer(void)
{
	int hour;
	int minute;

	for (hour = 0 ; hour <= 23)
	{
		for (minute = 0 ; minute <= 60 ; minute++)
		{
			if (minute == 60)
			{
				minute = 0;
				hour += 1;
			}

			if ((hour >= 0) && (hour <= 9))
			{
				_putchar('0');
				_putchar(hour);
			}
			else if (hour < 9)
			{
				_putchar(hour);
			}
			_putchar(':');

			if ((minute >= 0) && (minute <= 9))
			{
				_putchar('0');
				_putchar(minute);
			}
			else if (hour < 9)
			{
				_putchar(minute);
			}
			_putchar('\n');
			return (0);
		}
	}
}
