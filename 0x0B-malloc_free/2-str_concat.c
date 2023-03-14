#include "main.h"
#include <stdlib.h>
#include <stddef.h>

int _strlen1(char *str1);
int _strlen2(char *str2);
/**
 * str_concat - Entry point.
 * @s1: string one.
 * @s2: string two.
 *
 * Description: concatenates two strings.
 *
 * Return: pointer to joined string.
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	int len1 = 0, len2 = 0;
	int len, i, j;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	len1 = _strlen1(s1);
	len2 = _strlen2(s2);
	len = len1 + len2;
	str = malloc((len + 1) * sizeof(char));

	if (str == NULL)
	{
		return (NULL);
	}

	j = 0;

	for (i = 0; i <= len; i++)
	{
		if (i < len1)
		{
			str[i] = s1[i];
		}
		else
		{
			str[i] = s2[j];
			j++;
		}
	}
	return (str);
}

/**
 * _strlen1 - checks the length of str1.
 * @str1: strinv to be checked.
 *
 * Description: lenght of @str1.
 *
 * Return: int.
 */
int _strlen1(char *str1)
{
	int len = 0;

	while (str1[len] != '\0')
	{
		len++;
	}
	return (len);
}

/**
 * _strlen2 - checks the length of str2.
 * @str2: string to be checked.
 *
 * Description: lenght of str2.
 *
 * Return: int
 */
int _strlen2(char *str2)
{
	int len = 0;

	while (str2[len] != '\0')
	{
		len++;
	}
	return (len);
}
