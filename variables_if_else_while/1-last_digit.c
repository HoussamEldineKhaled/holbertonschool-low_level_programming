#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - Entry point
 * Return: Always 0 (Success)
*/
int main(void)
{
	int n;
	int is;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	is = (n % 10);
	if (is > 5)
	{
	printf("Last digit of %d is %d and is greater than 5\n", n, is);
	}
	else if (is == 0)
	{
	printf("Last digit of %d is %d and is 0\n", n, is);
	}
	else if (is < 6 && is != 0)
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, is);
	}
	return (0);
}
