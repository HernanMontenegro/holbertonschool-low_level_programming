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
            int multiplication = i * j;

            if (multiplication >= 10 && multiplication < 100)
            {
                _putchar(multiplication / 10 + '0');
                _putchar(multiplication % 10 + '0');
            }
            else if (multiplication >= 100)
            {
                _putchar(((multiplication / 10) / 10) + '0');
                _putchar(((multiplication / 10) % 10) + '0');
                _putchar((multiplication % 10) + '0');
            }
            else
                _putchar(multiplication + '0');
            if (j == n)
                continue;
            else if((multiplication + i) >= 100)
            {
                _putchar(',');
                _putchar(' ');
            }
            else if ((multiplication + i) >= 10)
            {
                _putchar(',');
                _putchar(' ');
                _putchar(' ');
            }
            else
            {
                _putchar(',');
                _putchar(' ');
                _putchar(' ');
                _putchar(' ');
            }
        }
        _putchar('\n');
    }
}
