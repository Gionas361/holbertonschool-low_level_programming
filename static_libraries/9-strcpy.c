#include "main.h"
#include <stdio.h>
/**
 * _strcpy - Copy a string
 *
 * @dest: the string provided by the user
 * @src: the string provided by the user
 *
 * Return: gives out the result of calculation.
 */

char *_strcpy(char *dest, char *src)
{
	int currval;

	for (currval = 0 ; src[currval] != '\0' ; currval++)
	{
		dest[currval] = src[currval];
	}

	dest[currval++] = '\0';

	return (dest);
}
