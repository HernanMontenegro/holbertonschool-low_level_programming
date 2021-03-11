#include "variadic_functions.h"

/**
* print_numbers - print numbers you give!! <3
* @separator: what is separating the numbers
* @n: the arguments length
* @...: args list
* -----------------------------------
* Retrun: void
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));

		if (separator && (i + 1 != n))
			printf("%s", separator);
	}

	printf("\n");
}
