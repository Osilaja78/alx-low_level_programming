#include "main.h"
#include <stddef.h>
#include <stdlib.h>

int _strlen1(char *str1);
int _strlen2(char *str2);
/**
 * string_nconcat - Entry point
 * @s1: string one
 * @s2: string two
 * @n: number of bytes
 *
 * Description: concatenates @s1 with @n bytes of @s2.
 *
 * Return: pointer to the new string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, j, len, len1, len2;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	len1 = _strlen1(s1);
	len2 = _strlen2(s2);
	if (n >= len2)
	{
		ptr = malloc(sizeof(char) * (len1 + len2 + 1));
		len = len1 + len2 + 1;
	}
	else
	{
		ptr = malloc(sizeof(char) * (len1 + n + 1));
		len = len1 + n + 1;
	}

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i <= len1; i++)
		ptr[i] = s1[i];

	if (n >= len2)
	{
		for (j = 0; j <= len2; j++)
		{
			ptr[len1] = s2[j];
			len1++;
		}
	}
	else
	{
		for (j = 0; j <= n; j++)
		{
			ptr[len1] = s2[j];
			len1++;
		}
	}
	ptr[len - 1] = '\0';
	return (ptr);
}

/**
 * _strlen1 - Finds lenght of s1.
 * @str1: string one.
 *
 * Return: int
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
 * _strlen2 - Finds lenght of s2.
 * @str2: string two.
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
