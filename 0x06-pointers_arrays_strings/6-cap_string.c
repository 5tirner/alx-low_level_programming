#include "main.h"

/**
 * op - find a char
 * @str: string
 * @c: char
 *
 * Return: 1 if found c 0 if not
 */

int	op(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}
/**
 * cap_string - cpitalize
 * @s: string
 *
 * Return: pointer to char
 */

char	*cap_string(char *s)
{
	int	i;
	int	j;

	i = 0;
	while (s[i])
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
			s[i] += 32;
		i++;
	}
	i = 0;
	while (s[i])
	{
		while (s[i] && op(" ,;.!?(){}", s[i]))
			i++;
		if (s[i])
		{
			j = 0;
			while (s[i] && !op(" ,;.!?(){}", s[i]))
			{
				if (j == 0 && s[i] >= 'a' && s[i] <= 'z')
				{
					s[i] -= 32;
					j++;
				}
				i++;
			}
		}
	}
	return (s);
}

#include <stdio.h>
int main()
{
	char str[] = "Expect the best. Prepare for the worst. Capitalize on what comes.nhello world! hello-world 0123456hello worldthello world.hello worldn";
	char *ptr = cap_string(str);
	printf("%s\n%s\n", ptr, str);
}
