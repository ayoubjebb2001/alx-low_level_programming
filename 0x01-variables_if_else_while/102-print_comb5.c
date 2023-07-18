#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num1, num2, fd1, sd1, fd2, sd2;

	for (num1 = 0; num1 <= 99; num1++)
	{
		fd1 = num1 / 10;
		sd1 = num1 % 10;
		for (num2 = num1 + 1; num2 <= 99; num2++)
		{
			fd2 = num2 / 10;
			sd2 = num2 % 10;
			if (num1 <= num2)
			{
				putchar(fd1 + '0');
				putchar(sd1 + '0');
				putchar(' ');
				putchar(fd2 + '0');
				putchar(sd2 + '0');
				if (num1 != 99 || num2 != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
