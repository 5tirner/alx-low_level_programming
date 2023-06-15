#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int	get_len(char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int main(void)
{
	char *s = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(2, s, get_len(s));
	return (1);
}
