#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

void	print_putchar(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		putchar(str[i]);
		i++;
	}
}
int	main(void)
{
	print_putchar("_putchar\n");
	return (0);
}
