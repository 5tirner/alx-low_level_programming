#include "main.h"

/**
 * rot13 - +13 or -13
 * @s: string
 *
 * Return: pointer to char
 */

char	*rot13(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if ((s[i] >= 'a' && s[i] <= 'm')
		|| (s[i] >= 'A' && s[i] <= 'M'))
			s[i] += 13;
		else if ((s[i] >= 'n' && s[i] <= 'z')
		|| (s[i] >= 'N' && s[i] <= 'Z'))
			s[i] -= 13;
		i++;
	 }
	return (s);
}

int main()
{
	char str[] = "nopqrstuvwxyz";
	printf("%s\n", rot13(str));
}

