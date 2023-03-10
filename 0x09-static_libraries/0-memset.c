#include "main.h"
#include <string.h>

/**
 * _memset - Entry point
 * @s: pointer to the char to be modified
 * @b: constant bytes
 * @n: no. of memory bytes
 *
 * Description: This function fills memory with a constant byte.
 *
 * Return: Pointer to s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
