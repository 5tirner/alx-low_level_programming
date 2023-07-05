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
 * _sqt - sqrt with rec
 * @n: calcul it's sqrt
 *
 * Return: square root of n
 */

int	_sqt(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else
		return (square_root(n, 1));
}

/**
 * rec_prime - check if n divided by other nb
 * @n: number to check
 * @div: use it each time to check if n can divided
 *
 * Return: 1 if cannot divided 0 otherwise
 */

int	rec_prime(int n, int div)
{
	if (n % div == 0)
		return (0);
	else if (_sqt(n) < div)
		return (1);
	else
		return (rec_prime(n, div + 1));
}

/**
 * is_prime_number - check if n is prime
 * @n: nb to check it
 *
 * Return: 0 if not 1 if prime
 */

int	is_prime_number(int n)
{
	if (n == 2)
		return (1);
	else if (n <= 1 || n % 2 == 0)
		return (0);
	else
		return (rec_prime(n, 3));
}
