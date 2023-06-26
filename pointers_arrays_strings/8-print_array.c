#include "main.h"
#include <stdio.h>

/**
 * print_array - prints a triangle
 *
 * @a: the string provided by the user
 * @n: the string provided by the user
 *
 * Return: gives out the result of calculation.
 */
int main(void)
{
    int array[5];

    array[0] = 98;
    array[1] = 402;
    array[2] = -198;
    array[3] = 298;
    array[4] = -1024;
    print_array(array, 5);
    return (0);
}

int print_array(int *a, int n)
{
	int currstr;
	int countnum;

	for (countnum = 0; a[countnum] ; countnum++)
	{}

	for (currstr = 0 ; currstr < countnum ; currstr++)
	{
		printf("%d", a[currstr]);
        if (currstr +1 < countnum)
        {
            printf(", ");
        }
	}
	printf("\n");

	return (0);
}
