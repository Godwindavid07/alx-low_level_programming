#include <stdio.h>
/**
 * main - prints the name of the programe
 * @argc: the number of command line arg..
 * @argv: array containing the command line arg...
 * Return: always (0) when successfull
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
