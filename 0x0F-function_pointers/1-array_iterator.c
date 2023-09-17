#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator-executes a function given as a parameter on each element of an array
 * @array: the array that will be used
 * @size: the size of the array
 * @action: the pointer to the function
 *
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if(arrar == NULL || action == NULL)
		return;
	
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
