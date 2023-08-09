#include "main.h"

/**
 * _cp - copy the content from to
 * @from: sorce
 * @to: distination
 *
 * Return: Nothing
 */

void	_cp(int from, int to)
{
	char	*str;
	int	n;

	str = malloc(1025);
	if (!str)
		return;
	while (1)
	{
		n = read(from, str, 1024);
		if (n == 0 || n == -1)
			return;
		str[n + 1] = '\0';
		if (write(to, str, n) == -1)
			return;
	}
}

/**
 * close_files - close the two file discriptor
 * @fd1: read file
 * @fd2: write on it
 *
 * Return: file discriptor that can't close it
 */

int	close_files(int fd1, int fd2)
{
	if (close(fd1) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd1);
		return (100);
	}
	if (close(fd2) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd1);
		return (100);
	}
	return (0);
}

/**
 * main - start of every code
 * @ac: args nbr
 * @av: args content
 *
 * Return: some error value or 0 if every thing is clear
 */

int	main(int ac, char **av)
{
	int	fd1;
	int	fd2;

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		return (97);
	}
	if (!av[1])
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		return (98);
	}
	fd1 = open(av[1], O_RDONLY, 0777);
	if (fd1 == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		return (98);
	}
	if (!av[2])
	{
		dprintf(2, "Error: Can't write to %s\n", av[2]);
		return (99);
	}
	fd2 = open(av[2], O_CREAT | O_RDWR | O_TRUNC, 0777);
	if (fd2 == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", av[2]);
		return (99);
	}
	_cp(fd1, fd2);
	if (close_files(fd1, fd2))
		return (100);
	return (0);
}
