#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - check the code
 *
 * @a: string provided by user
 *
 * Return: Always 0.
 */
void print_chessboard(char (*a)[8])
{
    int incRow = 0;
    int inkSpace = 0;

    for (incRow = 0; a[incRow][inkSpace] != a[8][8] ; incRow++)
    {
        for (inkSpace = 0; a[incRow][inkSpace] != a[incRow][8] ; inkSpace++)
        {
            printf("%c", a[incRow][inkSpace]);
        }
        printf("\n");
    }

    if (a[incRow][inkSpace] == a[8][8])
    {
        for (inkSpace = 0; a[incRow][inkSpace] != a[incRow][8] ; inkSpace++)
        {
            printf("%c", a[incRow][inkSpace]);
        }
        printf("\n");
    }
}
