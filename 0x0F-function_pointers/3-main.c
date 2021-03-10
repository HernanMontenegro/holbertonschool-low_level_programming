#include "3-calc.h"

/**
* main - entry point
* @argc: argument count
* @argv: argument array
* ---------------------
* Return: 0 if sucess, 1 if not
*/
int main(int argc, char *argv[])
{
	int first, second;
	char *op;

	op = argv[2];

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	first = atoi(argv[1]);
	second = atoi(argv[3]);

	if ((op[0] == '/' || op[0] == '%') && second == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(op)(first, second));

	return (0);
}
