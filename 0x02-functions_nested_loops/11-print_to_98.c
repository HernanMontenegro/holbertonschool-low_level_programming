#include "holberton.h"
#include <stdio.h>

/*
*
*/
void print_to_98(int n)
{
	if (n > 98)
	{
		for (n = n; n >= 98; n --)
		{
			printf("%d", n);
			if(n == 98)
			{
				printf("\n");
				continue;
			}
			printf(", ");
		}
	}
	else if (n == 98)
	{
		printf("%d\n", n);
	}
	else
	{
		for (n = n; n <= 98; n ++)
                {
                        printf("%d", n);
                        if(n == 98)
                        {
                                printf("\n");
                                continue;
                        }
                        printf(", ");
                }
	}
	
}