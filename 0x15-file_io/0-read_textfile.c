#include "main.h"
/**
 * read_textfile - Function that reads a text file and prints
 * @filename: Pointer to the file
 * @letters: Is the number of the letters it should read and print
 * Return: The actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd = 0, rd = 0, wr = 0;
	char *buf;

	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		close(fd);
		return (0);
	}
	rd = read(fd, buf, letters);
	close(rd);
	if (rd == -1)
	{
		free(buf);
		return (0);
	}
	wr = write(STDOUT_FILENO, buf, rd);
	free(buf);
	if (rd != wr)
	{
		return (0);
	}
	return (wr);
}
