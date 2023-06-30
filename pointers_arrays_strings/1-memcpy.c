#include "main.h"
#include <stdio.h>

/**
 * _memcpy - prints a triangle
 *
 * @dest: the array provided
 * @src: the value?
 * @n: the final variable of the array we'll change
 *
 * Return: gives out the result of calculation.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int currvalarr;
	int n2 = n;

	for (currvalarr = 0 ; currvalarr < n2 ; currvalarr++)
	{
		dest[currvalarr] = src[currvalarr];
	}

	return (dest);
}
