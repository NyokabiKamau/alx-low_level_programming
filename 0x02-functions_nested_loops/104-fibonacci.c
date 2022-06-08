#include <stdio.h>

/**
* main - print the first 98 fibonacci numbers.
* Return: Nothing.
*/
int main(void)
{
	int ch;

	unsigned long i, j, k;
	unsigned long m, n, p, x;

	ch = 0;
	i = 0;
	j = 1;

	for (ch = 1; ch <= 91; ch++)
	{
		k = i + j;
		i = j;
		j = k;
		printf("%lu, ", k);
	}
	m = i % 1000;
	i = i / 1000;
	n = j % 1000;
	j = j / 1000;
	while (ch <= 98)
	{
		x = (m + n) / 1000;
		p = (m + n) - x * 1000;
		k = (i + j) + x;
		m = n;
		n = p;
		i = j;
		j = k;
		if (p >= 100)
			printf("%lu%lu", k, p);
		else
			printf("%lu0%lu", k, p);
		if (count != 98)
			printf(", ");
		count++;
	}
	putchar('\n');
	return (0);
}
