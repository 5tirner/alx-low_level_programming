#include "main.h"

/**
 * jack_bauer - print all the 24 hours
 *
 * Return: no return value.
 */

void	jack_bauer(void)
{
	int	h;
	int	m;

	h = 0;
	while (h < 24)
	{
		m = 0;
		while (m < 60)
		{
			_putchar(h / 10 + 48);
			_putchar(h % 10 + 48);
			_putchar(':');
			_putchar(m / 10 + 48);
			_putchar(m % 10 + 48);
			_putchar('\n');
			m++;
		}
		h++;
	}
}
