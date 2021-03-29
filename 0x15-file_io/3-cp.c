#include "holberton.h"
#include <stdio.h>

void FileOpener(char **, char **, int *, int *);

/**
* main - entry point
* @ac: the count of arguments
* @av: argument array
*
* Return: 0 if success, 1 if not
*/
int main(__attribute__((unused))int ac, char **av)
{
	int fp = 0, to_fp = 0, fp_bytes = 1024, to_fp_bytes = 0;
	char *filename, *destFileName;
	char store[1024];

	if (ac > 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	filename = av[1];
	destFileName = av[2];

	FileOpener(&filename, &destFileName, &fp, &to_fp);

	while (fp_bytes == 1024)
	{
		fp_bytes = read(fp, store, 1024);
		if (fp_bytes == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
			exit(98);
		}
		to_fp_bytes = write(to_fp, store, fp_bytes);
		if (to_fp_bytes < fp_bytes)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", destFileName);
			exit(99);
		}
	}
	if (close(fp) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fp);
		exit(100);
	}
	if (close(to_fp) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", to_fp);
		exit(100);
	}
	return (0);
}

/**
* FileOpener - open the files
* @filename: first file name
* @destFileName: target file name
* @fp: open status check
* @to_fp: open status target file check
*/
void FileOpener(char **filename, char **destFileName, int *fp, int *to_fp)
{
	*fp = open(*filename, O_RDONLY);
	if (*fp == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", *filename);
		exit(98);
	}
	*to_fp = open(*destFileName, O_CREAT | O_RDWR | O_TRUNC, 0664);
	if (*to_fp == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", *destFileName);
		close(*fp);
		exit(99);
	}
}
