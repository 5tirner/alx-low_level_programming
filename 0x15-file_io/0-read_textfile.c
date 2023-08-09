#include "main.h"

/**
 * read_textfile - read a file and print it
 * @filename: file ro read it
 * @letters: ho much read from the file
 *
 * Return: what read get or 0 0 if !filename
 */

ssize_t	read_textfile(const char *filename, size_t letters)
{
	size_t	i;
	int	n;
	char	c;
	int	fd;
	ssize_t	r;

	fd = open(filename, O_RDWR, 0777);
	if (fd == -1)
		return (0);
	i = 0;
	n = read(fd, &c, 1);
	r = 0;
	while (i < letters && n != 0)
	{
		r += write(1, &c, 1);
		n = read(fd, &c, 1);
		i++;
	}
	return (r);
}
