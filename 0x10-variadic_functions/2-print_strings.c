#include "variadic_functions.h"

/**
*
*
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	char *str;

	va_list args;
	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);

		if (!str)
			printf("(nil)");
		else
			printf("%s", str);

		if (separator && (i + 1 != n))
			printf("%s", separator);
	}

	va_end(args);

	printf("\n");
}