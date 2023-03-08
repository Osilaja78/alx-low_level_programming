#include "main.h"

/**
 * factorial - Entry point
 * @n: number
 *
 * Description: Retruns the factorial of a number
 *
 * Return: factorial on @n.
 */
int factorial(int n)
{
	if (n == 0 || n == 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
