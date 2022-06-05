#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (sucess)
 */
int main(void)
{
	int i = '0';
	int a = '0';
	int b = '0';

	while (i <= '7')
	{
		while (a <= '8')
		{
			while (b <= '9')
			{
				if (i < a &&  < b)
				{
					putchar(i);
					putchar(a);
					putchar(b);
					if (!(i == '7' && a == '8' && b == '9'))
					{
						putchar(',');
						putchar(' ');
					}
				}
				b++;
			}
			b = '0';
			a++;
		}
		a = 'o';
		i++;
	}
	putchar('\n');
	return (0);
}
