#include "3-calc.h"
#include <stdio.h>


/**
  * main - check code
  * @argc: idk
  * @argv: idk
  *
  * Return: result.
  */

int main(int argc, char *argv[])
{
	int (*oprt)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	oprt = get_op_func(argv[2]);

	if (!oprt)
	{
		printf("Error\n");
		exit(99);
	}

	if ((atoi(argv[1]) == 0 || atoi(argv[3]) == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", oprt(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
