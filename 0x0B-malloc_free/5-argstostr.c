#include "holberton.h"
#include <stdlib.h>

/**
* argstostr - concatenates all the arguments of your program
* @ac: argument count
* @av: arguments array
* -----------------------------------------
* Return: void
*/
char *argstostr(int ac, char **av)
{
	int i, j, k = 0;
	char *sas;

	sas = malloc(sizeof(char) * ac);

	if (!sas)
		return (NULL);
	if (ac == 0 || !av)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++, k++)
		{
			sas[k] = av[i][j];
		}
		sas[k] = '\n';
	}

	return (sas);
}
