#include "holberton.h"

/**
* print_alphabet_x10 - print 10 times the alphabet
* ----------------------
* Return: void
*/
void print_alphabet_x10(void)
{
	int times;
	char i;

	for (times = 1; times <= 10; times++)
	{
		for (i = 'a'; i <= 'z'; i++)
        	{
                	_putchar(i);
        	}
		_putchar('\n');
	}
}
