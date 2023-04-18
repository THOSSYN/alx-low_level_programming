#include <stdio.h>
#include "dog.h"

/**
 *print_dog - prints the data member of struct dog;
 *@d: is the pointer to the array in the object my_dog
 *Return: Nothing.
 */
void print_dog(struct dog *d)
{
	if ((*d).name == NULL)
		printf("Name: (nil)");
	else
		printf("Name: %s\n", (*d).name);
	if (!(*d).age)
		printf("Age: (nil)");
	else
		printf("Age: %f\n", (*d).age);
	if ((*d).owner == NULL)
		printf("Owner: (nil)");
	else
		printf("Owner: %s\n", (*d).owner);
}
