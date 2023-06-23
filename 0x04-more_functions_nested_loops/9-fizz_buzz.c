#include <main.h>

/**
 * ft_putchar - print char
 * @c: char that i want print it
 *
 * Return: Nothing.
 */

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/**
 * main - start of the code.
 *
 * Return: Always 0.
 */

int main(void)
{
	int	i;

	i = 1;
	while (i <= 100)
	{
		if (i != 1)
			write(1, " ", 1);
		if (i % 3 == 0)
			write(1, "Fizz", 4);
		if (i % 5 == 0)
			write(1, "Buzz", 4);
		if (i % 3 && i % 5)
		{
			if (i >= 10)
				ft_putchar(i / 10 + 48);
			ft_putchar(i % 10 + 48);
		}
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
