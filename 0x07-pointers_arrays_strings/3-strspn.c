#include "main.h"

/**
 * _strspn - Entry point
 * @s: string to be searched
 * @accept: string to search for
 *
 * Description: This function gets the length of a prefix substring.
 *
 * Return: No fo bytes found in @s.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int len = 0;

	for (i = 0; accept[i]; i++)
	{
		for (j = 0; s[i]; j++)
		{
			if (s[i] == accept[j])
			{
				len++;
				break;
			}
		}

		if (!accept[j])
		{
			return (len);
		}
	}

	return (len);
}
