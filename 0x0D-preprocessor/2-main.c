#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the name of its file.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char *file_name = __FILE__;

	printf("%s\n", file_name);
	return (0);
}
