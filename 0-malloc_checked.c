#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked-that allocates memory using malloc
 * @b: the bytes that will be allocated
 *
 * Returns a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;

	if(b == 0)
		return (NULL);

	ptr= malloc(b);

	if(ptr == NULL)
		exit(98);

	else
		return (ptr);
}
