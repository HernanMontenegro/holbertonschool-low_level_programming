#include <stdio.h>
#include <stdlib.h>

/**
* main - the main fuction of the program
* @argc: the array index for each command flag
* @argv: the array of commands flags
* ----------------------------
* Return: void
*/
int main(int argc, char **argv)
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	
	int mul = atoi(argv[1]) * atoi(argv[2]);

	printf("%d\n", mul);

	return (mul);
}
