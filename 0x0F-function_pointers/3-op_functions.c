#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - Adds two numbers.
 * @a: first number
 * @b: second number
 *
 * Return: addition of both numbers.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtracts two numbers.
 * @a: first number
 * @b: second number
 *
 * Return: subtraction of both numbers.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplies two numbers.
 * @a: first number
 * @b: second number
 *
 * Return: multiplication of both numbers.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divides two numbers.
 * @a: first number
 * @b: second number
 *
 * Return: division of both numbers.
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - Floor divides two numbers.
 * @a: first number
 * @b: second number
 *
 * Return: modulus of both numbers.
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
