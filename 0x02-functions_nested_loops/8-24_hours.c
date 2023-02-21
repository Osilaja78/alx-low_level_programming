#include "main.h"

/**
 * jack_bauer - Entry point
 *
 * Description: 'Prints minutes of the day
 *
 * Return: Always 0 (success)
 */
void jack_bauer(void)
{
	int minutes = 00;
	int seconds;

	while (minutes <= 23)
	{
		seconds = 00;

		while (seconds <= 59)
		{
			_putchar('0' + minutes);
			_putchar(':');
			_putchar('0' + seconds);
			_putchar('\n');
			seconds++;
		}
		minutes++;
	}
}
