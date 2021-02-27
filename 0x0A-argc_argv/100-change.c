#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - the entry function
 * @argc: number of parameters
 * @argv: string with the parameters
 * ------------------------------------------------
 * Return: A number
 */
int main(int argc, char *argv[])
{
	int i, j, result = 0;

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
	}
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

	int cost = atoi(argv[1]);
	int coins[5] = {1, 2, 5, 10, 25};

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

	return (result);
}
