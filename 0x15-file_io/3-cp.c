#include "holberton.h"
/**
 * main - main function
 * @ac: number of arguments
 * @av: array of arguments
 * Return: 0 on success
 */
int main(int ac, char **av)
{
	int fd1, fd2, rd1 = 1024, wf2, closed1, closed2;
	char buf1[1024];

	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	/**Open first file*/
	fd1 = open(av[1], O_RDONLY);
	if (fd1 == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	/**Open second file or create it*/
	fd2 = open(av[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (fd2 == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	while (rd1 == 1024)
	{
		rd1 = read(fd1, buf1, 1024);
		if (rd1 == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
		wf2 = write(fd2, buf1, rd1);
		if (wf2 == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
		if (rd1 != wf2)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	}
	closed1 = close(fd1);
	closed2 = close(fd2);
	if (closed1 == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %i", fd1), exit(100);
	if (closed2 == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %i", fd2), exit(100);
	return (0);
}

