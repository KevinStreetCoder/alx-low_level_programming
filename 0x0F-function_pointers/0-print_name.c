#include "function_pointers.h"

/**
 * print_name - prints a name using a given printing function
 * @name: name to print
 * @f: function pointer to use to print the name
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
