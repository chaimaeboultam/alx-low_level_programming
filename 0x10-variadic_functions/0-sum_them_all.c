#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Calculates the sum of all arguments.
 * @n: The number of arguments.
 * @...: The variable arguments.
 *
 * Return: The sum of all arguments.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	unsigned int sum = 0;

	if (n == 0)
		return (0);
	
	va_list args;
	va_start(args, n);
		
	for (i = 0; i < n; i++)
		sum += va_arg(args, int);

	va_end(args);

	return (sum);
}
