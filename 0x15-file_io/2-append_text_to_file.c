#include "main.h"

/**
 * append_text_to_file - append a str into a file
 * @filename: the name of the file
 * @text_content: the string to add
 *
 * Return: 1 if all is good or -1 case of error
 */

int	append_text_to_file(const char *filename, char *text_content)
{
	int	fd;
	int	i;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
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
	return (1);
}
