#include <stdio.h>
/**
 * main - point all possible different combinationof two digits
 * Return: Always 0.
 */
int main(void)
{
	int ones = '0';
	int tens = '0';
		for (tens = '0'; tens <= '9'; tens++)/*print tens digit*/

	{
		for (ones = '0'; ones <= '9'; ones++)/* print ones digit*/
		{
			if (!((ones == tens) || (tens > ones)))/* eliminates repititions*/
			{
				putchar(tens);
				putchar(ones);
				if (!(ones == '9' && tens == '8'))/* adds comma and space*/
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

		putchar('\n');
		return (0);
}
