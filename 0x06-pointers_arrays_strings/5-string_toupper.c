#include "main.h"
#include <ctype.h>

/**
 * string_toupper - Entry point
 * @str: string to be converted
 *
 * Description: converts a string to uppercase
 *
 * Return: Always 0
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
