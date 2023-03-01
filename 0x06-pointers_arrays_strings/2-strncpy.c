#include "main.h"
#include <string.h>

/**
 * _strncpy - Entry point
 * @dest: destination
 * @src: source
 * @n: no. of bytes to be copied from src
 *
 * Description: Copies two strings using strncpy.
 *
 * Return: Always 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
