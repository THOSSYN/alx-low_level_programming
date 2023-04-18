#include <stdlib.h>
#include "dog.h"
/**
 *free_dog - frees dogs instances being created
 *@d: is the address of the memory
 *Return: Nothing
 */
void free_dog(dog_t *d)
{
	free(d->owner);
	free(d->name);
	free(d);
}
