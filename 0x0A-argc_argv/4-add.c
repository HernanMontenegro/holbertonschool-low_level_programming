#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* main - the main fuction of the program
* @argc: the array index for each command flag
* @argv: the array of commands flags
* ----------------------------
* Return: void
*/
int main(int argc, char *argv[])
{
	int i, j, sum;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1, sum = 0; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (isalpha(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}
