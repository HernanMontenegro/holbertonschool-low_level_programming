#include "holberton.h"

/**
 * print_number - print an integer given with _putchars
 * @n: the integer to print
 * --------------------------------
 * Return: void
 */
void print_number(int n)
{
unsigned int finalNum;

if (n < 0)
{
_putchar('-');
finalNum = -n;
}
else
finalNum = n;

if (finalNum / 10)
print_number(finalNum / 10);
_putchar((finalNum % 10) + '0');
}
