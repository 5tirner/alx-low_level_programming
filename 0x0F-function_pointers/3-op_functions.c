#include "3-calc.h"
#include "function_pointers.h"

/**
 * op_add - sum
 * @a: int 1
 * @b: int 2
 *
 * Return: the sum of a and b
 */

int	op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - sub
 * @a: int 1
 * @b: int 2
 *
 * Return: the diff of a and b
 */

int	op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - mul
 * @a: int 1
 * @b: int 2
 *
 * Return: the product of a and b
 */

int	op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - div
 * @a: int 1
 * @b: int 2
 *
 * Return: the res division of a and b
 */

int	op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - mod
 * @a: int 1
 * @b: int 2
 *
 * Return: the rem of div of a and b
 */

int	op_mod(int a, int b)
{
	return (a % b);
}
