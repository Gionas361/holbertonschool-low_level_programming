#include "main.h"
#include <stdio.h>

/**
 * 9-times_table - prints out the last digit of the number string provided
 *
 * Return: gives out the result of calculation.
 */

int times_table(void)
{
	int multy1;
	int multy2;
	int multResult;

	for (multy1 = 0 ; multy2 < 9 ; multy1++)
	{
		for (multy2 = 0 ; multy2 < 9 ; multy2++)
		{
			multResult = (multy1 * multy2);
			if (multy2 > 9)
			{
				printf("%d, ", multResult);
			}
			else
			{
				printf("%d\n", multResult);
			}
		}
	}
	return (0);
}
