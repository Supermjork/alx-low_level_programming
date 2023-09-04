#include "main.h"

/**
 * read_textfile - Reads text
 *
 * @fname: file
 * @letters: # of letters
 *
 * Return: yEs
 */

ssize_t read_textfile(const char *fname, size_t letters)
{
	int fd, done_reading;
	char *buff;

	buff = malloc(sizeof(char *) * letters);

	if (!buff)
		return (0);

	if (!fname)
		return (0);

	fd = open(fname, O_RDONLY, 0600);

	if (fd == -1)
		return (0);

	done_reading = read(fd, buff, letters);
	write(STDOUT_FILENO, buff, done_reading);

	free(buff);
	close(fd);

	return (done_reading);
}
