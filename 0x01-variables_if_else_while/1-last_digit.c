#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -points the laat digit of randomly generated number
 * and whether it is greather than 5, less than 6, or 0.
 * Return: Always 0.
 */
int main(void)
{
	int n;


	srand(time(NULL));
	n = rand() - RAND_MAX / 2;

	if ((n % 10) > 5)
	{
		printf("Last digit of %d is %d and it is greater than 5\n", n, n % 10);
	}
	else if ((n % 10) < 6 && (n % 10) != 0)
	{
		printf("Last digit of %d is %d");
		printf("and it is less than 6 and not 0\n", n, n % 10);
	}
	else
		printf("Last digit of %d is %d and");
		printf("is not 0\n", n, n % 10);
	}
	return (0);
}
