#include "main.h"
#include <stdio.h>

/**
 * _atoi - prints a triangle
 *
 * @s: the string provided by the user
 *
 * Return: gives out the result of calculation.
 */

int _atoi(char *s)
{
    int stor = 0;

    for (int i = 0; str[i] != '\0'; ++i)
        stor = stor * 10 + str[i] - '0';

    return (stor);
}
