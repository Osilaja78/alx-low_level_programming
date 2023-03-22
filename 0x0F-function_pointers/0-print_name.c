#include "function_pointers.h"

/**
 * print_name - Entry point.
 * @name: name to print
 * @f: pointer to functions
 *
 * Description: calls a function.
 *
 * Return: nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
