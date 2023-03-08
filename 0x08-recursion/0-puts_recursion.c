#include "main.h"

/**
 * _puts_recursion - Entry point
 * @s: character to print
 *
 * Description: this function prints a string.
 *
 * Return: Always 0 (success)
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}

	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
