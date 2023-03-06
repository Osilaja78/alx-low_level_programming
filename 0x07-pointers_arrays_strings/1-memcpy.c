#include "main.h"
#include <string.h>

/**
 * _memcpy - Entry point
 * @dest: destination
 * @src: source
 * @n: no. if bytes  to copy
 *
 * Description: This function copies memory area.
 *
 * Return: Pointer to @dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
