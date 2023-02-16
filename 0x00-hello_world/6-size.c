#include <stdio.h>
/**
 * main - Entry
 * Return: 0
 */

int main(void)
{

	printf("The size of an int is: %i byte(s)\n", sizeof(int));
	printf("The size of an long int is: %i byte(s)\n",sizeof(long int));
	prinf("The size of an char is: %i byte(s)\n", sizeof(char));
	printf("The size of an float is: %i byte(s)\n",sizeof(float));
	printf("The size of an long long int is: %i byte(s)\n",sizeof(long long int));
	return(0);
}
