#include "main.h"
#include <stdio.h>

/**
 * _strncpy - prints a triangle
 *
 * @dest: the string provided by the user
 * @src: the string provided by the user
 * @n: the string provided by the user
 *
 * Return: gives out the result of calculation.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int currstr;
	int deststring = 0;
	int srcmax;

	for (srcmax = 0 ; src[srcmax] != '\0' ; srcmax++)
	{
	}

	currstr = 0;

	for (deststring = 0 ; n != 0 ; currstr++)
	{
		n--;
		srcmax--;

		if (n >= 0 && srcmax <= 0)
		{
		    dest[deststring] = 0;
		}
		else
		{
		    dest[deststring] = src[currstr];
		}

		deststring++;
	}

	return (dest);
}
