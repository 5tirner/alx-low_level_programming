#include "main.h"

/**
 * main - code start from it.
 *
 * Return: Always 0.
 */

int main(void)
{
	int		i;
	unsigned long	j;
	unsigned long	k;

	i = -1;
	j = 1;
	k = 2;
	while (++i < 50)
	{
		if (!i)
			printf("%ld", j);
		if (i == 1)
			printf(", %ld", k);
		if (i > 1)
		{
			k += j;
			j = k - j;
			printf(", %ld", k);
		}
	}
	printf("\n");
	return (0);
}
