#include <stdlib.h> 
#include "dog.h"

/**
 * _strlen - Calculate the length of a string
 * @str: The input string
 *
 * Return: The length of the string
 */
int _strlen(char *str)
{
    int len = 0;

    while (str[len] != '\0')
        len++;

    return (len);
}

/**
 * _strcopy - Copy a string
 * @dest: The destination string
 * @src: The source string
 */
void _strcopy(char *dest, char *src)
{
    int i = 0;

    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}

/**
 * new_dog - Create a new dog
 * @name: The name of the new dog
 * @age: The age of the new dog
 * @owner: The owner of the new dog
 *
 * Return: A pointer to the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *new_dog;

    // Check if dog_t is NULL
    if (!dog_t)
        return (NULL);

    int name_len = _strlen(name);
    int owner_len = _strlen(owner);

    new_dog = malloc(sizeof(dog_t));

    if (new_dog == NULL)
        return (NULL);

    new_dog->name = malloc(name_len + 1);
    new_dog->owner = malloc(owner_len + 1);

    if (new_dog->name == NULL || new_dog->owner == NULL)
    {
        free(new_dog->name);
        free(new_dog->owner);
        free(new_dog);
        return (NULL);
    }

    _strcopy(new_dog->name, name);
    _strcopy(new_dog->owner, owner);

    new_dog->age = age;


    return (new_dog);
}
