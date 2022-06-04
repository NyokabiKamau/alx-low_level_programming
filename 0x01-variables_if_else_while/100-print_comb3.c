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

	while (i <= '8')
	{
		while (a <= '9')
		{
			if (i < a)
			{
				putchar(i);
				putchar(a);

				if (!(a == '8' && i == '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
			a++;
		}
		a = '0';
		i++;
	}
	putchar('\n');

	return (0);
}
