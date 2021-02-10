#include <stdio.h>
/**
* main - Entry point
*
* Description: Print the first 50 numbers of fibonacci secuence
* Return: Always 0 (Success)
*/
int main(void)
{
    unsigned long a = 1, b = 2, a_half, b_half, res, res_half, i;

    printf("%lu, ", a);
    printf("%lu, ", b);
    for (i = 3 ; i <= 98 ; i++)
    {
        res = a + b;
        if(res > 9999999999)
        {
            res_half = (a / 2) + (b / 2);
            printf("%lu%lu", res_half, res_half);
        }
        else
            printf("%lu", res);

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
