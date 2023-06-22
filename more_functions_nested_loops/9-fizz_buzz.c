#include "main.h"
#include <stdio.h>

/**
 * main - prints a fizzbuzz.
 *
 * Return: gives out the result of calculation.
 */

int main(void)
{
	int fi = 3;
	int bu = 5;
	int num;

	for (num = 1 ; num <= 100 ; num++)
	{
		if ((num % fi) == 0 && ((num % bu) != 0))
		{
			printf("Fizz");
		}
		else if ((num % bu) == 0 && ((num % fi) != 0))
		{
			printf("Buzz");
		}
		else if (((num % bu) == 0) && ((num % bu) == 0))
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%d", num);
		}

		if (num != 100)
		{
			printf(" ");
		}
	}
	printf("\n");

	return (0);
}
