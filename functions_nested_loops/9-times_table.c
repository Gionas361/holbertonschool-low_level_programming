#include "main.h"
#include <stdio.h>

/**
 * times_table - prints the multiplication tables from 1 to 2
 *
 * Return: gives out the result of calculation.
 */
int times_table(void)
{
	int multy1;
	int multy2;
	int multResult;

	for (multy1 = 0 ; multy1 <= 9 ; multy1++)
	{
		for (multy2 = 0 ; multy2 <= 9 ; multy2++)
		{
			multResult = (multy1 * multy2);
			if (multy2 < 9)
			{
				if (multResult == 0 && multy2 == 0)
				{
					printf("%d,", multResult);
				}
				else if (multResult == 0 && multy2 != 0)
				{
					printf("  %d,", multResult);
				}
				else if (multResult < 10)
				{
					printf("  %d,", multResult);
				}
				else if (multResult >= 10)
				{
					printf(" %d,", multResult);
				}
			}
			else if (multy2 == 9)
			{
				if (multResult == 0)
				{
					printf("  %d\n", multResult);
				}
				else if (multResult < 10)
				{
					printf("  %d\n", multResult);
				}
				else if (multResult >= 10)
				{
					printf(" %d\n", multResult);
				}
			}
		}
	}
	return (0);
}
