#include <stdio.h>

/**
*
*
*/
int main(int argc, char **argv)
{
	argv[0] = argv[0];

	printf("%d\n", argc - 1);

	return (0);
}
