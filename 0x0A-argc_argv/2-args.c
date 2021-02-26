#include <stdio.h>

/**
* main - the main fuction of the program
* @argc: the array index for each command flag
* @argv: the array of commands flags
* ----------------------------
* Return: void
*/
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
