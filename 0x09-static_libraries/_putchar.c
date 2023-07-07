#include <stdio.h>

/**
 * print_putchar - write char by char in a while loop until '\0'
 * @str: the string that i want to print
 *
 * Return: no return value.
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

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int	main(void)
{
	print_putchar("_putchar\n");
	return (0);
}
