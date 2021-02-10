#include <stdio.h>

/**
* main - the main program function
* -----------------------------------
* Return: 0 if everything is correct
*/
int main(void)
{
unsigned int f1 = 1, f2 = 1, i;

for (i = 1; i <= 50; i++)
{
printf("%u, ", f2);
int next = f1 + f2;
f1 = f2;
f2 = next;
}
printf("\n");
return (0);
}
