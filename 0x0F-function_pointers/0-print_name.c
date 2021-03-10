#include "function_pointers.h"

/**
* print_name - prints a name and calls the given function
* @name: string to print
* @f: the pointer to a print function
* ---------------------------------------
* Return: void
*/
void print_name(char *name, void (*f)(char *))
{
	if (!name)
		return;
	f(name);
}
