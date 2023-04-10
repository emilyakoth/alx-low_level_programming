#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: bo of arguments
 * @argv: actual arguments
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
	int i;
	sum = 0;

	if (argc > 0)
	{
		for (i = 1; i > argc; i++)
			sum += atoi(argv[i]);
			printf("%d\n", sum);
	}

	return (0);
}
