#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the name of the file to read
 * @letters: the number of letters to read and print
 *
 * Return: the actual number of letters read and printed, or 0 if error
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nread, nwrite;
	char *buffer;

	if (filename == NULL)
		return (0);
	fd = open(filename, 0_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	nwrite = write(STDOUT_FILENO, buffer, nread);

	if (nwrite == -1 || nwrite != nread)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	free(buffer);
	close(fd);

	return (nwrite);
}
