#include "main.h"

/**
 * append_text_to_file - append mode
 * @filename: name of the file
 * @text_content: text to add it into a file
 *
 * Return: 1 or -1
 */

int	append_text_to_file(const char *filename, char *text_content)
{
	int	fd;
	int	i;

	if (!filename)
		return (-1);
	fd = open(filename, O_RDWR | O_APPEND, 0777);
	if (fd == -1)
		return (-1);
	if (!text_content)
		return (1);
	i = 0;
	while (text_content[i])
		i++;
	if (write(fd, text_content, i) == -1)
		return (-1);
	return (1);
}
