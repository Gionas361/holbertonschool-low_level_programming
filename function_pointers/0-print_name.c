#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - references the name given to the function received
 * @name: the name given
 * @f: pointer to the function received
 *
 * Return: Always 0.
 */

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
