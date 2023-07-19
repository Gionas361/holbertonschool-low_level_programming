#include "3-calc.h"

/**
  * op_add - sums
  * @a: first value
  * @b: second value
  *
  * Return: result.
  */

int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - substraction
  * @a: first value
  * @b: second value
  *
  * Return: result.
  */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - multiplies
  * @a: first value
  * @b: second value
  *
  * Return: result.
  */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - result of divide
  * @a: first value
  * @b: second value
  *
  * Return: result.
  */

int op_div(int a, int b)
{
	return (a / b);
}

/**
  * op_mod - remainder of divide
  * @a: first value
  * @b: second value
  *
  * Return: result.
  */

int op_mod(int a, int b)
{
	int i = a / b;

	i = b * i;

	i = a - i;

	return (i);
}
