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

	for (first = '0'; first <= '8'; first++)
	{
		for (second = first + 1; second <= '9'; second++)
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
	putchar('\n');
}
