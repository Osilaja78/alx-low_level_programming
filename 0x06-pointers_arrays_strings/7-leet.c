#include "main.h"

/**
 * leet - Entru point
 * @str: string to be encoded
 *
 * Description: a function that encodes a string into 1337.
 *
 * Return: Always 0
 */
char *leet(char *str)
{
	int i = 0;
	char *numbers = "01347";

	while (str[i])
	{
		if (str[i] == 'a')
		{
			str[i] = numbers[3];
		}
		else if (str[i] == 'A')
		{
			str[i] = numbers[3];
		}
		else if (str[i] == 'e')
		{
			str[i] = numbers[2];
		}
		else if (str[i] == 'E')
		{
			str[i] = numbers[2];
		}
		else if (str[i] == 'o')
		{
			str[i] = numbers[0];
		}
		else if (str[i] == 'O')
		{
			str[i] = numbers[0];
		}
		else if (str[i] == 't')
		{
			str[i] = numbers[4];
		}
		else if (str[i] == 'T')
		{
			str[i] = numbers[4];
		}
		else if (str[i] == 'l')
		{
			str[i] = numbers[1];
		}
		else if (str[i] == 'L')
		{
			str[i] = numbers[1];
		}
		i++;
	}
	return (str);
}
