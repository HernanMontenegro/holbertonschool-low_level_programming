#include <stdio.h>
/**
* main - Entry point
*
* Description: print fibonacci numbers while not exceed 4,000,000
* Return: Always 0 (Success)
*/
int main(void)
{
        long a = 1, b = 2, res, finalRes;

        while(res <= 4000000)
        {
            res = a + b;

            if(res % 2 == 0)
            {
                finalRes += res;
            }
            a = b;
            b = res;
        }
        printf("%ld\n", finalRes);
        return (0);
}
