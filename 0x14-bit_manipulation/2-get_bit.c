#include "main.h"

/**
 * get_bit- a function that returns the value of a bit at a given index
 * @n: is the given number
 * @index: is the index starting from 0 of the bit you want to ge
 *
 * Returns the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int res;

	if(index > 63 || index < 0)
		return (-1);

	res = (n >> index) & 1;

	return (res);
}
