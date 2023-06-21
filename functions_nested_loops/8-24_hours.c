#include "main.h"
#include <stdio.h>

/**
 * jack_bauer - prints out the last digit of the number string provided
 *
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
			if (hour < 10 && minute < 10)
			{
				printf("0%d:0%d\n", hour, minute);
			}
			else if (hour < 10 && minute >= 10)
			{
				printf("0%d:%d\n", hour, minute);
			}
			else if (hour >= 10 && minute < 10)
			{
				printf("%d:0%d\n", hour, minute);
			}
			else
			{
				printf("%d:%d\n", hour, minute);
			}
		}
	}
	return (0);
}
