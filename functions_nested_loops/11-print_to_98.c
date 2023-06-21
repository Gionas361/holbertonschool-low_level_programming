#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints out the last digit of the number string provided
 *
 * @n: The string provided by the user
 *
 * Return: gives out the result of calculation.
 */
int main(void)
{
    print_to_98(0);
    print_to_98(98);
    print_to_98(111);
    print_to_98(81);
    print_to_98(-10);
    return (0);
}

int print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			if (n == 98)
			{
				printf("%d", n);
				printf("\n");
			}
			else
			{
				printf("%d, ", n);
			}
		}
	}
	else
	{
		for (; n >= 98; n--)
		{
			if (n == 98)
			{
				printf("%d", n);
				printf("\n");
			}
			else
			{
				printf("%d, ", n);
			}
		}
	}

    return (0);
}
