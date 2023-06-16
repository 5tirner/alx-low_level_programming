#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
        int n;

        srand(time(0));
        n = rand() - RAND_MAX / 2;
	if (n % 10 < 6)
	{
		printf("Last digit of %d is %d", n, n % 10);
		if (n % 10 == 0)
			printf("and is 0\n");
		else
			printf("and is less than 6 and not 0\n");
	}
	else
		printf("Last digit of %d is %d and is greater than 5\n", n, n % 10);
	return (0);
}
