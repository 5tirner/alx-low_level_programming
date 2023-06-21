#include "main.h"

/**
 * main - start of the code.
 *
 * Return: Always 0.
 */

int main(void)
{
	int	t;
	int	i;

	t = 0;
	i = 0;
	while (i < 1024)
	{
		if (i % 5 == 0 || i % 3 == 0)
			t += i;
		i++;
	}
	printf("%d\n", t);
}
