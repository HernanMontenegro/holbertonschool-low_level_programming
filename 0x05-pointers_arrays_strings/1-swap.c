#include "holberton.h"

/**
 * swap_int - swap values between 2 integers
 * @a: first integer to swap
 * @b: second integer to swap
 * ------------------------------------
 * Return: void
 */
void swap_int(int *a, int *b)
{
int newA = *b;
int newB = *a;

*a = newA;
*b = newB;
}
