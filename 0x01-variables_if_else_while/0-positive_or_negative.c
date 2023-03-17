#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main -Entry point
 * prints number if positive, zero or negative
 * Return : Always 0 if Sucess
 * /
int main(void)
{
	int n;
	srand(time(0))
	n = rand(n) - RAND_MAX / 2;

	if (n < 0)
	{
	printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
	printf("%d is zero\n", n);
	}
	else
	{
	printf(%d is negative\n", n);
	}
	return (0);
{
