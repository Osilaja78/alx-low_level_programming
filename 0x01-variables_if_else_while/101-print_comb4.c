#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'This program prints unique comb. of 3 no.s'
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int a = 0;
	int b, c;

	while (a <= 9)
	{
		b = 1;
		while (b <= 9)
		{
			c = 2;
			while (c <= 9)
			{
				if (a != b || b != c || c != a)
				{
					if (c != 0)
					{
						if (c < b)
						{
						 c++;
						}
						else
						{
							putchar('0' + a);
							putchar('0' + b);
							putchar('0' + c);
							c++;
							if (a != 7 || b != 8 || c != 9)
							{
								putchar(',');
								putchar(' ');
								c++;
							}
							else
							{
								c++;
							}
						}
					}
					else
					{
						c++;
					}
				}
				else
				{
					c++;
				}
			}
			b++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}
