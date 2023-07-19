#include "3-calc.h"
#include "function_pointers.h"

/**
 * get_op_func - get the correct function
 * @s: the operator
 *
 * Return: number of the function to use it
 */

int	(*get_op_func(char *s))(int, int)
{
	int	i;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	i = 0;
	while (i <= 4)
	{
		if (ops[i].op[0] == s[0])
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
