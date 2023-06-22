#include "main.h"

int main()
{
	int	i;

	i = 1;
	while (1)
	{
		if (i % 3 == 0)
			write(1, "Fizz", 4);
		if (i % 5 == 0)
			write(1, "Buzz", 4);
		if (i % 3 && i % 5)
		{
			if (i >= 10)
				_putchar(i / 10 + 48);
			_putchar(i % 10 + 48);
		}
		if (i == 100)
			break;
		write(1, " ", 1);
		i++;
	}
	write(1, "\n", 1);
}
