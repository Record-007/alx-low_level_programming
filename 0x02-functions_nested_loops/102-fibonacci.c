#include <stdio.h>

/**
 * main - print the first 100 Fibonacci numbers
 * Return: Nothing!
*/
int main(void)
{
	int i = 0;
	long j = 1, k = 2;
	{
	if (i == 0)
	printf("%ld\n", j);
	else
	if (i == 1)
	printf("%ld\n", k);
	else
	{
	k += j;
	j = k - j;
	printf("%ld\n", k);
	}
	++1;
	}
	printf("\n");
	return (0);
}
