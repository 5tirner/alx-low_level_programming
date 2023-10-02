#include "main.h"

/**
 * create_file - create a new file
 * @filename: name of the file to create it
 * @text_content: content of this file
 *
 * Return: 1 on success, -1 on failure
 */

int	create_file(const char *filename, char *text_content)
{
	int	fd;
	int	i;

	if (!filename)
		return (0);
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC);
	if (fd == -1)
		return (-1);
	if (!text_content)
		return (1);
	i = 0;
	while (text_content[i])
	{
		if (write(fd, &text_content[i], 1) == -1)
		{
			close(fd);
			return (-1);
		}
		i++;
	}
	close(fd);
	return (1);
}
