#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i = '0';
	int a = '0';

	while (i <= '9')
	{
		while (a <= '9')
		{
			putchar(i);
			putchar(a);

			if (a == '9' && i == '9')
			{
				putchar('\n');
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
			a++;
		}
		if (a >= '9')
		{
			a = '0';
		}
		i++;
	}
	return (0);
}
