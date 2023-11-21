#include "main.h"
#include <stdlib.h>
/**
 * create_array - to creat an array of char
 * @size: input for the size of the array in size_t
 * @c: stores the string of char
 * Returne: pointer to the base char c
 */
char *create_array(unsigned int size, char c)
{
	size_t i;
	char *ptr;

	if (size == 0)
	{
		return (NULL);
	}

	ptr = malloc(sizeof(char) * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		i++;
		ptr[i] = c;
	}
	return (ptr);
}
