#include "function_pointer.h"

/**
 * print_name - print name
 *
 * @name: name to print
 * @f: fn pter
 *
 * Return: naught
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
