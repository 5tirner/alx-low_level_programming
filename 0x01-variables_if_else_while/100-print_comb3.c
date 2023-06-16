#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n1;
	int n2;

	n1 = '0';
	while (n1 < '9')
	{
		n2 = n1 + 1;
		while (n2 <= '9')
		{
			putchar(n1);
			putchar(n2);
			if (n1 != '8')
			{
				putchar(',');
				putchar(' ');
			}
			n2++;
		}
		n1++;
	}
	putchar('\n');
	return (0);
}
