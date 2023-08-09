#include "main.h"

/**
 * create_file - create and fill file
 * @filename: name of file to create it
 * @text_content: to fill file
 *
 * Return: 1 ot -1
 */

int	 create_file(const char *filename, char *text_content)
{
	int	fd;
	int	i;

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_RDWR, O_TRUNC, 0777);
	if (fd == -1)
		return (-1);
	if (!text_content)
		return (1);
	i = 0;
	while (text_content[i])
		i++;
	if (write(fd, text_content, i) == -1)
		return (-1);
	close(fd);
	return (1);
}
