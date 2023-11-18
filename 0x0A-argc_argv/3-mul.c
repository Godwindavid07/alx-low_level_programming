#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 *
 * @argc: number of command line argument
 *
 * @argv: array containing command line argument
 *
 * Return: Always (0) when successful
 */
int main(int argc, char **argv)
{
	int result, arg1, arg2;

	if (argc < 3 || argc > 3)
	{
		printf("ERROR\n");
		return (1);
	}
	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[2]);
	result = arg1 * arg2;
	printf("%d\n", result);
	return (0);
}
