#include "holberton.h"

/**
* print_controller - manages the number print
* @multiplication: the number given
* @i: the next number calculation
* ------------------------------------
* Return: void
*/
void print_controller(int multiplication)
{
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
}
/**
* spaces_controller - manages spaces and commas after printing a number value
* @multiplication: the number given
* @i: the next number calculation
* ------------------------------------
* Return: void
*/
void spaces_controller(int multiplication, int i)
{
if ((multiplication + i) >= 100)
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

print_controller(multiplication);
if (j == n)
continue;
spaces_controller(multiplication, i);
}
_putchar('\n');
}
}
