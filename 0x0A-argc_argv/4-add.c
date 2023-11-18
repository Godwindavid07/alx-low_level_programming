#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds positive numbers.
 * @argc: number of command line argument
 * @argv: array containing the command line argument
 * Return: (0) on success
 */
int main(int argc, char *argv[])
{
	int a, b, sum;

	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b] != '\0'; b++)
		{
			if (!isdigit(argv[a][b]))
			{
				printf("Error\n");
				return (1);
			}
		}
	sum += atoi(argv[a]);
	}
	printf("%d\n", sum);
	return (0);

}
