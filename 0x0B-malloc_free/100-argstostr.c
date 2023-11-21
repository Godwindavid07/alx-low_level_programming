#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * argstostr - concatenates all the arguments of your programe
 * @ac: paremeter
 * @av: pointer to a pointer to a char
 * Return: a pointer to array, || NULL on failiure
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, k, len;

	len = 0;
	k = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		len += strlen(av[i]) + 1;
	}

	str = malloc(sizeof(char) * (len + 1));

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[k] = av[i][j];
			k++;
		}
		str[k] = '\n';
		k++;
	}
	str[k] = '\0';

	return (str);

}
