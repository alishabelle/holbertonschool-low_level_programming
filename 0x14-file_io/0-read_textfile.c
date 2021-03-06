#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "holberton.h"
/**
 * read_textfile - function that reads textfile
 *@filename: parameter
 *@letters: parameter
 * Return: returns ssize_t type
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buff;
	int numread, numwrite;

	if (filename == NULL && *filename == '\0')
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buff = malloc(letters);

	if (buff == NULL)
		return (0);

	numread = read(fd, buff, letters);

	if (numread == -1)
		return (0);

	numwrite = write(STDOUT_FILENO, buff, numread);
	if (numwrite == -1 || numwrite != numread)
		return (0);

	free(buff);
	close(fd);
	return (numwrite);

}
