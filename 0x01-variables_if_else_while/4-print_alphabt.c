#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	n = 'a';
	while (n < 'z')
	{
		if (n != 'e' && n != 'q')
			putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
