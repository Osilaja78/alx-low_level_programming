#include "main.h"
#include <stddef.h>

/**
 * _strstr - Entry point
 * @haystack: string to be checked
 * @needle: substring to be searche
 *
 * Description: This function function that locates a substring.
 *
 * Return:  a pointer to the beginning of the located substring, or NULL.
 */
char *_strstr(char *haystack, char *needle)
{
	char *h = haystack;
	char *n = needle;

	if (*needle == '\0')
	{
		return (haystack);
	}

	while (*haystack != '\0')
	{
		while (*h != '\0' && *n != '\0' && *h == *n)
		{
			h++;
			n++;
		}
		haystack++;
	}

	if (*n == '\0')
	{
		return (haystack);
	}
	return (NULL);
}
