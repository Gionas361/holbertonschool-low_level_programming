#include "3-calc.h"
#include <string.h>

int looper(char sumb, int maxamount);

/**
  * get_op_func - gets the correct mathematical operation
  * @s: character used for the calculation that was provided
  *
  * Return: result.
  */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;


	while (i < 5)
	{
		if (strcmp(s, ops[i].op) == 0)
		{
			return (ops[i].f);
		}

		i++;
	}

	return (0);
}
