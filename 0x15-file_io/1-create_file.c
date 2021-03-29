#include "holberton.h"

/**
*
*
*/
int create_file(const char *filename, char *text_content)
{
	int fd = 0, i;

	if (!filename || !text_content)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR, 0600);
	if (fd == -1)
		return (-1);

	for (i = 0; text_content[i]; i++)
	{
		if (write(fd, &text_content[i], 1) == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
