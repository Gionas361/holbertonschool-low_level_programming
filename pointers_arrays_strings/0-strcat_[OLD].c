#include "main.h"
#include <stdio.h>

/**
 * _strcat - prints a triangle
 *
 * @dest: the string provided by the user
 * @src: the string provided by the user
 *
 * Return: gives out the result of calculation.
 */
char *_strcat(char *dest, char *src)
{
	int currstr;
	int deststring;
	int maxnum;

	for (currstr = 0 ; dest[currstr] != '\0' ; currstr++)
	{
		printf("Number of chars is: %d\n", currstr);
	}
	deststring = currstr;
	printf("Final number: %d\n", deststring);

	for (currstr = 0 ; src[currstr] != '\0' ; currstr++)
	{
		printf("Number of chars is: %d\n", currstr);
	}
	maxnum = currstr;
	printf("Final number: %d\n", maxnum);

	for (currstr = 0 ; maxnum != 0 ; currstr++)
	{
		maxnum--;
		dest[deststring] = src[currstr];
		printf("Remaining Char: %d\n", maxnum);
		printf("%s\n", dest);
		deststring++;
	}

	return (dest);
}
