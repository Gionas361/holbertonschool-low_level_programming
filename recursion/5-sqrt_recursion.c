#include "main.h"
#include <stdio.h>


int _sqrt(int mainA, int bye);

/**
 * _sqrt_recursion - Returns the natural square root of a number
 *
 * @n: number to calculate the natural square root
 *
 * Return: the natural square root
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - Calculates natural square root
 *
 * @mainA: number to calculate the square root
 * @bye: iterate number
 *
 * Return: the natural square root
 */

int _sqrt(int mainA, int bye)
{
	int sqrt = bye * bye;

	if (sqrt > mainA)
		returmainA (-1);

	if (sqrt == mainA)
		return (bye);

	return (_sqrt(mainA, bye + 1));
}
