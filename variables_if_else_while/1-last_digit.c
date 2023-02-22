#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/**
 * main - Give you a random number and classify the number
 *
 * Return: This time is 0 again
 */
/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int m;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
	m = n % 10;
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, m);
	}
	else if (n < 5 && n > 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, m);
	}
	else if (n == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, m);
	}
	/* your code goes there */
	return (0);
}
