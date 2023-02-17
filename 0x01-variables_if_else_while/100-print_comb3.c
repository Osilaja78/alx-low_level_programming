#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'This program prints no. combinations'
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int num1 = 0;
	int num2;

	while (num1 <= 9)
	{
		num2 = 1;
		while (num2 <= 9)
		{
			if (num1 != num2)
			{
				if (num1 < num2)
				{
					putchar('0' + num1);
					putchar('0' + num2);
					if (num1 != 8 || num2 != 9)
					{
						putchar(',');
						putchar(' ');
						num2++;
					}
					else
					{
						num2++;
					}
				}
				else
				{
					num2++;
				}
			}
			else
			{
				num2++;
			}
		}
		num1++;
	}
	putchar('\n');
	return (0);
}
