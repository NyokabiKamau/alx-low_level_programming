#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: is the name of the file
 * @text_content: the NULL terminated string to add at the end of the file
 * Return: 1 on success or if the file exists
 * return -1 on failure or if the file doesn't exist
 * or if denied permissions to write the file
 *
 * Do not create the file if it does not exist
 * If filename is NULL return -1
 * If text_content is NULL, do not add anything to the file.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int x, y;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (-1);

	x = 0;
	if (text_content)
	{
		while (text_content[x])
			x++;

		y = write(fd, text_content, x);

		if (y < 0)
			return (-1);
	}
	close(fd);

	return (1);
}
