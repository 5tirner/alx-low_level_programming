#include <unistd.h>

/**
 * get_len function computes the length of the string s
 *
 * Return: lenght of the string s
 */

int	get_len(char *s)
{
	/* i : integer with size 4byte  use it to know the lenght of the string s by increment it until '\0' */
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	/* s : pointer to char wit size 8 byte i use it as buffer to the quote */ 
	char *s = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, s, get_len(s));
	return (1);
}
