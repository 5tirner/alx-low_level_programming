#include "main.h"

/**
 * read_textfile - write file content and calcul what printed
 * @filename: file to read it
 * @letters: how much i need read
 *
 * Return: returns the actual nbr of char that i read
 */

ssize_t	read_textfile(const char *filename, size_t letters)
{
	int	fd;
	ssize_t	num;
	char	c;
	ssize_t	save;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	num = 0;
	while (letters > 0)
	{
		save = read(fd, &c, 1);
		if (!save)
			break;
		if (save == -1)
		{
			close(fd);
			return (0);
		}
		save = write(1, &c, 1);
		if (save == -1)
		{
			close(fd);
			return (0);
		}
		num++;
		letters--;
	}
	close(fd);
	return (num);
}
