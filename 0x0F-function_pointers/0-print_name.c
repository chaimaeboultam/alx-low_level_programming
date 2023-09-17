#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name-a function that prints a name
 * @@name: the name that will be printed
 * @f: a fonction pointer
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if(name == NULL || f == NULL)
		return;

	f(name);
}
