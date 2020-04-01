#include "holberton.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
/**
 * append_text_to_file - append text_content to the end of the file
 * @filename: name of the file to open
 * @text_content: text to append at the end of the file
 * Return: 1 on success otherwise -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, closed, wf;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		wf = write(fd, filename, _strlen(text_content));
		closed = close(fd);

		if (closed == -1 || wf == -1)
			return (-1);
		else
			return (1);
	}
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

