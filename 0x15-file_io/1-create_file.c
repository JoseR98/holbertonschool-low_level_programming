#include "holberton.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
/**
 * create_file - creates a file on disk
 * @filename: Name of the file to create
 * @text_content: Content to write inside the file
 * Return: 1 on success otherwise -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd, closed, wf;

	/**Verify if there is name for the file*/
	if (filename == NULL)
		return (-1);
	/**Open file with read and write permissions*/
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	/**Verify if the file was open*/
	if (fd == -1)
		return (-1);
	/**Verify if the content to write has characters*/
	if (text_content != NULL)
	{
		wf = write(fd, text_content, _strlen(text_content));
		closed = close(fd);
		if (wf == -1 || close == -1)
			return (-1);
		else
			return (1);

	}
	/**If there is nothing to write inside the file create it empty*/
	return (1);
}

/**
 * _strlen - returns the length of a string.
 * @s: pointer parameter
 * Return: length of a string.
 */
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}

