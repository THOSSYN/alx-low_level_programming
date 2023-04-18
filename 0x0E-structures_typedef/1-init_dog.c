#include "dog.h"
#include <stdlib.h>

/**
 *init_dog - initialize a datatype struct dog
 *@d: is the pointer to the object of struct dog
 *@name: is the first member in struct dog
 *@age: is the second member
 *@owner: is the third variable
 *Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
