#include "main.h"

/**
 * cap_string -  Entry point
 * @str: string to be capitalized
 *
 * Description: capitalise every word of a string
 *
 * Return: Always 0
 */
char *cap_string(char *str)
{
	int i = 1;

	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] -= 32;
	}

	while (str[i])
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
		str[i] == ',' || str[i] == ';' || str[i] == '.' ||
		str[i] == '!' || str[i] == '?' || str[i] == '"' ||
		str[i] == '(' || str[i] == ')' || str[i] == '{' ||
		str[i] == '}')
		{
			i++;
			if (str[i] >= 'a' && str[i] + 1 <= 'z')
			{
				str[i] -= 32;
			}
		}
		else
		{
			i++;
		}
	}
	return (str);
}
