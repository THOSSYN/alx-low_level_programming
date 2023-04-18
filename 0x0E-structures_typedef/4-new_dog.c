#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 *new_dog - creates a new dog data
 *@name: first member
 *@age: second member
 *@owner: third member
 *Return: pointer to DMA memory
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = malloc(sizeof(dog_t));

	if (!new_dog)
	{
		return (NULL);
	}
	new_dog->name = malloc(sizeof(char) * strlen(name));
	if (!new_dog->name)
	{
		free(new_dog->name);
		return (NULL);
	}
	new_dog->owner = malloc(sizeof(char) * strlen(owner));
	if (!new_dog->owner)
	{
		free(new_dog->owner);
		return (NULL);
	}
	strcpy(new_dog->name, name);
	new_dog->age = age;
	strcpy(new_dog->owner, owner);
	return (new_dog);
}
