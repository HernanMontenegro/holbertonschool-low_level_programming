#include "holberton.h"

/**
* append_text_to_file - Write a function that appends text at the end of a file
* @filename: the target file
* @text_content: the file content
* ---------------------------------------------
* Return: 1 on success, or -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd = 0, i;

	if (!filename)
		return (-1);

	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == 1)
		return (-1);

	for (i = 0; text_content && text_content[i] && text_content[i] != '>'; i++)
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
