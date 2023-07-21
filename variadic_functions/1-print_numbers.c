#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
  * sum_them_all - sums all the numers given.
  * @n: Amount of numbers provided.
  * @...: next numbers.
  *
  * Return: Nothing.
  */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int currNum;

	va_start(nums, n);

	if (n == 0)
	{
		printf("\n");
	}

	for (currNum = 0 ; currNum < n ; currNum++)
	{
		printf("%d", va_arg(nums, int));
		if (currNum == (n - 1))
		{
			printf("\n");
		}
		else if (separator != NULL || separator != "")
		{
			printf("%c", *separator);
			printf(" ");
		}
	}

	va_end(nums);
}

/**
  * for (i = 0 ; separator[i] = "\0" ; i++)
  * {
  *	 printf("@c", separator);
  * }
  */
