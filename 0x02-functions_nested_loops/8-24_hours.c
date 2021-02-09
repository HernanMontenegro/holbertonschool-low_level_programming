#include "holberton.h"

/**
* night - print the night hours
* ---------------------------------
* Return: void
*/
void night(int i, int j, int k, int l)
{
	for (i = '2'; i <= '2'; i++)
	{
		for (j = '0'; j <= '3'; j++)
		{
			for (k = '0'; k <= '5'; k++)
			{
				for (l = '0'; l <= '9'; l++)
				{
					_putchar(i);
					_putchar(j);
					_putchar(':');
					_putchar(k);
					_putchar(l);
					_putchar('\n');
				}
			}
		}
	}
}

/**
* jack_bauer - print every hour of the day
* ---------------------------------
* Return: void
*/
void jack_bauer(void)
{
	int i, j, k, l;

	for (i = '0'; i <= '2'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			if (i != '2')
			{
				for (k = '0'; k <= '5'; k++)
				{
					for (l = '0'; l <= '9'; l++)
					{
						_putchar(i);
						_putchar(j);
						_putchar(':');
						_putchar(k);
						_putchar(l);
						_putchar('\n');
					}
				}
			}
		}
	}
	night(i, j, k, l);
}
