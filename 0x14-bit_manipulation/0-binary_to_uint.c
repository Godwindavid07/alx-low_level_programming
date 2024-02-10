#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * unsigned int binary_to_uint - converts a binary.
 *
 * @b: string containing the binary num.
 *
 * Return: The converted unsigned integer
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i;
	unsigned int result = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		result = 2 * result + (b[i] - '0');
	}
	return (result);
}
