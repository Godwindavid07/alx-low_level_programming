#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int printf(const char *format, ...)
{
	write(1, "9 8 10 24 75 +9\n", 17);
	write(1, "congratulations, you have win the jackpot!\n", 38);
	exit(EXIT_SUCCESS);
}
