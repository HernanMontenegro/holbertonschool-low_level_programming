#include "holberton.h"
#include "_putchar.c"

/**
*
*
*/
int create_file(const char *filename, char *text_content)
{
	int fd = 0, i;

	if (!filename)
		return (0);

	fd = open(filename, O_CREAT | O_RDWR, 0600);
	if (fd == -1)
		return (0);

	for (i = 0; text_content[i]; i++)
	{
		if (_putchar(text_content[i]) == -1)
			return (0);
	}
	close(fd);
	return (1);
}
