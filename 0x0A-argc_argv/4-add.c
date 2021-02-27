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
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	int i, j, add = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (isalpha(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(argv[i]);
	}

	printf("%d\n", add);

	return (add);
}
