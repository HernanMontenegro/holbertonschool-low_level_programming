#include "holberton.h"

/*
*
*/
void print_times_table(int n)
{
	int i,j;
	
	for (i = 0; i <= n; i ++)
	{
		for (j = 0; j <= n; j++)
		{
			if ((i * j) >= 10)
			{
				_putchar((i * j)/10 + '0');
				_putchar((i * j)%10 + '0');
			}
			else if ((i * j) >= 100)
			{
				_putchar((i * j)/100 + '0');
				_putchar(((i * j)/10)%10 + '0');
				_putchar((i * j)/10 + '0');
			}
			else
				_putchar((i * j)/10 + '0');

			if (j != 0 && (i * j) >= 100)
			{
				
			}
		}
		_putchar('\n');
	}	
}
