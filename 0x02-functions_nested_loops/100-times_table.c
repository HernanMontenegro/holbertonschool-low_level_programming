#include "holberton.h"

/**
* print_times_table - prints times tables from 0 to n while n > 15
* @n: the number given
* ------------------------------------
* Return: void
*/
void print_times_table(int n)
{
    int i, j;

    if (n > 15 || n < 0)
        return;

    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= n; j++)
        {
            if ((i * j) >= 10)
            {
                _putchar((i * j) / 10 + '0');
                _putchar((i * j) % 10 + '0');
            }
            else if ((i * j) >= 100)
            {
                _putchar((i * j) / 100 + '0');
                _putchar(((i * j) / 10) % 10 + '0');
                _putchar((i * j) / 10 + '0');
            }
            else
                _putchar((i * j) + '0');

            if (j == n)
                continue;
            
            _putchar(',');
            _putchar(' ');
        }
        _putchar('\n');
    }
}
