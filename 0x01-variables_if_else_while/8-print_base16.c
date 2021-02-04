#include <ctype.h>
#include <stdio.h>
#include <string.h>

/* more headers goes there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n, c;
 
for (n = '0'; n <= '9'; ++n)
{
putchar(n);
}
for (c = 'a'; c <= 'f'; ++c)
{
putchar(c);
}
putchar('\n');
return (0);
}
