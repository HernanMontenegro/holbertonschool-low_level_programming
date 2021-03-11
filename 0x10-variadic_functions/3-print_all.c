#include "variadic_functions.h"

void print_string(va_list args)
{
	char *str;

	str = va_arg(args, char *);

	if (!str)
		str = "(nil)";

	printf("%s", str);
}

void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

void print_char(va_list args)
{

	printf("%c", va_arg(args, int));
}

/**
* print_all - allows you to print... ANYTHING!!
* @format: list of arguments passed
* @...: all arguments
* -------------------------------------
* Return: void
*/
void print_all(const char * const format, ...)
{
	va_list args;

	datazita datazita0[] =
	{
		{"c", print_string},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
	};
	int i = 0, j = 0;
	char *splitter = "";

	va_start(args, format);

	while (format && format[i])
	{
		while (j < 4)
		{
			if (*datazita0[j].type == format[i])
			{
				printf("%s", splitter);
				datazita0[j].hi(args);
				splitter = ", ";
			}
			j++;
		}
		j = 0;
		i++;
	}
	printf("\n");
	va_end(args);
}
