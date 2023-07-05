#include "main.h"

/**
 * is_prime_number - check if n is prime
 * @n: nb to check it
 *
 * Return: 0 if not 1 if prime
 */

int	is_prime_number(int n)
{
	int	i;

	i = n / 2;
	if (n == 2)
		return (1);
	else if (n <= 1 || n % 2 == 0)
		return (0);
	else
	{
		while (i >= 3)
		{
			if (n % i == 0)
				return (0);
			i--;
		}
	}
	return (1);
}
