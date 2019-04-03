#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "holberton.h"
/**
 *create_file - the main function to create a file
 * @text_content: a parameter
 * Return: the return is an int
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int x;
	int numwrite;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

       	if (fd == -1)
		return (-1);
	for (x = 0; text_content[x] != '\0'; x++)
		;
	numwrite = write(fd, text_content, x);
	if (numwrite == -1)
		return (-1);
	close(fd);
	return (1);

}
