#include "main.h"

/**
 * read_textfile - read a file and print it
 * @filename: file ro read it
 * @letters: ho much read from the file
 *
 * Return: what read get or 0 if !filename
 */

ssize_t	read_textfile(const char *filename, size_t letters)
{
	size_t	i;
	char	c;
	int	fd;
	int	n;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY, 0777);
	if (fd == -1)
		return (0);
	n = read(fd, &c, 1);
	if (n == -1)
		return (0);
	i = 0;
	while (i < letters && n != 0)
	{
		if (write(1, &c, 1) == -1)
			return (0);
		n = read(fd, &c, 1);
		if (n == -1)
			return (0);
		i++;
	}
	return ((ssize_t)i);
}
