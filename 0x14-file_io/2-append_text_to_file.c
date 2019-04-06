#include <unistd.h>
#include <fcntl.h>
#include "holberton.h"
/**
 *append_text_to_file - appends text to the end of a file
 *@filename: parameter
 *@text_content: parameter
 * Return: returns an int
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, x;
	ssize_t right;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		fd = open(filename, O_APPEND | O_WRONLY);
		if (fd == -1)
			return (-1);
		for (; text_content[x]; x++)
			;
		right = write(fd, text_content, x);
		if (right == -1)
			return (-1);
		close(fd);
	}
	return (1);
}
