#include <stdio.h>
/**
* main - Entry point
*
* Description: Print the first 50 numbers of fibonacci secuence
* Return: Always 0 (Success)
*/
int main(void)
{
    unsigned a = 1, b = 2, res, i;

    printf("%u, ", a);
    printf("%u, ", b);
    for (i = 3 ; i <= 98 ; i++)
    {
        res = a + b;
        printf("%u", res);
        if (i != 98)
        {
                printf(", ");
        }
        a = b;
        b = res;
    }
    printf("\n");
    return (0);
}
