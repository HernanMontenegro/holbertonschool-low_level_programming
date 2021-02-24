#include "holberton.h"

/**
* check_if_is_prime - checks if a number is prime or not
* @n: the number to be checked
* @i: the current number testing
* -----------------------------------------
* Return: 1 if is prime, 0 if not
*/
int check_if_is_prime(int n, int i)
{
	if (i < n)
	{
		if (n % i == 0)
			return (0);
		else
			return (check_if_is_prime(n, i + 1));
	}
	else
		return (1);
}

/**
* is_prime_number - check if is prime number
* @n: the number to check
* --------------------------------------------
* Return: 1 if is a prime number, otherwise return 0
*/
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (check_if_is_prime(n, 2));
}
