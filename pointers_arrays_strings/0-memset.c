#include "main.h"
#include <stdio.h>

/**
 * _memset - prints a triangle
 *
 * @s: the array provided
 * @b: the value?
 * @n: the final variable of the array we'll change
 *
 * Return: gives out the result of calculation.
 */

char *_memset(char *s, char b, unsigned int n)
{
    int currvalarr;
    int n2 = n;

	for (currvalarr = 0 ; currvalarr < n2 ; currvalarr++)
    {
        s[currvalarr] = b;
    }

	return (s);
}
