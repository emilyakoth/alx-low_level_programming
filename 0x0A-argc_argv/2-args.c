#include "main.h"
#include <stdio.h>

/**
 * main - prints all arguments
 * @argc: no of arguments
 * @argv: actual arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; argc++)
	{
		printf("s\n", argv[i]);
	}

	return (0);
}
