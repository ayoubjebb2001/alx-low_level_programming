#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int first_digit1, second_digit1, first_digit2, second_digit2, num1, num2;

	for (num1 = 0; num1 <= 99; num1++)
	{
		first_digit1 = num1 / 10;
		second_digit1 = num1 % 10;
		for (num2 = num1; num2 <= 99; num2++)
		{
			first_digit2 = num2 / 10;
			second_digit2 = num2 % 10;
			if (num1 <= num2)
			{
				putchar(first_digit1 / 10 + '0');
				putchar(first_digit1 % 10 + '0');
				putchar(second_digit1 / 10 + '0');
				putchar(second_digit1 % 10 + '0');
				putchar(' ');
				putchar(first_digit2 / 10 + '0');
				putchar(first_digit2 % 10 + '0');
				putchar(second_digit2 / 10 + '0');
				putchar(second_digit2 % 10 + '0');
				if (num1 != 99 || num2 != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	return (0);
}
