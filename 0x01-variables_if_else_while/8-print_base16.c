#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	n = '0';
	while (n <= 'f')
	{
		if ((n >= '0' && n <= '9') || (n >= 'a' && n <= 'f'))
			putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
