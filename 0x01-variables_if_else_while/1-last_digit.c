#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description : last digit checker
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n, digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (digit == 0)
		printf("Last digit of %d is 0 and is 0", n);
	else if (digit > 5)
		printf("Last digit of %d is %d and is greater than 5", n, digit);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0", n, digit);
	return (0);
}
