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

	for (hour = 0 ; hour <= 23 ; hour++)
	{
		for (minute = 0 ; minute <= 59 ; minute++)
		{
			if (minute < 59)
			{
				minute = 0;
			}

            printf("before if hour");
			if ((hour >= 0) && (hour <= 9))
			{
				_putchar('0');
				printf("%d", hour);
			}
			else if (hour < 9)
			{
				printf("%d", hour);
			}
			_putchar(':');

            printf("Before if minute");
			if ((minute >= 0) && (minute <= 9))
			{
				_putchar('0');
				printf("%d", minute);
			}
			else if (hour < 9)
			{
				printf("%d", minute);
			}
			_putchar('\n');

		}
	}

	return (0);
}
