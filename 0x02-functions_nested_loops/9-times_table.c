#include "holberton.h"

/*
*
*
*
*/
void times_table(void)
{
	int i, multiplier, n, firstDigit, lastDigit;
	
	for (multiplier = 0; multiplier <= 9; multiplier ++)
	{
		for (i = 0; i <= 9; i++)
		{
			n = multiplier*i;
			if (n >= 10)  
   			{
				firstDigit = n / 10;
                                lastDigit = n % 10;

                                _putchar(firstDigit + '0');
                                _putchar(lastDigit + '0');	  
   			}
			else
				_putchar(n + '0');

			if (i == 9)
				continue;
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
