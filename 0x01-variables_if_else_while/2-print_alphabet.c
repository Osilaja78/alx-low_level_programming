#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'This program prints a-z'
 *
 * Result: Always 0 (success)
 */
int main(void)
{
	char alpha = 'a';
	
	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
