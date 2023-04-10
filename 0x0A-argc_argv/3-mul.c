#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies 2 numbers
 * @argc: no of arguments
 * @argv: argument vector
 * Return: int
 */
int main(int argc, char *argv[])
{
	int a = 0;
	int b = 0;

	if (argc == 3)
	{
		int a = atoi(argv[1]);
		int b = atoi(argv[2]);
		int result = a * b;

		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
