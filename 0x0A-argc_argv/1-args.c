#include <stdio.h>
/**
 * main - prints the number of arguments passed into it.
 * @argc: number of command line argument.
 * @argv: array containing the command line arg...
 * Return: Always (0) on success
 */
int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
