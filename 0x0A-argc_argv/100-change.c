#include <stdio.h>
#include <stdlib.h>

/**
 * main - the entry function
 * @argc: number of parameters
 * @argv: string with the parameters
 * ------------------------------------------------
 * Return: A number
 */
int main(int argc, char *argv[])
{
	int result = 0, i, cost;
	int coins[5] = {1, 2, 5, 10, 25};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (atoi(argv[1]) < 0)
	{
		printf("0\n");
		return (0);
	}

	cost = atoi(argv[1]);

	for (i = 4; i >= 0; i--)
	{
		while (cost >= coins[i])
		{
			cost -= coins[i];
			result++;

			if (cost == 0)
			{
				printf("%d\n", result);
				return (0);
			}
		}
	}

	return (0);
}
