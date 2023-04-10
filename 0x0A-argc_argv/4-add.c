#include "main.h"
#include <stdio.h>
#include <stdlib>
#include <string.h>

/**
 * main - prints sum of numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: always 0 if success
 */
int main(int argc, char *argv[])
{
	int i;
	unsigned int k;
	unsigned int sum;
	char *e;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			e = argv[i];

			for (k = 0; k < strlen(e); k++)
			{
				if (e[k] < 48 || e[k] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}

			sum += atoi(e);
			e++;
		}

		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}

	return (0);
}
