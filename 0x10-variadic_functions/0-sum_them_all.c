#include "variadic_functions.h"

/**
* sum_them_all - sum all the integers you give
* @n: integer length
* @...: the integers
* ---------------------------------
* Return: value if it works, 0 if not
*/
int sum_them_all(const unsigned int n, ...)
{
	int value;

	unsigned int i;

	va_list args;

	va_start(args, n);

	if (n == 0)
		return (0);

	value = 0;
	for (i = 0; i < n; i++)
		value += va_arg(args, int);

	va_end(args);

	return (value);
}
