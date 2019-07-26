#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include "holberton.h"
/**
 *main - the main function to copy contents from one file to another
 *
 *
 *
 */
int main(int argc, char **argv)
{
	int fd, fd1, bytes_read = 1024, bytes_wrote;
	int file_to, file_from;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd = open(argv[1], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	fd1 = open(argv[2], O_RDONLY);


	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_from);
		exit(98);
	}
	do {
		bytes_read = read(file_from, buffer, 1024)
		{
			if (bytes_read == 0)
				break;
			if (bytes_read == -1)
				dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
			exit(98);
		}
		bytes_wrote = write(file_to, buffer, bytes_read);
		if (bytes_wrote < -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99); 
		}
		if (close(fd) == -1)
		{
			dprintf(STERR_FILENO, "Error: Can't close fd %d\n", fd);
				exit(100);
		}
		if (close(fd1) == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
				exit(100);
		}
	}
	return (0);
}
