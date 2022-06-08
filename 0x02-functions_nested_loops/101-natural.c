#include <stdio.h>

/**
* main - checks the sum of all the multiples of 3 or 5 below 1024.
* Return: Nothing.
*/
int main(void)
{
	int i, n;

	for (i = 0; i < 1024; i++)
		if (i % 3 == 0 || i % 5 == 0)
			n += i;
	printf("%d\n", n);
	return (0);
}
