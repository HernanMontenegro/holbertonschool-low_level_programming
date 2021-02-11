#include <stdio.h>
/**
* main - Entry point
*
* Description: Print the first 50 numbers of fibonacci secuence
* Return: Always 0 (Success)
*/
int main(void)
{
	long a = 1, b = 2, res, i;

	printf("%ld, ", a);
	printf("%ld, ", b);
	for (i = 3 ; i <= 50 ; i++)
	{
		res = a + b;
		printf("%ld", res);
		if (i != 50)
		{
			printf(", ");
		}
		a = b;
		b = res;
	}
	printf("\n");
	return (0);
}
