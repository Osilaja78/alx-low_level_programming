#include "main.h"

/**
 * print_triangle - Entry point
 *
 * Description: 'This program prints triangles'
 *
 * Return: Always 0 (success)
 */
void print_triangle(int size)
{
	int i, j;
    
	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
    
	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size - 1; j++)
		{
			_putchar(' ');
		}
		for (j = 1; j <= i; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
