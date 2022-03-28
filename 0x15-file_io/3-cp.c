#include "main.h"
/**
 * buffer - Function that creates a buffer for 1024 bytes
 * @filename: Name of a buffer
 * Return: Pointer to buffer
 */
char *buffer(char *filename)
{
	char *buf;

	buf = malloc(sizeof(char) * 1024);
	if (buf == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
	return (buf);
}

/**
 * close_file - Function that close the file
 * @fd: File descriptor
 */
void close_file(int fd)
{
	int i;

	i =	close(fd);

	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Program that copies the content of a file to another file
 * @argc: Argument count
 * @argv: Argument passed
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int fd = 0, x = 0, wr = 0, rd = 0;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buf = buffer(argv[2]);
	fd = open(argv[1], O_RDONLY);
	rd = read(fd, buf, 1024);
	x = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);

	if (fd == -1 || rd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		free(buf);
		exit(98);
	}

	wr = write(x, buf, rd);
	if (x == -1 || wr == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		free(buf);
		exit(99);
	}
	rd = read(fd, buf, 1024);
	x = open(argv[2], O_WRONLY | O_APPEND);

	free(buf);
	close_file(fd);
	close_file(x);
	return (0);
}
