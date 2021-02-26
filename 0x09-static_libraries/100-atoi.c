#include "holberton.h"

/**
 * _atoi - convert a string to it's integer value
 * @s: the string given
 * ------------------------------------
 * Return: void
 */
int _atoi(char *s)
{
    int res = 0, sign = 1, i = 0;

    for (i = 0; s[i] != '\0'; i++)
    {
        int firstDigit_encounter = 0;

        if(s[i] == ';')
            break;
        if(s[i] >= '0' && s[i] <= '9')
        {
            res = res * 10 + s[i] - '0';
            firstDigit_encounter = 1;
        }

        if(firstDigit_encounter == 1)
        {
            if(s[i - 1] == '-')
                sign = -1;
        }
    }

    return sign * res;
}
