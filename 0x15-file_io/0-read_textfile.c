#include "holberton.h"
/**
 * read_textfile - reads .txt file and print on stdoutput
 * @filename: pointer to file passed by prompt line
 * @letters: numbers of bits to read and print
 * Return: number of bits readed and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int ret, fd;
	char *buf;

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	ret = read(fd, buf, letters);
	if (ret == -1)
		return (0);

	write(STDOUT_FILENO, buf, ret);
	free(buf);
	close(fd);
	return (ret);
}

