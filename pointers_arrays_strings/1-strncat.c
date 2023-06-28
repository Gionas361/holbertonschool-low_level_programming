#include "main.h"
#include <stdio.h>

/**
 * _strncat - prints a triangle
 *
 * @dest: the string provided by the user
 * @src: the string provided by the user
 * @n: the string provided by the user
 *
 * Return: gives out the result of calculation.
 */

char *_strncat(char *dest, char *src, int n)
{
	int currstr;
	int deststring;
	int maxnum;

	for (currstr = 0 ; dest[currstr] != '\0' ; currstr++)
	{
	}
	deststring = currstr;

	for (currstr = 0 ; src[currstr] != '\0' ; currstr++)
	{
	}

	if (n < 0)
	{
	    maxnum = currstr;
	}
	else if (n >= currstr)
	{
	    maxnum = currstr;
	}
	else
	{
		maxnum = n;
	}

	for (currstr = 0 ; maxnum != 0 ; currstr++)
	{
		maxnum--;
		dest[deststring] = src[currstr];
		deststring++;
	}

	return (dest);
}
