#include "main.h"
#include <sys/stat.h>

/**
 * create_file - makes a file... duh
 *
 * @fname: File name
 * @text_cnt: content to be written
 *
 * Return: death
 */

int create_file(const char *fname, char *text_cnt)
{
	int fd;

	if (!fname)
		return (-1);

	fd = open(fname, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fd == -1)
		return (-1);

	if (text_cnt)
		write(fd, text_cnt, _strlen(text_cnt));

	close(fd);

	return (1);
}

/**
 * _strlen - length of string for goodness sake
 *
 * @s: string
 *
 * Return: Length
 */

int _strlen(char *s)
{
	int c = 0;

	while (*(s + c))
		c++;

	return (c);
}
