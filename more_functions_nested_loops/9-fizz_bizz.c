#include "main.h"
#include <stdio.h>

/**
 * print_square - prints a square with #.
 *
 * @size: the string provided by the user
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
        if ((num % fi) = 1)
        {
            printf("Fizz");
        }
        else if ((num % bu) = 1)
        {
            printf("Buzz");
        }
        else
        {
            printf(num);
        }
    }

	return (0);
}