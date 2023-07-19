#include "function_pointers.h"
/**
 * print_name - Print a name using function pointer
 * @name: char str
 * @f: function pointer with str arg
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
