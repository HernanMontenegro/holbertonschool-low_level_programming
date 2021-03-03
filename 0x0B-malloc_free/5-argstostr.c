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
	int i, j, k = 0, matrixLen = 0;
	char *sas;

	if (ac == 0 || !av)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			matrixLen++;
		matrixLen++;
	}
	sas = malloc(sizeof(char) * matrixLen);

	if (!sas)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++, k++)
		{
			sas[k] = av[i][j];
		}
		sas[k] = '\n';
		k++;
	}
	sas[k] = '\0';

	return (sas);
}
