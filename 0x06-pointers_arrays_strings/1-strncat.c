#include "main.h"
#include <string.h>

/**
 * _strncat - Entry point.
 * @dest: destination
 * @src: source
 * @n: no. or bytes to conctenate from src
 *
 * Description: concatenates two strings using strncat.
 *
 * Return: Always 0
 */
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
