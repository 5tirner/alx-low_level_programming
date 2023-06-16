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
	while(1)
	{
		if (n == 'z' + 1)
			n = 'A';
		putchar(n);
		if (n == 'Z')
			break;
		n++;	
	}
	putchar('\n');
	return (0);
}
