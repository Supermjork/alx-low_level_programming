#include "main.h"
#include <stdio.h>

/**
 * append_text_to_file - i hate naming convention
 *
 * @fname: NAME OF FILE
 * @t_cnt: text content
 *
 * Return: HANNIBAL
 */

int append_text_to_file(const char *fname, char *t_cnt)
{
	int fd;

	if (!fname)
		return (-1);

	fd = open(fname, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (t_cnt)
	{
		if (write(fd, t_cnt, _strlen(t_cnt)) == -1)
			return (-1);
	}

	close(fd);
	return (1);
}

/**
 * _strlen - I JUST DEFINED IT PLS
 *
 * @s: string
 *
 * Return: COUNT
 */

int _strlen(char *s)
{
	int c = 0;

	while (*(s + c))
		c++;

	return (c);
}
