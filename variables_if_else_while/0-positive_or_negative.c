#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main -entry point
 *
 * Descritpion: t'eCris ce que tu veux on s'enfout
 * azy c'est bon
 * Return: always O
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
	printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
	printf("%d is zero\n", n);
	}
	else if (n < 0)
	{
	printf("%d is negative\n", n);
	}

	return (0);
}
