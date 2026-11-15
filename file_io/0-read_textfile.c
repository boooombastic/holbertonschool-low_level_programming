#include "main.h"
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * read_textfile - reads a text file and prints it to POSIX stdout
 * @filename: name of the file to read
 * @letters: number of letters it should read and print
 *
 * Return: actual number of letters read and printed, or 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t r_bytes, w_bytes;
	char *buf;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		close(fd);
		return (0);
	}

	r_bytes = read(fd, buf, letters);
	if (r_bytes == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}

	w_bytes = write(STDOUT_FILENO, buf, r_bytes);
	free(buf);
	close(fd);

	if (w_bytes == -1 || w_bytes != r_bytes)
		return (0);

	return (w_bytes);
}
