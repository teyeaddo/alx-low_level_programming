#include "function_pointers.h"

/**
 * print_name - this function prints name
 * @name: the name to be printed
 * @f: this is the pointer to print function
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}

