#include "main.h"

/**
 * errors - generate the errors
 * @rv: return value
 * @av: to get the files name
 * @fd_val: number of the file discriptor
 *
 * Return: rv
 */

int	errors(int rv, char **av, int fd_val)
{
	if (rv == 97)
		dprintf(2, "Usage: cp file_from file_to\n");
	else if (rv == 98)
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
	else if (rv == 99)
		dprintf(2, "Error: Can't write to %s\n", av[2]);
	else
		dprintf(2, "Error: Can't close fd %d\n", fd_val);
	return (rv);
}

/**
 * main - start of the prog to copy the content of a file to other one
 * @ac: number of argement
 * @av: argement content
 *
 * Return: many returns
 */

int	main(int ac, char **av)
{
	int	fd1, fd2, w_read;
	char	*str;

	if (ac != 3 || !av[1] || !av[2])
		return (errors(97, av, 0));
	fd1 = open(av[1], O_RDONLY);
	if (fd1 == -1)
		return (errors(98, av, 0));
	fd2 = open(av[2], O_TRUNC);
	if (fd2 == -1)
		fd2 = open(av[2], O_CREAT | O_RDWR, 0777);
	if (fd2 == -1)
		return (errors(99, av, 0));
	str = malloc(1025);
	w_read = read(fd1, str, 1024);
	while (1)
	{
		if (w_read == -1)
			return (-1);
		str[w_read + 1] = 0;
		if (dprintf(fd2, "%s", str) < 0)
			return (-1);
		if (w_read == 0)
			break;
		w_read = read(fd1, str, 1024);
	}
	if (close(fd1) == -1)
		return (errors(100, av, fd1));
	if (close(fd2) == -1)
		return (errors(100, av, fd2));
	return (0);
}
