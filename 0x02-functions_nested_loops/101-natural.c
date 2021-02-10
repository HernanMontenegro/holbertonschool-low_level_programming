#include <stdio.h>

/**
* main - the main function of the program
*
* Return: 0 if is correct
*/
int main(void)
{
	int result;

	for (int i; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			result += i;
		}
	}	
	printf("%d", result);
	
	return (0);
}
