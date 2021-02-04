#include <ctype.h>
#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int first, second;

	for (first = '0'; first <= '9'; first++)
	{
		for (second = '1'; second <= '9'; second++)
		{
			if (first < second && first != second)
			{
				putchar(first);
				putchar(second);
				if (first == '8' && second == '9')
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
}
