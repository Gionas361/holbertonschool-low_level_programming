#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * reverse_array - prints a triangle
 *
 * @a: the string provided by the user
 * @n: the string provided by the user
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int currstr;
    int nextstr
	int oposstr = 0;
	int countnum = n;
	int lettercurr;
    int letternext;

	for (countnum = 0; a[countnum] != '\0' ; countnum++)
	{}

	for (currstr = 0 ; currstr <= 0 ; currstr--)
	{
		lettercurr = a[currstr];
		letternext = a[nextstr];
        
		oposstr++;
	}

	for (currstr = 0 ; currstr < n ; currstr++)
	{
		printf("%d", a[currstr]);
		
		if (currstr + 1 < n)
		{
			printf(",");
			printf(" ");
		}
	}
	printf("\n");

}