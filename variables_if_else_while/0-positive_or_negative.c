#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/** betty style doc for function main goes there
*main condition valeur 0  
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
	printf("%d is 0\n", n);
	}
	else if (n < 0)
	{
	printf("%d is less than 0\n", n);
	}

	return (0);
}
