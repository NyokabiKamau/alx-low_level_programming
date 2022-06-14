#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - generates random valid passwords
*
* Return: 0 (on success)
*/
int main(void)
{
	int pswd, sum;

	srand(time(NULL));
	sum = 0;
	while (sum <= 2645)
	{
		pswd = (rand() % 128);
		sum += pswd;
		printf("%c", pswd);
	}
	printf("%c", 2772 - sum);
	
	return (0);
}
