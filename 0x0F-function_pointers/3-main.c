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
/*	char *op;
	int (*get)(int, int);
*/
	if (argc != 4)
		return (1);

	first = atoi(argv[1]);
	second = atoi(argv[3]);

	printf("%d\n", get_op_func(argv[2])(first, second));

	return (0);
}
