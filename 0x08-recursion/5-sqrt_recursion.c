#include "main.h"

/**
 * square_root - check if there is a sqrt
 * @n: our number
 * @checker: checker to compare it with n each time
 *
 * Return: integer
 */

int square_root(int n, int checker)
{
	int square;

	square = checker * checker;
	if (square == n)
		return (checker);
	else if (square < n)
		return (square_root(n, 1 + checker));
	else
		return (-1);
}

/**
 * _sqrt_recursion - sqrt with rec
 * @n: calcul it's sqrt
 *
 * Return: square root of n
 */

int	_sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else
		return (square_root(n, 1));
}
