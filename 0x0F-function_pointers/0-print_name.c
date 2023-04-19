#include "function_pointers.h"
/**
 *print_name - prints a name
 *@name: is the string passed
 *@f: is the function pointer
 *Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
