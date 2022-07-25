#include "main.h"

/**
 * read_textfile - reads a textfile and prints it to the POSIX standard output
 * @letters: where letters is the number of letters it should read and print
 * @filename: file name
 *
 * Return: actual number of letters it could read and print
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t x, y;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);

	x = read(fd, buf, letters);
	if (x < 0)
	{
		free(buf);
		return (0);
	}
	buf[x] = '\0';

	close(fd);

	y = write(STDOUT_FILENO, buf, x);
	if (y < 0)
	{
		free(buf);
		return (0);
	}

	free(buf);
	return (y);
}
