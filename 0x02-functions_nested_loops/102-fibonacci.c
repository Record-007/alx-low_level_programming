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
		printf("%d\n", j);
		else
		if (i == 1)
		printf("%d\n", k);
		else
		{
		k += j;
		j = k - j;
		printf("%d\n", k);
		}
		++1
	}
	printf("%d\n");
	return (0);
}
