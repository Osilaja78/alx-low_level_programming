#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'This program prints a-z except q and e'
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		if (alpha == 'q')
		{
			alpha++;
		}
		else if (alpha == 'e')
		{
			alpha++;
		}
		else
		{
			putchar(alpha);
			alpha++;
		}
	}
	putchar('\n');
	return (0);
}
