#include "holberton.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
/**
 * read_textfile - reads .txt file and print on stdoutput
 * @filename: pointer to file passed by prompt line
 * @letters: numbers of bits to read and print
 * Return: number of bits readed and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int ret, fd;
	/**Create buffer for read and write sycalls*/
	char *buf;

	/** buffer size is equal to the # of bits they ask for*/
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	if (filename == NULL)
		return (0);
	/**Open file for reading*/
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	/**Read sycall save n bits in the memory area buf*/
	ret = read(fd, buf, letters);
	if (ret == -1)
		return (0);
	/**Write sycall print n bits returned by Read from buf*/
	write(STDOUT_FILENO, buf, ret);
	free(buf);
	close(fd);
	return (ret);
}

