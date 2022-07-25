#include "main.h"

/**
 * create_file - creates a file
 * @filename: is the name of the file to create
 * @text_content: is a NULL terminated string to write to the file
 *
 * Return: 1 on success and -1 on failure
 * -1 (file cannot be created, written, write “fails”, etc…)
 * The created file must have those permissions: rw-------.
 * If the file already exists, do not change the permissions.
 * if the file already exists, truncate it
 * if filename is NULL return -1
 * if text_content is NULL create an empty file
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int x, y;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);
	x = 0;
	if (text_content)
	{
		while (text_content[x])
			x++;
		y = write(fd, text_content, x);
		if (y != x)
			return (-1);
	}
	close(fd);

	return (1);
}
