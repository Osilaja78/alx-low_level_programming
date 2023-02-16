#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'This file prints size of variables'
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char typeChar;
	int typeInt;
	long typeLong;
	double typeLongLong;
	float typeFloat;

	printf("Size of a char: %lu byte(s)\n", sizeof(typeChar));
	printf("Size of an int: %lu byte(s)\n", sizeof(typeInt));
	printf("Size of a long int: %lu byte(s)\n", sizeof(typeLong));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(typeLongLong));
	printf("Size of a float: %lu byte(s)\n", sizeof(typeFloat));
	return (0);
}
