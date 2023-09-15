#include "dog.h"
#include <stdlib.h>

/**
 * init_dog-a function that initialize a variable of type struct dog
 * @d: a pointer to the structre that will be initialize
 * @name: name to initialize
 * @age: age to initialize
 * @owner: owner to initialize
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if(d == NULL)
		d= malloc(sizeof(struct dog));
	p->name = name;
	p->age = age;
	p->owner = owner;
}
