#include "main.h"
#include <stdio.h>

/**
 * error - checks if files can be opened
 * @file_from: file content to be copied from
 * @file_to: file content to be copied
 * @argv: array of arguments
 *
 * Return: nothing
 */
void error(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: cant write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - program that copies the content of a file to another file
 * @argc: command line arguments
 * @argv: array of size argc
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, err_close;
	ssize_t x, y;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from filr_to");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error(file_from, file_to, argv);

	x = 1024;
	while (x == 1024)
	{
		x = read(file_from, buf, 1024);
		if (x < 0)
			error(-1, 0, argv);
		y = write(file_to, buf, x);
		if (y < 0)
			error(0, -1, argv);
	}
	err_close = close(file_from);
	if (err_close < 0)
	{
		dprintf(STDERR_FILENO, "Error: Cant close fd %d\n", file_from);
		exit(100);
	}
	err_close = close(file_to);

	if (err_close < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	return (0);
}
